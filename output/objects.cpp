
#include "objects.h"
#include "synapses_classes.h"
#include "brianlib/clocks.h"
#include "brianlib/dynamic_array.h"
#include "brianlib/stdint_compat.h"
#include "network.h"
#include "randomkit.h"
#include<vector>
#include<iostream>
#include<fstream>

namespace brian {

std::vector< rk_state* > _mersenne_twister_states;

//////////////// networks /////////////////
Network network_1;

//////////////// arrays ///////////////////
int32_t * _array_AMPA0_N;
const int _num__array_AMPA0_N = 1;
int32_t * _array_Core_0__spikespace;
const int _num__array_Core_0__spikespace = 257;
double * _array_Core_0_C_syn_ampa;
const int _num__array_Core_0_C_syn_ampa = 256;
double * _array_Core_0_C_syn_gaba_a;
const int _num__array_Core_0_C_syn_gaba_a = 256;
double * _array_Core_0_C_syn_gaba_b;
const int _num__array_Core_0_C_syn_gaba_b = 256;
double * _array_Core_0_C_syn_nmda;
const int _num__array_Core_0_C_syn_nmda = 256;
double * _array_Core_0_Cahp;
const int _num__array_Core_0_Cahp = 1;
double * _array_Core_0_Cmem;
const int _num__array_Core_0_Cmem = 1;
int32_t * _array_Core_0_i;
const int _num__array_Core_0_i = 256;
double * _array_Core_0_I_g_syn_ampa;
const int _num__array_Core_0_I_g_syn_ampa = 256;
double * _array_Core_0_I_g_syn_gaba_a;
const int _num__array_Core_0_I_g_syn_gaba_a = 256;
double * _array_Core_0_I_g_syn_gaba_b;
const int _num__array_Core_0_I_g_syn_gaba_b = 256;
double * _array_Core_0_I_g_syn_nmda;
const int _num__array_Core_0_I_g_syn_nmda = 256;
double * _array_Core_0_I_syn_ampa;
const int _num__array_Core_0_I_syn_ampa = 256;
double * _array_Core_0_I_syn_gaba_a;
const int _num__array_Core_0_I_syn_gaba_a = 256;
double * _array_Core_0_I_syn_gaba_b;
const int _num__array_Core_0_I_syn_gaba_b = 256;
double * _array_Core_0_I_syn_nmda;
const int _num__array_Core_0_I_syn_nmda = 256;
double * _array_Core_0_I_tau_syn_ampa;
const int _num__array_Core_0_I_tau_syn_ampa = 256;
double * _array_Core_0_I_tau_syn_gaba_a;
const int _num__array_Core_0_I_tau_syn_gaba_a = 256;
double * _array_Core_0_I_tau_syn_gaba_b;
const int _num__array_Core_0_I_tau_syn_gaba_b = 256;
double * _array_Core_0_I_tau_syn_nmda;
const int _num__array_Core_0_I_tau_syn_nmda = 256;
double * _array_Core_0_I_wo_syn_ampa;
const int _num__array_Core_0_I_wo_syn_ampa = 256;
double * _array_Core_0_I_wo_syn_gaba_a;
const int _num__array_Core_0_I_wo_syn_gaba_a = 256;
double * _array_Core_0_I_wo_syn_gaba_b;
const int _num__array_Core_0_I_wo_syn_gaba_b = 256;
double * _array_Core_0_I_wo_syn_nmda;
const int _num__array_Core_0_I_wo_syn_nmda = 256;
double * _array_Core_0_Iagain;
const int _num__array_Core_0_Iagain = 1;
double * _array_Core_0_Iahp;
const int _num__array_Core_0_Iahp = 256;
double * _array_Core_0_Ianorm;
const int _num__array_Core_0_Ianorm = 1;
double * _array_Core_0_Iath;
const int _num__array_Core_0_Iath = 1;
double * _array_Core_0_Ica;
const int _num__array_Core_0_Ica = 256;
double * _array_Core_0_Iconst;
const int _num__array_Core_0_Iconst = 256;
double * _array_Core_0_Imem;
const int _num__array_Core_0_Imem = 256;
double * _array_Core_0_Io;
const int _num__array_Core_0_Io = 1;
double * _array_Core_0_Ireset;
const int _num__array_Core_0_Ireset = 1;
double * _array_Core_0_Ishunt;
const int _num__array_Core_0_Ishunt = 256;
double * _array_Core_0_Ispkthr;
const int _num__array_Core_0_Ispkthr = 1;
double * _array_Core_0_Itau;
const int _num__array_Core_0_Itau = 1;
double * _array_Core_0_Itauahp;
const int _num__array_Core_0_Itauahp = 1;
double * _array_Core_0_Ith;
const int _num__array_Core_0_Ith = 1;
double * _array_Core_0_Ithahp;
const int _num__array_Core_0_Ithahp = 1;
double * _array_Core_0_kn;
const int _num__array_Core_0_kn = 1;
double * _array_Core_0_kp;
const int _num__array_Core_0_kp = 1;
double * _array_Core_0_lastspike;
const int _num__array_Core_0_lastspike = 256;
char * _array_Core_0_not_refractory;
const int _num__array_Core_0_not_refractory = 256;
double * _array_Core_0_refP;
const int _num__array_Core_0_refP = 1;
double * _array_Core_0_tauca;
const int _num__array_Core_0_tauca = 1;
double * _array_Core_0_Ut;
const int _num__array_Core_0_Ut = 1;
int32_t * _array_Core_1__spikespace;
const int _num__array_Core_1__spikespace = 257;
double * _array_Core_1_C_syn_ampa;
const int _num__array_Core_1_C_syn_ampa = 256;
double * _array_Core_1_C_syn_gaba_a;
const int _num__array_Core_1_C_syn_gaba_a = 256;
double * _array_Core_1_C_syn_gaba_b;
const int _num__array_Core_1_C_syn_gaba_b = 256;
double * _array_Core_1_C_syn_nmda;
const int _num__array_Core_1_C_syn_nmda = 256;
double * _array_Core_1_Cahp;
const int _num__array_Core_1_Cahp = 1;
double * _array_Core_1_Cmem;
const int _num__array_Core_1_Cmem = 1;
int32_t * _array_Core_1_i;
const int _num__array_Core_1_i = 256;
double * _array_Core_1_I_g_syn_ampa;
const int _num__array_Core_1_I_g_syn_ampa = 256;
double * _array_Core_1_I_g_syn_gaba_a;
const int _num__array_Core_1_I_g_syn_gaba_a = 256;
double * _array_Core_1_I_g_syn_gaba_b;
const int _num__array_Core_1_I_g_syn_gaba_b = 256;
double * _array_Core_1_I_g_syn_nmda;
const int _num__array_Core_1_I_g_syn_nmda = 256;
double * _array_Core_1_I_syn_ampa;
const int _num__array_Core_1_I_syn_ampa = 256;
double * _array_Core_1_I_syn_gaba_a;
const int _num__array_Core_1_I_syn_gaba_a = 256;
double * _array_Core_1_I_syn_gaba_b;
const int _num__array_Core_1_I_syn_gaba_b = 256;
double * _array_Core_1_I_syn_nmda;
const int _num__array_Core_1_I_syn_nmda = 256;
double * _array_Core_1_I_tau_syn_ampa;
const int _num__array_Core_1_I_tau_syn_ampa = 256;
double * _array_Core_1_I_tau_syn_gaba_a;
const int _num__array_Core_1_I_tau_syn_gaba_a = 256;
double * _array_Core_1_I_tau_syn_gaba_b;
const int _num__array_Core_1_I_tau_syn_gaba_b = 256;
double * _array_Core_1_I_tau_syn_nmda;
const int _num__array_Core_1_I_tau_syn_nmda = 256;
double * _array_Core_1_I_wo_syn_ampa;
const int _num__array_Core_1_I_wo_syn_ampa = 256;
double * _array_Core_1_I_wo_syn_gaba_a;
const int _num__array_Core_1_I_wo_syn_gaba_a = 256;
double * _array_Core_1_I_wo_syn_gaba_b;
const int _num__array_Core_1_I_wo_syn_gaba_b = 256;
double * _array_Core_1_I_wo_syn_nmda;
const int _num__array_Core_1_I_wo_syn_nmda = 256;
double * _array_Core_1_Iagain;
const int _num__array_Core_1_Iagain = 1;
double * _array_Core_1_Iahp;
const int _num__array_Core_1_Iahp = 256;
double * _array_Core_1_Ianorm;
const int _num__array_Core_1_Ianorm = 1;
double * _array_Core_1_Iath;
const int _num__array_Core_1_Iath = 1;
double * _array_Core_1_Ica;
const int _num__array_Core_1_Ica = 256;
double * _array_Core_1_Iconst;
const int _num__array_Core_1_Iconst = 256;
double * _array_Core_1_Imem;
const int _num__array_Core_1_Imem = 256;
double * _array_Core_1_Io;
const int _num__array_Core_1_Io = 1;
double * _array_Core_1_Ireset;
const int _num__array_Core_1_Ireset = 1;
double * _array_Core_1_Ishunt;
const int _num__array_Core_1_Ishunt = 256;
double * _array_Core_1_Ispkthr;
const int _num__array_Core_1_Ispkthr = 1;
double * _array_Core_1_Itau;
const int _num__array_Core_1_Itau = 1;
double * _array_Core_1_Itauahp;
const int _num__array_Core_1_Itauahp = 1;
double * _array_Core_1_Ith;
const int _num__array_Core_1_Ith = 1;
double * _array_Core_1_Ithahp;
const int _num__array_Core_1_Ithahp = 1;
double * _array_Core_1_kn;
const int _num__array_Core_1_kn = 1;
double * _array_Core_1_kp;
const int _num__array_Core_1_kp = 1;
double * _array_Core_1_lastspike;
const int _num__array_Core_1_lastspike = 256;
char * _array_Core_1_not_refractory;
const int _num__array_Core_1_not_refractory = 256;
double * _array_Core_1_refP;
const int _num__array_Core_1_refP = 1;
int32_t * _array_Core_1_subgroup_4__sub_idx;
const int _num__array_Core_1_subgroup_4__sub_idx = 2;
int32_t * _array_Core_1_subgroup_5__sub_idx;
const int _num__array_Core_1_subgroup_5__sub_idx = 2;
int32_t * _array_Core_1_subgroup_6__sub_idx;
const int _num__array_Core_1_subgroup_6__sub_idx = 2;
int32_t * _array_Core_1_subgroup_7__sub_idx;
const int _num__array_Core_1_subgroup_7__sub_idx = 2;
double * _array_Core_1_tauca;
const int _num__array_Core_1_tauca = 1;
double * _array_Core_1_Ut;
const int _num__array_Core_1_Ut = 1;
int32_t * _array_Core_2__spikespace;
const int _num__array_Core_2__spikespace = 257;
double * _array_Core_2_C_syn_ampa;
const int _num__array_Core_2_C_syn_ampa = 256;
double * _array_Core_2_C_syn_gaba_a;
const int _num__array_Core_2_C_syn_gaba_a = 256;
double * _array_Core_2_C_syn_gaba_b;
const int _num__array_Core_2_C_syn_gaba_b = 256;
double * _array_Core_2_C_syn_nmda;
const int _num__array_Core_2_C_syn_nmda = 256;
double * _array_Core_2_Cahp;
const int _num__array_Core_2_Cahp = 1;
double * _array_Core_2_Cmem;
const int _num__array_Core_2_Cmem = 1;
int32_t * _array_Core_2_i;
const int _num__array_Core_2_i = 256;
double * _array_Core_2_I_g_syn_ampa;
const int _num__array_Core_2_I_g_syn_ampa = 256;
double * _array_Core_2_I_g_syn_gaba_a;
const int _num__array_Core_2_I_g_syn_gaba_a = 256;
double * _array_Core_2_I_g_syn_gaba_b;
const int _num__array_Core_2_I_g_syn_gaba_b = 256;
double * _array_Core_2_I_g_syn_nmda;
const int _num__array_Core_2_I_g_syn_nmda = 256;
double * _array_Core_2_I_syn_ampa;
const int _num__array_Core_2_I_syn_ampa = 256;
double * _array_Core_2_I_syn_gaba_a;
const int _num__array_Core_2_I_syn_gaba_a = 256;
double * _array_Core_2_I_syn_gaba_b;
const int _num__array_Core_2_I_syn_gaba_b = 256;
double * _array_Core_2_I_syn_nmda;
const int _num__array_Core_2_I_syn_nmda = 256;
double * _array_Core_2_I_tau_syn_ampa;
const int _num__array_Core_2_I_tau_syn_ampa = 256;
double * _array_Core_2_I_tau_syn_gaba_a;
const int _num__array_Core_2_I_tau_syn_gaba_a = 256;
double * _array_Core_2_I_tau_syn_gaba_b;
const int _num__array_Core_2_I_tau_syn_gaba_b = 256;
double * _array_Core_2_I_tau_syn_nmda;
const int _num__array_Core_2_I_tau_syn_nmda = 256;
double * _array_Core_2_I_wo_syn_ampa;
const int _num__array_Core_2_I_wo_syn_ampa = 256;
double * _array_Core_2_I_wo_syn_gaba_a;
const int _num__array_Core_2_I_wo_syn_gaba_a = 256;
double * _array_Core_2_I_wo_syn_gaba_b;
const int _num__array_Core_2_I_wo_syn_gaba_b = 256;
double * _array_Core_2_I_wo_syn_nmda;
const int _num__array_Core_2_I_wo_syn_nmda = 256;
double * _array_Core_2_Iagain;
const int _num__array_Core_2_Iagain = 1;
double * _array_Core_2_Iahp;
const int _num__array_Core_2_Iahp = 256;
double * _array_Core_2_Ianorm;
const int _num__array_Core_2_Ianorm = 1;
double * _array_Core_2_Iath;
const int _num__array_Core_2_Iath = 1;
double * _array_Core_2_Ica;
const int _num__array_Core_2_Ica = 256;
double * _array_Core_2_Iconst;
const int _num__array_Core_2_Iconst = 256;
double * _array_Core_2_Imem;
const int _num__array_Core_2_Imem = 256;
double * _array_Core_2_Io;
const int _num__array_Core_2_Io = 1;
double * _array_Core_2_Ireset;
const int _num__array_Core_2_Ireset = 1;
double * _array_Core_2_Ishunt;
const int _num__array_Core_2_Ishunt = 256;
double * _array_Core_2_Ispkthr;
const int _num__array_Core_2_Ispkthr = 1;
double * _array_Core_2_Itau;
const int _num__array_Core_2_Itau = 1;
double * _array_Core_2_Itauahp;
const int _num__array_Core_2_Itauahp = 1;
double * _array_Core_2_Ith;
const int _num__array_Core_2_Ith = 1;
double * _array_Core_2_Ithahp;
const int _num__array_Core_2_Ithahp = 1;
double * _array_Core_2_kn;
const int _num__array_Core_2_kn = 1;
double * _array_Core_2_kp;
const int _num__array_Core_2_kp = 1;
double * _array_Core_2_lastspike;
const int _num__array_Core_2_lastspike = 256;
char * _array_Core_2_not_refractory;
const int _num__array_Core_2_not_refractory = 256;
double * _array_Core_2_refP;
const int _num__array_Core_2_refP = 1;
double * _array_Core_2_tauca;
const int _num__array_Core_2_tauca = 1;
double * _array_Core_2_Ut;
const int _num__array_Core_2_Ut = 1;
int32_t * _array_Core_3__spikespace;
const int _num__array_Core_3__spikespace = 257;
double * _array_Core_3_C_syn_ampa;
const int _num__array_Core_3_C_syn_ampa = 256;
double * _array_Core_3_C_syn_gaba_a;
const int _num__array_Core_3_C_syn_gaba_a = 256;
double * _array_Core_3_C_syn_gaba_b;
const int _num__array_Core_3_C_syn_gaba_b = 256;
double * _array_Core_3_C_syn_nmda;
const int _num__array_Core_3_C_syn_nmda = 256;
double * _array_Core_3_Cahp;
const int _num__array_Core_3_Cahp = 1;
double * _array_Core_3_Cmem;
const int _num__array_Core_3_Cmem = 1;
int32_t * _array_Core_3_i;
const int _num__array_Core_3_i = 256;
double * _array_Core_3_I_g_syn_ampa;
const int _num__array_Core_3_I_g_syn_ampa = 256;
double * _array_Core_3_I_g_syn_gaba_a;
const int _num__array_Core_3_I_g_syn_gaba_a = 256;
double * _array_Core_3_I_g_syn_gaba_b;
const int _num__array_Core_3_I_g_syn_gaba_b = 256;
double * _array_Core_3_I_g_syn_nmda;
const int _num__array_Core_3_I_g_syn_nmda = 256;
double * _array_Core_3_I_syn_ampa;
const int _num__array_Core_3_I_syn_ampa = 256;
double * _array_Core_3_I_syn_gaba_a;
const int _num__array_Core_3_I_syn_gaba_a = 256;
double * _array_Core_3_I_syn_gaba_b;
const int _num__array_Core_3_I_syn_gaba_b = 256;
double * _array_Core_3_I_syn_nmda;
const int _num__array_Core_3_I_syn_nmda = 256;
double * _array_Core_3_I_tau_syn_ampa;
const int _num__array_Core_3_I_tau_syn_ampa = 256;
double * _array_Core_3_I_tau_syn_gaba_a;
const int _num__array_Core_3_I_tau_syn_gaba_a = 256;
double * _array_Core_3_I_tau_syn_gaba_b;
const int _num__array_Core_3_I_tau_syn_gaba_b = 256;
double * _array_Core_3_I_tau_syn_nmda;
const int _num__array_Core_3_I_tau_syn_nmda = 256;
double * _array_Core_3_I_wo_syn_ampa;
const int _num__array_Core_3_I_wo_syn_ampa = 256;
double * _array_Core_3_I_wo_syn_gaba_a;
const int _num__array_Core_3_I_wo_syn_gaba_a = 256;
double * _array_Core_3_I_wo_syn_gaba_b;
const int _num__array_Core_3_I_wo_syn_gaba_b = 256;
double * _array_Core_3_I_wo_syn_nmda;
const int _num__array_Core_3_I_wo_syn_nmda = 256;
double * _array_Core_3_Iagain;
const int _num__array_Core_3_Iagain = 1;
double * _array_Core_3_Iahp;
const int _num__array_Core_3_Iahp = 256;
double * _array_Core_3_Ianorm;
const int _num__array_Core_3_Ianorm = 1;
double * _array_Core_3_Iath;
const int _num__array_Core_3_Iath = 1;
double * _array_Core_3_Ica;
const int _num__array_Core_3_Ica = 256;
double * _array_Core_3_Iconst;
const int _num__array_Core_3_Iconst = 256;
double * _array_Core_3_Imem;
const int _num__array_Core_3_Imem = 256;
double * _array_Core_3_Io;
const int _num__array_Core_3_Io = 1;
double * _array_Core_3_Ireset;
const int _num__array_Core_3_Ireset = 1;
double * _array_Core_3_Ishunt;
const int _num__array_Core_3_Ishunt = 256;
double * _array_Core_3_Ispkthr;
const int _num__array_Core_3_Ispkthr = 1;
double * _array_Core_3_Itau;
const int _num__array_Core_3_Itau = 1;
double * _array_Core_3_Itauahp;
const int _num__array_Core_3_Itauahp = 1;
double * _array_Core_3_Ith;
const int _num__array_Core_3_Ith = 1;
double * _array_Core_3_Ithahp;
const int _num__array_Core_3_Ithahp = 1;
double * _array_Core_3_kn;
const int _num__array_Core_3_kn = 1;
double * _array_Core_3_kp;
const int _num__array_Core_3_kp = 1;
double * _array_Core_3_lastspike;
const int _num__array_Core_3_lastspike = 256;
char * _array_Core_3_not_refractory;
const int _num__array_Core_3_not_refractory = 256;
double * _array_Core_3_refP;
const int _num__array_Core_3_refP = 1;
double * _array_Core_3_tauca;
const int _num__array_Core_3_tauca = 1;
double * _array_Core_3_Ut;
const int _num__array_Core_3_Ut = 1;
double * _array_defaultclock_dt;
const int _num__array_defaultclock_dt = 1;
double * _array_defaultclock_t;
const int _num__array_defaultclock_t = 1;
int64_t * _array_defaultclock_timestep;
const int _num__array_defaultclock_timestep = 1;
int32_t * _array_GABA_B4_N;
const int _num__array_GABA_B4_N = 1;
int32_t * _array_GABA_B5_N;
const int _num__array_GABA_B5_N = 1;
int32_t * _array_GABA_B6_N;
const int _num__array_GABA_B6_N = 1;
int32_t * _array_GABA_B7_N;
const int _num__array_GABA_B7_N = 1;
int32_t * _array_GABA_B8_N;
const int _num__array_GABA_B8_N = 1;
int32_t * _array_GABA_B9_N;
const int _num__array_GABA_B9_N = 1;
int32_t * _array_inh_neuron_output__source_idx;
const int _num__array_inh_neuron_output__source_idx = 2;
int32_t * _array_inh_neuron_output_count;
const int _num__array_inh_neuron_output_count = 2;
int32_t * _array_inh_neuron_output_N;
const int _num__array_inh_neuron_output_N = 1;
int32_t * _array_InpSpikeGenerator__lastindex;
const int _num__array_InpSpikeGenerator__lastindex = 1;
int32_t * _array_InpSpikeGenerator__period_bins;
const int _num__array_InpSpikeGenerator__period_bins = 1;
int32_t * _array_InpSpikeGenerator__spikespace;
const int _num__array_InpSpikeGenerator__spikespace = 2;
int32_t * _array_InpSpikeGenerator_i;
const int _num__array_InpSpikeGenerator_i = 1;
double * _array_InpSpikeGenerator_period;
const int _num__array_InpSpikeGenerator_period = 1;
int32_t * _array_mon_neuron_input__source_idx;
const int _num__array_mon_neuron_input__source_idx = 1;
int32_t * _array_mon_neuron_input_count;
const int _num__array_mon_neuron_input_count = 1;
int32_t * _array_mon_neuron_input_N;
const int _num__array_mon_neuron_input_N = 1;
int32_t * _array_NMDA1_N;
const int _num__array_NMDA1_N = 1;
int32_t * _array_NMDA2_N;
const int _num__array_NMDA2_N = 1;
int32_t * _array_NMDA3_N;
const int _num__array_NMDA3_N = 1;
int32_t * _array_spikemonitor_1__source_idx;
const int _num__array_spikemonitor_1__source_idx = 2;
int32_t * _array_spikemonitor_1_count;
const int _num__array_spikemonitor_1_count = 2;
int32_t * _array_spikemonitor_1_N;
const int _num__array_spikemonitor_1_N = 1;
int32_t * _array_spikemonitor_2__source_idx;
const int _num__array_spikemonitor_2__source_idx = 2;
int32_t * _array_spikemonitor_2_count;
const int _num__array_spikemonitor_2_count = 2;
int32_t * _array_spikemonitor_2_N;
const int _num__array_spikemonitor_2_N = 1;
int32_t * _array_spikemonitor__source_idx;
const int _num__array_spikemonitor__source_idx = 2;
int32_t * _array_spikemonitor_count;
const int _num__array_spikemonitor_count = 2;
int32_t * _array_spikemonitor_N;
const int _num__array_spikemonitor_N = 1;
int32_t * _array_statemonitor_10__indices;
const int _num__array_statemonitor_10__indices = 1;
double * _array_statemonitor_10_I_syn_gaba_b;
const int _num__array_statemonitor_10_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_10_N;
const int _num__array_statemonitor_10_N = 1;
int32_t * _array_statemonitor_11__indices;
const int _num__array_statemonitor_11__indices = 1;
double * _array_statemonitor_11_I_syn_gaba_b;
const int _num__array_statemonitor_11_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_11_N;
const int _num__array_statemonitor_11_N = 1;
int32_t * _array_statemonitor_12__indices;
const int _num__array_statemonitor_12__indices = 1;
double * _array_statemonitor_12_I_syn_ampa;
const int _num__array_statemonitor_12_I_syn_ampa = (0, 1);
int32_t * _array_statemonitor_12_N;
const int _num__array_statemonitor_12_N = 1;
int32_t * _array_statemonitor_14__indices;
const int _num__array_statemonitor_14__indices = 1;
double * _array_statemonitor_14_Imem;
const int _num__array_statemonitor_14_Imem = (0, 1);
int32_t * _array_statemonitor_14_N;
const int _num__array_statemonitor_14_N = 1;
int32_t * _array_statemonitor_1__indices;
const int _num__array_statemonitor_1__indices = 2;
double * _array_statemonitor_1_Imem;
const int _num__array_statemonitor_1_Imem = (0, 2);
int32_t * _array_statemonitor_1_N;
const int _num__array_statemonitor_1_N = 1;
int32_t * _array_statemonitor_2__indices;
const int _num__array_statemonitor_2__indices = 2;
double * _array_statemonitor_2_Imem;
const int _num__array_statemonitor_2_Imem = (0, 2);
int32_t * _array_statemonitor_2_N;
const int _num__array_statemonitor_2_N = 1;
int32_t * _array_statemonitor_3__indices;
const int _num__array_statemonitor_3__indices = 1;
double * _array_statemonitor_3_I_syn_nmda;
const int _num__array_statemonitor_3_I_syn_nmda = (0, 1);
int32_t * _array_statemonitor_3_N;
const int _num__array_statemonitor_3_N = 1;
int32_t * _array_statemonitor_4__indices;
const int _num__array_statemonitor_4__indices = 1;
double * _array_statemonitor_4_I_syn_nmda;
const int _num__array_statemonitor_4_I_syn_nmda = (0, 1);
int32_t * _array_statemonitor_4_N;
const int _num__array_statemonitor_4_N = 1;
int32_t * _array_statemonitor_5__indices;
const int _num__array_statemonitor_5__indices = 1;
double * _array_statemonitor_5_I_syn_nmda;
const int _num__array_statemonitor_5_I_syn_nmda = (0, 1);
int32_t * _array_statemonitor_5_N;
const int _num__array_statemonitor_5_N = 1;
int32_t * _array_statemonitor_6__indices;
const int _num__array_statemonitor_6__indices = 1;
double * _array_statemonitor_6_I_syn_gaba_b;
const int _num__array_statemonitor_6_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_6_N;
const int _num__array_statemonitor_6_N = 1;
int32_t * _array_statemonitor_7__indices;
const int _num__array_statemonitor_7__indices = 1;
double * _array_statemonitor_7_I_syn_gaba_b;
const int _num__array_statemonitor_7_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_7_N;
const int _num__array_statemonitor_7_N = 1;
int32_t * _array_statemonitor_8__indices;
const int _num__array_statemonitor_8__indices = 1;
double * _array_statemonitor_8_I_syn_gaba_b;
const int _num__array_statemonitor_8_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_8_N;
const int _num__array_statemonitor_8_N = 1;
int32_t * _array_statemonitor_9__indices;
const int _num__array_statemonitor_9__indices = 1;
double * _array_statemonitor_9_I_syn_gaba_b;
const int _num__array_statemonitor_9_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_9_N;
const int _num__array_statemonitor_9_N = 1;
int32_t * _array_statemonitor__indices;
const int _num__array_statemonitor__indices = 2;
double * _array_statemonitor_Imem;
const int _num__array_statemonitor_Imem = (0, 2);
int32_t * _array_statemonitor_N;
const int _num__array_statemonitor_N = 1;

//////////////// dynamic arrays 1d /////////
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_post;
std::vector<int32_t> _dynamic_array_AMPA0__synaptic_pre;
std::vector<double> _dynamic_array_AMPA0_delay;
std::vector<double> _dynamic_array_AMPA0_delay_1;
std::vector<int32_t> _dynamic_array_AMPA0_N_incoming;
std::vector<int32_t> _dynamic_array_AMPA0_N_outgoing;
std::vector<double> _dynamic_array_AMPA0_weight;
std::vector<int32_t> _dynamic_array_GABA_B4__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B4__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B4_delay;
std::vector<double> _dynamic_array_GABA_B4_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B4_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B4_N_outgoing;
std::vector<double> _dynamic_array_GABA_B4_weight;
std::vector<int32_t> _dynamic_array_GABA_B5__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B5__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B5_delay;
std::vector<double> _dynamic_array_GABA_B5_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B5_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B5_N_outgoing;
std::vector<double> _dynamic_array_GABA_B5_weight;
std::vector<int32_t> _dynamic_array_GABA_B6__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B6__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B6_delay;
std::vector<double> _dynamic_array_GABA_B6_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B6_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B6_N_outgoing;
std::vector<double> _dynamic_array_GABA_B6_weight;
std::vector<int32_t> _dynamic_array_GABA_B7__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B7__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B7_delay;
std::vector<double> _dynamic_array_GABA_B7_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B7_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B7_N_outgoing;
std::vector<double> _dynamic_array_GABA_B7_weight;
std::vector<int32_t> _dynamic_array_GABA_B8__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B8__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B8_delay;
std::vector<double> _dynamic_array_GABA_B8_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B8_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B8_N_outgoing;
std::vector<double> _dynamic_array_GABA_B8_weight;
std::vector<int32_t> _dynamic_array_GABA_B9__synaptic_post;
std::vector<int32_t> _dynamic_array_GABA_B9__synaptic_pre;
std::vector<double> _dynamic_array_GABA_B9_delay;
std::vector<double> _dynamic_array_GABA_B9_delay_1;
std::vector<int32_t> _dynamic_array_GABA_B9_N_incoming;
std::vector<int32_t> _dynamic_array_GABA_B9_N_outgoing;
std::vector<double> _dynamic_array_GABA_B9_weight;
std::vector<int32_t> _dynamic_array_inh_neuron_output_i;
std::vector<double> _dynamic_array_inh_neuron_output_t;
std::vector<int32_t> _dynamic_array_InpSpikeGenerator__timebins;
std::vector<int32_t> _dynamic_array_InpSpikeGenerator_neuron_index;
std::vector<int32_t> _dynamic_array_InpSpikeGenerator_spike_number;
std::vector<double> _dynamic_array_InpSpikeGenerator_spike_time;
std::vector<int32_t> _dynamic_array_mon_neuron_input_i;
std::vector<double> _dynamic_array_mon_neuron_input_t;
std::vector<int32_t> _dynamic_array_NMDA1__synaptic_post;
std::vector<int32_t> _dynamic_array_NMDA1__synaptic_pre;
std::vector<double> _dynamic_array_NMDA1_delay;
std::vector<double> _dynamic_array_NMDA1_delay_1;
std::vector<int32_t> _dynamic_array_NMDA1_N_incoming;
std::vector<int32_t> _dynamic_array_NMDA1_N_outgoing;
std::vector<double> _dynamic_array_NMDA1_weight;
std::vector<int32_t> _dynamic_array_NMDA2__synaptic_post;
std::vector<int32_t> _dynamic_array_NMDA2__synaptic_pre;
std::vector<double> _dynamic_array_NMDA2_delay;
std::vector<double> _dynamic_array_NMDA2_delay_1;
std::vector<int32_t> _dynamic_array_NMDA2_N_incoming;
std::vector<int32_t> _dynamic_array_NMDA2_N_outgoing;
std::vector<double> _dynamic_array_NMDA2_weight;
std::vector<int32_t> _dynamic_array_NMDA3__synaptic_post;
std::vector<int32_t> _dynamic_array_NMDA3__synaptic_pre;
std::vector<double> _dynamic_array_NMDA3_delay;
std::vector<double> _dynamic_array_NMDA3_delay_1;
std::vector<int32_t> _dynamic_array_NMDA3_N_incoming;
std::vector<int32_t> _dynamic_array_NMDA3_N_outgoing;
std::vector<double> _dynamic_array_NMDA3_weight;
std::vector<int32_t> _dynamic_array_spikemonitor_1_i;
std::vector<double> _dynamic_array_spikemonitor_1_t;
std::vector<int32_t> _dynamic_array_spikemonitor_2_i;
std::vector<double> _dynamic_array_spikemonitor_2_t;
std::vector<int32_t> _dynamic_array_spikemonitor_i;
std::vector<double> _dynamic_array_spikemonitor_t;
std::vector<double> _dynamic_array_statemonitor_10_t;
std::vector<double> _dynamic_array_statemonitor_11_t;
std::vector<double> _dynamic_array_statemonitor_12_t;
std::vector<double> _dynamic_array_statemonitor_14_t;
std::vector<double> _dynamic_array_statemonitor_1_t;
std::vector<double> _dynamic_array_statemonitor_2_t;
std::vector<double> _dynamic_array_statemonitor_3_t;
std::vector<double> _dynamic_array_statemonitor_4_t;
std::vector<double> _dynamic_array_statemonitor_5_t;
std::vector<double> _dynamic_array_statemonitor_6_t;
std::vector<double> _dynamic_array_statemonitor_7_t;
std::vector<double> _dynamic_array_statemonitor_8_t;
std::vector<double> _dynamic_array_statemonitor_9_t;
std::vector<double> _dynamic_array_statemonitor_t;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_10_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_11_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_12_I_syn_ampa;
DynamicArray2D<double> _dynamic_array_statemonitor_14_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_1_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_2_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_3_I_syn_nmda;
DynamicArray2D<double> _dynamic_array_statemonitor_4_I_syn_nmda;
DynamicArray2D<double> _dynamic_array_statemonitor_5_I_syn_nmda;
DynamicArray2D<double> _dynamic_array_statemonitor_6_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_7_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_8_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_9_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_Imem;

/////////////// static arrays /////////////
int32_t * _static_array__array_statemonitor_1__indices;
const int _num__static_array__array_statemonitor_1__indices = 2;
int32_t * _static_array__array_statemonitor_2__indices;
const int _num__static_array__array_statemonitor_2__indices = 2;
int32_t * _static_array__array_statemonitor__indices;
const int _num__static_array__array_statemonitor__indices = 2;
int32_t * _static_array__dynamic_array_InpSpikeGenerator__timebins;
const int _num__static_array__dynamic_array_InpSpikeGenerator__timebins = 150;
double * _static_array__dynamic_array_InpSpikeGenerator_neuron_index;
const int _num__static_array__dynamic_array_InpSpikeGenerator_neuron_index = 150;
int64_t * _static_array__dynamic_array_InpSpikeGenerator_spike_number;
const int _num__static_array__dynamic_array_InpSpikeGenerator_spike_number = 150;
double * _static_array__dynamic_array_InpSpikeGenerator_spike_time;
const int _num__static_array__dynamic_array_InpSpikeGenerator_spike_time = 150;

//////////////// synapses /////////////////
// AMPA0
SynapticPathway AMPA0_post(
		_dynamic_array_AMPA0__synaptic_post,
		6, 8);
SynapticPathway AMPA0_pre(
		_dynamic_array_AMPA0__synaptic_pre,
		0, 1);
// GABA_B4
SynapticPathway GABA_B4_post(
		_dynamic_array_GABA_B4__synaptic_post,
		0, 2);
SynapticPathway GABA_B4_pre(
		_dynamic_array_GABA_B4__synaptic_pre,
		6, 8);
// GABA_B5
SynapticPathway GABA_B5_post(
		_dynamic_array_GABA_B5__synaptic_post,
		2, 4);
SynapticPathway GABA_B5_pre(
		_dynamic_array_GABA_B5__synaptic_pre,
		6, 8);
// GABA_B6
SynapticPathway GABA_B6_post(
		_dynamic_array_GABA_B6__synaptic_post,
		4, 6);
SynapticPathway GABA_B6_pre(
		_dynamic_array_GABA_B6__synaptic_pre,
		6, 8);
// GABA_B7
SynapticPathway GABA_B7_post(
		_dynamic_array_GABA_B7__synaptic_post,
		2, 4);
SynapticPathway GABA_B7_pre(
		_dynamic_array_GABA_B7__synaptic_pre,
		4, 6);
// GABA_B8
SynapticPathway GABA_B8_post(
		_dynamic_array_GABA_B8__synaptic_post,
		0, 2);
SynapticPathway GABA_B8_pre(
		_dynamic_array_GABA_B8__synaptic_pre,
		4, 6);
// GABA_B9
SynapticPathway GABA_B9_post(
		_dynamic_array_GABA_B9__synaptic_post,
		0, 2);
SynapticPathway GABA_B9_pre(
		_dynamic_array_GABA_B9__synaptic_pre,
		2, 4);
// NMDA1
SynapticPathway NMDA1_post(
		_dynamic_array_NMDA1__synaptic_post,
		0, 2);
SynapticPathway NMDA1_pre(
		_dynamic_array_NMDA1__synaptic_pre,
		0, 1);
// NMDA2
SynapticPathway NMDA2_post(
		_dynamic_array_NMDA2__synaptic_post,
		2, 4);
SynapticPathway NMDA2_pre(
		_dynamic_array_NMDA2__synaptic_pre,
		0, 1);
// NMDA3
SynapticPathway NMDA3_post(
		_dynamic_array_NMDA3__synaptic_post,
		4, 6);
SynapticPathway NMDA3_pre(
		_dynamic_array_NMDA3__synaptic_pre,
		0, 1);

//////////////// clocks ///////////////////
Clock defaultclock;  // attributes will be set in run.cpp

// Profiling information for each code object
}

