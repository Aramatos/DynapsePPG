import numpy as np #Version when written 1.19.2
from numba import njit #Version when written 0.51.2
from scipy.interpolate import interp1d


#Usage:
    #converts signal into UP and DOWN spikes using the Adaptive Delta Modulation scheme.
    #spike times are determined through linear interpolation between the current and the next sampling point
    
#Input Parameters:
    #input_signal (array): input signal
    #threshold_UP (float): threshold for UP spikes to occur
    #threshold_DOWN (float): threshold for DOWN spikes to occur
    #sampling_frequency (float): sampling frequency of the input signal (1/dt)
    #refractory_period_duration (float): refractory period in which spikes can not occur (NEEDS TO BE AT LEAST 1/sampling_frequency)
    #return_indices (bool): if False, returns only spike times. If True, retuns a new time array along with UP and DOWN indices arrays which indicate when respective spikes occured
    #index_dt (float): dt of ouput indices (for higher accuracy, use non-numba ADM as it will be faster)
    #or whether the integration is reset and signal needs to integrate the full threshold after the refractory period (True)
    
#Output Parameters:
    #spike_t_up (array): list of precise UP spike times
    #spike_t_dn (array): list of precise DOWN spike times
    #times_interpolated (array): time array for spike indices arrays (dt = index_dt)
    #spike_idx_up (array of shape times_interpolated): closest times to UP spikes in times_interpolated are set to 1; rest is 0 
    #spike_idx_dn (array of shape times_interpolated): closest times to DOWN spikes in times_interpolated are set to 1; rest is 0 
 
    
def ADM(input_signal,threshold_UP,threshold_DOWN,sampling_frequency,refractory_period_duration,return_indices = True,index_dt = 1e-4):
   dt = 1/sampling_frequency
   end_time = len(input_signal)*dt
   times = np.arange(0,end_time,dt)
   if not refractory_period_duration:
       spike_t_up,spike_t_dn,times_interpolated,spike_idx_up,spike_idx_dn = ADM_numba_noRFR(input_signal,threshold_UP,threshold_DOWN,sampling_frequency,return_indices,index_dt)
  
   else:
       if refractory_period_duration < dt:
           interpolation_factor = 1
           while dt > refractory_period_duration:
               interpolation_factor += 1
               dt = 1/(sampling_frequency*interpolation_factor)
           f = interp1d(times, input_signal)
           times = np.concatenate((np.arange(0,times[-1],dt),[times[-1]]))
           input_signal = f(times)
           sampling_frequency = 1/times[1]
       spike_t_up,spike_t_dn,times_interpolated,spike_idx_up,spike_idx_dn = ADM_numba(input_signal,threshold_UP,threshold_DOWN,sampling_frequency,refractory_period_duration,return_indices,index_dt)
   return (spike_t_up,spike_t_dn,times_interpolated,spike_idx_up,spike_idx_dn)


