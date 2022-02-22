def SpikeGenerator(rate,duration):
    import numpy as np
     # Input Generator
    ##################
    # TODO: 
    # - Play with different input spike patterns by changing input_type (optional).
    #
    # Parameters
    input_type   = 'regular' # 'regular', 'poisson' or 'cosine' (Default: poisson)
    pulse_start  = 0         # second - Start time of input (Default: 0)
    pulse_stop   = 5         # second - Stop time of input (Default: 5)
    inp_duration = duration         # second - Simulation duration (Default: 5)
    rate         = rate      # Hz or rad/sec - Spiking rate (Default: 80 Hz for regular, 100 Hz for poission, 2 rad/sec for cosine) 
    ##################
    if input_type == 'regular':

        spikes = np.zeros(inp_duration*1000)
        dt = int(1000/rate)
        spikes[pulse_start*1000:pulse_stop*1000:dt] = 1.0

    if input_type == 'poisson':

        prob = rate * 1e-3
        mask = np.random.rand(inp_duration*1000)
        spikes = np.zeros(inp_duration*1000)
        spikes[mask < prob] = 1.0
        spikes[:pulse_start*1000]=0
        spikes[pulse_stop*1000:]=0

    if input_type == 'cosine':

        spikes = np.zeros(inp_duration*1000)
        time = np.linspace(0, inp_duration, inp_duration*1000)
        co = np.cos(2 * np.pi * rate * time)
        mask = 20 * np.random.rand(inp_duration*1000)
        spikes[mask < co] = 1.0
        spikes[:pulse_start*1000]=0
        spikes[pulse_stop*1000:]=0
    if input_type == 'chirp':

        spikes = np.zeros(inp_duration*1000)
        time = np.linspace(0, inp_duration, inp_duration*1000)
        co = np.cos(2 * np.pi * rate * time)
        mask = 20 * np.random.rand(inp_duration*1000)
        spikes[mask < co] = 1.0
        spikes[:pulse_start*1000]=0
        spikes[pulse_stop*1000:]=0

    #plt.plot(spikes,'k|')
    #plt.xlabel("Time (ms)")
    #plt.ylabel("Neuron ID")
    #plt.ylim(0.5, 1.5)
    #plt.show()
       
    return spikes


#def reg_spiketrain(freq):
       
    #return ages