void _init_arrays()
{
	using namespace brian;

    // Arrays initialized to 0
	_array_AMPA0_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_AMPA0_N[i] = 0;

	_array_Core_0__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_0__spikespace[i] = 0;

	_array_Core_0_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_ampa[i] = 0;

	_array_Core_0_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_gaba_a[i] = 0;

	_array_Core_0_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_gaba_b[i] = 0;

	_array_Core_0_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_C_syn_nmda[i] = 0;

	_array_Core_0_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Cahp[i] = 0;

	_array_Core_0_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Cmem[i] = 0;

	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0;

	_array_Core_0_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_ampa[i] = 0;

	_array_Core_0_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_gaba_a[i] = 0;

	_array_Core_0_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_gaba_b[i] = 0;

	_array_Core_0_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_g_syn_nmda[i] = 0;

	_array_Core_0_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_ampa[i] = 0;

	_array_Core_0_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_gaba_a[i] = 0;

	_array_Core_0_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_gaba_b[i] = 0;

	_array_Core_0_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_syn_nmda[i] = 0;

	_array_Core_0_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_ampa[i] = 0;

	_array_Core_0_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_gaba_a[i] = 0;

	_array_Core_0_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_gaba_b[i] = 0;

	_array_Core_0_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_tau_syn_nmda[i] = 0;

	_array_Core_0_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_ampa[i] = 0;

	_array_Core_0_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_gaba_a[i] = 0;

	_array_Core_0_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_gaba_b[i] = 0;

	_array_Core_0_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_I_wo_syn_nmda[i] = 0;

	_array_Core_0_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Iagain[i] = 0;

	_array_Core_0_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iahp[i] = 0;

	_array_Core_0_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ianorm[i] = 0;

	_array_Core_0_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Iath[i] = 0;

	_array_Core_0_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Ica[i] = 0;

	_array_Core_0_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Iconst[i] = 0;

	_array_Core_0_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Imem[i] = 0;

	_array_Core_0_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Io[i] = 0;

	_array_Core_0_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ireset[i] = 0;

	_array_Core_0_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_Ishunt[i] = 0;

	_array_Core_0_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ispkthr[i] = 0;

	_array_Core_0_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Itau[i] = 0;

	_array_Core_0_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Itauahp[i] = 0;

	_array_Core_0_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ith[i] = 0;

	_array_Core_0_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ithahp[i] = 0;

	_array_Core_0_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_kn[i] = 0;

	_array_Core_0_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_kp[i] = 0;

	_array_Core_0_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_0_lastspike[i] = 0;

	_array_Core_0_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_0_not_refractory[i] = 0;

	_array_Core_0_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_refP[i] = 0;

	_array_Core_0_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_tauca[i] = 0;

	_array_Core_0_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_0_Ut[i] = 0;

	_array_Core_1__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_1__spikespace[i] = 0;

	_array_Core_1_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_ampa[i] = 0;

	_array_Core_1_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_gaba_a[i] = 0;

	_array_Core_1_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_gaba_b[i] = 0;

	_array_Core_1_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_C_syn_nmda[i] = 0;

	_array_Core_1_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Cahp[i] = 0;

	_array_Core_1_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Cmem[i] = 0;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0;

	_array_Core_1_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_ampa[i] = 0;

	_array_Core_1_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_gaba_a[i] = 0;

	_array_Core_1_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_gaba_b[i] = 0;

	_array_Core_1_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_g_syn_nmda[i] = 0;

	_array_Core_1_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_ampa[i] = 0;

	_array_Core_1_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_gaba_a[i] = 0;

	_array_Core_1_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_gaba_b[i] = 0;

	_array_Core_1_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_syn_nmda[i] = 0;

	_array_Core_1_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_ampa[i] = 0;

	_array_Core_1_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_gaba_a[i] = 0;

	_array_Core_1_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_gaba_b[i] = 0;

	_array_Core_1_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_tau_syn_nmda[i] = 0;

	_array_Core_1_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_ampa[i] = 0;

	_array_Core_1_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_gaba_a[i] = 0;

	_array_Core_1_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_gaba_b[i] = 0;

	_array_Core_1_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_I_wo_syn_nmda[i] = 0;

	_array_Core_1_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Iagain[i] = 0;

	_array_Core_1_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iahp[i] = 0;

	_array_Core_1_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ianorm[i] = 0;

	_array_Core_1_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Iath[i] = 0;

	_array_Core_1_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Ica[i] = 0;

	_array_Core_1_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Iconst[i] = 0;

	_array_Core_1_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Imem[i] = 0;

	_array_Core_1_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Io[i] = 0;

	_array_Core_1_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ireset[i] = 0;

	_array_Core_1_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_Ishunt[i] = 0;

	_array_Core_1_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ispkthr[i] = 0;

	_array_Core_1_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Itau[i] = 0;

	_array_Core_1_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Itauahp[i] = 0;

	_array_Core_1_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ith[i] = 0;

	_array_Core_1_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ithahp[i] = 0;

	_array_Core_1_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_kn[i] = 0;

	_array_Core_1_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_kp[i] = 0;

	_array_Core_1_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_1_lastspike[i] = 0;

	_array_Core_1_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_1_not_refractory[i] = 0;

	_array_Core_1_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_refP[i] = 0;

	_array_Core_1_subgroup_4__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_4__sub_idx[i] = 0;

	_array_Core_1_subgroup_5__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_5__sub_idx[i] = 0;

	_array_Core_1_subgroup_6__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_6__sub_idx[i] = 0;

	_array_Core_1_subgroup_7__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_7__sub_idx[i] = 0;

	_array_Core_1_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_tauca[i] = 0;

	_array_Core_1_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_1_Ut[i] = 0;

	_array_Core_2__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_2__spikespace[i] = 0;

	_array_Core_2_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_ampa[i] = 0;

	_array_Core_2_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_gaba_a[i] = 0;

	_array_Core_2_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_gaba_b[i] = 0;

	_array_Core_2_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_C_syn_nmda[i] = 0;

	_array_Core_2_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Cahp[i] = 0;

	_array_Core_2_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Cmem[i] = 0;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0;

	_array_Core_2_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_ampa[i] = 0;

	_array_Core_2_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_gaba_a[i] = 0;

	_array_Core_2_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_gaba_b[i] = 0;

	_array_Core_2_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_g_syn_nmda[i] = 0;

	_array_Core_2_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_ampa[i] = 0;

	_array_Core_2_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_gaba_a[i] = 0;

	_array_Core_2_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_gaba_b[i] = 0;

	_array_Core_2_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_syn_nmda[i] = 0;

	_array_Core_2_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_ampa[i] = 0;

	_array_Core_2_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_gaba_a[i] = 0;

	_array_Core_2_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_gaba_b[i] = 0;

	_array_Core_2_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_tau_syn_nmda[i] = 0;

	_array_Core_2_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_ampa[i] = 0;

	_array_Core_2_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_gaba_a[i] = 0;

	_array_Core_2_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_gaba_b[i] = 0;

	_array_Core_2_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_I_wo_syn_nmda[i] = 0;

	_array_Core_2_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Iagain[i] = 0;

	_array_Core_2_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iahp[i] = 0;

	_array_Core_2_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ianorm[i] = 0;

	_array_Core_2_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Iath[i] = 0;

	_array_Core_2_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Ica[i] = 0;

	_array_Core_2_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Iconst[i] = 0;

	_array_Core_2_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Imem[i] = 0;

	_array_Core_2_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Io[i] = 0;

	_array_Core_2_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ireset[i] = 0;

	_array_Core_2_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_Ishunt[i] = 0;

	_array_Core_2_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ispkthr[i] = 0;

	_array_Core_2_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Itau[i] = 0;

	_array_Core_2_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Itauahp[i] = 0;

	_array_Core_2_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ith[i] = 0;

	_array_Core_2_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ithahp[i] = 0;

	_array_Core_2_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_kn[i] = 0;

	_array_Core_2_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_kp[i] = 0;

	_array_Core_2_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_2_lastspike[i] = 0;

	_array_Core_2_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_2_not_refractory[i] = 0;

	_array_Core_2_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_refP[i] = 0;

	_array_Core_2_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_tauca[i] = 0;

	_array_Core_2_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_2_Ut[i] = 0;

	_array_Core_3__spikespace = new int32_t[257];
    
	for(int i=0; i<257; i++) _array_Core_3__spikespace[i] = 0;

	_array_Core_3_C_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_ampa[i] = 0;

	_array_Core_3_C_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_gaba_a[i] = 0;

	_array_Core_3_C_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_gaba_b[i] = 0;

	_array_Core_3_C_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_C_syn_nmda[i] = 0;

	_array_Core_3_Cahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Cahp[i] = 0;

	_array_Core_3_Cmem = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Cmem[i] = 0;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0;

	_array_Core_3_I_g_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_ampa[i] = 0;

	_array_Core_3_I_g_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_gaba_a[i] = 0;

	_array_Core_3_I_g_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_gaba_b[i] = 0;

	_array_Core_3_I_g_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_g_syn_nmda[i] = 0;

	_array_Core_3_I_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_ampa[i] = 0;

	_array_Core_3_I_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_gaba_a[i] = 0;

	_array_Core_3_I_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_gaba_b[i] = 0;

	_array_Core_3_I_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_syn_nmda[i] = 0;

	_array_Core_3_I_tau_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_ampa[i] = 0;

	_array_Core_3_I_tau_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_gaba_a[i] = 0;

	_array_Core_3_I_tau_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_gaba_b[i] = 0;

	_array_Core_3_I_tau_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_tau_syn_nmda[i] = 0;

	_array_Core_3_I_wo_syn_ampa = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_ampa[i] = 0;

	_array_Core_3_I_wo_syn_gaba_a = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_gaba_a[i] = 0;

	_array_Core_3_I_wo_syn_gaba_b = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_gaba_b[i] = 0;

	_array_Core_3_I_wo_syn_nmda = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_I_wo_syn_nmda[i] = 0;

	_array_Core_3_Iagain = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Iagain[i] = 0;

	_array_Core_3_Iahp = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iahp[i] = 0;

	_array_Core_3_Ianorm = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ianorm[i] = 0;

	_array_Core_3_Iath = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Iath[i] = 0;

	_array_Core_3_Ica = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Ica[i] = 0;

	_array_Core_3_Iconst = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Iconst[i] = 0;

	_array_Core_3_Imem = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Imem[i] = 0;

	_array_Core_3_Io = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Io[i] = 0;

	_array_Core_3_Ireset = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ireset[i] = 0;

	_array_Core_3_Ishunt = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_Ishunt[i] = 0;

	_array_Core_3_Ispkthr = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ispkthr[i] = 0;

	_array_Core_3_Itau = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Itau[i] = 0;

	_array_Core_3_Itauahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Itauahp[i] = 0;

	_array_Core_3_Ith = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ith[i] = 0;

	_array_Core_3_Ithahp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ithahp[i] = 0;

	_array_Core_3_kn = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_kn[i] = 0;

	_array_Core_3_kp = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_kp[i] = 0;

	_array_Core_3_lastspike = new double[256];
    
	for(int i=0; i<256; i++) _array_Core_3_lastspike[i] = 0;

	_array_Core_3_not_refractory = new char[256];
    
	for(int i=0; i<256; i++) _array_Core_3_not_refractory[i] = 0;

	_array_Core_3_refP = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_refP[i] = 0;

	_array_Core_3_tauca = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_tauca[i] = 0;

	_array_Core_3_Ut = new double[1];
    
	for(int i=0; i<1; i++) _array_Core_3_Ut[i] = 0;

	_array_defaultclock_dt = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_dt[i] = 0;

	_array_defaultclock_t = new double[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_t[i] = 0;

	_array_defaultclock_timestep = new int64_t[1];
    
	for(int i=0; i<1; i++) _array_defaultclock_timestep[i] = 0;

	_array_GABA_B4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B4_N[i] = 0;

	_array_GABA_B5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B5_N[i] = 0;

	_array_GABA_B6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B6_N[i] = 0;

	_array_GABA_B7_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B7_N[i] = 0;

	_array_GABA_B8_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B8_N[i] = 0;

	_array_GABA_B9_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_GABA_B9_N[i] = 0;

	_array_inh_neuron_output__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_inh_neuron_output__source_idx[i] = 0;

	_array_inh_neuron_output_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_inh_neuron_output_count[i] = 0;

	_array_inh_neuron_output_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_inh_neuron_output_N[i] = 0;

	_array_InpSpikeGenerator__lastindex = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator__lastindex[i] = 0;

	_array_InpSpikeGenerator__period_bins = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator__period_bins[i] = 0;

	_array_InpSpikeGenerator__spikespace = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_InpSpikeGenerator__spikespace[i] = 0;

	_array_InpSpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator_i[i] = 0;

	_array_InpSpikeGenerator_period = new double[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator_period[i] = 0;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0;

	_array_mon_neuron_input_count = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input_count[i] = 0;

	_array_mon_neuron_input_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input_N[i] = 0;

	_array_NMDA1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_NMDA1_N[i] = 0;

	_array_NMDA2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_NMDA2_N[i] = 0;

	_array_NMDA3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_NMDA3_N[i] = 0;

	_array_spikemonitor_1__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_1__source_idx[i] = 0;

	_array_spikemonitor_1_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_1_count[i] = 0;

	_array_spikemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_1_N[i] = 0;

	_array_spikemonitor_2__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_2__source_idx[i] = 0;

	_array_spikemonitor_2_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_2_count[i] = 0;

	_array_spikemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_2_N[i] = 0;

	_array_spikemonitor__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor__source_idx[i] = 0;

	_array_spikemonitor_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_count[i] = 0;

	_array_spikemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_N[i] = 0;

	_array_statemonitor_10__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_10__indices[i] = 0;

	_array_statemonitor_10_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_10_N[i] = 0;

	_array_statemonitor_11__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_11__indices[i] = 0;

	_array_statemonitor_11_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_11_N[i] = 0;

	_array_statemonitor_12__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_12__indices[i] = 0;

	_array_statemonitor_12_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_12_N[i] = 0;

	_array_statemonitor_14__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_14__indices[i] = 0;

	_array_statemonitor_14_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_14_N[i] = 0;

	_array_statemonitor_1__indices = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_statemonitor_1__indices[i] = 0;

	_array_statemonitor_1_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_1_N[i] = 0;

	_array_statemonitor_2__indices = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_statemonitor_2__indices[i] = 0;

	_array_statemonitor_2_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_2_N[i] = 0;

	_array_statemonitor_3__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_3__indices[i] = 0;

	_array_statemonitor_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_3_N[i] = 0;

	_array_statemonitor_4__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4__indices[i] = 0;

	_array_statemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_4_N[i] = 0;

	_array_statemonitor_5__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5__indices[i] = 0;

	_array_statemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_5_N[i] = 0;

	_array_statemonitor_6__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_6__indices[i] = 0;

	_array_statemonitor_6_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_6_N[i] = 0;

	_array_statemonitor_7__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_7__indices[i] = 0;

	_array_statemonitor_7_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_7_N[i] = 0;

	_array_statemonitor_8__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_8__indices[i] = 0;

	_array_statemonitor_8_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_8_N[i] = 0;

	_array_statemonitor_9__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_9__indices[i] = 0;

	_array_statemonitor_9_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_9_N[i] = 0;

	_array_statemonitor__indices = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_statemonitor__indices[i] = 0;

	_array_statemonitor_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_N[i] = 0;

	_dynamic_array_InpSpikeGenerator__timebins.resize(150);
    
	for(int i=0; i<150; i++) _dynamic_array_InpSpikeGenerator__timebins[i] = 0;


	// Arrays initialized to an "arange"
	_array_Core_0_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_0_i[i] = 0 + i;

	_array_Core_1_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_1_i[i] = 0 + i;

	_array_Core_1_subgroup_4__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_4__sub_idx[i] = 0 + i;

	_array_Core_1_subgroup_5__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_5__sub_idx[i] = 2 + i;

	_array_Core_1_subgroup_6__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_6__sub_idx[i] = 4 + i;

	_array_Core_1_subgroup_7__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_7__sub_idx[i] = 6 + i;

	_array_Core_2_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_2_i[i] = 0 + i;

	_array_Core_3_i = new int32_t[256];
    
	for(int i=0; i<256; i++) _array_Core_3_i[i] = 0 + i;

	_array_inh_neuron_output__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_inh_neuron_output__source_idx[i] = 0 + i;

	_array_InpSpikeGenerator_i = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_InpSpikeGenerator_i[i] = 0 + i;

	_array_mon_neuron_input__source_idx = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_mon_neuron_input__source_idx[i] = 0 + i;

	_array_spikemonitor_1__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_1__source_idx[i] = 0 + i;

	_array_spikemonitor_2__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_2__source_idx[i] = 0 + i;

	_array_spikemonitor__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor__source_idx[i] = 0 + i;


	// static arrays
	_static_array__array_statemonitor_1__indices = new int32_t[2];
	_static_array__array_statemonitor_2__indices = new int32_t[2];
	_static_array__array_statemonitor__indices = new int32_t[2];
	_static_array__dynamic_array_InpSpikeGenerator__timebins = new int32_t[150];
	_static_array__dynamic_array_InpSpikeGenerator_neuron_index = new double[150];
	_static_array__dynamic_array_InpSpikeGenerator_spike_number = new int64_t[150];
	_static_array__dynamic_array_InpSpikeGenerator_spike_time = new double[150];

	// Random number generator states
	for (int i=0; i<1; i++)
	    _mersenne_twister_states.push_back(new rk_state());
}

void _load_arrays()
{
	using namespace brian;

	ifstream f_static_array__array_statemonitor_1__indices;
	f_static_array__array_statemonitor_1__indices.open("static_arrays/_static_array__array_statemonitor_1__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_1__indices.is_open())
	{
		f_static_array__array_statemonitor_1__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_1__indices), 2*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_1__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor_2__indices;
	f_static_array__array_statemonitor_2__indices.open("static_arrays/_static_array__array_statemonitor_2__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_2__indices.is_open())
	{
		f_static_array__array_statemonitor_2__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_2__indices), 2*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_2__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor__indices;
	f_static_array__array_statemonitor__indices.open("static_arrays/_static_array__array_statemonitor__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor__indices.is_open())
	{
		f_static_array__array_statemonitor__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor__indices), 2*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor__indices." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator__timebins;
	f_static_array__dynamic_array_InpSpikeGenerator__timebins.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator__timebins", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator__timebins.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator__timebins.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator__timebins), 150*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator__timebins." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator_neuron_index;
	f_static_array__dynamic_array_InpSpikeGenerator_neuron_index.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator_neuron_index", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator_neuron_index.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator_neuron_index.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator_neuron_index), 150*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator_neuron_index." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator_spike_number;
	f_static_array__dynamic_array_InpSpikeGenerator_spike_number.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator_spike_number", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator_spike_number.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator_spike_number.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator_spike_number), 150*sizeof(int64_t));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator_spike_number." << endl;
	}
	ifstream f_static_array__dynamic_array_InpSpikeGenerator_spike_time;
	f_static_array__dynamic_array_InpSpikeGenerator_spike_time.open("static_arrays/_static_array__dynamic_array_InpSpikeGenerator_spike_time", ios::in | ios::binary);
	if(f_static_array__dynamic_array_InpSpikeGenerator_spike_time.is_open())
	{
		f_static_array__dynamic_array_InpSpikeGenerator_spike_time.read(reinterpret_cast<char*>(_static_array__dynamic_array_InpSpikeGenerator_spike_time), 150*sizeof(double));
	} else
	{
		std::cout << "Error opening static array _static_array__dynamic_array_InpSpikeGenerator_spike_time." << endl;
	}
}

void _write_arrays()
{
	using namespace brian;

	ofstream outfile__array_AMPA0_N;
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_1506660593189001818", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-3113024262759230877", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_ampa;
	outfile__array_Core_0_C_syn_ampa.open("results/_array_Core_0_C_syn_ampa_-4293727102204188158", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_ampa.is_open())
	{
		outfile__array_Core_0_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_C_syn_ampa), 256*sizeof(_array_Core_0_C_syn_ampa[0]));
		outfile__array_Core_0_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_a;
	outfile__array_Core_0_C_syn_gaba_a.open("results/_array_Core_0_C_syn_gaba_a_-8253561891013282949", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_a), 256*sizeof(_array_Core_0_C_syn_gaba_a[0]));
		outfile__array_Core_0_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_b;
	outfile__array_Core_0_C_syn_gaba_b.open("results/_array_Core_0_C_syn_gaba_b_3506649511004813138", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_b), 256*sizeof(_array_Core_0_C_syn_gaba_b[0]));
		outfile__array_Core_0_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_nmda;
	outfile__array_Core_0_C_syn_nmda.open("results/_array_Core_0_C_syn_nmda_-4185270534040195195", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_nmda.is_open())
	{
		outfile__array_Core_0_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_C_syn_nmda), 256*sizeof(_array_Core_0_C_syn_nmda[0]));
		outfile__array_Core_0_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Cahp;
	outfile__array_Core_0_Cahp.open("results/_array_Core_0_Cahp_-7160782594608432705", ios::binary | ios::out);
	if(outfile__array_Core_0_Cahp.is_open())
	{
		outfile__array_Core_0_Cahp.write(reinterpret_cast<char*>(_array_Core_0_Cahp), 1*sizeof(_array_Core_0_Cahp[0]));
		outfile__array_Core_0_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cahp." << endl;
	}
	ofstream outfile__array_Core_0_Cmem;
	outfile__array_Core_0_Cmem.open("results/_array_Core_0_Cmem_-440075130869605310", ios::binary | ios::out);
	if(outfile__array_Core_0_Cmem.is_open())
	{
		outfile__array_Core_0_Cmem.write(reinterpret_cast<char*>(_array_Core_0_Cmem), 1*sizeof(_array_Core_0_Cmem[0]));
		outfile__array_Core_0_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cmem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_8379371180811417268", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_ampa;
	outfile__array_Core_0_I_g_syn_ampa.open("results/_array_Core_0_I_g_syn_ampa_5162240817253975776", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_ampa), 256*sizeof(_array_Core_0_I_g_syn_ampa[0]));
		outfile__array_Core_0_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_a;
	outfile__array_Core_0_I_g_syn_gaba_a.open("results/_array_Core_0_I_g_syn_gaba_a_-9031286955051115763", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_a), 256*sizeof(_array_Core_0_I_g_syn_gaba_a[0]));
		outfile__array_Core_0_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_b;
	outfile__array_Core_0_I_g_syn_gaba_b.open("results/_array_Core_0_I_g_syn_gaba_b_3860725300149589270", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_b), 256*sizeof(_array_Core_0_I_g_syn_gaba_b[0]));
		outfile__array_Core_0_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_nmda;
	outfile__array_Core_0_I_g_syn_nmda.open("results/_array_Core_0_I_g_syn_nmda_-5453625657419297273", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_nmda), 256*sizeof(_array_Core_0_I_g_syn_nmda[0]));
		outfile__array_Core_0_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_ampa;
	outfile__array_Core_0_I_syn_ampa.open("results/_array_Core_0_I_syn_ampa_-5951177049589149410", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_syn_ampa), 256*sizeof(_array_Core_0_I_syn_ampa[0]));
		outfile__array_Core_0_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_a;
	outfile__array_Core_0_I_syn_gaba_a.open("results/_array_Core_0_I_syn_gaba_a_7880257373224190782", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_a), 256*sizeof(_array_Core_0_I_syn_gaba_a[0]));
		outfile__array_Core_0_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_b;
	outfile__array_Core_0_I_syn_gaba_b.open("results/_array_Core_0_I_syn_gaba_b_1308337294723925273", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_b), 256*sizeof(_array_Core_0_I_syn_gaba_b[0]));
		outfile__array_Core_0_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_nmda;
	outfile__array_Core_0_I_syn_nmda.open("results/_array_Core_0_I_syn_nmda_3441992801570748218", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_syn_nmda), 256*sizeof(_array_Core_0_I_syn_nmda[0]));
		outfile__array_Core_0_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_ampa;
	outfile__array_Core_0_I_tau_syn_ampa.open("results/_array_Core_0_I_tau_syn_ampa_1881331357490151651", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_ampa), 256*sizeof(_array_Core_0_I_tau_syn_ampa[0]));
		outfile__array_Core_0_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_a;
	outfile__array_Core_0_I_tau_syn_gaba_a.open("results/_array_Core_0_I_tau_syn_gaba_a_5623078208157738954", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_a), 256*sizeof(_array_Core_0_I_tau_syn_gaba_a[0]));
		outfile__array_Core_0_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_b;
	outfile__array_Core_0_I_tau_syn_gaba_b.open("results/_array_Core_0_I_tau_syn_gaba_b_-6788394160882652512", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_b), 256*sizeof(_array_Core_0_I_tau_syn_gaba_b[0]));
		outfile__array_Core_0_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_nmda;
	outfile__array_Core_0_I_tau_syn_nmda.open("results/_array_Core_0_I_tau_syn_nmda_-3598842600173255124", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_nmda), 256*sizeof(_array_Core_0_I_tau_syn_nmda[0]));
		outfile__array_Core_0_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_ampa;
	outfile__array_Core_0_I_wo_syn_ampa.open("results/_array_Core_0_I_wo_syn_ampa_3841666450447697493", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_ampa), 256*sizeof(_array_Core_0_I_wo_syn_ampa[0]));
		outfile__array_Core_0_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_a;
	outfile__array_Core_0_I_wo_syn_gaba_a.open("results/_array_Core_0_I_wo_syn_gaba_a_1238339463288536012", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_a), 256*sizeof(_array_Core_0_I_wo_syn_gaba_a[0]));
		outfile__array_Core_0_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_b;
	outfile__array_Core_0_I_wo_syn_gaba_b.open("results/_array_Core_0_I_wo_syn_gaba_b_-7386379019260705097", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_b), 256*sizeof(_array_Core_0_I_wo_syn_gaba_b[0]));
		outfile__array_Core_0_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_nmda;
	outfile__array_Core_0_I_wo_syn_nmda.open("results/_array_Core_0_I_wo_syn_nmda_4570143884707509182", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_nmda), 256*sizeof(_array_Core_0_I_wo_syn_nmda[0]));
		outfile__array_Core_0_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Iagain;
	outfile__array_Core_0_Iagain.open("results/_array_Core_0_Iagain_-2485649570785533336", ios::binary | ios::out);
	if(outfile__array_Core_0_Iagain.is_open())
	{
		outfile__array_Core_0_Iagain.write(reinterpret_cast<char*>(_array_Core_0_Iagain), 1*sizeof(_array_Core_0_Iagain[0]));
		outfile__array_Core_0_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iagain." << endl;
	}
	ofstream outfile__array_Core_0_Iahp;
	outfile__array_Core_0_Iahp.open("results/_array_Core_0_Iahp_-8968447873672397379", ios::binary | ios::out);
	if(outfile__array_Core_0_Iahp.is_open())
	{
		outfile__array_Core_0_Iahp.write(reinterpret_cast<char*>(_array_Core_0_Iahp), 256*sizeof(_array_Core_0_Iahp[0]));
		outfile__array_Core_0_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iahp." << endl;
	}
	ofstream outfile__array_Core_0_Ianorm;
	outfile__array_Core_0_Ianorm.open("results/_array_Core_0_Ianorm_-4690464900011059567", ios::binary | ios::out);
	if(outfile__array_Core_0_Ianorm.is_open())
	{
		outfile__array_Core_0_Ianorm.write(reinterpret_cast<char*>(_array_Core_0_Ianorm), 1*sizeof(_array_Core_0_Ianorm[0]));
		outfile__array_Core_0_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ianorm." << endl;
	}
	ofstream outfile__array_Core_0_Iath;
	outfile__array_Core_0_Iath.open("results/_array_Core_0_Iath_-5878596129565825605", ios::binary | ios::out);
	if(outfile__array_Core_0_Iath.is_open())
	{
		outfile__array_Core_0_Iath.write(reinterpret_cast<char*>(_array_Core_0_Iath), 1*sizeof(_array_Core_0_Iath[0]));
		outfile__array_Core_0_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iath." << endl;
	}
	ofstream outfile__array_Core_0_Ica;
	outfile__array_Core_0_Ica.open("results/_array_Core_0_Ica_-6481992387954916025", ios::binary | ios::out);
	if(outfile__array_Core_0_Ica.is_open())
	{
		outfile__array_Core_0_Ica.write(reinterpret_cast<char*>(_array_Core_0_Ica), 256*sizeof(_array_Core_0_Ica[0]));
		outfile__array_Core_0_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ica." << endl;
	}
	ofstream outfile__array_Core_0_Iconst;
	outfile__array_Core_0_Iconst.open("results/_array_Core_0_Iconst_4727987012210011080", ios::binary | ios::out);
	if(outfile__array_Core_0_Iconst.is_open())
	{
		outfile__array_Core_0_Iconst.write(reinterpret_cast<char*>(_array_Core_0_Iconst), 256*sizeof(_array_Core_0_Iconst[0]));
		outfile__array_Core_0_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iconst." << endl;
	}
	ofstream outfile__array_Core_0_Imem;
	outfile__array_Core_0_Imem.open("results/_array_Core_0_Imem_-3961537985307696587", ios::binary | ios::out);
	if(outfile__array_Core_0_Imem.is_open())
	{
		outfile__array_Core_0_Imem.write(reinterpret_cast<char*>(_array_Core_0_Imem), 256*sizeof(_array_Core_0_Imem[0]));
		outfile__array_Core_0_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Imem." << endl;
	}
	ofstream outfile__array_Core_0_Io;
	outfile__array_Core_0_Io.open("results/_array_Core_0_Io_8962383790215449463", ios::binary | ios::out);
	if(outfile__array_Core_0_Io.is_open())
	{
		outfile__array_Core_0_Io.write(reinterpret_cast<char*>(_array_Core_0_Io), 1*sizeof(_array_Core_0_Io[0]));
		outfile__array_Core_0_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Io." << endl;
	}
	ofstream outfile__array_Core_0_Ireset;
	outfile__array_Core_0_Ireset.open("results/_array_Core_0_Ireset_-7468575689648279719", ios::binary | ios::out);
	if(outfile__array_Core_0_Ireset.is_open())
	{
		outfile__array_Core_0_Ireset.write(reinterpret_cast<char*>(_array_Core_0_Ireset), 1*sizeof(_array_Core_0_Ireset[0]));
		outfile__array_Core_0_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ireset." << endl;
	}
	ofstream outfile__array_Core_0_Ishunt;
	outfile__array_Core_0_Ishunt.open("results/_array_Core_0_Ishunt_3947865304522781307", ios::binary | ios::out);
	if(outfile__array_Core_0_Ishunt.is_open())
	{
		outfile__array_Core_0_Ishunt.write(reinterpret_cast<char*>(_array_Core_0_Ishunt), 256*sizeof(_array_Core_0_Ishunt[0]));
		outfile__array_Core_0_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ishunt." << endl;
	}
	ofstream outfile__array_Core_0_Ispkthr;
	outfile__array_Core_0_Ispkthr.open("results/_array_Core_0_Ispkthr_-757415401787347234", ios::binary | ios::out);
	if(outfile__array_Core_0_Ispkthr.is_open())
	{
		outfile__array_Core_0_Ispkthr.write(reinterpret_cast<char*>(_array_Core_0_Ispkthr), 1*sizeof(_array_Core_0_Ispkthr[0]));
		outfile__array_Core_0_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_0_Itau;
	outfile__array_Core_0_Itau.open("results/_array_Core_0_Itau_-3038027943741128859", ios::binary | ios::out);
	if(outfile__array_Core_0_Itau.is_open())
	{
		outfile__array_Core_0_Itau.write(reinterpret_cast<char*>(_array_Core_0_Itau), 1*sizeof(_array_Core_0_Itau[0]));
		outfile__array_Core_0_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itau." << endl;
	}
	ofstream outfile__array_Core_0_Itauahp;
	outfile__array_Core_0_Itauahp.open("results/_array_Core_0_Itauahp_-1209012026320944291", ios::binary | ios::out);
	if(outfile__array_Core_0_Itauahp.is_open())
	{
		outfile__array_Core_0_Itauahp.write(reinterpret_cast<char*>(_array_Core_0_Itauahp), 1*sizeof(_array_Core_0_Itauahp[0]));
		outfile__array_Core_0_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itauahp." << endl;
	}
	ofstream outfile__array_Core_0_Ith;
	outfile__array_Core_0_Ith.open("results/_array_Core_0_Ith_-8834243060168477431", ios::binary | ios::out);
	if(outfile__array_Core_0_Ith.is_open())
	{
		outfile__array_Core_0_Ith.write(reinterpret_cast<char*>(_array_Core_0_Ith), 1*sizeof(_array_Core_0_Ith[0]));
		outfile__array_Core_0_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ith." << endl;
	}
	ofstream outfile__array_Core_0_Ithahp;
	outfile__array_Core_0_Ithahp.open("results/_array_Core_0_Ithahp_-873821269218300969", ios::binary | ios::out);
	if(outfile__array_Core_0_Ithahp.is_open())
	{
		outfile__array_Core_0_Ithahp.write(reinterpret_cast<char*>(_array_Core_0_Ithahp), 1*sizeof(_array_Core_0_Ithahp[0]));
		outfile__array_Core_0_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ithahp." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_3326454012478417206", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_1104269375679993309", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_3356689143855407981", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_-4204777114868168006", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_refP;
	outfile__array_Core_0_refP.open("results/_array_Core_0_refP_4323441182954787421", ios::binary | ios::out);
	if(outfile__array_Core_0_refP.is_open())
	{
		outfile__array_Core_0_refP.write(reinterpret_cast<char*>(_array_Core_0_refP), 1*sizeof(_array_Core_0_refP[0]));
		outfile__array_Core_0_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_refP." << endl;
	}
	ofstream outfile__array_Core_0_tauca;
	outfile__array_Core_0_tauca.open("results/_array_Core_0_tauca_535899103515112842", ios::binary | ios::out);
	if(outfile__array_Core_0_tauca.is_open())
	{
		outfile__array_Core_0_tauca.write(reinterpret_cast<char*>(_array_Core_0_tauca), 1*sizeof(_array_Core_0_tauca[0]));
		outfile__array_Core_0_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tauca." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_7818242444395259596", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_-7101980542745204754", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_ampa;
	outfile__array_Core_1_C_syn_ampa.open("results/_array_Core_1_C_syn_ampa_-8209276117918636017", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_ampa.is_open())
	{
		outfile__array_Core_1_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_C_syn_ampa), 256*sizeof(_array_Core_1_C_syn_ampa[0]));
		outfile__array_Core_1_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_a;
	outfile__array_Core_1_C_syn_gaba_a.open("results/_array_Core_1_C_syn_gaba_a_7535560943162744200", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_a), 256*sizeof(_array_Core_1_C_syn_gaba_a[0]));
		outfile__array_Core_1_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_b;
	outfile__array_Core_1_C_syn_gaba_b.open("results/_array_Core_1_C_syn_gaba_b_-2168582343302397228", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_b), 256*sizeof(_array_Core_1_C_syn_gaba_b[0]));
		outfile__array_Core_1_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_nmda;
	outfile__array_Core_1_C_syn_nmda.open("results/_array_Core_1_C_syn_nmda_-6979442182694391367", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_nmda.is_open())
	{
		outfile__array_Core_1_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_C_syn_nmda), 256*sizeof(_array_Core_1_C_syn_nmda[0]));
		outfile__array_Core_1_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Cahp;
	outfile__array_Core_1_Cahp.open("results/_array_Core_1_Cahp_-8314654286297230527", ios::binary | ios::out);
	if(outfile__array_Core_1_Cahp.is_open())
	{
		outfile__array_Core_1_Cahp.write(reinterpret_cast<char*>(_array_Core_1_Cahp), 1*sizeof(_array_Core_1_Cahp[0]));
		outfile__array_Core_1_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cahp." << endl;
	}
	ofstream outfile__array_Core_1_Cmem;
	outfile__array_Core_1_Cmem.open("results/_array_Core_1_Cmem_-5401330278895975207", ios::binary | ios::out);
	if(outfile__array_Core_1_Cmem.is_open())
	{
		outfile__array_Core_1_Cmem.write(reinterpret_cast<char*>(_array_Core_1_Cmem), 1*sizeof(_array_Core_1_Cmem[0]));
		outfile__array_Core_1_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cmem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_-232206152522002666", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_ampa;
	outfile__array_Core_1_I_g_syn_ampa.open("results/_array_Core_1_I_g_syn_ampa_-2580480822450550875", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_ampa), 256*sizeof(_array_Core_1_I_g_syn_ampa[0]));
		outfile__array_Core_1_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_a;
	outfile__array_Core_1_I_g_syn_gaba_a.open("results/_array_Core_1_I_g_syn_gaba_a_2089442558286441169", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_a), 256*sizeof(_array_Core_1_I_g_syn_gaba_a[0]));
		outfile__array_Core_1_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_b;
	outfile__array_Core_1_I_g_syn_gaba_b.open("results/_array_Core_1_I_g_syn_gaba_b_6852432493704270146", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_b), 256*sizeof(_array_Core_1_I_g_syn_gaba_b[0]));
		outfile__array_Core_1_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_nmda;
	outfile__array_Core_1_I_g_syn_nmda.open("results/_array_Core_1_I_g_syn_nmda_-3935242203266163756", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_nmda), 256*sizeof(_array_Core_1_I_g_syn_nmda[0]));
		outfile__array_Core_1_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_ampa;
	outfile__array_Core_1_I_syn_ampa.open("results/_array_Core_1_I_syn_ampa_-125080959831960392", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_syn_ampa), 256*sizeof(_array_Core_1_I_syn_ampa[0]));
		outfile__array_Core_1_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_a;
	outfile__array_Core_1_I_syn_gaba_a.open("results/_array_Core_1_I_syn_gaba_a_6877806706608437064", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_a), 256*sizeof(_array_Core_1_I_syn_gaba_a[0]));
		outfile__array_Core_1_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_b;
	outfile__array_Core_1_I_syn_gaba_b.open("results/_array_Core_1_I_syn_gaba_b_-3446303410304511463", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_b), 256*sizeof(_array_Core_1_I_syn_gaba_b[0]));
		outfile__array_Core_1_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_nmda;
	outfile__array_Core_1_I_syn_nmda.open("results/_array_Core_1_I_syn_nmda_9132218608744532409", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_syn_nmda), 256*sizeof(_array_Core_1_I_syn_nmda[0]));
		outfile__array_Core_1_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_ampa;
	outfile__array_Core_1_I_tau_syn_ampa.open("results/_array_Core_1_I_tau_syn_ampa_-2687027583268933489", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_ampa), 256*sizeof(_array_Core_1_I_tau_syn_ampa[0]));
		outfile__array_Core_1_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_a;
	outfile__array_Core_1_I_tau_syn_gaba_a.open("results/_array_Core_1_I_tau_syn_gaba_a_-4595497714531288458", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_a), 256*sizeof(_array_Core_1_I_tau_syn_gaba_a[0]));
		outfile__array_Core_1_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_b;
	outfile__array_Core_1_I_tau_syn_gaba_b.open("results/_array_Core_1_I_tau_syn_gaba_b_-4584042576454150335", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_b), 256*sizeof(_array_Core_1_I_tau_syn_gaba_b[0]));
		outfile__array_Core_1_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_nmda;
	outfile__array_Core_1_I_tau_syn_nmda.open("results/_array_Core_1_I_tau_syn_nmda_5374771777909563564", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_nmda), 256*sizeof(_array_Core_1_I_tau_syn_nmda[0]));
		outfile__array_Core_1_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_ampa;
	outfile__array_Core_1_I_wo_syn_ampa.open("results/_array_Core_1_I_wo_syn_ampa_-351642274608228032", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_ampa), 256*sizeof(_array_Core_1_I_wo_syn_ampa[0]));
		outfile__array_Core_1_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_a;
	outfile__array_Core_1_I_wo_syn_gaba_a.open("results/_array_Core_1_I_wo_syn_gaba_a_2792906799952620800", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_a), 256*sizeof(_array_Core_1_I_wo_syn_gaba_a[0]));
		outfile__array_Core_1_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_b;
	outfile__array_Core_1_I_wo_syn_gaba_b.open("results/_array_Core_1_I_wo_syn_gaba_b_62342981815091055", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_b), 256*sizeof(_array_Core_1_I_wo_syn_gaba_b[0]));
		outfile__array_Core_1_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_nmda;
	outfile__array_Core_1_I_wo_syn_nmda.open("results/_array_Core_1_I_wo_syn_nmda_-3403863078091951568", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_nmda), 256*sizeof(_array_Core_1_I_wo_syn_nmda[0]));
		outfile__array_Core_1_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Iagain;
	outfile__array_Core_1_Iagain.open("results/_array_Core_1_Iagain_8575457751711010793", ios::binary | ios::out);
	if(outfile__array_Core_1_Iagain.is_open())
	{
		outfile__array_Core_1_Iagain.write(reinterpret_cast<char*>(_array_Core_1_Iagain), 1*sizeof(_array_Core_1_Iagain[0]));
		outfile__array_Core_1_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iagain." << endl;
	}
	ofstream outfile__array_Core_1_Iahp;
	outfile__array_Core_1_Iahp.open("results/_array_Core_1_Iahp_-5375786080890521685", ios::binary | ios::out);
	if(outfile__array_Core_1_Iahp.is_open())
	{
		outfile__array_Core_1_Iahp.write(reinterpret_cast<char*>(_array_Core_1_Iahp), 256*sizeof(_array_Core_1_Iahp[0]));
		outfile__array_Core_1_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iahp." << endl;
	}
	ofstream outfile__array_Core_1_Ianorm;
	outfile__array_Core_1_Ianorm.open("results/_array_Core_1_Ianorm_-3920157793924843828", ios::binary | ios::out);
	if(outfile__array_Core_1_Ianorm.is_open())
	{
		outfile__array_Core_1_Ianorm.write(reinterpret_cast<char*>(_array_Core_1_Ianorm), 1*sizeof(_array_Core_1_Ianorm[0]));
		outfile__array_Core_1_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ianorm." << endl;
	}
	ofstream outfile__array_Core_1_Iath;
	outfile__array_Core_1_Iath.open("results/_array_Core_1_Iath_-4956632513094166933", ios::binary | ios::out);
	if(outfile__array_Core_1_Iath.is_open())
	{
		outfile__array_Core_1_Iath.write(reinterpret_cast<char*>(_array_Core_1_Iath), 1*sizeof(_array_Core_1_Iath[0]));
		outfile__array_Core_1_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iath." << endl;
	}
	ofstream outfile__array_Core_1_Ica;
	outfile__array_Core_1_Ica.open("results/_array_Core_1_Ica_-5469504909106664151", ios::binary | ios::out);
	if(outfile__array_Core_1_Ica.is_open())
	{
		outfile__array_Core_1_Ica.write(reinterpret_cast<char*>(_array_Core_1_Ica), 256*sizeof(_array_Core_1_Ica[0]));
		outfile__array_Core_1_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ica." << endl;
	}
	ofstream outfile__array_Core_1_Iconst;
	outfile__array_Core_1_Iconst.open("results/_array_Core_1_Iconst_-7329107151554662828", ios::binary | ios::out);
	if(outfile__array_Core_1_Iconst.is_open())
	{
		outfile__array_Core_1_Iconst.write(reinterpret_cast<char*>(_array_Core_1_Iconst), 256*sizeof(_array_Core_1_Iconst[0]));
		outfile__array_Core_1_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iconst." << endl;
	}
	ofstream outfile__array_Core_1_Imem;
	outfile__array_Core_1_Imem.open("results/_array_Core_1_Imem_-4579790879173430724", ios::binary | ios::out);
	if(outfile__array_Core_1_Imem.is_open())
	{
		outfile__array_Core_1_Imem.write(reinterpret_cast<char*>(_array_Core_1_Imem), 256*sizeof(_array_Core_1_Imem[0]));
		outfile__array_Core_1_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Imem." << endl;
	}
	ofstream outfile__array_Core_1_Io;
	outfile__array_Core_1_Io.open("results/_array_Core_1_Io_2051992692971300644", ios::binary | ios::out);
	if(outfile__array_Core_1_Io.is_open())
	{
		outfile__array_Core_1_Io.write(reinterpret_cast<char*>(_array_Core_1_Io), 1*sizeof(_array_Core_1_Io[0]));
		outfile__array_Core_1_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Io." << endl;
	}
	ofstream outfile__array_Core_1_Ireset;
	outfile__array_Core_1_Ireset.open("results/_array_Core_1_Ireset_7470638817693151481", ios::binary | ios::out);
	if(outfile__array_Core_1_Ireset.is_open())
	{
		outfile__array_Core_1_Ireset.write(reinterpret_cast<char*>(_array_Core_1_Ireset), 1*sizeof(_array_Core_1_Ireset[0]));
		outfile__array_Core_1_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ireset." << endl;
	}
	ofstream outfile__array_Core_1_Ishunt;
	outfile__array_Core_1_Ishunt.open("results/_array_Core_1_Ishunt_-6575342311217603153", ios::binary | ios::out);
	if(outfile__array_Core_1_Ishunt.is_open())
	{
		outfile__array_Core_1_Ishunt.write(reinterpret_cast<char*>(_array_Core_1_Ishunt), 256*sizeof(_array_Core_1_Ishunt[0]));
		outfile__array_Core_1_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ishunt." << endl;
	}
	ofstream outfile__array_Core_1_Ispkthr;
	outfile__array_Core_1_Ispkthr.open("results/_array_Core_1_Ispkthr_5012933254727155615", ios::binary | ios::out);
	if(outfile__array_Core_1_Ispkthr.is_open())
	{
		outfile__array_Core_1_Ispkthr.write(reinterpret_cast<char*>(_array_Core_1_Ispkthr), 1*sizeof(_array_Core_1_Ispkthr[0]));
		outfile__array_Core_1_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_1_Itau;
	outfile__array_Core_1_Itau.open("results/_array_Core_1_Itau_6822748929778334885", ios::binary | ios::out);
	if(outfile__array_Core_1_Itau.is_open())
	{
		outfile__array_Core_1_Itau.write(reinterpret_cast<char*>(_array_Core_1_Itau), 1*sizeof(_array_Core_1_Itau[0]));
		outfile__array_Core_1_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itau." << endl;
	}
	ofstream outfile__array_Core_1_Itauahp;
	outfile__array_Core_1_Itauahp.open("results/_array_Core_1_Itauahp_8428647666833086915", ios::binary | ios::out);
	if(outfile__array_Core_1_Itauahp.is_open())
	{
		outfile__array_Core_1_Itauahp.write(reinterpret_cast<char*>(_array_Core_1_Itauahp), 1*sizeof(_array_Core_1_Itauahp[0]));
		outfile__array_Core_1_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itauahp." << endl;
	}
	ofstream outfile__array_Core_1_Ith;
	outfile__array_Core_1_Ith.open("results/_array_Core_1_Ith_549741939080486927", ios::binary | ios::out);
	if(outfile__array_Core_1_Ith.is_open())
	{
		outfile__array_Core_1_Ith.write(reinterpret_cast<char*>(_array_Core_1_Ith), 1*sizeof(_array_Core_1_Ith[0]));
		outfile__array_Core_1_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ith." << endl;
	}
	ofstream outfile__array_Core_1_Ithahp;
	outfile__array_Core_1_Ithahp.open("results/_array_Core_1_Ithahp_-7644281417115383228", ios::binary | ios::out);
	if(outfile__array_Core_1_Ithahp.is_open())
	{
		outfile__array_Core_1_Ithahp.write(reinterpret_cast<char*>(_array_Core_1_Ithahp), 1*sizeof(_array_Core_1_Ithahp[0]));
		outfile__array_Core_1_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ithahp." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_2511817867336179589", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-5432758351800293535", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-7099565961005949541", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_-3827826060712286092", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_refP;
	outfile__array_Core_1_refP.open("results/_array_Core_1_refP_1530197497885673559", ios::binary | ios::out);
	if(outfile__array_Core_1_refP.is_open())
	{
		outfile__array_Core_1_refP.write(reinterpret_cast<char*>(_array_Core_1_refP), 1*sizeof(_array_Core_1_refP[0]));
		outfile__array_Core_1_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_refP." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_4__sub_idx;
	outfile__array_Core_1_subgroup_4__sub_idx.open("results/_array_Core_1_subgroup_4__sub_idx_-5335280255869417053", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_4__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_4__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_4__sub_idx), 2*sizeof(_array_Core_1_subgroup_4__sub_idx[0]));
		outfile__array_Core_1_subgroup_4__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_4__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_5__sub_idx;
	outfile__array_Core_1_subgroup_5__sub_idx.open("results/_array_Core_1_subgroup_5__sub_idx_-529979976362271280", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_5__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_5__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_5__sub_idx), 2*sizeof(_array_Core_1_subgroup_5__sub_idx[0]));
		outfile__array_Core_1_subgroup_5__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_5__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_6__sub_idx;
	outfile__array_Core_1_subgroup_6__sub_idx.open("results/_array_Core_1_subgroup_6__sub_idx_260973829530587460", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_6__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_6__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_6__sub_idx), 2*sizeof(_array_Core_1_subgroup_6__sub_idx[0]));
		outfile__array_Core_1_subgroup_6__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_6__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_7__sub_idx;
	outfile__array_Core_1_subgroup_7__sub_idx.open("results/_array_Core_1_subgroup_7__sub_idx_2197281156388847949", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_7__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_7__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_7__sub_idx), 2*sizeof(_array_Core_1_subgroup_7__sub_idx[0]));
		outfile__array_Core_1_subgroup_7__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_7__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tauca;
	outfile__array_Core_1_tauca.open("results/_array_Core_1_tauca_-6800757841707398262", ios::binary | ios::out);
	if(outfile__array_Core_1_tauca.is_open())
	{
		outfile__array_Core_1_tauca.write(reinterpret_cast<char*>(_array_Core_1_tauca), 1*sizeof(_array_Core_1_tauca[0]));
		outfile__array_Core_1_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tauca." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-7745508939195861510", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_-4658789975836607825", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_ampa;
	outfile__array_Core_2_C_syn_ampa.open("results/_array_Core_2_C_syn_ampa_-3148807629356599233", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_ampa.is_open())
	{
		outfile__array_Core_2_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_C_syn_ampa), 256*sizeof(_array_Core_2_C_syn_ampa[0]));
		outfile__array_Core_2_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_a;
	outfile__array_Core_2_C_syn_gaba_a.open("results/_array_Core_2_C_syn_gaba_a_692664199448743028", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_a), 256*sizeof(_array_Core_2_C_syn_gaba_a[0]));
		outfile__array_Core_2_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_b;
	outfile__array_Core_2_C_syn_gaba_b.open("results/_array_Core_2_C_syn_gaba_b_-5427338215235917887", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_b), 256*sizeof(_array_Core_2_C_syn_gaba_b[0]));
		outfile__array_Core_2_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_nmda;
	outfile__array_Core_2_C_syn_nmda.open("results/_array_Core_2_C_syn_nmda_6184376715878600057", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_nmda.is_open())
	{
		outfile__array_Core_2_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_C_syn_nmda), 256*sizeof(_array_Core_2_C_syn_nmda[0]));
		outfile__array_Core_2_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Cahp;
	outfile__array_Core_2_Cahp.open("results/_array_Core_2_Cahp_4380794236079897220", ios::binary | ios::out);
	if(outfile__array_Core_2_Cahp.is_open())
	{
		outfile__array_Core_2_Cahp.write(reinterpret_cast<char*>(_array_Core_2_Cahp), 1*sizeof(_array_Core_2_Cahp[0]));
		outfile__array_Core_2_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cahp." << endl;
	}
	ofstream outfile__array_Core_2_Cmem;
	outfile__array_Core_2_Cmem.open("results/_array_Core_2_Cmem_7085948643132242059", ios::binary | ios::out);
	if(outfile__array_Core_2_Cmem.is_open())
	{
		outfile__array_Core_2_Cmem.write(reinterpret_cast<char*>(_array_Core_2_Cmem), 1*sizeof(_array_Core_2_Cmem[0]));
		outfile__array_Core_2_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cmem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_-3129525704298514868", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_ampa;
	outfile__array_Core_2_I_g_syn_ampa.open("results/_array_Core_2_I_g_syn_ampa_-1375704207569174310", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_ampa), 256*sizeof(_array_Core_2_I_g_syn_ampa[0]));
		outfile__array_Core_2_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_a;
	outfile__array_Core_2_I_g_syn_gaba_a.open("results/_array_Core_2_I_g_syn_gaba_a_3879071550697624570", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_a), 256*sizeof(_array_Core_2_I_g_syn_gaba_a[0]));
		outfile__array_Core_2_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_b;
	outfile__array_Core_2_I_g_syn_gaba_b.open("results/_array_Core_2_I_g_syn_gaba_b_8267114259659122002", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_b), 256*sizeof(_array_Core_2_I_g_syn_gaba_b[0]));
		outfile__array_Core_2_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_nmda;
	outfile__array_Core_2_I_g_syn_nmda.open("results/_array_Core_2_I_g_syn_nmda_-8033637106213361694", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_nmda), 256*sizeof(_array_Core_2_I_g_syn_nmda[0]));
		outfile__array_Core_2_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_ampa;
	outfile__array_Core_2_I_syn_ampa.open("results/_array_Core_2_I_syn_ampa_860216947147051812", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_syn_ampa), 256*sizeof(_array_Core_2_I_syn_ampa[0]));
		outfile__array_Core_2_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_a;
	outfile__array_Core_2_I_syn_gaba_a.open("results/_array_Core_2_I_syn_gaba_a_6028912462827289", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_a), 256*sizeof(_array_Core_2_I_syn_gaba_a[0]));
		outfile__array_Core_2_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_b;
	outfile__array_Core_2_I_syn_gaba_b.open("results/_array_Core_2_I_syn_gaba_b_-5917628129264882281", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_b), 256*sizeof(_array_Core_2_I_syn_gaba_b[0]));
		outfile__array_Core_2_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_nmda;
	outfile__array_Core_2_I_syn_nmda.open("results/_array_Core_2_I_syn_nmda_8482969576769072095", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_syn_nmda), 256*sizeof(_array_Core_2_I_syn_nmda[0]));
		outfile__array_Core_2_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_ampa;
	outfile__array_Core_2_I_tau_syn_ampa.open("results/_array_Core_2_I_tau_syn_ampa_868214608503702397", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_ampa), 256*sizeof(_array_Core_2_I_tau_syn_ampa[0]));
		outfile__array_Core_2_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_a;
	outfile__array_Core_2_I_tau_syn_gaba_a.open("results/_array_Core_2_I_tau_syn_gaba_a_6886538419846452342", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_a), 256*sizeof(_array_Core_2_I_tau_syn_gaba_a[0]));
		outfile__array_Core_2_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_b;
	outfile__array_Core_2_I_tau_syn_gaba_b.open("results/_array_Core_2_I_tau_syn_gaba_b_-4591671854771311250", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_b), 256*sizeof(_array_Core_2_I_tau_syn_gaba_b[0]));
		outfile__array_Core_2_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_nmda;
	outfile__array_Core_2_I_tau_syn_nmda.open("results/_array_Core_2_I_tau_syn_nmda_2863101385885589395", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_nmda), 256*sizeof(_array_Core_2_I_tau_syn_nmda[0]));
		outfile__array_Core_2_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_ampa;
	outfile__array_Core_2_I_wo_syn_ampa.open("results/_array_Core_2_I_wo_syn_ampa_1706587461434206997", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_ampa), 256*sizeof(_array_Core_2_I_wo_syn_ampa[0]));
		outfile__array_Core_2_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_a;
	outfile__array_Core_2_I_wo_syn_gaba_a.open("results/_array_Core_2_I_wo_syn_gaba_a_-1368291575075545185", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_a), 256*sizeof(_array_Core_2_I_wo_syn_gaba_a[0]));
		outfile__array_Core_2_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_b;
	outfile__array_Core_2_I_wo_syn_gaba_b.open("results/_array_Core_2_I_wo_syn_gaba_b_2581879908314691185", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_b), 256*sizeof(_array_Core_2_I_wo_syn_gaba_b[0]));
		outfile__array_Core_2_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_nmda;
	outfile__array_Core_2_I_wo_syn_nmda.open("results/_array_Core_2_I_wo_syn_nmda_-2609964675797333613", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_nmda), 256*sizeof(_array_Core_2_I_wo_syn_nmda[0]));
		outfile__array_Core_2_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Iagain;
	outfile__array_Core_2_Iagain.open("results/_array_Core_2_Iagain_4215238727334051919", ios::binary | ios::out);
	if(outfile__array_Core_2_Iagain.is_open())
	{
		outfile__array_Core_2_Iagain.write(reinterpret_cast<char*>(_array_Core_2_Iagain), 1*sizeof(_array_Core_2_Iagain[0]));
		outfile__array_Core_2_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iagain." << endl;
	}
	ofstream outfile__array_Core_2_Iahp;
	outfile__array_Core_2_Iahp.open("results/_array_Core_2_Iahp_5450546253968608666", ios::binary | ios::out);
	if(outfile__array_Core_2_Iahp.is_open())
	{
		outfile__array_Core_2_Iahp.write(reinterpret_cast<char*>(_array_Core_2_Iahp), 256*sizeof(_array_Core_2_Iahp[0]));
		outfile__array_Core_2_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iahp." << endl;
	}
	ofstream outfile__array_Core_2_Ianorm;
	outfile__array_Core_2_Ianorm.open("results/_array_Core_2_Ianorm_-5934245910941432919", ios::binary | ios::out);
	if(outfile__array_Core_2_Ianorm.is_open())
	{
		outfile__array_Core_2_Ianorm.write(reinterpret_cast<char*>(_array_Core_2_Ianorm), 1*sizeof(_array_Core_2_Ianorm[0]));
		outfile__array_Core_2_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ianorm." << endl;
	}
	ofstream outfile__array_Core_2_Iath;
	outfile__array_Core_2_Iath.open("results/_array_Core_2_Iath_-6456765841525488579", ios::binary | ios::out);
	if(outfile__array_Core_2_Iath.is_open())
	{
		outfile__array_Core_2_Iath.write(reinterpret_cast<char*>(_array_Core_2_Iath), 1*sizeof(_array_Core_2_Iath[0]));
		outfile__array_Core_2_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iath." << endl;
	}
	ofstream outfile__array_Core_2_Ica;
	outfile__array_Core_2_Ica.open("results/_array_Core_2_Ica_-8304935434971901439", ios::binary | ios::out);
	if(outfile__array_Core_2_Ica.is_open())
	{
		outfile__array_Core_2_Ica.write(reinterpret_cast<char*>(_array_Core_2_Ica), 256*sizeof(_array_Core_2_Ica[0]));
		outfile__array_Core_2_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ica." << endl;
	}
	ofstream outfile__array_Core_2_Iconst;
	outfile__array_Core_2_Iconst.open("results/_array_Core_2_Iconst_2816795645305878179", ios::binary | ios::out);
	if(outfile__array_Core_2_Iconst.is_open())
	{
		outfile__array_Core_2_Iconst.write(reinterpret_cast<char*>(_array_Core_2_Iconst), 256*sizeof(_array_Core_2_Iconst[0]));
		outfile__array_Core_2_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iconst." << endl;
	}
	ofstream outfile__array_Core_2_Imem;
	outfile__array_Core_2_Imem.open("results/_array_Core_2_Imem_2770739558628956899", ios::binary | ios::out);
	if(outfile__array_Core_2_Imem.is_open())
	{
		outfile__array_Core_2_Imem.write(reinterpret_cast<char*>(_array_Core_2_Imem), 256*sizeof(_array_Core_2_Imem[0]));
		outfile__array_Core_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Imem." << endl;
	}
	ofstream outfile__array_Core_2_Io;
	outfile__array_Core_2_Io.open("results/_array_Core_2_Io_-1518559676730706165", ios::binary | ios::out);
	if(outfile__array_Core_2_Io.is_open())
	{
		outfile__array_Core_2_Io.write(reinterpret_cast<char*>(_array_Core_2_Io), 1*sizeof(_array_Core_2_Io[0]));
		outfile__array_Core_2_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Io." << endl;
	}
	ofstream outfile__array_Core_2_Ireset;
	outfile__array_Core_2_Ireset.open("results/_array_Core_2_Ireset_1288295925273055538", ios::binary | ios::out);
	if(outfile__array_Core_2_Ireset.is_open())
	{
		outfile__array_Core_2_Ireset.write(reinterpret_cast<char*>(_array_Core_2_Ireset), 1*sizeof(_array_Core_2_Ireset[0]));
		outfile__array_Core_2_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ireset." << endl;
	}
	ofstream outfile__array_Core_2_Ishunt;
	outfile__array_Core_2_Ishunt.open("results/_array_Core_2_Ishunt_-5208385103148377322", ios::binary | ios::out);
	if(outfile__array_Core_2_Ishunt.is_open())
	{
		outfile__array_Core_2_Ishunt.write(reinterpret_cast<char*>(_array_Core_2_Ishunt), 256*sizeof(_array_Core_2_Ishunt[0]));
		outfile__array_Core_2_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ishunt." << endl;
	}
	ofstream outfile__array_Core_2_Ispkthr;
	outfile__array_Core_2_Ispkthr.open("results/_array_Core_2_Ispkthr_-8321313300289440343", ios::binary | ios::out);
	if(outfile__array_Core_2_Ispkthr.is_open())
	{
		outfile__array_Core_2_Ispkthr.write(reinterpret_cast<char*>(_array_Core_2_Ispkthr), 1*sizeof(_array_Core_2_Ispkthr[0]));
		outfile__array_Core_2_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_2_Itau;
	outfile__array_Core_2_Itau.open("results/_array_Core_2_Itau_5554356641096367631", ios::binary | ios::out);
	if(outfile__array_Core_2_Itau.is_open())
	{
		outfile__array_Core_2_Itau.write(reinterpret_cast<char*>(_array_Core_2_Itau), 1*sizeof(_array_Core_2_Itau[0]));
		outfile__array_Core_2_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itau." << endl;
	}
	ofstream outfile__array_Core_2_Itauahp;
	outfile__array_Core_2_Itauahp.open("results/_array_Core_2_Itauahp_-4672538221536863007", ios::binary | ios::out);
	if(outfile__array_Core_2_Itauahp.is_open())
	{
		outfile__array_Core_2_Itauahp.write(reinterpret_cast<char*>(_array_Core_2_Itauahp), 1*sizeof(_array_Core_2_Itauahp[0]));
		outfile__array_Core_2_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itauahp." << endl;
	}
	ofstream outfile__array_Core_2_Ith;
	outfile__array_Core_2_Ith.open("results/_array_Core_2_Ith_2276377093898952595", ios::binary | ios::out);
	if(outfile__array_Core_2_Ith.is_open())
	{
		outfile__array_Core_2_Ith.write(reinterpret_cast<char*>(_array_Core_2_Ith), 1*sizeof(_array_Core_2_Ith[0]));
		outfile__array_Core_2_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ith." << endl;
	}
	ofstream outfile__array_Core_2_Ithahp;
	outfile__array_Core_2_Ithahp.open("results/_array_Core_2_Ithahp_4564950000577087449", ios::binary | ios::out);
	if(outfile__array_Core_2_Ithahp.is_open())
	{
		outfile__array_Core_2_Ithahp.write(reinterpret_cast<char*>(_array_Core_2_Ithahp), 1*sizeof(_array_Core_2_Ithahp[0]));
		outfile__array_Core_2_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ithahp." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_428820372531734389", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_1279755984629043058", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_2441866274927297126", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_-575784469633133542", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_refP;
	outfile__array_Core_2_refP.open("results/_array_Core_2_refP_-3630871946848572396", ios::binary | ios::out);
	if(outfile__array_Core_2_refP.is_open())
	{
		outfile__array_Core_2_refP.write(reinterpret_cast<char*>(_array_Core_2_refP), 1*sizeof(_array_Core_2_refP[0]));
		outfile__array_Core_2_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_refP." << endl;
	}
	ofstream outfile__array_Core_2_tauca;
	outfile__array_Core_2_tauca.open("results/_array_Core_2_tauca_-6361857156767091002", ios::binary | ios::out);
	if(outfile__array_Core_2_tauca.is_open())
	{
		outfile__array_Core_2_tauca.write(reinterpret_cast<char*>(_array_Core_2_tauca), 1*sizeof(_array_Core_2_tauca[0]));
		outfile__array_Core_2_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tauca." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_934720354378770517", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_-7006306983808929656", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_ampa;
	outfile__array_Core_3_C_syn_ampa.open("results/_array_Core_3_C_syn_ampa_-8805454450818345526", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_ampa.is_open())
	{
		outfile__array_Core_3_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_C_syn_ampa), 256*sizeof(_array_Core_3_C_syn_ampa[0]));
		outfile__array_Core_3_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_a;
	outfile__array_Core_3_C_syn_gaba_a.open("results/_array_Core_3_C_syn_gaba_a_2150970624525057397", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_a), 256*sizeof(_array_Core_3_C_syn_gaba_a[0]));
		outfile__array_Core_3_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_b;
	outfile__array_Core_3_C_syn_gaba_b.open("results/_array_Core_3_C_syn_gaba_b_3352519089434890931", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_b), 256*sizeof(_array_Core_3_C_syn_gaba_b[0]));
		outfile__array_Core_3_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_nmda;
	outfile__array_Core_3_C_syn_nmda.open("results/_array_Core_3_C_syn_nmda_-76804896251562097", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_nmda.is_open())
	{
		outfile__array_Core_3_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_C_syn_nmda), 256*sizeof(_array_Core_3_C_syn_nmda[0]));
		outfile__array_Core_3_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Cahp;
	outfile__array_Core_3_Cahp.open("results/_array_Core_3_Cahp_-6917126559185911817", ios::binary | ios::out);
	if(outfile__array_Core_3_Cahp.is_open())
	{
		outfile__array_Core_3_Cahp.write(reinterpret_cast<char*>(_array_Core_3_Cahp), 1*sizeof(_array_Core_3_Cahp[0]));
		outfile__array_Core_3_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cahp." << endl;
	}
	ofstream outfile__array_Core_3_Cmem;
	outfile__array_Core_3_Cmem.open("results/_array_Core_3_Cmem_4583747136459286651", ios::binary | ios::out);
	if(outfile__array_Core_3_Cmem.is_open())
	{
		outfile__array_Core_3_Cmem.write(reinterpret_cast<char*>(_array_Core_3_Cmem), 1*sizeof(_array_Core_3_Cmem[0]));
		outfile__array_Core_3_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cmem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_246985560911136643", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_ampa;
	outfile__array_Core_3_I_g_syn_ampa.open("results/_array_Core_3_I_g_syn_ampa_479685297806251174", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_ampa), 256*sizeof(_array_Core_3_I_g_syn_ampa[0]));
		outfile__array_Core_3_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_a;
	outfile__array_Core_3_I_g_syn_gaba_a.open("results/_array_Core_3_I_g_syn_gaba_a_-3261205800666160723", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_a), 256*sizeof(_array_Core_3_I_g_syn_gaba_a[0]));
		outfile__array_Core_3_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_b;
	outfile__array_Core_3_I_g_syn_gaba_b.open("results/_array_Core_3_I_g_syn_gaba_b_7911347654082798600", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_b), 256*sizeof(_array_Core_3_I_g_syn_gaba_b[0]));
		outfile__array_Core_3_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_nmda;
	outfile__array_Core_3_I_g_syn_nmda.open("results/_array_Core_3_I_g_syn_nmda_-8455109752554857094", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_nmda), 256*sizeof(_array_Core_3_I_g_syn_nmda[0]));
		outfile__array_Core_3_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_ampa;
	outfile__array_Core_3_I_syn_ampa.open("results/_array_Core_3_I_syn_ampa_6109944897732835213", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_syn_ampa), 256*sizeof(_array_Core_3_I_syn_ampa[0]));
		outfile__array_Core_3_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_a;
	outfile__array_Core_3_I_syn_gaba_a.open("results/_array_Core_3_I_syn_gaba_a_-1454941314407792949", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_a), 256*sizeof(_array_Core_3_I_syn_gaba_a[0]));
		outfile__array_Core_3_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_b;
	outfile__array_Core_3_I_syn_gaba_b.open("results/_array_Core_3_I_syn_gaba_b_7673549834801604864", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_b), 256*sizeof(_array_Core_3_I_syn_gaba_b[0]));
		outfile__array_Core_3_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_nmda;
	outfile__array_Core_3_I_syn_nmda.open("results/_array_Core_3_I_syn_nmda_7923010227907335426", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_syn_nmda), 256*sizeof(_array_Core_3_I_syn_nmda[0]));
		outfile__array_Core_3_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_ampa;
	outfile__array_Core_3_I_tau_syn_ampa.open("results/_array_Core_3_I_tau_syn_ampa_-3176786218156911351", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_ampa), 256*sizeof(_array_Core_3_I_tau_syn_ampa[0]));
		outfile__array_Core_3_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_a;
	outfile__array_Core_3_I_tau_syn_gaba_a.open("results/_array_Core_3_I_tau_syn_gaba_a_7632382288599850200", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_a), 256*sizeof(_array_Core_3_I_tau_syn_gaba_a[0]));
		outfile__array_Core_3_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_b;
	outfile__array_Core_3_I_tau_syn_gaba_b.open("results/_array_Core_3_I_tau_syn_gaba_b_-3976941995540630618", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_b), 256*sizeof(_array_Core_3_I_tau_syn_gaba_b[0]));
		outfile__array_Core_3_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_nmda;
	outfile__array_Core_3_I_tau_syn_nmda.open("results/_array_Core_3_I_tau_syn_nmda_-9056661481725155004", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_nmda), 256*sizeof(_array_Core_3_I_tau_syn_nmda[0]));
		outfile__array_Core_3_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_ampa;
	outfile__array_Core_3_I_wo_syn_ampa.open("results/_array_Core_3_I_wo_syn_ampa_4060754133890101712", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_ampa), 256*sizeof(_array_Core_3_I_wo_syn_ampa[0]));
		outfile__array_Core_3_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_a;
	outfile__array_Core_3_I_wo_syn_gaba_a.open("results/_array_Core_3_I_wo_syn_gaba_a_6008166413271662161", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_a), 256*sizeof(_array_Core_3_I_wo_syn_gaba_a[0]));
		outfile__array_Core_3_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_b;
	outfile__array_Core_3_I_wo_syn_gaba_b.open("results/_array_Core_3_I_wo_syn_gaba_b_-8843669805623331339", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_b), 256*sizeof(_array_Core_3_I_wo_syn_gaba_b[0]));
		outfile__array_Core_3_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_nmda;
	outfile__array_Core_3_I_wo_syn_nmda.open("results/_array_Core_3_I_wo_syn_nmda_1227805773970693876", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_nmda), 256*sizeof(_array_Core_3_I_wo_syn_nmda[0]));
		outfile__array_Core_3_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Iagain;
	outfile__array_Core_3_Iagain.open("results/_array_Core_3_Iagain_-2776871999241494274", ios::binary | ios::out);
	if(outfile__array_Core_3_Iagain.is_open())
	{
		outfile__array_Core_3_Iagain.write(reinterpret_cast<char*>(_array_Core_3_Iagain), 1*sizeof(_array_Core_3_Iagain[0]));
		outfile__array_Core_3_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iagain." << endl;
	}
	ofstream outfile__array_Core_3_Iahp;
	outfile__array_Core_3_Iahp.open("results/_array_Core_3_Iahp_-6121646605930238191", ios::binary | ios::out);
	if(outfile__array_Core_3_Iahp.is_open())
	{
		outfile__array_Core_3_Iahp.write(reinterpret_cast<char*>(_array_Core_3_Iahp), 256*sizeof(_array_Core_3_Iahp[0]));
		outfile__array_Core_3_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iahp." << endl;
	}
	ofstream outfile__array_Core_3_Ianorm;
	outfile__array_Core_3_Ianorm.open("results/_array_Core_3_Ianorm_5384458183968782356", ios::binary | ios::out);
	if(outfile__array_Core_3_Ianorm.is_open())
	{
		outfile__array_Core_3_Ianorm.write(reinterpret_cast<char*>(_array_Core_3_Ianorm), 1*sizeof(_array_Core_3_Ianorm[0]));
		outfile__array_Core_3_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ianorm." << endl;
	}
	ofstream outfile__array_Core_3_Iath;
	outfile__array_Core_3_Iath.open("results/_array_Core_3_Iath_2562509726128953147", ios::binary | ios::out);
	if(outfile__array_Core_3_Iath.is_open())
	{
		outfile__array_Core_3_Iath.write(reinterpret_cast<char*>(_array_Core_3_Iath), 1*sizeof(_array_Core_3_Iath[0]));
		outfile__array_Core_3_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iath." << endl;
	}
	ofstream outfile__array_Core_3_Ica;
	outfile__array_Core_3_Ica.open("results/_array_Core_3_Ica_8973420122756811630", ios::binary | ios::out);
	if(outfile__array_Core_3_Ica.is_open())
	{
		outfile__array_Core_3_Ica.write(reinterpret_cast<char*>(_array_Core_3_Ica), 256*sizeof(_array_Core_3_Ica[0]));
		outfile__array_Core_3_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ica." << endl;
	}
	ofstream outfile__array_Core_3_Iconst;
	outfile__array_Core_3_Iconst.open("results/_array_Core_3_Iconst_543314932327789773", ios::binary | ios::out);
	if(outfile__array_Core_3_Iconst.is_open())
	{
		outfile__array_Core_3_Iconst.write(reinterpret_cast<char*>(_array_Core_3_Iconst), 256*sizeof(_array_Core_3_Iconst[0]));
		outfile__array_Core_3_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iconst." << endl;
	}
	ofstream outfile__array_Core_3_Imem;
	outfile__array_Core_3_Imem.open("results/_array_Core_3_Imem_7348367212252679871", ios::binary | ios::out);
	if(outfile__array_Core_3_Imem.is_open())
	{
		outfile__array_Core_3_Imem.write(reinterpret_cast<char*>(_array_Core_3_Imem), 256*sizeof(_array_Core_3_Imem[0]));
		outfile__array_Core_3_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Imem." << endl;
	}
	ofstream outfile__array_Core_3_Io;
	outfile__array_Core_3_Io.open("results/_array_Core_3_Io_-8885395604054121926", ios::binary | ios::out);
	if(outfile__array_Core_3_Io.is_open())
	{
		outfile__array_Core_3_Io.write(reinterpret_cast<char*>(_array_Core_3_Io), 1*sizeof(_array_Core_3_Io[0]));
		outfile__array_Core_3_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Io." << endl;
	}
	ofstream outfile__array_Core_3_Ireset;
	outfile__array_Core_3_Ireset.open("results/_array_Core_3_Ireset_6184385079750843552", ios::binary | ios::out);
	if(outfile__array_Core_3_Ireset.is_open())
	{
		outfile__array_Core_3_Ireset.write(reinterpret_cast<char*>(_array_Core_3_Ireset), 1*sizeof(_array_Core_3_Ireset[0]));
		outfile__array_Core_3_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ireset." << endl;
	}
	ofstream outfile__array_Core_3_Ishunt;
	outfile__array_Core_3_Ishunt.open("results/_array_Core_3_Ishunt_4413966545923807050", ios::binary | ios::out);
	if(outfile__array_Core_3_Ishunt.is_open())
	{
		outfile__array_Core_3_Ishunt.write(reinterpret_cast<char*>(_array_Core_3_Ishunt), 256*sizeof(_array_Core_3_Ishunt[0]));
		outfile__array_Core_3_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ishunt." << endl;
	}
	ofstream outfile__array_Core_3_Ispkthr;
	outfile__array_Core_3_Ispkthr.open("results/_array_Core_3_Ispkthr_-7805127770198754063", ios::binary | ios::out);
	if(outfile__array_Core_3_Ispkthr.is_open())
	{
		outfile__array_Core_3_Ispkthr.write(reinterpret_cast<char*>(_array_Core_3_Ispkthr), 1*sizeof(_array_Core_3_Ispkthr[0]));
		outfile__array_Core_3_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_3_Itau;
	outfile__array_Core_3_Itau.open("results/_array_Core_3_Itau_-5847427449891703597", ios::binary | ios::out);
	if(outfile__array_Core_3_Itau.is_open())
	{
		outfile__array_Core_3_Itau.write(reinterpret_cast<char*>(_array_Core_3_Itau), 1*sizeof(_array_Core_3_Itau[0]));
		outfile__array_Core_3_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itau." << endl;
	}
	ofstream outfile__array_Core_3_Itauahp;
	outfile__array_Core_3_Itauahp.open("results/_array_Core_3_Itauahp_7841170049052167926", ios::binary | ios::out);
	if(outfile__array_Core_3_Itauahp.is_open())
	{
		outfile__array_Core_3_Itauahp.write(reinterpret_cast<char*>(_array_Core_3_Itauahp), 1*sizeof(_array_Core_3_Itauahp[0]));
		outfile__array_Core_3_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itauahp." << endl;
	}
	ofstream outfile__array_Core_3_Ith;
	outfile__array_Core_3_Ith.open("results/_array_Core_3_Ith_-3872731844467564916", ios::binary | ios::out);
	if(outfile__array_Core_3_Ith.is_open())
	{
		outfile__array_Core_3_Ith.write(reinterpret_cast<char*>(_array_Core_3_Ith), 1*sizeof(_array_Core_3_Ith[0]));
		outfile__array_Core_3_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ith." << endl;
	}
	ofstream outfile__array_Core_3_Ithahp;
	outfile__array_Core_3_Ithahp.open("results/_array_Core_3_Ithahp_-4493617556761583686", ios::binary | ios::out);
	if(outfile__array_Core_3_Ithahp.is_open())
	{
		outfile__array_Core_3_Ithahp.write(reinterpret_cast<char*>(_array_Core_3_Ithahp), 1*sizeof(_array_Core_3_Ithahp[0]));
		outfile__array_Core_3_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ithahp." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_8808322865627532406", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_-165878645735978700", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_1190474402283420425", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_8379685542554176605", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_refP;
	outfile__array_Core_3_refP.open("results/_array_Core_3_refP_-739125368374902053", ios::binary | ios::out);
	if(outfile__array_Core_3_refP.is_open())
	{
		outfile__array_Core_3_refP.write(reinterpret_cast<char*>(_array_Core_3_refP), 1*sizeof(_array_Core_3_refP[0]));
		outfile__array_Core_3_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_refP." << endl;
	}
	ofstream outfile__array_Core_3_tauca;
	outfile__array_Core_3_tauca.open("results/_array_Core_3_tauca_6154499722238386936", ios::binary | ios::out);
	if(outfile__array_Core_3_tauca.is_open())
	{
		outfile__array_Core_3_tauca.write(reinterpret_cast<char*>(_array_Core_3_tauca), 1*sizeof(_array_Core_3_tauca[0]));
		outfile__array_Core_3_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tauca." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_1964932953604256259", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_-2278684360469068322", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_3046122012649152006", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_1142952422392914553", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_GABA_B4_N;
	outfile__array_GABA_B4_N.open("results/_array_GABA_B4_N_3119314055360133440", ios::binary | ios::out);
	if(outfile__array_GABA_B4_N.is_open())
	{
		outfile__array_GABA_B4_N.write(reinterpret_cast<char*>(_array_GABA_B4_N), 1*sizeof(_array_GABA_B4_N[0]));
		outfile__array_GABA_B4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B4_N." << endl;
	}
	ofstream outfile__array_GABA_B5_N;
	outfile__array_GABA_B5_N.open("results/_array_GABA_B5_N_1057467078839201378", ios::binary | ios::out);
	if(outfile__array_GABA_B5_N.is_open())
	{
		outfile__array_GABA_B5_N.write(reinterpret_cast<char*>(_array_GABA_B5_N), 1*sizeof(_array_GABA_B5_N[0]));
		outfile__array_GABA_B5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B5_N." << endl;
	}
	ofstream outfile__array_GABA_B6_N;
	outfile__array_GABA_B6_N.open("results/_array_GABA_B6_N_-8311105113516015121", ios::binary | ios::out);
	if(outfile__array_GABA_B6_N.is_open())
	{
		outfile__array_GABA_B6_N.write(reinterpret_cast<char*>(_array_GABA_B6_N), 1*sizeof(_array_GABA_B6_N[0]));
		outfile__array_GABA_B6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B6_N." << endl;
	}
	ofstream outfile__array_GABA_B7_N;
	outfile__array_GABA_B7_N.open("results/_array_GABA_B7_N_-2439322679515258396", ios::binary | ios::out);
	if(outfile__array_GABA_B7_N.is_open())
	{
		outfile__array_GABA_B7_N.write(reinterpret_cast<char*>(_array_GABA_B7_N), 1*sizeof(_array_GABA_B7_N[0]));
		outfile__array_GABA_B7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B7_N." << endl;
	}
	ofstream outfile__array_GABA_B8_N;
	outfile__array_GABA_B8_N.open("results/_array_GABA_B8_N_-4606546963885818763", ios::binary | ios::out);
	if(outfile__array_GABA_B8_N.is_open())
	{
		outfile__array_GABA_B8_N.write(reinterpret_cast<char*>(_array_GABA_B8_N), 1*sizeof(_array_GABA_B8_N[0]));
		outfile__array_GABA_B8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B8_N." << endl;
	}
	ofstream outfile__array_GABA_B9_N;
	outfile__array_GABA_B9_N.open("results/_array_GABA_B9_N_-2823798298957428991", ios::binary | ios::out);
	if(outfile__array_GABA_B9_N.is_open())
	{
		outfile__array_GABA_B9_N.write(reinterpret_cast<char*>(_array_GABA_B9_N), 1*sizeof(_array_GABA_B9_N[0]));
		outfile__array_GABA_B9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B9_N." << endl;
	}
	ofstream outfile__array_inh_neuron_output__source_idx;
	outfile__array_inh_neuron_output__source_idx.open("results/_array_inh_neuron_output__source_idx_5328173628811384753", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output__source_idx.is_open())
	{
		outfile__array_inh_neuron_output__source_idx.write(reinterpret_cast<char*>(_array_inh_neuron_output__source_idx), 2*sizeof(_array_inh_neuron_output__source_idx[0]));
		outfile__array_inh_neuron_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output__source_idx." << endl;
	}
	ofstream outfile__array_inh_neuron_output_count;
	outfile__array_inh_neuron_output_count.open("results/_array_inh_neuron_output_count_8074141593702719689", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output_count.is_open())
	{
		outfile__array_inh_neuron_output_count.write(reinterpret_cast<char*>(_array_inh_neuron_output_count), 2*sizeof(_array_inh_neuron_output_count[0]));
		outfile__array_inh_neuron_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output_count." << endl;
	}
	ofstream outfile__array_inh_neuron_output_N;
	outfile__array_inh_neuron_output_N.open("results/_array_inh_neuron_output_N_1215281553316897419", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output_N.is_open())
	{
		outfile__array_inh_neuron_output_N.write(reinterpret_cast<char*>(_array_inh_neuron_output_N), 1*sizeof(_array_inh_neuron_output_N[0]));
		outfile__array_inh_neuron_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output_N." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__lastindex;
	outfile__array_InpSpikeGenerator__lastindex.open("results/_array_InpSpikeGenerator__lastindex_-1011914769105111602", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__lastindex.is_open())
	{
		outfile__array_InpSpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__lastindex), 1*sizeof(_array_InpSpikeGenerator__lastindex[0]));
		outfile__array_InpSpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__period_bins;
	outfile__array_InpSpikeGenerator__period_bins.open("results/_array_InpSpikeGenerator__period_bins_4121141733380837556", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__period_bins.is_open())
	{
		outfile__array_InpSpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__period_bins), 1*sizeof(_array_InpSpikeGenerator__period_bins[0]));
		outfile__array_InpSpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__spikespace;
	outfile__array_InpSpikeGenerator__spikespace.open("results/_array_InpSpikeGenerator__spikespace_-8457548803112682324", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__spikespace.is_open())
	{
		outfile__array_InpSpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__spikespace), 2*sizeof(_array_InpSpikeGenerator__spikespace[0]));
		outfile__array_InpSpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_i;
	outfile__array_InpSpikeGenerator_i.open("results/_array_InpSpikeGenerator_i_6056564883079720812", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_i.is_open())
	{
		outfile__array_InpSpikeGenerator_i.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_i), 1*sizeof(_array_InpSpikeGenerator_i[0]));
		outfile__array_InpSpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_i." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_period;
	outfile__array_InpSpikeGenerator_period.open("results/_array_InpSpikeGenerator_period_-4798110616100331070", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_period.is_open())
	{
		outfile__array_InpSpikeGenerator_period.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_period), 1*sizeof(_array_InpSpikeGenerator_period[0]));
		outfile__array_InpSpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_period." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_6436973081621544642", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_-1499952587802999168", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_-1993881372392468612", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_NMDA1_N;
	outfile__array_NMDA1_N.open("results/_array_NMDA1_N_-6524661125019144537", ios::binary | ios::out);
	if(outfile__array_NMDA1_N.is_open())
	{
		outfile__array_NMDA1_N.write(reinterpret_cast<char*>(_array_NMDA1_N), 1*sizeof(_array_NMDA1_N[0]));
		outfile__array_NMDA1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA1_N." << endl;
	}
	ofstream outfile__array_NMDA2_N;
	outfile__array_NMDA2_N.open("results/_array_NMDA2_N_-5464131962739915211", ios::binary | ios::out);
	if(outfile__array_NMDA2_N.is_open())
	{
		outfile__array_NMDA2_N.write(reinterpret_cast<char*>(_array_NMDA2_N), 1*sizeof(_array_NMDA2_N[0]));
		outfile__array_NMDA2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA2_N." << endl;
	}
	ofstream outfile__array_NMDA3_N;
	outfile__array_NMDA3_N.open("results/_array_NMDA3_N_1628163307405165132", ios::binary | ios::out);
	if(outfile__array_NMDA3_N.is_open())
	{
		outfile__array_NMDA3_N.write(reinterpret_cast<char*>(_array_NMDA3_N), 1*sizeof(_array_NMDA3_N[0]));
		outfile__array_NMDA3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA3_N." << endl;
	}
	ofstream outfile__array_spikemonitor_1__source_idx;
	outfile__array_spikemonitor_1__source_idx.open("results/_array_spikemonitor_1__source_idx_1079148032093846958", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1__source_idx.is_open())
	{
		outfile__array_spikemonitor_1__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_1__source_idx), 2*sizeof(_array_spikemonitor_1__source_idx[0]));
		outfile__array_spikemonitor_1__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_1_count;
	outfile__array_spikemonitor_1_count.open("results/_array_spikemonitor_1_count_8328031230997363296", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1_count.is_open())
	{
		outfile__array_spikemonitor_1_count.write(reinterpret_cast<char*>(_array_spikemonitor_1_count), 2*sizeof(_array_spikemonitor_1_count[0]));
		outfile__array_spikemonitor_1_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1_count." << endl;
	}
	ofstream outfile__array_spikemonitor_1_N;
	outfile__array_spikemonitor_1_N.open("results/_array_spikemonitor_1_N_3973784410266358269", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1_N.is_open())
	{
		outfile__array_spikemonitor_1_N.write(reinterpret_cast<char*>(_array_spikemonitor_1_N), 1*sizeof(_array_spikemonitor_1_N[0]));
		outfile__array_spikemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1_N." << endl;
	}
	ofstream outfile__array_spikemonitor_2__source_idx;
	outfile__array_spikemonitor_2__source_idx.open("results/_array_spikemonitor_2__source_idx_7431047363197060368", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2__source_idx.is_open())
	{
		outfile__array_spikemonitor_2__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_2__source_idx), 2*sizeof(_array_spikemonitor_2__source_idx[0]));
		outfile__array_spikemonitor_2__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_2_count;
	outfile__array_spikemonitor_2_count.open("results/_array_spikemonitor_2_count_-1365149408486293892", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2_count.is_open())
	{
		outfile__array_spikemonitor_2_count.write(reinterpret_cast<char*>(_array_spikemonitor_2_count), 2*sizeof(_array_spikemonitor_2_count[0]));
		outfile__array_spikemonitor_2_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2_count." << endl;
	}
	ofstream outfile__array_spikemonitor_2_N;
	outfile__array_spikemonitor_2_N.open("results/_array_spikemonitor_2_N_4341692633109089014", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2_N.is_open())
	{
		outfile__array_spikemonitor_2_N.write(reinterpret_cast<char*>(_array_spikemonitor_2_N), 1*sizeof(_array_spikemonitor_2_N[0]));
		outfile__array_spikemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2_N." << endl;
	}
	ofstream outfile__array_spikemonitor__source_idx;
	outfile__array_spikemonitor__source_idx.open("results/_array_spikemonitor__source_idx_-4093629368359209651", ios::binary | ios::out);
	if(outfile__array_spikemonitor__source_idx.is_open())
	{
		outfile__array_spikemonitor__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor__source_idx), 2*sizeof(_array_spikemonitor__source_idx[0]));
		outfile__array_spikemonitor__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_count;
	outfile__array_spikemonitor_count.open("results/_array_spikemonitor_count_-8569128055166170773", ios::binary | ios::out);
	if(outfile__array_spikemonitor_count.is_open())
	{
		outfile__array_spikemonitor_count.write(reinterpret_cast<char*>(_array_spikemonitor_count), 2*sizeof(_array_spikemonitor_count[0]));
		outfile__array_spikemonitor_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_count." << endl;
	}
	ofstream outfile__array_spikemonitor_N;
	outfile__array_spikemonitor_N.open("results/_array_spikemonitor_N_-4750554379987144421", ios::binary | ios::out);
	if(outfile__array_spikemonitor_N.is_open())
	{
		outfile__array_spikemonitor_N.write(reinterpret_cast<char*>(_array_spikemonitor_N), 1*sizeof(_array_spikemonitor_N[0]));
		outfile__array_spikemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_N." << endl;
	}
	ofstream outfile__array_statemonitor_10__indices;
	outfile__array_statemonitor_10__indices.open("results/_array_statemonitor_10__indices_363479848083961546", ios::binary | ios::out);
	if(outfile__array_statemonitor_10__indices.is_open())
	{
		outfile__array_statemonitor_10__indices.write(reinterpret_cast<char*>(_array_statemonitor_10__indices), 1*sizeof(_array_statemonitor_10__indices[0]));
		outfile__array_statemonitor_10__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10__indices." << endl;
	}
	ofstream outfile__array_statemonitor_10_N;
	outfile__array_statemonitor_10_N.open("results/_array_statemonitor_10_N_9101855577611178525", ios::binary | ios::out);
	if(outfile__array_statemonitor_10_N.is_open())
	{
		outfile__array_statemonitor_10_N.write(reinterpret_cast<char*>(_array_statemonitor_10_N), 1*sizeof(_array_statemonitor_10_N[0]));
		outfile__array_statemonitor_10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10_N." << endl;
	}
	ofstream outfile__array_statemonitor_11__indices;
	outfile__array_statemonitor_11__indices.open("results/_array_statemonitor_11__indices_-8985785947236931743", ios::binary | ios::out);
	if(outfile__array_statemonitor_11__indices.is_open())
	{
		outfile__array_statemonitor_11__indices.write(reinterpret_cast<char*>(_array_statemonitor_11__indices), 1*sizeof(_array_statemonitor_11__indices[0]));
		outfile__array_statemonitor_11__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11__indices." << endl;
	}
	ofstream outfile__array_statemonitor_11_N;
	outfile__array_statemonitor_11_N.open("results/_array_statemonitor_11_N_3816822930042412449", ios::binary | ios::out);
	if(outfile__array_statemonitor_11_N.is_open())
	{
		outfile__array_statemonitor_11_N.write(reinterpret_cast<char*>(_array_statemonitor_11_N), 1*sizeof(_array_statemonitor_11_N[0]));
		outfile__array_statemonitor_11_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11_N." << endl;
	}
	ofstream outfile__array_statemonitor_12__indices;
	outfile__array_statemonitor_12__indices.open("results/_array_statemonitor_12__indices_7499786614304589", ios::binary | ios::out);
	if(outfile__array_statemonitor_12__indices.is_open())
	{
		outfile__array_statemonitor_12__indices.write(reinterpret_cast<char*>(_array_statemonitor_12__indices), 1*sizeof(_array_statemonitor_12__indices[0]));
		outfile__array_statemonitor_12__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12__indices." << endl;
	}
	ofstream outfile__array_statemonitor_12_N;
	outfile__array_statemonitor_12_N.open("results/_array_statemonitor_12_N_-5768723796024306985", ios::binary | ios::out);
	if(outfile__array_statemonitor_12_N.is_open())
	{
		outfile__array_statemonitor_12_N.write(reinterpret_cast<char*>(_array_statemonitor_12_N), 1*sizeof(_array_statemonitor_12_N[0]));
		outfile__array_statemonitor_12_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12_N." << endl;
	}
	ofstream outfile__array_statemonitor_14__indices;
	outfile__array_statemonitor_14__indices.open("results/_array_statemonitor_14__indices_8963975523583331410", ios::binary | ios::out);
	if(outfile__array_statemonitor_14__indices.is_open())
	{
		outfile__array_statemonitor_14__indices.write(reinterpret_cast<char*>(_array_statemonitor_14__indices), 1*sizeof(_array_statemonitor_14__indices[0]));
		outfile__array_statemonitor_14__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_14__indices." << endl;
	}
	ofstream outfile__array_statemonitor_14_N;
	outfile__array_statemonitor_14_N.open("results/_array_statemonitor_14_N_6782045208434895980", ios::binary | ios::out);
	if(outfile__array_statemonitor_14_N.is_open())
	{
		outfile__array_statemonitor_14_N.write(reinterpret_cast<char*>(_array_statemonitor_14_N), 1*sizeof(_array_statemonitor_14_N[0]));
		outfile__array_statemonitor_14_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_14_N." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices;
	outfile__array_statemonitor_1__indices.open("results/_array_statemonitor_1__indices_8201864118415893613", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices.is_open())
	{
		outfile__array_statemonitor_1__indices.write(reinterpret_cast<char*>(_array_statemonitor_1__indices), 2*sizeof(_array_statemonitor_1__indices[0]));
		outfile__array_statemonitor_1__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices." << endl;
	}
	ofstream outfile__array_statemonitor_1_N;
	outfile__array_statemonitor_1_N.open("results/_array_statemonitor_1_N_259689913856989826", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N.is_open())
	{
		outfile__array_statemonitor_1_N.write(reinterpret_cast<char*>(_array_statemonitor_1_N), 1*sizeof(_array_statemonitor_1_N[0]));
		outfile__array_statemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results/_array_statemonitor_2__indices_1089845647648703678", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 2*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results/_array_statemonitor_2_N_-7330356846920654026", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor_3__indices;
	outfile__array_statemonitor_3__indices.open("results/_array_statemonitor_3__indices_8707281584225042534", ios::binary | ios::out);
	if(outfile__array_statemonitor_3__indices.is_open())
	{
		outfile__array_statemonitor_3__indices.write(reinterpret_cast<char*>(_array_statemonitor_3__indices), 1*sizeof(_array_statemonitor_3__indices[0]));
		outfile__array_statemonitor_3__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3__indices." << endl;
	}
	ofstream outfile__array_statemonitor_3_N;
	outfile__array_statemonitor_3_N.open("results/_array_statemonitor_3_N_-6167331104629483339", ios::binary | ios::out);
	if(outfile__array_statemonitor_3_N.is_open())
	{
		outfile__array_statemonitor_3_N.write(reinterpret_cast<char*>(_array_statemonitor_3_N), 1*sizeof(_array_statemonitor_3_N[0]));
		outfile__array_statemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3_N." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results/_array_statemonitor_4__indices_-2820542715280676718", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 1*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results/_array_statemonitor_4_N_7092917293525482254", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}
	ofstream outfile__array_statemonitor_5__indices;
	outfile__array_statemonitor_5__indices.open("results/_array_statemonitor_5__indices_-6159789918956346803", ios::binary | ios::out);
	if(outfile__array_statemonitor_5__indices.is_open())
	{
		outfile__array_statemonitor_5__indices.write(reinterpret_cast<char*>(_array_statemonitor_5__indices), 1*sizeof(_array_statemonitor_5__indices[0]));
		outfile__array_statemonitor_5__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5__indices." << endl;
	}
	ofstream outfile__array_statemonitor_5_N;
	outfile__array_statemonitor_5_N.open("results/_array_statemonitor_5_N_-3219596613072156883", ios::binary | ios::out);
	if(outfile__array_statemonitor_5_N.is_open())
	{
		outfile__array_statemonitor_5_N.write(reinterpret_cast<char*>(_array_statemonitor_5_N), 1*sizeof(_array_statemonitor_5_N[0]));
		outfile__array_statemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor_6__indices;
	outfile__array_statemonitor_6__indices.open("results/_array_statemonitor_6__indices_6969426025225139285", ios::binary | ios::out);
	if(outfile__array_statemonitor_6__indices.is_open())
	{
		outfile__array_statemonitor_6__indices.write(reinterpret_cast<char*>(_array_statemonitor_6__indices), 1*sizeof(_array_statemonitor_6__indices[0]));
		outfile__array_statemonitor_6__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6__indices." << endl;
	}
	ofstream outfile__array_statemonitor_6_N;
	outfile__array_statemonitor_6_N.open("results/_array_statemonitor_6_N_7486702484850307945", ios::binary | ios::out);
	if(outfile__array_statemonitor_6_N.is_open())
	{
		outfile__array_statemonitor_6_N.write(reinterpret_cast<char*>(_array_statemonitor_6_N), 1*sizeof(_array_statemonitor_6_N[0]));
		outfile__array_statemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6_N." << endl;
	}
	ofstream outfile__array_statemonitor_7__indices;
	outfile__array_statemonitor_7__indices.open("results/_array_statemonitor_7__indices_5233052630078584970", ios::binary | ios::out);
	if(outfile__array_statemonitor_7__indices.is_open())
	{
		outfile__array_statemonitor_7__indices.write(reinterpret_cast<char*>(_array_statemonitor_7__indices), 1*sizeof(_array_statemonitor_7__indices[0]));
		outfile__array_statemonitor_7__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7__indices." << endl;
	}
	ofstream outfile__array_statemonitor_7_N;
	outfile__array_statemonitor_7_N.open("results/_array_statemonitor_7_N_4279752743636496419", ios::binary | ios::out);
	if(outfile__array_statemonitor_7_N.is_open())
	{
		outfile__array_statemonitor_7_N.write(reinterpret_cast<char*>(_array_statemonitor_7_N), 1*sizeof(_array_statemonitor_7_N[0]));
		outfile__array_statemonitor_7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7_N." << endl;
	}
	ofstream outfile__array_statemonitor_8__indices;
	outfile__array_statemonitor_8__indices.open("results/_array_statemonitor_8__indices_3672527792136450264", ios::binary | ios::out);
	if(outfile__array_statemonitor_8__indices.is_open())
	{
		outfile__array_statemonitor_8__indices.write(reinterpret_cast<char*>(_array_statemonitor_8__indices), 1*sizeof(_array_statemonitor_8__indices[0]));
		outfile__array_statemonitor_8__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8__indices." << endl;
	}
	ofstream outfile__array_statemonitor_8_N;
	outfile__array_statemonitor_8_N.open("results/_array_statemonitor_8_N_-50470508212484779", ios::binary | ios::out);
	if(outfile__array_statemonitor_8_N.is_open())
	{
		outfile__array_statemonitor_8_N.write(reinterpret_cast<char*>(_array_statemonitor_8_N), 1*sizeof(_array_statemonitor_8_N[0]));
		outfile__array_statemonitor_8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8_N." << endl;
	}
	ofstream outfile__array_statemonitor_9__indices;
	outfile__array_statemonitor_9__indices.open("results/_array_statemonitor_9__indices_469113917349486746", ios::binary | ios::out);
	if(outfile__array_statemonitor_9__indices.is_open())
	{
		outfile__array_statemonitor_9__indices.write(reinterpret_cast<char*>(_array_statemonitor_9__indices), 1*sizeof(_array_statemonitor_9__indices[0]));
		outfile__array_statemonitor_9__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9__indices." << endl;
	}
	ofstream outfile__array_statemonitor_9_N;
	outfile__array_statemonitor_9_N.open("results/_array_statemonitor_9_N_2825502220277789369", ios::binary | ios::out);
	if(outfile__array_statemonitor_9_N.is_open())
	{
		outfile__array_statemonitor_9_N.write(reinterpret_cast<char*>(_array_statemonitor_9_N), 1*sizeof(_array_statemonitor_9_N[0]));
		outfile__array_statemonitor_9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results/_array_statemonitor__indices_-8461072153460745903", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 2*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results/_array_statemonitor_N_2709391703641702729", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_-7762945146536723320", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0__synaptic_post.is_open())
	{
        if (! _dynamic_array_AMPA0__synaptic_post.empty() )
        {
			outfile__dynamic_array_AMPA0__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0__synaptic_post[0]), _dynamic_array_AMPA0__synaptic_post.size()*sizeof(_dynamic_array_AMPA0__synaptic_post[0]));
		    outfile__dynamic_array_AMPA0__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0__synaptic_pre;
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_-7483924213489426662", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0__synaptic_pre.is_open())
	{
        if (! _dynamic_array_AMPA0__synaptic_pre.empty() )
        {
			outfile__dynamic_array_AMPA0__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0__synaptic_pre[0]), _dynamic_array_AMPA0__synaptic_pre.size()*sizeof(_dynamic_array_AMPA0__synaptic_pre[0]));
		    outfile__dynamic_array_AMPA0__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_delay;
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_-1607596326888260878", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_delay.is_open())
	{
        if (! _dynamic_array_AMPA0_delay.empty() )
        {
			outfile__dynamic_array_AMPA0_delay.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_delay[0]), _dynamic_array_AMPA0_delay.size()*sizeof(_dynamic_array_AMPA0_delay[0]));
		    outfile__dynamic_array_AMPA0_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_delay." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_delay_1;
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_-194808182916711233", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_delay_1.is_open())
	{
        if (! _dynamic_array_AMPA0_delay_1.empty() )
        {
			outfile__dynamic_array_AMPA0_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_delay_1[0]), _dynamic_array_AMPA0_delay_1.size()*sizeof(_dynamic_array_AMPA0_delay_1[0]));
		    outfile__dynamic_array_AMPA0_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_N_incoming;
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_-638345905022899292", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_N_incoming.is_open())
	{
        if (! _dynamic_array_AMPA0_N_incoming.empty() )
        {
			outfile__dynamic_array_AMPA0_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_N_incoming[0]), _dynamic_array_AMPA0_N_incoming.size()*sizeof(_dynamic_array_AMPA0_N_incoming[0]));
		    outfile__dynamic_array_AMPA0_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_N_outgoing;
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_-5859376682362798548", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_N_outgoing.is_open())
	{
        if (! _dynamic_array_AMPA0_N_outgoing.empty() )
        {
			outfile__dynamic_array_AMPA0_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_N_outgoing[0]), _dynamic_array_AMPA0_N_outgoing.size()*sizeof(_dynamic_array_AMPA0_N_outgoing[0]));
		    outfile__dynamic_array_AMPA0_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_AMPA0_weight;
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_-1005165420906201605", ios::binary | ios::out);
	if(outfile__dynamic_array_AMPA0_weight.is_open())
	{
        if (! _dynamic_array_AMPA0_weight.empty() )
        {
			outfile__dynamic_array_AMPA0_weight.write(reinterpret_cast<char*>(&_dynamic_array_AMPA0_weight[0]), _dynamic_array_AMPA0_weight.size()*sizeof(_dynamic_array_AMPA0_weight[0]));
		    outfile__dynamic_array_AMPA0_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_AMPA0_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4__synaptic_post;
	outfile__dynamic_array_GABA_B4__synaptic_post.open("results/_dynamic_array_GABA_B4__synaptic_post_-1254205565418042334", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B4__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B4__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4__synaptic_post[0]), _dynamic_array_GABA_B4__synaptic_post.size()*sizeof(_dynamic_array_GABA_B4__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B4__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4__synaptic_pre;
	outfile__dynamic_array_GABA_B4__synaptic_pre.open("results/_dynamic_array_GABA_B4__synaptic_pre_4055330784206144836", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B4__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B4__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4__synaptic_pre[0]), _dynamic_array_GABA_B4__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B4__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B4__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_delay;
	outfile__dynamic_array_GABA_B4_delay.open("results/_dynamic_array_GABA_B4_delay_5115088608537006843", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_delay.is_open())
	{
        if (! _dynamic_array_GABA_B4_delay.empty() )
        {
			outfile__dynamic_array_GABA_B4_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_delay[0]), _dynamic_array_GABA_B4_delay.size()*sizeof(_dynamic_array_GABA_B4_delay[0]));
		    outfile__dynamic_array_GABA_B4_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_delay_1;
	outfile__dynamic_array_GABA_B4_delay_1.open("results/_dynamic_array_GABA_B4_delay_1_-1872000320107447061", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B4_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B4_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_delay_1[0]), _dynamic_array_GABA_B4_delay_1.size()*sizeof(_dynamic_array_GABA_B4_delay_1[0]));
		    outfile__dynamic_array_GABA_B4_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_N_incoming;
	outfile__dynamic_array_GABA_B4_N_incoming.open("results/_dynamic_array_GABA_B4_N_incoming_-5285673543430275963", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B4_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B4_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_N_incoming[0]), _dynamic_array_GABA_B4_N_incoming.size()*sizeof(_dynamic_array_GABA_B4_N_incoming[0]));
		    outfile__dynamic_array_GABA_B4_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_N_outgoing;
	outfile__dynamic_array_GABA_B4_N_outgoing.open("results/_dynamic_array_GABA_B4_N_outgoing_-8734485575684623503", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B4_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B4_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_N_outgoing[0]), _dynamic_array_GABA_B4_N_outgoing.size()*sizeof(_dynamic_array_GABA_B4_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B4_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B4_weight;
	outfile__dynamic_array_GABA_B4_weight.open("results/_dynamic_array_GABA_B4_weight_-5628807036979515379", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B4_weight.is_open())
	{
        if (! _dynamic_array_GABA_B4_weight.empty() )
        {
			outfile__dynamic_array_GABA_B4_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B4_weight[0]), _dynamic_array_GABA_B4_weight.size()*sizeof(_dynamic_array_GABA_B4_weight[0]));
		    outfile__dynamic_array_GABA_B4_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B4_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5__synaptic_post;
	outfile__dynamic_array_GABA_B5__synaptic_post.open("results/_dynamic_array_GABA_B5__synaptic_post_6573839837758086223", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B5__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B5__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5__synaptic_post[0]), _dynamic_array_GABA_B5__synaptic_post.size()*sizeof(_dynamic_array_GABA_B5__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B5__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5__synaptic_pre;
	outfile__dynamic_array_GABA_B5__synaptic_pre.open("results/_dynamic_array_GABA_B5__synaptic_pre_-7902618466013811019", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B5__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B5__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5__synaptic_pre[0]), _dynamic_array_GABA_B5__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B5__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B5__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_delay;
	outfile__dynamic_array_GABA_B5_delay.open("results/_dynamic_array_GABA_B5_delay_1551347154185875048", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_delay.is_open())
	{
        if (! _dynamic_array_GABA_B5_delay.empty() )
        {
			outfile__dynamic_array_GABA_B5_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_delay[0]), _dynamic_array_GABA_B5_delay.size()*sizeof(_dynamic_array_GABA_B5_delay[0]));
		    outfile__dynamic_array_GABA_B5_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_delay_1;
	outfile__dynamic_array_GABA_B5_delay_1.open("results/_dynamic_array_GABA_B5_delay_1_-5367056440857814774", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B5_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B5_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_delay_1[0]), _dynamic_array_GABA_B5_delay_1.size()*sizeof(_dynamic_array_GABA_B5_delay_1[0]));
		    outfile__dynamic_array_GABA_B5_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_N_incoming;
	outfile__dynamic_array_GABA_B5_N_incoming.open("results/_dynamic_array_GABA_B5_N_incoming_-8914050094498947924", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B5_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B5_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_N_incoming[0]), _dynamic_array_GABA_B5_N_incoming.size()*sizeof(_dynamic_array_GABA_B5_N_incoming[0]));
		    outfile__dynamic_array_GABA_B5_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_N_outgoing;
	outfile__dynamic_array_GABA_B5_N_outgoing.open("results/_dynamic_array_GABA_B5_N_outgoing_-1113239346251747495", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B5_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B5_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_N_outgoing[0]), _dynamic_array_GABA_B5_N_outgoing.size()*sizeof(_dynamic_array_GABA_B5_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B5_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B5_weight;
	outfile__dynamic_array_GABA_B5_weight.open("results/_dynamic_array_GABA_B5_weight_4939215046001728462", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B5_weight.is_open())
	{
        if (! _dynamic_array_GABA_B5_weight.empty() )
        {
			outfile__dynamic_array_GABA_B5_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B5_weight[0]), _dynamic_array_GABA_B5_weight.size()*sizeof(_dynamic_array_GABA_B5_weight[0]));
		    outfile__dynamic_array_GABA_B5_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B5_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6__synaptic_post;
	outfile__dynamic_array_GABA_B6__synaptic_post.open("results/_dynamic_array_GABA_B6__synaptic_post_4861871178123345813", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B6__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B6__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6__synaptic_post[0]), _dynamic_array_GABA_B6__synaptic_post.size()*sizeof(_dynamic_array_GABA_B6__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B6__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6__synaptic_pre;
	outfile__dynamic_array_GABA_B6__synaptic_pre.open("results/_dynamic_array_GABA_B6__synaptic_pre_-3887272267280455215", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B6__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B6__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6__synaptic_pre[0]), _dynamic_array_GABA_B6__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B6__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B6__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_delay;
	outfile__dynamic_array_GABA_B6_delay.open("results/_dynamic_array_GABA_B6_delay_281693582164666471", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_delay.is_open())
	{
        if (! _dynamic_array_GABA_B6_delay.empty() )
        {
			outfile__dynamic_array_GABA_B6_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_delay[0]), _dynamic_array_GABA_B6_delay.size()*sizeof(_dynamic_array_GABA_B6_delay[0]));
		    outfile__dynamic_array_GABA_B6_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_delay_1;
	outfile__dynamic_array_GABA_B6_delay_1.open("results/_dynamic_array_GABA_B6_delay_1_-6303882608573315406", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B6_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B6_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_delay_1[0]), _dynamic_array_GABA_B6_delay_1.size()*sizeof(_dynamic_array_GABA_B6_delay_1[0]));
		    outfile__dynamic_array_GABA_B6_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_N_incoming;
	outfile__dynamic_array_GABA_B6_N_incoming.open("results/_dynamic_array_GABA_B6_N_incoming_-8948895493757893875", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B6_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B6_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_N_incoming[0]), _dynamic_array_GABA_B6_N_incoming.size()*sizeof(_dynamic_array_GABA_B6_N_incoming[0]));
		    outfile__dynamic_array_GABA_B6_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_N_outgoing;
	outfile__dynamic_array_GABA_B6_N_outgoing.open("results/_dynamic_array_GABA_B6_N_outgoing_2827068893383914568", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B6_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B6_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_N_outgoing[0]), _dynamic_array_GABA_B6_N_outgoing.size()*sizeof(_dynamic_array_GABA_B6_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B6_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B6_weight;
	outfile__dynamic_array_GABA_B6_weight.open("results/_dynamic_array_GABA_B6_weight_-7475275381574628536", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B6_weight.is_open())
	{
        if (! _dynamic_array_GABA_B6_weight.empty() )
        {
			outfile__dynamic_array_GABA_B6_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B6_weight[0]), _dynamic_array_GABA_B6_weight.size()*sizeof(_dynamic_array_GABA_B6_weight[0]));
		    outfile__dynamic_array_GABA_B6_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B6_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7__synaptic_post;
	outfile__dynamic_array_GABA_B7__synaptic_post.open("results/_dynamic_array_GABA_B7__synaptic_post_8524837717327827261", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B7__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B7__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7__synaptic_post[0]), _dynamic_array_GABA_B7__synaptic_post.size()*sizeof(_dynamic_array_GABA_B7__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B7__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7__synaptic_pre;
	outfile__dynamic_array_GABA_B7__synaptic_pre.open("results/_dynamic_array_GABA_B7__synaptic_pre_-8557971009765689959", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B7__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B7__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7__synaptic_pre[0]), _dynamic_array_GABA_B7__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B7__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B7__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7_delay;
	outfile__dynamic_array_GABA_B7_delay.open("results/_dynamic_array_GABA_B7_delay_-4256665094235302907", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7_delay.is_open())
	{
        if (! _dynamic_array_GABA_B7_delay.empty() )
        {
			outfile__dynamic_array_GABA_B7_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7_delay[0]), _dynamic_array_GABA_B7_delay.size()*sizeof(_dynamic_array_GABA_B7_delay[0]));
		    outfile__dynamic_array_GABA_B7_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7_delay_1;
	outfile__dynamic_array_GABA_B7_delay_1.open("results/_dynamic_array_GABA_B7_delay_1_-3480305286143125010", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B7_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B7_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7_delay_1[0]), _dynamic_array_GABA_B7_delay_1.size()*sizeof(_dynamic_array_GABA_B7_delay_1[0]));
		    outfile__dynamic_array_GABA_B7_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7_N_incoming;
	outfile__dynamic_array_GABA_B7_N_incoming.open("results/_dynamic_array_GABA_B7_N_incoming_-3972550322500884668", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B7_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B7_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7_N_incoming[0]), _dynamic_array_GABA_B7_N_incoming.size()*sizeof(_dynamic_array_GABA_B7_N_incoming[0]));
		    outfile__dynamic_array_GABA_B7_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7_N_outgoing;
	outfile__dynamic_array_GABA_B7_N_outgoing.open("results/_dynamic_array_GABA_B7_N_outgoing_3209700532587414122", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B7_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B7_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7_N_outgoing[0]), _dynamic_array_GABA_B7_N_outgoing.size()*sizeof(_dynamic_array_GABA_B7_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B7_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B7_weight;
	outfile__dynamic_array_GABA_B7_weight.open("results/_dynamic_array_GABA_B7_weight_7404896036241431858", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B7_weight.is_open())
	{
        if (! _dynamic_array_GABA_B7_weight.empty() )
        {
			outfile__dynamic_array_GABA_B7_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B7_weight[0]), _dynamic_array_GABA_B7_weight.size()*sizeof(_dynamic_array_GABA_B7_weight[0]));
		    outfile__dynamic_array_GABA_B7_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B7_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8__synaptic_post;
	outfile__dynamic_array_GABA_B8__synaptic_post.open("results/_dynamic_array_GABA_B8__synaptic_post_1504282943632643353", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B8__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B8__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8__synaptic_post[0]), _dynamic_array_GABA_B8__synaptic_post.size()*sizeof(_dynamic_array_GABA_B8__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B8__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8__synaptic_pre;
	outfile__dynamic_array_GABA_B8__synaptic_pre.open("results/_dynamic_array_GABA_B8__synaptic_pre_-8611784067808344146", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B8__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B8__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8__synaptic_pre[0]), _dynamic_array_GABA_B8__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B8__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B8__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8_delay;
	outfile__dynamic_array_GABA_B8_delay.open("results/_dynamic_array_GABA_B8_delay_-7413519573270055105", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8_delay.is_open())
	{
        if (! _dynamic_array_GABA_B8_delay.empty() )
        {
			outfile__dynamic_array_GABA_B8_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8_delay[0]), _dynamic_array_GABA_B8_delay.size()*sizeof(_dynamic_array_GABA_B8_delay[0]));
		    outfile__dynamic_array_GABA_B8_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8_delay_1;
	outfile__dynamic_array_GABA_B8_delay_1.open("results/_dynamic_array_GABA_B8_delay_1_5116194397936565053", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B8_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B8_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8_delay_1[0]), _dynamic_array_GABA_B8_delay_1.size()*sizeof(_dynamic_array_GABA_B8_delay_1[0]));
		    outfile__dynamic_array_GABA_B8_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8_N_incoming;
	outfile__dynamic_array_GABA_B8_N_incoming.open("results/_dynamic_array_GABA_B8_N_incoming_-165903751015738492", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B8_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B8_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8_N_incoming[0]), _dynamic_array_GABA_B8_N_incoming.size()*sizeof(_dynamic_array_GABA_B8_N_incoming[0]));
		    outfile__dynamic_array_GABA_B8_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8_N_outgoing;
	outfile__dynamic_array_GABA_B8_N_outgoing.open("results/_dynamic_array_GABA_B8_N_outgoing_8167538839251232416", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B8_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B8_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8_N_outgoing[0]), _dynamic_array_GABA_B8_N_outgoing.size()*sizeof(_dynamic_array_GABA_B8_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B8_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B8_weight;
	outfile__dynamic_array_GABA_B8_weight.open("results/_dynamic_array_GABA_B8_weight_575102626753407092", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B8_weight.is_open())
	{
        if (! _dynamic_array_GABA_B8_weight.empty() )
        {
			outfile__dynamic_array_GABA_B8_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B8_weight[0]), _dynamic_array_GABA_B8_weight.size()*sizeof(_dynamic_array_GABA_B8_weight[0]));
		    outfile__dynamic_array_GABA_B8_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B8_weight." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9__synaptic_post;
	outfile__dynamic_array_GABA_B9__synaptic_post.open("results/_dynamic_array_GABA_B9__synaptic_post_6231704156848508834", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9__synaptic_post.is_open())
	{
        if (! _dynamic_array_GABA_B9__synaptic_post.empty() )
        {
			outfile__dynamic_array_GABA_B9__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9__synaptic_post[0]), _dynamic_array_GABA_B9__synaptic_post.size()*sizeof(_dynamic_array_GABA_B9__synaptic_post[0]));
		    outfile__dynamic_array_GABA_B9__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9__synaptic_pre;
	outfile__dynamic_array_GABA_B9__synaptic_pre.open("results/_dynamic_array_GABA_B9__synaptic_pre_6365938772722026699", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9__synaptic_pre.is_open())
	{
        if (! _dynamic_array_GABA_B9__synaptic_pre.empty() )
        {
			outfile__dynamic_array_GABA_B9__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9__synaptic_pre[0]), _dynamic_array_GABA_B9__synaptic_pre.size()*sizeof(_dynamic_array_GABA_B9__synaptic_pre[0]));
		    outfile__dynamic_array_GABA_B9__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_delay;
	outfile__dynamic_array_GABA_B9_delay.open("results/_dynamic_array_GABA_B9_delay_2111051057272160668", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_delay.is_open())
	{
        if (! _dynamic_array_GABA_B9_delay.empty() )
        {
			outfile__dynamic_array_GABA_B9_delay.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_delay[0]), _dynamic_array_GABA_B9_delay.size()*sizeof(_dynamic_array_GABA_B9_delay[0]));
		    outfile__dynamic_array_GABA_B9_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_delay." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_delay_1;
	outfile__dynamic_array_GABA_B9_delay_1.open("results/_dynamic_array_GABA_B9_delay_1_-1542078473493121939", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_delay_1.is_open())
	{
        if (! _dynamic_array_GABA_B9_delay_1.empty() )
        {
			outfile__dynamic_array_GABA_B9_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_delay_1[0]), _dynamic_array_GABA_B9_delay_1.size()*sizeof(_dynamic_array_GABA_B9_delay_1[0]));
		    outfile__dynamic_array_GABA_B9_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_N_incoming;
	outfile__dynamic_array_GABA_B9_N_incoming.open("results/_dynamic_array_GABA_B9_N_incoming_4814705937371813659", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_N_incoming.is_open())
	{
        if (! _dynamic_array_GABA_B9_N_incoming.empty() )
        {
			outfile__dynamic_array_GABA_B9_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_N_incoming[0]), _dynamic_array_GABA_B9_N_incoming.size()*sizeof(_dynamic_array_GABA_B9_N_incoming[0]));
		    outfile__dynamic_array_GABA_B9_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_N_outgoing;
	outfile__dynamic_array_GABA_B9_N_outgoing.open("results/_dynamic_array_GABA_B9_N_outgoing_-2579368924000848085", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_N_outgoing.is_open())
	{
        if (! _dynamic_array_GABA_B9_N_outgoing.empty() )
        {
			outfile__dynamic_array_GABA_B9_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_N_outgoing[0]), _dynamic_array_GABA_B9_N_outgoing.size()*sizeof(_dynamic_array_GABA_B9_N_outgoing[0]));
		    outfile__dynamic_array_GABA_B9_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_GABA_B9_weight;
	outfile__dynamic_array_GABA_B9_weight.open("results/_dynamic_array_GABA_B9_weight_-6209836150546043855", ios::binary | ios::out);
	if(outfile__dynamic_array_GABA_B9_weight.is_open())
	{
        if (! _dynamic_array_GABA_B9_weight.empty() )
        {
			outfile__dynamic_array_GABA_B9_weight.write(reinterpret_cast<char*>(&_dynamic_array_GABA_B9_weight[0]), _dynamic_array_GABA_B9_weight.size()*sizeof(_dynamic_array_GABA_B9_weight[0]));
		    outfile__dynamic_array_GABA_B9_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_GABA_B9_weight." << endl;
	}
	ofstream outfile__dynamic_array_inh_neuron_output_i;
	outfile__dynamic_array_inh_neuron_output_i.open("results/_dynamic_array_inh_neuron_output_i_-6991841842987727500", ios::binary | ios::out);
	if(outfile__dynamic_array_inh_neuron_output_i.is_open())
	{
        if (! _dynamic_array_inh_neuron_output_i.empty() )
        {
			outfile__dynamic_array_inh_neuron_output_i.write(reinterpret_cast<char*>(&_dynamic_array_inh_neuron_output_i[0]), _dynamic_array_inh_neuron_output_i.size()*sizeof(_dynamic_array_inh_neuron_output_i[0]));
		    outfile__dynamic_array_inh_neuron_output_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_inh_neuron_output_i." << endl;
	}
	ofstream outfile__dynamic_array_inh_neuron_output_t;
	outfile__dynamic_array_inh_neuron_output_t.open("results/_dynamic_array_inh_neuron_output_t_7875579747548905636", ios::binary | ios::out);
	if(outfile__dynamic_array_inh_neuron_output_t.is_open())
	{
        if (! _dynamic_array_inh_neuron_output_t.empty() )
        {
			outfile__dynamic_array_inh_neuron_output_t.write(reinterpret_cast<char*>(&_dynamic_array_inh_neuron_output_t[0]), _dynamic_array_inh_neuron_output_t.size()*sizeof(_dynamic_array_inh_neuron_output_t[0]));
		    outfile__dynamic_array_inh_neuron_output_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_inh_neuron_output_t." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator__timebins;
	outfile__dynamic_array_InpSpikeGenerator__timebins.open("results/_dynamic_array_InpSpikeGenerator__timebins_-7310478559213792609", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator__timebins.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator__timebins.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator__timebins.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator__timebins[0]), _dynamic_array_InpSpikeGenerator__timebins.size()*sizeof(_dynamic_array_InpSpikeGenerator__timebins[0]));
		    outfile__dynamic_array_InpSpikeGenerator__timebins.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator__timebins." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator_neuron_index;
	outfile__dynamic_array_InpSpikeGenerator_neuron_index.open("results/_dynamic_array_InpSpikeGenerator_neuron_index_-5925061034519387773", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator_neuron_index.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator_neuron_index.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator_neuron_index.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator_neuron_index[0]), _dynamic_array_InpSpikeGenerator_neuron_index.size()*sizeof(_dynamic_array_InpSpikeGenerator_neuron_index[0]));
		    outfile__dynamic_array_InpSpikeGenerator_neuron_index.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator_neuron_index." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator_spike_number;
	outfile__dynamic_array_InpSpikeGenerator_spike_number.open("results/_dynamic_array_InpSpikeGenerator_spike_number_2586542992946207663", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator_spike_number.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator_spike_number.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator_spike_number.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator_spike_number[0]), _dynamic_array_InpSpikeGenerator_spike_number.size()*sizeof(_dynamic_array_InpSpikeGenerator_spike_number[0]));
		    outfile__dynamic_array_InpSpikeGenerator_spike_number.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator_spike_number." << endl;
	}
	ofstream outfile__dynamic_array_InpSpikeGenerator_spike_time;
	outfile__dynamic_array_InpSpikeGenerator_spike_time.open("results/_dynamic_array_InpSpikeGenerator_spike_time_2425193997579145889", ios::binary | ios::out);
	if(outfile__dynamic_array_InpSpikeGenerator_spike_time.is_open())
	{
        if (! _dynamic_array_InpSpikeGenerator_spike_time.empty() )
        {
			outfile__dynamic_array_InpSpikeGenerator_spike_time.write(reinterpret_cast<char*>(&_dynamic_array_InpSpikeGenerator_spike_time[0]), _dynamic_array_InpSpikeGenerator_spike_time.size()*sizeof(_dynamic_array_InpSpikeGenerator_spike_time[0]));
		    outfile__dynamic_array_InpSpikeGenerator_spike_time.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_InpSpikeGenerator_spike_time." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_input_i;
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_-1511338543750489308", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_input_i.is_open())
	{
        if (! _dynamic_array_mon_neuron_input_i.empty() )
        {
			outfile__dynamic_array_mon_neuron_input_i.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_input_i[0]), _dynamic_array_mon_neuron_input_i.size()*sizeof(_dynamic_array_mon_neuron_input_i[0]));
		    outfile__dynamic_array_mon_neuron_input_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_input_i." << endl;
	}
	ofstream outfile__dynamic_array_mon_neuron_input_t;
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_5272065153038727721", ios::binary | ios::out);
	if(outfile__dynamic_array_mon_neuron_input_t.is_open())
	{
        if (! _dynamic_array_mon_neuron_input_t.empty() )
        {
			outfile__dynamic_array_mon_neuron_input_t.write(reinterpret_cast<char*>(&_dynamic_array_mon_neuron_input_t[0]), _dynamic_array_mon_neuron_input_t.size()*sizeof(_dynamic_array_mon_neuron_input_t[0]));
		    outfile__dynamic_array_mon_neuron_input_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_mon_neuron_input_t." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1__synaptic_post;
	outfile__dynamic_array_NMDA1__synaptic_post.open("results/_dynamic_array_NMDA1__synaptic_post_-8462611832063064848", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1__synaptic_post.is_open())
	{
        if (! _dynamic_array_NMDA1__synaptic_post.empty() )
        {
			outfile__dynamic_array_NMDA1__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1__synaptic_post[0]), _dynamic_array_NMDA1__synaptic_post.size()*sizeof(_dynamic_array_NMDA1__synaptic_post[0]));
		    outfile__dynamic_array_NMDA1__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1__synaptic_pre;
	outfile__dynamic_array_NMDA1__synaptic_pre.open("results/_dynamic_array_NMDA1__synaptic_pre_8955454327183693778", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1__synaptic_pre.is_open())
	{
        if (! _dynamic_array_NMDA1__synaptic_pre.empty() )
        {
			outfile__dynamic_array_NMDA1__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1__synaptic_pre[0]), _dynamic_array_NMDA1__synaptic_pre.size()*sizeof(_dynamic_array_NMDA1__synaptic_pre[0]));
		    outfile__dynamic_array_NMDA1__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1_delay;
	outfile__dynamic_array_NMDA1_delay.open("results/_dynamic_array_NMDA1_delay_-2790337685238484399", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1_delay.is_open())
	{
        if (! _dynamic_array_NMDA1_delay.empty() )
        {
			outfile__dynamic_array_NMDA1_delay.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1_delay[0]), _dynamic_array_NMDA1_delay.size()*sizeof(_dynamic_array_NMDA1_delay[0]));
		    outfile__dynamic_array_NMDA1_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1_delay." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1_delay_1;
	outfile__dynamic_array_NMDA1_delay_1.open("results/_dynamic_array_NMDA1_delay_1_8305470008983170165", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1_delay_1.is_open())
	{
        if (! _dynamic_array_NMDA1_delay_1.empty() )
        {
			outfile__dynamic_array_NMDA1_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1_delay_1[0]), _dynamic_array_NMDA1_delay_1.size()*sizeof(_dynamic_array_NMDA1_delay_1[0]));
		    outfile__dynamic_array_NMDA1_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1_N_incoming;
	outfile__dynamic_array_NMDA1_N_incoming.open("results/_dynamic_array_NMDA1_N_incoming_-762697748461460936", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1_N_incoming.is_open())
	{
        if (! _dynamic_array_NMDA1_N_incoming.empty() )
        {
			outfile__dynamic_array_NMDA1_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1_N_incoming[0]), _dynamic_array_NMDA1_N_incoming.size()*sizeof(_dynamic_array_NMDA1_N_incoming[0]));
		    outfile__dynamic_array_NMDA1_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1_N_outgoing;
	outfile__dynamic_array_NMDA1_N_outgoing.open("results/_dynamic_array_NMDA1_N_outgoing_1604494628805309816", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1_N_outgoing.is_open())
	{
        if (! _dynamic_array_NMDA1_N_outgoing.empty() )
        {
			outfile__dynamic_array_NMDA1_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1_N_outgoing[0]), _dynamic_array_NMDA1_N_outgoing.size()*sizeof(_dynamic_array_NMDA1_N_outgoing[0]));
		    outfile__dynamic_array_NMDA1_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_NMDA1_weight;
	outfile__dynamic_array_NMDA1_weight.open("results/_dynamic_array_NMDA1_weight_-2459536625608536042", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA1_weight.is_open())
	{
        if (! _dynamic_array_NMDA1_weight.empty() )
        {
			outfile__dynamic_array_NMDA1_weight.write(reinterpret_cast<char*>(&_dynamic_array_NMDA1_weight[0]), _dynamic_array_NMDA1_weight.size()*sizeof(_dynamic_array_NMDA1_weight[0]));
		    outfile__dynamic_array_NMDA1_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA1_weight." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2__synaptic_post;
	outfile__dynamic_array_NMDA2__synaptic_post.open("results/_dynamic_array_NMDA2__synaptic_post_5241433837432637686", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2__synaptic_post.is_open())
	{
        if (! _dynamic_array_NMDA2__synaptic_post.empty() )
        {
			outfile__dynamic_array_NMDA2__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2__synaptic_post[0]), _dynamic_array_NMDA2__synaptic_post.size()*sizeof(_dynamic_array_NMDA2__synaptic_post[0]));
		    outfile__dynamic_array_NMDA2__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2__synaptic_pre;
	outfile__dynamic_array_NMDA2__synaptic_pre.open("results/_dynamic_array_NMDA2__synaptic_pre_-6955258744918430970", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2__synaptic_pre.is_open())
	{
        if (! _dynamic_array_NMDA2__synaptic_pre.empty() )
        {
			outfile__dynamic_array_NMDA2__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2__synaptic_pre[0]), _dynamic_array_NMDA2__synaptic_pre.size()*sizeof(_dynamic_array_NMDA2__synaptic_pre[0]));
		    outfile__dynamic_array_NMDA2__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2_delay;
	outfile__dynamic_array_NMDA2_delay.open("results/_dynamic_array_NMDA2_delay_1263126115182119010", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2_delay.is_open())
	{
        if (! _dynamic_array_NMDA2_delay.empty() )
        {
			outfile__dynamic_array_NMDA2_delay.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2_delay[0]), _dynamic_array_NMDA2_delay.size()*sizeof(_dynamic_array_NMDA2_delay[0]));
		    outfile__dynamic_array_NMDA2_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2_delay." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2_delay_1;
	outfile__dynamic_array_NMDA2_delay_1.open("results/_dynamic_array_NMDA2_delay_1_-4496373785527688886", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2_delay_1.is_open())
	{
        if (! _dynamic_array_NMDA2_delay_1.empty() )
        {
			outfile__dynamic_array_NMDA2_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2_delay_1[0]), _dynamic_array_NMDA2_delay_1.size()*sizeof(_dynamic_array_NMDA2_delay_1[0]));
		    outfile__dynamic_array_NMDA2_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2_N_incoming;
	outfile__dynamic_array_NMDA2_N_incoming.open("results/_dynamic_array_NMDA2_N_incoming_-116047468018884257", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2_N_incoming.is_open())
	{
        if (! _dynamic_array_NMDA2_N_incoming.empty() )
        {
			outfile__dynamic_array_NMDA2_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2_N_incoming[0]), _dynamic_array_NMDA2_N_incoming.size()*sizeof(_dynamic_array_NMDA2_N_incoming[0]));
		    outfile__dynamic_array_NMDA2_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2_N_outgoing;
	outfile__dynamic_array_NMDA2_N_outgoing.open("results/_dynamic_array_NMDA2_N_outgoing_-5223540192882815601", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2_N_outgoing.is_open())
	{
        if (! _dynamic_array_NMDA2_N_outgoing.empty() )
        {
			outfile__dynamic_array_NMDA2_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2_N_outgoing[0]), _dynamic_array_NMDA2_N_outgoing.size()*sizeof(_dynamic_array_NMDA2_N_outgoing[0]));
		    outfile__dynamic_array_NMDA2_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_NMDA2_weight;
	outfile__dynamic_array_NMDA2_weight.open("results/_dynamic_array_NMDA2_weight_8296824592451792839", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA2_weight.is_open())
	{
        if (! _dynamic_array_NMDA2_weight.empty() )
        {
			outfile__dynamic_array_NMDA2_weight.write(reinterpret_cast<char*>(&_dynamic_array_NMDA2_weight[0]), _dynamic_array_NMDA2_weight.size()*sizeof(_dynamic_array_NMDA2_weight[0]));
		    outfile__dynamic_array_NMDA2_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA2_weight." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3__synaptic_post;
	outfile__dynamic_array_NMDA3__synaptic_post.open("results/_dynamic_array_NMDA3__synaptic_post_-8418044910093002999", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3__synaptic_post.is_open())
	{
        if (! _dynamic_array_NMDA3__synaptic_post.empty() )
        {
			outfile__dynamic_array_NMDA3__synaptic_post.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3__synaptic_post[0]), _dynamic_array_NMDA3__synaptic_post.size()*sizeof(_dynamic_array_NMDA3__synaptic_post[0]));
		    outfile__dynamic_array_NMDA3__synaptic_post.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3__synaptic_post." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3__synaptic_pre;
	outfile__dynamic_array_NMDA3__synaptic_pre.open("results/_dynamic_array_NMDA3__synaptic_pre_-3681248106647546877", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3__synaptic_pre.is_open())
	{
        if (! _dynamic_array_NMDA3__synaptic_pre.empty() )
        {
			outfile__dynamic_array_NMDA3__synaptic_pre.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3__synaptic_pre[0]), _dynamic_array_NMDA3__synaptic_pre.size()*sizeof(_dynamic_array_NMDA3__synaptic_pre[0]));
		    outfile__dynamic_array_NMDA3__synaptic_pre.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3__synaptic_pre." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3_delay;
	outfile__dynamic_array_NMDA3_delay.open("results/_dynamic_array_NMDA3_delay_-2017030887883595799", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3_delay.is_open())
	{
        if (! _dynamic_array_NMDA3_delay.empty() )
        {
			outfile__dynamic_array_NMDA3_delay.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3_delay[0]), _dynamic_array_NMDA3_delay.size()*sizeof(_dynamic_array_NMDA3_delay[0]));
		    outfile__dynamic_array_NMDA3_delay.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3_delay." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3_delay_1;
	outfile__dynamic_array_NMDA3_delay_1.open("results/_dynamic_array_NMDA3_delay_1_-2726164004604888424", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3_delay_1.is_open())
	{
        if (! _dynamic_array_NMDA3_delay_1.empty() )
        {
			outfile__dynamic_array_NMDA3_delay_1.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3_delay_1[0]), _dynamic_array_NMDA3_delay_1.size()*sizeof(_dynamic_array_NMDA3_delay_1[0]));
		    outfile__dynamic_array_NMDA3_delay_1.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3_delay_1." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3_N_incoming;
	outfile__dynamic_array_NMDA3_N_incoming.open("results/_dynamic_array_NMDA3_N_incoming_-3107618910230349337", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3_N_incoming.is_open())
	{
        if (! _dynamic_array_NMDA3_N_incoming.empty() )
        {
			outfile__dynamic_array_NMDA3_N_incoming.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3_N_incoming[0]), _dynamic_array_NMDA3_N_incoming.size()*sizeof(_dynamic_array_NMDA3_N_incoming[0]));
		    outfile__dynamic_array_NMDA3_N_incoming.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3_N_incoming." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3_N_outgoing;
	outfile__dynamic_array_NMDA3_N_outgoing.open("results/_dynamic_array_NMDA3_N_outgoing_-1895972572742711271", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3_N_outgoing.is_open())
	{
        if (! _dynamic_array_NMDA3_N_outgoing.empty() )
        {
			outfile__dynamic_array_NMDA3_N_outgoing.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3_N_outgoing[0]), _dynamic_array_NMDA3_N_outgoing.size()*sizeof(_dynamic_array_NMDA3_N_outgoing[0]));
		    outfile__dynamic_array_NMDA3_N_outgoing.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3_N_outgoing." << endl;
	}
	ofstream outfile__dynamic_array_NMDA3_weight;
	outfile__dynamic_array_NMDA3_weight.open("results/_dynamic_array_NMDA3_weight_6789421440545825574", ios::binary | ios::out);
	if(outfile__dynamic_array_NMDA3_weight.is_open())
	{
        if (! _dynamic_array_NMDA3_weight.empty() )
        {
			outfile__dynamic_array_NMDA3_weight.write(reinterpret_cast<char*>(&_dynamic_array_NMDA3_weight[0]), _dynamic_array_NMDA3_weight.size()*sizeof(_dynamic_array_NMDA3_weight[0]));
		    outfile__dynamic_array_NMDA3_weight.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_NMDA3_weight." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_1_i;
	outfile__dynamic_array_spikemonitor_1_i.open("results/_dynamic_array_spikemonitor_1_i_1047984836676408642", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_1_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_1_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_1_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_1_i[0]), _dynamic_array_spikemonitor_1_i.size()*sizeof(_dynamic_array_spikemonitor_1_i[0]));
		    outfile__dynamic_array_spikemonitor_1_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_1_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_1_t;
	outfile__dynamic_array_spikemonitor_1_t.open("results/_dynamic_array_spikemonitor_1_t_-3414390128017472532", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_1_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_1_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_1_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_1_t[0]), _dynamic_array_spikemonitor_1_t.size()*sizeof(_dynamic_array_spikemonitor_1_t[0]));
		    outfile__dynamic_array_spikemonitor_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_1_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_2_i;
	outfile__dynamic_array_spikemonitor_2_i.open("results/_dynamic_array_spikemonitor_2_i_-4627202843980398764", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_2_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_2_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_2_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_2_i[0]), _dynamic_array_spikemonitor_2_i.size()*sizeof(_dynamic_array_spikemonitor_2_i[0]));
		    outfile__dynamic_array_spikemonitor_2_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_2_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_2_t;
	outfile__dynamic_array_spikemonitor_2_t.open("results/_dynamic_array_spikemonitor_2_t_8128288300234145351", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_2_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_2_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_2_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_2_t[0]), _dynamic_array_spikemonitor_2_t.size()*sizeof(_dynamic_array_spikemonitor_2_t[0]));
		    outfile__dynamic_array_spikemonitor_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_2_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_i;
	outfile__dynamic_array_spikemonitor_i.open("results/_dynamic_array_spikemonitor_i_-7116421640545922102", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_i[0]), _dynamic_array_spikemonitor_i.size()*sizeof(_dynamic_array_spikemonitor_i[0]));
		    outfile__dynamic_array_spikemonitor_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_t;
	outfile__dynamic_array_spikemonitor_t.open("results/_dynamic_array_spikemonitor_t_-1717696024229722699", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_t[0]), _dynamic_array_spikemonitor_t.size()*sizeof(_dynamic_array_spikemonitor_t[0]));
		    outfile__dynamic_array_spikemonitor_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_10_t;
	outfile__dynamic_array_statemonitor_10_t.open("results/_dynamic_array_statemonitor_10_t_8576020231167154323", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_10_t.is_open())
	{
        if (! _dynamic_array_statemonitor_10_t.empty() )
        {
			outfile__dynamic_array_statemonitor_10_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_10_t[0]), _dynamic_array_statemonitor_10_t.size()*sizeof(_dynamic_array_statemonitor_10_t[0]));
		    outfile__dynamic_array_statemonitor_10_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_10_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_11_t;
	outfile__dynamic_array_statemonitor_11_t.open("results/_dynamic_array_statemonitor_11_t_-4276050428337505985", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_11_t.is_open())
	{
        if (! _dynamic_array_statemonitor_11_t.empty() )
        {
			outfile__dynamic_array_statemonitor_11_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_11_t[0]), _dynamic_array_statemonitor_11_t.size()*sizeof(_dynamic_array_statemonitor_11_t[0]));
		    outfile__dynamic_array_statemonitor_11_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_11_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_12_t;
	outfile__dynamic_array_statemonitor_12_t.open("results/_dynamic_array_statemonitor_12_t_-8875676929983193686", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_12_t.is_open())
	{
        if (! _dynamic_array_statemonitor_12_t.empty() )
        {
			outfile__dynamic_array_statemonitor_12_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_12_t[0]), _dynamic_array_statemonitor_12_t.size()*sizeof(_dynamic_array_statemonitor_12_t[0]));
		    outfile__dynamic_array_statemonitor_12_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_12_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_14_t;
	outfile__dynamic_array_statemonitor_14_t.open("results/_dynamic_array_statemonitor_14_t_-3602632500598410145", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_14_t.is_open())
	{
        if (! _dynamic_array_statemonitor_14_t.empty() )
        {
			outfile__dynamic_array_statemonitor_14_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_14_t[0]), _dynamic_array_statemonitor_14_t.size()*sizeof(_dynamic_array_statemonitor_14_t[0]));
		    outfile__dynamic_array_statemonitor_14_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_14_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_t;
	outfile__dynamic_array_statemonitor_1_t.open("results/_dynamic_array_statemonitor_1_t_-8236854105640261736", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_t.is_open())
	{
        if (! _dynamic_array_statemonitor_1_t.empty() )
        {
			outfile__dynamic_array_statemonitor_1_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_t[0]), _dynamic_array_statemonitor_1_t.size()*sizeof(_dynamic_array_statemonitor_1_t[0]));
		    outfile__dynamic_array_statemonitor_1_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_t;
	outfile__dynamic_array_statemonitor_2_t.open("results/_dynamic_array_statemonitor_2_t_231602893028212861", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_t.is_open())
	{
        if (! _dynamic_array_statemonitor_2_t.empty() )
        {
			outfile__dynamic_array_statemonitor_2_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_t[0]), _dynamic_array_statemonitor_2_t.size()*sizeof(_dynamic_array_statemonitor_2_t[0]));
		    outfile__dynamic_array_statemonitor_2_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_t;
	outfile__dynamic_array_statemonitor_3_t.open("results/_dynamic_array_statemonitor_3_t_8759320190725904696", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_t.is_open())
	{
        if (! _dynamic_array_statemonitor_3_t.empty() )
        {
			outfile__dynamic_array_statemonitor_3_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_t[0]), _dynamic_array_statemonitor_3_t.size()*sizeof(_dynamic_array_statemonitor_3_t[0]));
		    outfile__dynamic_array_statemonitor_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_t;
	outfile__dynamic_array_statemonitor_4_t.open("results/_dynamic_array_statemonitor_4_t_8419000761430429632", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_t.is_open())
	{
        if (! _dynamic_array_statemonitor_4_t.empty() )
        {
			outfile__dynamic_array_statemonitor_4_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_t[0]), _dynamic_array_statemonitor_4_t.size()*sizeof(_dynamic_array_statemonitor_4_t[0]));
		    outfile__dynamic_array_statemonitor_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_t;
	outfile__dynamic_array_statemonitor_5_t.open("results/_dynamic_array_statemonitor_5_t_-376836900958843707", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_t.is_open())
	{
        if (! _dynamic_array_statemonitor_5_t.empty() )
        {
			outfile__dynamic_array_statemonitor_5_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_t[0]), _dynamic_array_statemonitor_5_t.size()*sizeof(_dynamic_array_statemonitor_5_t[0]));
		    outfile__dynamic_array_statemonitor_5_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_t;
	outfile__dynamic_array_statemonitor_6_t.open("results/_dynamic_array_statemonitor_6_t_-8889373605631246293", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_t.is_open())
	{
        if (! _dynamic_array_statemonitor_6_t.empty() )
        {
			outfile__dynamic_array_statemonitor_6_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_t[0]), _dynamic_array_statemonitor_6_t.size()*sizeof(_dynamic_array_statemonitor_6_t[0]));
		    outfile__dynamic_array_statemonitor_6_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_7_t;
	outfile__dynamic_array_statemonitor_7_t.open("results/_dynamic_array_statemonitor_7_t_2521554742045132955", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_7_t.is_open())
	{
        if (! _dynamic_array_statemonitor_7_t.empty() )
        {
			outfile__dynamic_array_statemonitor_7_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_7_t[0]), _dynamic_array_statemonitor_7_t.size()*sizeof(_dynamic_array_statemonitor_7_t[0]));
		    outfile__dynamic_array_statemonitor_7_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_7_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_8_t;
	outfile__dynamic_array_statemonitor_8_t.open("results/_dynamic_array_statemonitor_8_t_4582921275050972566", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_8_t.is_open())
	{
        if (! _dynamic_array_statemonitor_8_t.empty() )
        {
			outfile__dynamic_array_statemonitor_8_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_8_t[0]), _dynamic_array_statemonitor_8_t.size()*sizeof(_dynamic_array_statemonitor_8_t[0]));
		    outfile__dynamic_array_statemonitor_8_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_8_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_9_t;
	outfile__dynamic_array_statemonitor_9_t.open("results/_dynamic_array_statemonitor_9_t_6182506574239797399", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_9_t.is_open())
	{
        if (! _dynamic_array_statemonitor_9_t.empty() )
        {
			outfile__dynamic_array_statemonitor_9_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_9_t[0]), _dynamic_array_statemonitor_9_t.size()*sizeof(_dynamic_array_statemonitor_9_t[0]));
		    outfile__dynamic_array_statemonitor_9_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_9_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_t;
	outfile__dynamic_array_statemonitor_t.open("results/_dynamic_array_statemonitor_t_-5431448316962271787", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_t.is_open())
	{
        if (! _dynamic_array_statemonitor_t.empty() )
        {
			outfile__dynamic_array_statemonitor_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_t[0]), _dynamic_array_statemonitor_t.size()*sizeof(_dynamic_array_statemonitor_t[0]));
		    outfile__dynamic_array_statemonitor_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_t." << endl;
	}

	ofstream outfile__dynamic_array_statemonitor_10_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_10_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_10_I_syn_gaba_b_-3982649013772635829", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_10_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_10_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_10_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_10_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_10_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_10_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_10_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_10_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_10_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_11_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_11_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_11_I_syn_gaba_b_4229765801226597489", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_11_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_11_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_11_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_11_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_11_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_11_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_11_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_11_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_11_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_12_I_syn_ampa;
	outfile__dynamic_array_statemonitor_12_I_syn_ampa.open("results/_dynamic_array_statemonitor_12_I_syn_ampa_-7275146019180341925", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_12_I_syn_ampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_12_I_syn_ampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_12_I_syn_ampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_12_I_syn_ampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_12_I_syn_ampa(n, 0)), _dynamic_array_statemonitor_12_I_syn_ampa.m*sizeof(_dynamic_array_statemonitor_12_I_syn_ampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_12_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_12_I_syn_ampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_14_Imem;
	outfile__dynamic_array_statemonitor_14_Imem.open("results/_dynamic_array_statemonitor_14_Imem_-7847282989864697077", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_14_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_14_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_14_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_14_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_14_Imem(n, 0)), _dynamic_array_statemonitor_14_Imem.m*sizeof(_dynamic_array_statemonitor_14_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_14_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_14_Imem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_1_Imem;
	outfile__dynamic_array_statemonitor_1_Imem.open("results/_dynamic_array_statemonitor_1_Imem_-7681894399962140638", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_1_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_1_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_1_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_1_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_1_Imem(n, 0)), _dynamic_array_statemonitor_1_Imem.m*sizeof(_dynamic_array_statemonitor_1_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_1_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_1_Imem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_2_Imem;
	outfile__dynamic_array_statemonitor_2_Imem.open("results/_dynamic_array_statemonitor_2_Imem_2120854893352743008", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_2_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_2_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_2_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_2_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_2_Imem(n, 0)), _dynamic_array_statemonitor_2_Imem.m*sizeof(_dynamic_array_statemonitor_2_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_2_Imem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_3_I_syn_nmda;
	outfile__dynamic_array_statemonitor_3_I_syn_nmda.open("results/_dynamic_array_statemonitor_3_I_syn_nmda_-2313159165256531835", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_3_I_syn_nmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_3_I_syn_nmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_3_I_syn_nmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_3_I_syn_nmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_3_I_syn_nmda(n, 0)), _dynamic_array_statemonitor_3_I_syn_nmda.m*sizeof(_dynamic_array_statemonitor_3_I_syn_nmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_3_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_3_I_syn_nmda." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_4_I_syn_nmda;
	outfile__dynamic_array_statemonitor_4_I_syn_nmda.open("results/_dynamic_array_statemonitor_4_I_syn_nmda_-2502018861082695262", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_4_I_syn_nmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_4_I_syn_nmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_4_I_syn_nmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_4_I_syn_nmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_4_I_syn_nmda(n, 0)), _dynamic_array_statemonitor_4_I_syn_nmda.m*sizeof(_dynamic_array_statemonitor_4_I_syn_nmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_4_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_4_I_syn_nmda." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_5_I_syn_nmda;
	outfile__dynamic_array_statemonitor_5_I_syn_nmda.open("results/_dynamic_array_statemonitor_5_I_syn_nmda_4032096462784618435", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_5_I_syn_nmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_5_I_syn_nmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_5_I_syn_nmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_5_I_syn_nmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_5_I_syn_nmda(n, 0)), _dynamic_array_statemonitor_5_I_syn_nmda.m*sizeof(_dynamic_array_statemonitor_5_I_syn_nmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_5_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_5_I_syn_nmda." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_6_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_6_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_6_I_syn_gaba_b_14632395898172437", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_6_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_6_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_6_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_6_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_6_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_6_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_6_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_6_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_6_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_7_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_7_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_7_I_syn_gaba_b_-3011645473749771179", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_7_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_7_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_7_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_7_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_7_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_7_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_7_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_7_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_7_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_8_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_8_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_8_I_syn_gaba_b_-6667688530678337375", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_8_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_8_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_8_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_8_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_8_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_8_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_8_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_8_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_8_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_9_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_9_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_9_I_syn_gaba_b_8967124419122992749", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_9_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_9_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_9_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_9_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_9_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_9_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_9_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_9_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_9_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_Imem;
	outfile__dynamic_array_statemonitor_Imem.open("results/_dynamic_array_statemonitor_Imem_8249928884708449491", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_Imem(n, 0)), _dynamic_array_statemonitor_Imem.m*sizeof(_dynamic_array_statemonitor_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_Imem." << endl;
	}
	// Write last run info to disk
	ofstream outfile_last_run_info;
	outfile_last_run_info.open("results/last_run_info.txt", ios::out);
	if(outfile_last_run_info.is_open())
	{
		outfile_last_run_info << (Network::_last_run_time) << " " << (Network::_last_run_completed_fraction) << std::endl;
		outfile_last_run_info.close();
	} else
	{
	    std::cout << "Error writing last run info to file." << std::endl;
	}
}

void _dealloc_arrays()
{
	using namespace brian;


	// static arrays
	if(_static_array__array_statemonitor_1__indices!=0)
	{
		delete [] _static_array__array_statemonitor_1__indices;
		_static_array__array_statemonitor_1__indices = 0;
	}
	if(_static_array__array_statemonitor_2__indices!=0)
	{
		delete [] _static_array__array_statemonitor_2__indices;
		_static_array__array_statemonitor_2__indices = 0;
	}
	if(_static_array__array_statemonitor__indices!=0)
	{
		delete [] _static_array__array_statemonitor__indices;
		_static_array__array_statemonitor__indices = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator__timebins!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator__timebins;
		_static_array__dynamic_array_InpSpikeGenerator__timebins = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator_neuron_index!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator_neuron_index;
		_static_array__dynamic_array_InpSpikeGenerator_neuron_index = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator_spike_number!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator_spike_number;
		_static_array__dynamic_array_InpSpikeGenerator_spike_number = 0;
	}
	if(_static_array__dynamic_array_InpSpikeGenerator_spike_time!=0)
	{
		delete [] _static_array__dynamic_array_InpSpikeGenerator_spike_time;
		_static_array__dynamic_array_InpSpikeGenerator_spike_time = 0;
	}
}