@njit(fastmath=True, parallel = True)
def ADM_numba(input_signal,threshold_UP,threshold_DOWN,sampling_frequency,refractory_period_duration,return_indices,index_dt):
    dt = 1/sampling_frequency
    end_time = len(input_signal)*dt
    times = np.linspace(0,end_time,len(input_signal)).astype(np.float64)
    DC_Voltage = input_signal[0]
    remainder_of_refractory = 0
    spike_t_up =  times[0:2]
    spike_t_dn = times[0:2]
    interpolate_from = 0.0
    interpolation_activation = 0
    intercept_point=0
    
    for i in range(len(times)):
        t = i * dt
        if i == 0:
            continue
        
        slope = ((input_signal[i]-input_signal[i-1])/dt)
        if remainder_of_refractory >= 2*dt:
            remainder_of_refractory = remainder_of_refractory-dt
            interpolation_activation = 1

        else:
            
            if interpolation_activation == 1:
                interpolate_from = (interpolate_from+remainder_of_refractory)
                remainder_of_refractory = 0
                if interpolate_from >= 2*dt:
                    interpolate_from = interpolate_from-dt
                    continue
                interpolate_from = (interpolate_from+remainder_of_refractory)%dt
                Vbelow = (input_signal[i-1] + interpolate_from*slope)
                DC_Voltage = Vbelow
            
                
            else:
                Vbelow = input_signal[i-1]
                interpolate_from = 0

            if DC_Voltage + threshold_UP <= input_signal[i]:
                intercept_point = t - dt + interpolate_from+((threshold_UP+DC_Voltage-Vbelow)/slope)
                spike_t_up = np.append(spike_t_up,intercept_point)
                interpolate_from = dt+intercept_point-t
                remainder_of_refractory = refractory_period_duration 
                interpolation_activation = 1
                continue

            elif DC_Voltage - threshold_DOWN >= input_signal[i]:
                intercept_point = t - dt + interpolate_from+((-threshold_DOWN+DC_Voltage-Vbelow)/slope)
                spike_t_dn = np.append(spike_t_dn,intercept_point)
                interpolate_from = dt+intercept_point-t
                remainder_of_refractory = refractory_period_duration 
                interpolation_activation = 1
                continue

            interpolation_activation = 0
                        
    index =[0,1]
    spike_t_up = np.delete(spike_t_up, index)
    spike_t_dn = np.delete(spike_t_dn, index)


    if return_indices:
        times_interpolated =   np.arange(0,end_time,index_dt)
        spike_idx_up = np.zeros_like(times_interpolated)
        spike_idx_dn = np.zeros_like(times_interpolated)
        idxdn = np.searchsorted(times_interpolated,spike_t_dn)
        spike_idx_dn[idxdn] = 1
        idxup = np.searchsorted(times_interpolated,spike_t_up)
        spike_idx_up[idxup] = 1
    return (spike_t_up,spike_t_dn,times_interpolated,spike_idx_up,spike_idx_dn)



@njit(fastmath=True, parallel = True)
def ADM_numba_noRFR(input_signal,threshold_UP,threshold_DOWN,sampling_frequency,return_indices,index_dt):
    dt = 1/sampling_frequency
    end_time = len(input_signal)*dt
    times = np.linspace(0,end_time,len(input_signal)).astype(np.float64)
    DC_Voltage = input_signal[0]
    spike_t_up =  times[0:2]
    spike_t_dn = times[0:2]
    intercept_point=0
    for i in range(len(times)):
        t = i * dt
        if i == 0:
            continue
        
        slope = ((input_signal[i]-input_signal[i-1])/dt)
        
        V_above = input_signal[i]
        V_below = input_signal[i-1]

        if V_above >= DC_Voltage + threshold_UP:
            while V_above >= DC_Voltage + threshold_UP:
                intercept_point = t - dt+((threshold_UP+DC_Voltage-V_below)/slope)
                spike_t_up = np.append(spike_t_up,intercept_point)
                DC_Voltage = DC_Voltage + threshold_UP
        
        elif V_above <= DC_Voltage - threshold_DOWN:
            while V_above <= DC_Voltage - threshold_DOWN:
                intercept_point = t - dt+((-threshold_DOWN+DC_Voltage-V_below)/slope)
                spike_t_dn = np.append(spike_t_dn,intercept_point)
                DC_Voltage = DC_Voltage - threshold_DOWN
            
            
        
                        
    index =[0,1]
    spike_t_up = np.delete(spike_t_up, index)
    spike_t_dn = np.delete(spike_t_dn, index)


    if return_indices:
        times_interpolated =   np.arange(0,end_time,index_dt)
        spike_idx_up = np.zeros_like(times_interpolated)
        spike_idx_dn = np.zeros_like(times_interpolated)
        idxdn = np.searchsorted(times_interpolated,spike_t_dn)
        spike_idx_dn[idxdn] = 1
        idxup = np.searchsorted(times_interpolated,spike_t_up)
        spike_idx_up[idxup] = 1
    return (spike_t_up,spike_t_dn,times_interpolated,spike_idx_up,spike_idx_dn)



