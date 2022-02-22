
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
int32_t * _array_spikemonitor_3__source_idx;
const int _num__array_spikemonitor_3__source_idx = 2;
int32_t * _array_spikemonitor_3_count;
const int _num__array_spikemonitor_3_count = 2;
int32_t * _array_spikemonitor_3_N;
const int _num__array_spikemonitor_3_N = 1;
int32_t * _array_spikemonitor_4__source_idx;
const int _num__array_spikemonitor_4__source_idx = 2;
int32_t * _array_spikemonitor_4_count;
const int _num__array_spikemonitor_4_count = 2;
int32_t * _array_spikemonitor_4_N;
const int _num__array_spikemonitor_4_N = 1;
int32_t * _array_spikemonitor_5__source_idx;
const int _num__array_spikemonitor_5__source_idx = 2;
int32_t * _array_spikemonitor_5_count;
const int _num__array_spikemonitor_5_count = 2;
int32_t * _array_spikemonitor_5_N;
const int _num__array_spikemonitor_5_N = 1;
int32_t * _array_statemonitor_13__indices;
const int _num__array_statemonitor_13__indices = 2;
double * _array_statemonitor_13_Imem;
const int _num__array_statemonitor_13_Imem = (0, 2);
int32_t * _array_statemonitor_13_N;
const int _num__array_statemonitor_13_N = 1;
int32_t * _array_statemonitor_14__indices;
const int _num__array_statemonitor_14__indices = 2;
double * _array_statemonitor_14_Imem;
const int _num__array_statemonitor_14_Imem = (0, 2);
int32_t * _array_statemonitor_14_N;
const int _num__array_statemonitor_14_N = 1;
int32_t * _array_statemonitor_15__indices;
const int _num__array_statemonitor_15__indices = 2;
double * _array_statemonitor_15_Imem;
const int _num__array_statemonitor_15_Imem = (0, 2);
int32_t * _array_statemonitor_15_N;
const int _num__array_statemonitor_15_N = 1;
int32_t * _array_statemonitor_16__indices;
const int _num__array_statemonitor_16__indices = 1;
double * _array_statemonitor_16_I_syn_nmda;
const int _num__array_statemonitor_16_I_syn_nmda = (0, 1);
int32_t * _array_statemonitor_16_N;
const int _num__array_statemonitor_16_N = 1;
int32_t * _array_statemonitor_17__indices;
const int _num__array_statemonitor_17__indices = 1;
double * _array_statemonitor_17_I_syn_nmda;
const int _num__array_statemonitor_17_I_syn_nmda = (0, 1);
int32_t * _array_statemonitor_17_N;
const int _num__array_statemonitor_17_N = 1;
int32_t * _array_statemonitor_18__indices;
const int _num__array_statemonitor_18__indices = 1;
double * _array_statemonitor_18_I_syn_nmda;
const int _num__array_statemonitor_18_I_syn_nmda = (0, 1);
int32_t * _array_statemonitor_18_N;
const int _num__array_statemonitor_18_N = 1;
int32_t * _array_statemonitor_19__indices;
const int _num__array_statemonitor_19__indices = 1;
double * _array_statemonitor_19_I_syn_gaba_b;
const int _num__array_statemonitor_19_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_19_N;
const int _num__array_statemonitor_19_N = 1;
int32_t * _array_statemonitor_20__indices;
const int _num__array_statemonitor_20__indices = 1;
double * _array_statemonitor_20_I_syn_gaba_b;
const int _num__array_statemonitor_20_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_20_N;
const int _num__array_statemonitor_20_N = 1;
int32_t * _array_statemonitor_21__indices;
const int _num__array_statemonitor_21__indices = 1;
double * _array_statemonitor_21_I_syn_gaba_b;
const int _num__array_statemonitor_21_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_21_N;
const int _num__array_statemonitor_21_N = 1;
int32_t * _array_statemonitor_22__indices;
const int _num__array_statemonitor_22__indices = 1;
double * _array_statemonitor_22_I_syn_gaba_b;
const int _num__array_statemonitor_22_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_22_N;
const int _num__array_statemonitor_22_N = 1;
int32_t * _array_statemonitor_23__indices;
const int _num__array_statemonitor_23__indices = 1;
double * _array_statemonitor_23_I_syn_gaba_b;
const int _num__array_statemonitor_23_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_23_N;
const int _num__array_statemonitor_23_N = 1;
int32_t * _array_statemonitor_24__indices;
const int _num__array_statemonitor_24__indices = 1;
double * _array_statemonitor_24_I_syn_gaba_b;
const int _num__array_statemonitor_24_I_syn_gaba_b = (0, 1);
int32_t * _array_statemonitor_24_N;
const int _num__array_statemonitor_24_N = 1;
int32_t * _array_statemonitor_25__indices;
const int _num__array_statemonitor_25__indices = 1;
double * _array_statemonitor_25_I_syn_ampa;
const int _num__array_statemonitor_25_I_syn_ampa = (0, 1);
int32_t * _array_statemonitor_25_N;
const int _num__array_statemonitor_25_N = 1;
int32_t * _array_statemonitor_26__indices;
const int _num__array_statemonitor_26__indices = 1;
double * _array_statemonitor_26_Imem;
const int _num__array_statemonitor_26_Imem = (0, 1);
int32_t * _array_statemonitor_26_N;
const int _num__array_statemonitor_26_N = 1;

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
std::vector<int32_t> _dynamic_array_spikemonitor_3_i;
std::vector<double> _dynamic_array_spikemonitor_3_t;
std::vector<int32_t> _dynamic_array_spikemonitor_4_i;
std::vector<double> _dynamic_array_spikemonitor_4_t;
std::vector<int32_t> _dynamic_array_spikemonitor_5_i;
std::vector<double> _dynamic_array_spikemonitor_5_t;
std::vector<double> _dynamic_array_statemonitor_13_t;
std::vector<double> _dynamic_array_statemonitor_14_t;
std::vector<double> _dynamic_array_statemonitor_15_t;
std::vector<double> _dynamic_array_statemonitor_16_t;
std::vector<double> _dynamic_array_statemonitor_17_t;
std::vector<double> _dynamic_array_statemonitor_18_t;
std::vector<double> _dynamic_array_statemonitor_19_t;
std::vector<double> _dynamic_array_statemonitor_20_t;
std::vector<double> _dynamic_array_statemonitor_21_t;
std::vector<double> _dynamic_array_statemonitor_22_t;
std::vector<double> _dynamic_array_statemonitor_23_t;
std::vector<double> _dynamic_array_statemonitor_24_t;
std::vector<double> _dynamic_array_statemonitor_25_t;
std::vector<double> _dynamic_array_statemonitor_26_t;

//////////////// dynamic arrays 2d /////////
DynamicArray2D<double> _dynamic_array_statemonitor_13_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_14_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_15_Imem;
DynamicArray2D<double> _dynamic_array_statemonitor_16_I_syn_nmda;
DynamicArray2D<double> _dynamic_array_statemonitor_17_I_syn_nmda;
DynamicArray2D<double> _dynamic_array_statemonitor_18_I_syn_nmda;
DynamicArray2D<double> _dynamic_array_statemonitor_19_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_20_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_21_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_22_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_23_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_24_I_syn_gaba_b;
DynamicArray2D<double> _dynamic_array_statemonitor_25_I_syn_ampa;
DynamicArray2D<double> _dynamic_array_statemonitor_26_Imem;

/////////////// static arrays /////////////
int32_t * _static_array__array_statemonitor_13__indices;
const int _num__static_array__array_statemonitor_13__indices = 2;
int32_t * _static_array__array_statemonitor_14__indices;
const int _num__static_array__array_statemonitor_14__indices = 2;
int32_t * _static_array__array_statemonitor_15__indices;
const int _num__static_array__array_statemonitor_15__indices = 2;
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

	_array_spikemonitor_3__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_3__source_idx[i] = 0;

	_array_spikemonitor_3_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_3_count[i] = 0;

	_array_spikemonitor_3_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_3_N[i] = 0;

	_array_spikemonitor_4__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_4__source_idx[i] = 0;

	_array_spikemonitor_4_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_4_count[i] = 0;

	_array_spikemonitor_4_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_4_N[i] = 0;

	_array_spikemonitor_5__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_5__source_idx[i] = 0;

	_array_spikemonitor_5_count = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_5_count[i] = 0;

	_array_spikemonitor_5_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_spikemonitor_5_N[i] = 0;

	_array_statemonitor_13__indices = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_statemonitor_13__indices[i] = 0;

	_array_statemonitor_13_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_13_N[i] = 0;

	_array_statemonitor_14__indices = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_statemonitor_14__indices[i] = 0;

	_array_statemonitor_14_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_14_N[i] = 0;

	_array_statemonitor_15__indices = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_statemonitor_15__indices[i] = 0;

	_array_statemonitor_15_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_15_N[i] = 0;

	_array_statemonitor_16__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_16__indices[i] = 0;

	_array_statemonitor_16_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_16_N[i] = 0;

	_array_statemonitor_17__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_17__indices[i] = 0;

	_array_statemonitor_17_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_17_N[i] = 0;

	_array_statemonitor_18__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_18__indices[i] = 0;

	_array_statemonitor_18_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_18_N[i] = 0;

	_array_statemonitor_19__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_19__indices[i] = 0;

	_array_statemonitor_19_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_19_N[i] = 0;

	_array_statemonitor_20__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_20__indices[i] = 0;

	_array_statemonitor_20_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_20_N[i] = 0;

	_array_statemonitor_21__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_21__indices[i] = 0;

	_array_statemonitor_21_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_21_N[i] = 0;

	_array_statemonitor_22__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_22__indices[i] = 0;

	_array_statemonitor_22_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_22_N[i] = 0;

	_array_statemonitor_23__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_23__indices[i] = 0;

	_array_statemonitor_23_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_23_N[i] = 0;

	_array_statemonitor_24__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_24__indices[i] = 0;

	_array_statemonitor_24_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_24_N[i] = 0;

	_array_statemonitor_25__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_25__indices[i] = 0;

	_array_statemonitor_25_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_25_N[i] = 0;

	_array_statemonitor_26__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_26__indices[i] = 0;

	_array_statemonitor_26_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_26_N[i] = 0;

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

	_array_spikemonitor_3__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_3__source_idx[i] = 0 + i;

	_array_spikemonitor_4__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_4__source_idx[i] = 0 + i;

	_array_spikemonitor_5__source_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_spikemonitor_5__source_idx[i] = 0 + i;


	// static arrays
	_static_array__array_statemonitor_13__indices = new int32_t[2];
	_static_array__array_statemonitor_14__indices = new int32_t[2];
	_static_array__array_statemonitor_15__indices = new int32_t[2];
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

	ifstream f_static_array__array_statemonitor_13__indices;
	f_static_array__array_statemonitor_13__indices.open("static_arrays/_static_array__array_statemonitor_13__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_13__indices.is_open())
	{
		f_static_array__array_statemonitor_13__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_13__indices), 2*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_13__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor_14__indices;
	f_static_array__array_statemonitor_14__indices.open("static_arrays/_static_array__array_statemonitor_14__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_14__indices.is_open())
	{
		f_static_array__array_statemonitor_14__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_14__indices), 2*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_14__indices." << endl;
	}
	ifstream f_static_array__array_statemonitor_15__indices;
	f_static_array__array_statemonitor_15__indices.open("static_arrays/_static_array__array_statemonitor_15__indices", ios::in | ios::binary);
	if(f_static_array__array_statemonitor_15__indices.is_open())
	{
		f_static_array__array_statemonitor_15__indices.read(reinterpret_cast<char*>(_static_array__array_statemonitor_15__indices), 2*sizeof(int32_t));
	} else
	{
		std::cout << "Error opening static array _static_array__array_statemonitor_15__indices." << endl;
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
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_-640123180145207108", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_8744941376573098541", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_ampa;
	outfile__array_Core_0_C_syn_ampa.open("results/_array_Core_0_C_syn_ampa_6307331705781706395", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_ampa.is_open())
	{
		outfile__array_Core_0_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_C_syn_ampa), 256*sizeof(_array_Core_0_C_syn_ampa[0]));
		outfile__array_Core_0_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_a;
	outfile__array_Core_0_C_syn_gaba_a.open("results/_array_Core_0_C_syn_gaba_a_-6211211646625767277", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_a), 256*sizeof(_array_Core_0_C_syn_gaba_a[0]));
		outfile__array_Core_0_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_b;
	outfile__array_Core_0_C_syn_gaba_b.open("results/_array_Core_0_C_syn_gaba_b_-7219864217842018709", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_b), 256*sizeof(_array_Core_0_C_syn_gaba_b[0]));
		outfile__array_Core_0_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_nmda;
	outfile__array_Core_0_C_syn_nmda.open("results/_array_Core_0_C_syn_nmda_-1363750838117846153", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_nmda.is_open())
	{
		outfile__array_Core_0_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_C_syn_nmda), 256*sizeof(_array_Core_0_C_syn_nmda[0]));
		outfile__array_Core_0_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Cahp;
	outfile__array_Core_0_Cahp.open("results/_array_Core_0_Cahp_-8676545431529765569", ios::binary | ios::out);
	if(outfile__array_Core_0_Cahp.is_open())
	{
		outfile__array_Core_0_Cahp.write(reinterpret_cast<char*>(_array_Core_0_Cahp), 1*sizeof(_array_Core_0_Cahp[0]));
		outfile__array_Core_0_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cahp." << endl;
	}
	ofstream outfile__array_Core_0_Cmem;
	outfile__array_Core_0_Cmem.open("results/_array_Core_0_Cmem_-7396848163963419669", ios::binary | ios::out);
	if(outfile__array_Core_0_Cmem.is_open())
	{
		outfile__array_Core_0_Cmem.write(reinterpret_cast<char*>(_array_Core_0_Cmem), 1*sizeof(_array_Core_0_Cmem[0]));
		outfile__array_Core_0_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cmem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_-9004447280564136822", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_ampa;
	outfile__array_Core_0_I_g_syn_ampa.open("results/_array_Core_0_I_g_syn_ampa_-6776980299723194045", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_ampa), 256*sizeof(_array_Core_0_I_g_syn_ampa[0]));
		outfile__array_Core_0_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_a;
	outfile__array_Core_0_I_g_syn_gaba_a.open("results/_array_Core_0_I_g_syn_gaba_a_-822378385093672406", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_a), 256*sizeof(_array_Core_0_I_g_syn_gaba_a[0]));
		outfile__array_Core_0_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_b;
	outfile__array_Core_0_I_g_syn_gaba_b.open("results/_array_Core_0_I_g_syn_gaba_b_6672133459678204102", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_b), 256*sizeof(_array_Core_0_I_g_syn_gaba_b[0]));
		outfile__array_Core_0_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_nmda;
	outfile__array_Core_0_I_g_syn_nmda.open("results/_array_Core_0_I_g_syn_nmda_-1696060937781609873", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_nmda), 256*sizeof(_array_Core_0_I_g_syn_nmda[0]));
		outfile__array_Core_0_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_ampa;
	outfile__array_Core_0_I_syn_ampa.open("results/_array_Core_0_I_syn_ampa_-6922007575617876682", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_syn_ampa), 256*sizeof(_array_Core_0_I_syn_ampa[0]));
		outfile__array_Core_0_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_a;
	outfile__array_Core_0_I_syn_gaba_a.open("results/_array_Core_0_I_syn_gaba_a_-378277578447568411", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_a), 256*sizeof(_array_Core_0_I_syn_gaba_a[0]));
		outfile__array_Core_0_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_b;
	outfile__array_Core_0_I_syn_gaba_b.open("results/_array_Core_0_I_syn_gaba_b_-2314966172240126340", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_b), 256*sizeof(_array_Core_0_I_syn_gaba_b[0]));
		outfile__array_Core_0_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_nmda;
	outfile__array_Core_0_I_syn_nmda.open("results/_array_Core_0_I_syn_nmda_-2669020675569586329", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_syn_nmda), 256*sizeof(_array_Core_0_I_syn_nmda[0]));
		outfile__array_Core_0_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_ampa;
	outfile__array_Core_0_I_tau_syn_ampa.open("results/_array_Core_0_I_tau_syn_ampa_-1357574884977889617", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_ampa), 256*sizeof(_array_Core_0_I_tau_syn_ampa[0]));
		outfile__array_Core_0_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_a;
	outfile__array_Core_0_I_tau_syn_gaba_a.open("results/_array_Core_0_I_tau_syn_gaba_a_498047555032717500", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_a), 256*sizeof(_array_Core_0_I_tau_syn_gaba_a[0]));
		outfile__array_Core_0_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_b;
	outfile__array_Core_0_I_tau_syn_gaba_b.open("results/_array_Core_0_I_tau_syn_gaba_b_3928817688115521267", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_b), 256*sizeof(_array_Core_0_I_tau_syn_gaba_b[0]));
		outfile__array_Core_0_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_nmda;
	outfile__array_Core_0_I_tau_syn_nmda.open("results/_array_Core_0_I_tau_syn_nmda_-2543933494677465704", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_nmda), 256*sizeof(_array_Core_0_I_tau_syn_nmda[0]));
		outfile__array_Core_0_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_ampa;
	outfile__array_Core_0_I_wo_syn_ampa.open("results/_array_Core_0_I_wo_syn_ampa_-3423205031313028368", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_ampa), 256*sizeof(_array_Core_0_I_wo_syn_ampa[0]));
		outfile__array_Core_0_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_a;
	outfile__array_Core_0_I_wo_syn_gaba_a.open("results/_array_Core_0_I_wo_syn_gaba_a_4390718287740504310", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_a), 256*sizeof(_array_Core_0_I_wo_syn_gaba_a[0]));
		outfile__array_Core_0_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_b;
	outfile__array_Core_0_I_wo_syn_gaba_b.open("results/_array_Core_0_I_wo_syn_gaba_b_4660554280757455865", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_b), 256*sizeof(_array_Core_0_I_wo_syn_gaba_b[0]));
		outfile__array_Core_0_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_nmda;
	outfile__array_Core_0_I_wo_syn_nmda.open("results/_array_Core_0_I_wo_syn_nmda_-4880338426985504710", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_nmda), 256*sizeof(_array_Core_0_I_wo_syn_nmda[0]));
		outfile__array_Core_0_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Iagain;
	outfile__array_Core_0_Iagain.open("results/_array_Core_0_Iagain_-8988164845747061023", ios::binary | ios::out);
	if(outfile__array_Core_0_Iagain.is_open())
	{
		outfile__array_Core_0_Iagain.write(reinterpret_cast<char*>(_array_Core_0_Iagain), 1*sizeof(_array_Core_0_Iagain[0]));
		outfile__array_Core_0_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iagain." << endl;
	}
	ofstream outfile__array_Core_0_Iahp;
	outfile__array_Core_0_Iahp.open("results/_array_Core_0_Iahp_-3416505037680417114", ios::binary | ios::out);
	if(outfile__array_Core_0_Iahp.is_open())
	{
		outfile__array_Core_0_Iahp.write(reinterpret_cast<char*>(_array_Core_0_Iahp), 256*sizeof(_array_Core_0_Iahp[0]));
		outfile__array_Core_0_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iahp." << endl;
	}
	ofstream outfile__array_Core_0_Ianorm;
	outfile__array_Core_0_Ianorm.open("results/_array_Core_0_Ianorm_7963381263092551605", ios::binary | ios::out);
	if(outfile__array_Core_0_Ianorm.is_open())
	{
		outfile__array_Core_0_Ianorm.write(reinterpret_cast<char*>(_array_Core_0_Ianorm), 1*sizeof(_array_Core_0_Ianorm[0]));
		outfile__array_Core_0_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ianorm." << endl;
	}
	ofstream outfile__array_Core_0_Iath;
	outfile__array_Core_0_Iath.open("results/_array_Core_0_Iath_-3929820927081747765", ios::binary | ios::out);
	if(outfile__array_Core_0_Iath.is_open())
	{
		outfile__array_Core_0_Iath.write(reinterpret_cast<char*>(_array_Core_0_Iath), 1*sizeof(_array_Core_0_Iath[0]));
		outfile__array_Core_0_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iath." << endl;
	}
	ofstream outfile__array_Core_0_Ica;
	outfile__array_Core_0_Ica.open("results/_array_Core_0_Ica_3168786731270874047", ios::binary | ios::out);
	if(outfile__array_Core_0_Ica.is_open())
	{
		outfile__array_Core_0_Ica.write(reinterpret_cast<char*>(_array_Core_0_Ica), 256*sizeof(_array_Core_0_Ica[0]));
		outfile__array_Core_0_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ica." << endl;
	}
	ofstream outfile__array_Core_0_Iconst;
	outfile__array_Core_0_Iconst.open("results/_array_Core_0_Iconst_-4592626085356494573", ios::binary | ios::out);
	if(outfile__array_Core_0_Iconst.is_open())
	{
		outfile__array_Core_0_Iconst.write(reinterpret_cast<char*>(_array_Core_0_Iconst), 256*sizeof(_array_Core_0_Iconst[0]));
		outfile__array_Core_0_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iconst." << endl;
	}
	ofstream outfile__array_Core_0_Imem;
	outfile__array_Core_0_Imem.open("results/_array_Core_0_Imem_4299993471037150461", ios::binary | ios::out);
	if(outfile__array_Core_0_Imem.is_open())
	{
		outfile__array_Core_0_Imem.write(reinterpret_cast<char*>(_array_Core_0_Imem), 256*sizeof(_array_Core_0_Imem[0]));
		outfile__array_Core_0_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Imem." << endl;
	}
	ofstream outfile__array_Core_0_Io;
	outfile__array_Core_0_Io.open("results/_array_Core_0_Io_-3483199201604304489", ios::binary | ios::out);
	if(outfile__array_Core_0_Io.is_open())
	{
		outfile__array_Core_0_Io.write(reinterpret_cast<char*>(_array_Core_0_Io), 1*sizeof(_array_Core_0_Io[0]));
		outfile__array_Core_0_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Io." << endl;
	}
	ofstream outfile__array_Core_0_Ireset;
	outfile__array_Core_0_Ireset.open("results/_array_Core_0_Ireset_-8065467740334488705", ios::binary | ios::out);
	if(outfile__array_Core_0_Ireset.is_open())
	{
		outfile__array_Core_0_Ireset.write(reinterpret_cast<char*>(_array_Core_0_Ireset), 1*sizeof(_array_Core_0_Ireset[0]));
		outfile__array_Core_0_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ireset." << endl;
	}
	ofstream outfile__array_Core_0_Ishunt;
	outfile__array_Core_0_Ishunt.open("results/_array_Core_0_Ishunt_1844223230528170373", ios::binary | ios::out);
	if(outfile__array_Core_0_Ishunt.is_open())
	{
		outfile__array_Core_0_Ishunt.write(reinterpret_cast<char*>(_array_Core_0_Ishunt), 256*sizeof(_array_Core_0_Ishunt[0]));
		outfile__array_Core_0_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ishunt." << endl;
	}
	ofstream outfile__array_Core_0_Ispkthr;
	outfile__array_Core_0_Ispkthr.open("results/_array_Core_0_Ispkthr_4467011008898080666", ios::binary | ios::out);
	if(outfile__array_Core_0_Ispkthr.is_open())
	{
		outfile__array_Core_0_Ispkthr.write(reinterpret_cast<char*>(_array_Core_0_Ispkthr), 1*sizeof(_array_Core_0_Ispkthr[0]));
		outfile__array_Core_0_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_0_Itau;
	outfile__array_Core_0_Itau.open("results/_array_Core_0_Itau_6111014516372789522", ios::binary | ios::out);
	if(outfile__array_Core_0_Itau.is_open())
	{
		outfile__array_Core_0_Itau.write(reinterpret_cast<char*>(_array_Core_0_Itau), 1*sizeof(_array_Core_0_Itau[0]));
		outfile__array_Core_0_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itau." << endl;
	}
	ofstream outfile__array_Core_0_Itauahp;
	outfile__array_Core_0_Itauahp.open("results/_array_Core_0_Itauahp_8168603712223838024", ios::binary | ios::out);
	if(outfile__array_Core_0_Itauahp.is_open())
	{
		outfile__array_Core_0_Itauahp.write(reinterpret_cast<char*>(_array_Core_0_Itauahp), 1*sizeof(_array_Core_0_Itauahp[0]));
		outfile__array_Core_0_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itauahp." << endl;
	}
	ofstream outfile__array_Core_0_Ith;
	outfile__array_Core_0_Ith.open("results/_array_Core_0_Ith_145611971469312034", ios::binary | ios::out);
	if(outfile__array_Core_0_Ith.is_open())
	{
		outfile__array_Core_0_Ith.write(reinterpret_cast<char*>(_array_Core_0_Ith), 1*sizeof(_array_Core_0_Ith[0]));
		outfile__array_Core_0_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ith." << endl;
	}
	ofstream outfile__array_Core_0_Ithahp;
	outfile__array_Core_0_Ithahp.open("results/_array_Core_0_Ithahp_5389149585812411004", ios::binary | ios::out);
	if(outfile__array_Core_0_Ithahp.is_open())
	{
		outfile__array_Core_0_Ithahp.write(reinterpret_cast<char*>(_array_Core_0_Ithahp), 1*sizeof(_array_Core_0_Ithahp[0]));
		outfile__array_Core_0_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ithahp." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_-2033933146446428408", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_1662943256101075959", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_3633925159065888880", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_2927196790208354984", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_refP;
	outfile__array_Core_0_refP.open("results/_array_Core_0_refP_1262671745966459541", ios::binary | ios::out);
	if(outfile__array_Core_0_refP.is_open())
	{
		outfile__array_Core_0_refP.write(reinterpret_cast<char*>(_array_Core_0_refP), 1*sizeof(_array_Core_0_refP[0]));
		outfile__array_Core_0_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_refP." << endl;
	}
	ofstream outfile__array_Core_0_tauca;
	outfile__array_Core_0_tauca.open("results/_array_Core_0_tauca_-2809079811981902146", ios::binary | ios::out);
	if(outfile__array_Core_0_tauca.is_open())
	{
		outfile__array_Core_0_tauca.write(reinterpret_cast<char*>(_array_Core_0_tauca), 1*sizeof(_array_Core_0_tauca[0]));
		outfile__array_Core_0_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tauca." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_8467037290876590175", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_9121013759975817521", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_ampa;
	outfile__array_Core_1_C_syn_ampa.open("results/_array_Core_1_C_syn_ampa_-6261083506678402532", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_ampa.is_open())
	{
		outfile__array_Core_1_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_C_syn_ampa), 256*sizeof(_array_Core_1_C_syn_ampa[0]));
		outfile__array_Core_1_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_a;
	outfile__array_Core_1_C_syn_gaba_a.open("results/_array_Core_1_C_syn_gaba_a_2376840970683257586", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_a), 256*sizeof(_array_Core_1_C_syn_gaba_a[0]));
		outfile__array_Core_1_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_b;
	outfile__array_Core_1_C_syn_gaba_b.open("results/_array_Core_1_C_syn_gaba_b_-4504065788941332628", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_b), 256*sizeof(_array_Core_1_C_syn_gaba_b[0]));
		outfile__array_Core_1_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_nmda;
	outfile__array_Core_1_C_syn_nmda.open("results/_array_Core_1_C_syn_nmda_7932690496520545498", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_nmda.is_open())
	{
		outfile__array_Core_1_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_C_syn_nmda), 256*sizeof(_array_Core_1_C_syn_nmda[0]));
		outfile__array_Core_1_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Cahp;
	outfile__array_Core_1_Cahp.open("results/_array_Core_1_Cahp_-3762548744730548227", ios::binary | ios::out);
	if(outfile__array_Core_1_Cahp.is_open())
	{
		outfile__array_Core_1_Cahp.write(reinterpret_cast<char*>(_array_Core_1_Cahp), 1*sizeof(_array_Core_1_Cahp[0]));
		outfile__array_Core_1_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cahp." << endl;
	}
	ofstream outfile__array_Core_1_Cmem;
	outfile__array_Core_1_Cmem.open("results/_array_Core_1_Cmem_1513790808650451885", ios::binary | ios::out);
	if(outfile__array_Core_1_Cmem.is_open())
	{
		outfile__array_Core_1_Cmem.write(reinterpret_cast<char*>(_array_Core_1_Cmem), 1*sizeof(_array_Core_1_Cmem[0]));
		outfile__array_Core_1_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cmem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_3508671778466355319", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_ampa;
	outfile__array_Core_1_I_g_syn_ampa.open("results/_array_Core_1_I_g_syn_ampa_1819353379933964835", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_ampa), 256*sizeof(_array_Core_1_I_g_syn_ampa[0]));
		outfile__array_Core_1_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_a;
	outfile__array_Core_1_I_g_syn_gaba_a.open("results/_array_Core_1_I_g_syn_gaba_a_3690133130183824188", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_a), 256*sizeof(_array_Core_1_I_g_syn_gaba_a[0]));
		outfile__array_Core_1_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_b;
	outfile__array_Core_1_I_g_syn_gaba_b.open("results/_array_Core_1_I_g_syn_gaba_b_2183403623544155747", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_b), 256*sizeof(_array_Core_1_I_g_syn_gaba_b[0]));
		outfile__array_Core_1_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_nmda;
	outfile__array_Core_1_I_g_syn_nmda.open("results/_array_Core_1_I_g_syn_nmda_-456130175425900567", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_nmda), 256*sizeof(_array_Core_1_I_g_syn_nmda[0]));
		outfile__array_Core_1_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_ampa;
	outfile__array_Core_1_I_syn_ampa.open("results/_array_Core_1_I_syn_ampa_2627272757240131746", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_syn_ampa), 256*sizeof(_array_Core_1_I_syn_ampa[0]));
		outfile__array_Core_1_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_a;
	outfile__array_Core_1_I_syn_gaba_a.open("results/_array_Core_1_I_syn_gaba_a_-5132872401805253273", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_a), 256*sizeof(_array_Core_1_I_syn_gaba_a[0]));
		outfile__array_Core_1_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_b;
	outfile__array_Core_1_I_syn_gaba_b.open("results/_array_Core_1_I_syn_gaba_b_6715335114763874542", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_b), 256*sizeof(_array_Core_1_I_syn_gaba_b[0]));
		outfile__array_Core_1_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_nmda;
	outfile__array_Core_1_I_syn_nmda.open("results/_array_Core_1_I_syn_nmda_5281907886383775424", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_syn_nmda), 256*sizeof(_array_Core_1_I_syn_nmda[0]));
		outfile__array_Core_1_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_ampa;
	outfile__array_Core_1_I_tau_syn_ampa.open("results/_array_Core_1_I_tau_syn_ampa_2715314221671474587", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_ampa), 256*sizeof(_array_Core_1_I_tau_syn_ampa[0]));
		outfile__array_Core_1_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_a;
	outfile__array_Core_1_I_tau_syn_gaba_a.open("results/_array_Core_1_I_tau_syn_gaba_a_-124139395531207160", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_a), 256*sizeof(_array_Core_1_I_tau_syn_gaba_a[0]));
		outfile__array_Core_1_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_b;
	outfile__array_Core_1_I_tau_syn_gaba_b.open("results/_array_Core_1_I_tau_syn_gaba_b_5083726978932594392", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_b), 256*sizeof(_array_Core_1_I_tau_syn_gaba_b[0]));
		outfile__array_Core_1_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_nmda;
	outfile__array_Core_1_I_tau_syn_nmda.open("results/_array_Core_1_I_tau_syn_nmda_-820905046511946605", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_nmda), 256*sizeof(_array_Core_1_I_tau_syn_nmda[0]));
		outfile__array_Core_1_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_ampa;
	outfile__array_Core_1_I_wo_syn_ampa.open("results/_array_Core_1_I_wo_syn_ampa_5018803318174902878", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_ampa), 256*sizeof(_array_Core_1_I_wo_syn_ampa[0]));
		outfile__array_Core_1_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_a;
	outfile__array_Core_1_I_wo_syn_gaba_a.open("results/_array_Core_1_I_wo_syn_gaba_a_6662835740930129357", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_a), 256*sizeof(_array_Core_1_I_wo_syn_gaba_a[0]));
		outfile__array_Core_1_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_b;
	outfile__array_Core_1_I_wo_syn_gaba_b.open("results/_array_Core_1_I_wo_syn_gaba_b_-433597871182773293", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_b), 256*sizeof(_array_Core_1_I_wo_syn_gaba_b[0]));
		outfile__array_Core_1_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_nmda;
	outfile__array_Core_1_I_wo_syn_nmda.open("results/_array_Core_1_I_wo_syn_nmda_5679595335365752059", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_nmda), 256*sizeof(_array_Core_1_I_wo_syn_nmda[0]));
		outfile__array_Core_1_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Iagain;
	outfile__array_Core_1_Iagain.open("results/_array_Core_1_Iagain_-4286277727614106318", ios::binary | ios::out);
	if(outfile__array_Core_1_Iagain.is_open())
	{
		outfile__array_Core_1_Iagain.write(reinterpret_cast<char*>(_array_Core_1_Iagain), 1*sizeof(_array_Core_1_Iagain[0]));
		outfile__array_Core_1_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iagain." << endl;
	}
	ofstream outfile__array_Core_1_Iahp;
	outfile__array_Core_1_Iahp.open("results/_array_Core_1_Iahp_3597206890493746501", ios::binary | ios::out);
	if(outfile__array_Core_1_Iahp.is_open())
	{
		outfile__array_Core_1_Iahp.write(reinterpret_cast<char*>(_array_Core_1_Iahp), 256*sizeof(_array_Core_1_Iahp[0]));
		outfile__array_Core_1_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iahp." << endl;
	}
	ofstream outfile__array_Core_1_Ianorm;
	outfile__array_Core_1_Ianorm.open("results/_array_Core_1_Ianorm_8118268815878907471", ios::binary | ios::out);
	if(outfile__array_Core_1_Ianorm.is_open())
	{
		outfile__array_Core_1_Ianorm.write(reinterpret_cast<char*>(_array_Core_1_Ianorm), 1*sizeof(_array_Core_1_Ianorm[0]));
		outfile__array_Core_1_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ianorm." << endl;
	}
	ofstream outfile__array_Core_1_Iath;
	outfile__array_Core_1_Iath.open("results/_array_Core_1_Iath_-2797584318272146456", ios::binary | ios::out);
	if(outfile__array_Core_1_Iath.is_open())
	{
		outfile__array_Core_1_Iath.write(reinterpret_cast<char*>(_array_Core_1_Iath), 1*sizeof(_array_Core_1_Iath[0]));
		outfile__array_Core_1_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iath." << endl;
	}
	ofstream outfile__array_Core_1_Ica;
	outfile__array_Core_1_Ica.open("results/_array_Core_1_Ica_4247879172638403951", ios::binary | ios::out);
	if(outfile__array_Core_1_Ica.is_open())
	{
		outfile__array_Core_1_Ica.write(reinterpret_cast<char*>(_array_Core_1_Ica), 256*sizeof(_array_Core_1_Ica[0]));
		outfile__array_Core_1_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ica." << endl;
	}
	ofstream outfile__array_Core_1_Iconst;
	outfile__array_Core_1_Iconst.open("results/_array_Core_1_Iconst_-1313706956182416346", ios::binary | ios::out);
	if(outfile__array_Core_1_Iconst.is_open())
	{
		outfile__array_Core_1_Iconst.write(reinterpret_cast<char*>(_array_Core_1_Iconst), 256*sizeof(_array_Core_1_Iconst[0]));
		outfile__array_Core_1_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iconst." << endl;
	}
	ofstream outfile__array_Core_1_Imem;
	outfile__array_Core_1_Imem.open("results/_array_Core_1_Imem_5292227076475981372", ios::binary | ios::out);
	if(outfile__array_Core_1_Imem.is_open())
	{
		outfile__array_Core_1_Imem.write(reinterpret_cast<char*>(_array_Core_1_Imem), 256*sizeof(_array_Core_1_Imem[0]));
		outfile__array_Core_1_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Imem." << endl;
	}
	ofstream outfile__array_Core_1_Io;
	outfile__array_Core_1_Io.open("results/_array_Core_1_Io_8000380548189746899", ios::binary | ios::out);
	if(outfile__array_Core_1_Io.is_open())
	{
		outfile__array_Core_1_Io.write(reinterpret_cast<char*>(_array_Core_1_Io), 1*sizeof(_array_Core_1_Io[0]));
		outfile__array_Core_1_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Io." << endl;
	}
	ofstream outfile__array_Core_1_Ireset;
	outfile__array_Core_1_Ireset.open("results/_array_Core_1_Ireset_-3260048563096658586", ios::binary | ios::out);
	if(outfile__array_Core_1_Ireset.is_open())
	{
		outfile__array_Core_1_Ireset.write(reinterpret_cast<char*>(_array_Core_1_Ireset), 1*sizeof(_array_Core_1_Ireset[0]));
		outfile__array_Core_1_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ireset." << endl;
	}
	ofstream outfile__array_Core_1_Ishunt;
	outfile__array_Core_1_Ishunt.open("results/_array_Core_1_Ishunt_6446851963962981909", ios::binary | ios::out);
	if(outfile__array_Core_1_Ishunt.is_open())
	{
		outfile__array_Core_1_Ishunt.write(reinterpret_cast<char*>(_array_Core_1_Ishunt), 256*sizeof(_array_Core_1_Ishunt[0]));
		outfile__array_Core_1_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ishunt." << endl;
	}
	ofstream outfile__array_Core_1_Ispkthr;
	outfile__array_Core_1_Ispkthr.open("results/_array_Core_1_Ispkthr_1799731726925276389", ios::binary | ios::out);
	if(outfile__array_Core_1_Ispkthr.is_open())
	{
		outfile__array_Core_1_Ispkthr.write(reinterpret_cast<char*>(_array_Core_1_Ispkthr), 1*sizeof(_array_Core_1_Ispkthr[0]));
		outfile__array_Core_1_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_1_Itau;
	outfile__array_Core_1_Itau.open("results/_array_Core_1_Itau_8469851664774426912", ios::binary | ios::out);
	if(outfile__array_Core_1_Itau.is_open())
	{
		outfile__array_Core_1_Itau.write(reinterpret_cast<char*>(_array_Core_1_Itau), 1*sizeof(_array_Core_1_Itau[0]));
		outfile__array_Core_1_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itau." << endl;
	}
	ofstream outfile__array_Core_1_Itauahp;
	outfile__array_Core_1_Itauahp.open("results/_array_Core_1_Itauahp_3623551232774940470", ios::binary | ios::out);
	if(outfile__array_Core_1_Itauahp.is_open())
	{
		outfile__array_Core_1_Itauahp.write(reinterpret_cast<char*>(_array_Core_1_Itauahp), 1*sizeof(_array_Core_1_Itauahp[0]));
		outfile__array_Core_1_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itauahp." << endl;
	}
	ofstream outfile__array_Core_1_Ith;
	outfile__array_Core_1_Ith.open("results/_array_Core_1_Ith_5000637625909669947", ios::binary | ios::out);
	if(outfile__array_Core_1_Ith.is_open())
	{
		outfile__array_Core_1_Ith.write(reinterpret_cast<char*>(_array_Core_1_Ith), 1*sizeof(_array_Core_1_Ith[0]));
		outfile__array_Core_1_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ith." << endl;
	}
	ofstream outfile__array_Core_1_Ithahp;
	outfile__array_Core_1_Ithahp.open("results/_array_Core_1_Ithahp_-5866036889450023820", ios::binary | ios::out);
	if(outfile__array_Core_1_Ithahp.is_open())
	{
		outfile__array_Core_1_Ithahp.write(reinterpret_cast<char*>(_array_Core_1_Ithahp), 1*sizeof(_array_Core_1_Ithahp[0]));
		outfile__array_Core_1_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ithahp." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_3133997216297892234", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-5015063099745209138", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-3928763554655483271", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_5912155503656048643", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_refP;
	outfile__array_Core_1_refP.open("results/_array_Core_1_refP_7245146302931493331", ios::binary | ios::out);
	if(outfile__array_Core_1_refP.is_open())
	{
		outfile__array_Core_1_refP.write(reinterpret_cast<char*>(_array_Core_1_refP), 1*sizeof(_array_Core_1_refP[0]));
		outfile__array_Core_1_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_refP." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_4__sub_idx;
	outfile__array_Core_1_subgroup_4__sub_idx.open("results/_array_Core_1_subgroup_4__sub_idx_-7067958936331457959", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_4__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_4__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_4__sub_idx), 2*sizeof(_array_Core_1_subgroup_4__sub_idx[0]));
		outfile__array_Core_1_subgroup_4__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_4__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_5__sub_idx;
	outfile__array_Core_1_subgroup_5__sub_idx.open("results/_array_Core_1_subgroup_5__sub_idx_-2869522654150128404", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_5__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_5__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_5__sub_idx), 2*sizeof(_array_Core_1_subgroup_5__sub_idx[0]));
		outfile__array_Core_1_subgroup_5__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_5__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_6__sub_idx;
	outfile__array_Core_1_subgroup_6__sub_idx.open("results/_array_Core_1_subgroup_6__sub_idx_4660402729581608588", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_6__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_6__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_6__sub_idx), 2*sizeof(_array_Core_1_subgroup_6__sub_idx[0]));
		outfile__array_Core_1_subgroup_6__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_6__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_7__sub_idx;
	outfile__array_Core_1_subgroup_7__sub_idx.open("results/_array_Core_1_subgroup_7__sub_idx_6644808794373946134", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_7__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_7__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_7__sub_idx), 2*sizeof(_array_Core_1_subgroup_7__sub_idx[0]));
		outfile__array_Core_1_subgroup_7__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_7__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tauca;
	outfile__array_Core_1_tauca.open("results/_array_Core_1_tauca_2994290661189722638", ios::binary | ios::out);
	if(outfile__array_Core_1_tauca.is_open())
	{
		outfile__array_Core_1_tauca.write(reinterpret_cast<char*>(_array_Core_1_tauca), 1*sizeof(_array_Core_1_tauca[0]));
		outfile__array_Core_1_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tauca." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-5380664470159128263", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_-219812805287917362", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_ampa;
	outfile__array_Core_2_C_syn_ampa.open("results/_array_Core_2_C_syn_ampa_-6116969252313925527", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_ampa.is_open())
	{
		outfile__array_Core_2_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_C_syn_ampa), 256*sizeof(_array_Core_2_C_syn_ampa[0]));
		outfile__array_Core_2_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_a;
	outfile__array_Core_2_C_syn_gaba_a.open("results/_array_Core_2_C_syn_gaba_a_-177137201846346926", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_a), 256*sizeof(_array_Core_2_C_syn_gaba_a[0]));
		outfile__array_Core_2_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_b;
	outfile__array_Core_2_C_syn_gaba_b.open("results/_array_Core_2_C_syn_gaba_b_3868529081999455473", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_b), 256*sizeof(_array_Core_2_C_syn_gaba_b[0]));
		outfile__array_Core_2_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_nmda;
	outfile__array_Core_2_C_syn_nmda.open("results/_array_Core_2_C_syn_nmda_4884614620954941968", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_nmda.is_open())
	{
		outfile__array_Core_2_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_C_syn_nmda), 256*sizeof(_array_Core_2_C_syn_nmda[0]));
		outfile__array_Core_2_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Cahp;
	outfile__array_Core_2_Cahp.open("results/_array_Core_2_Cahp_222577156439447433", ios::binary | ios::out);
	if(outfile__array_Core_2_Cahp.is_open())
	{
		outfile__array_Core_2_Cahp.write(reinterpret_cast<char*>(_array_Core_2_Cahp), 1*sizeof(_array_Core_2_Cahp[0]));
		outfile__array_Core_2_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cahp." << endl;
	}
	ofstream outfile__array_Core_2_Cmem;
	outfile__array_Core_2_Cmem.open("results/_array_Core_2_Cmem_3641794217396059816", ios::binary | ios::out);
	if(outfile__array_Core_2_Cmem.is_open())
	{
		outfile__array_Core_2_Cmem.write(reinterpret_cast<char*>(_array_Core_2_Cmem), 1*sizeof(_array_Core_2_Cmem[0]));
		outfile__array_Core_2_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cmem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_2720300972419719154", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_ampa;
	outfile__array_Core_2_I_g_syn_ampa.open("results/_array_Core_2_I_g_syn_ampa_5962748352767031174", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_ampa), 256*sizeof(_array_Core_2_I_g_syn_ampa[0]));
		outfile__array_Core_2_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_a;
	outfile__array_Core_2_I_g_syn_gaba_a.open("results/_array_Core_2_I_g_syn_gaba_a_462340516962203465", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_a), 256*sizeof(_array_Core_2_I_g_syn_gaba_a[0]));
		outfile__array_Core_2_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_b;
	outfile__array_Core_2_I_g_syn_gaba_b.open("results/_array_Core_2_I_g_syn_gaba_b_2590629694191215357", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_b), 256*sizeof(_array_Core_2_I_g_syn_gaba_b[0]));
		outfile__array_Core_2_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_nmda;
	outfile__array_Core_2_I_g_syn_nmda.open("results/_array_Core_2_I_g_syn_nmda_2976022631706815519", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_nmda), 256*sizeof(_array_Core_2_I_g_syn_nmda[0]));
		outfile__array_Core_2_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_ampa;
	outfile__array_Core_2_I_syn_ampa.open("results/_array_Core_2_I_syn_ampa_-5201860358787489092", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_syn_ampa), 256*sizeof(_array_Core_2_I_syn_ampa[0]));
		outfile__array_Core_2_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_a;
	outfile__array_Core_2_I_syn_gaba_a.open("results/_array_Core_2_I_syn_gaba_a_-2481522660427044585", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_a), 256*sizeof(_array_Core_2_I_syn_gaba_a[0]));
		outfile__array_Core_2_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_b;
	outfile__array_Core_2_I_syn_gaba_b.open("results/_array_Core_2_I_syn_gaba_b_7813208306235135899", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_b), 256*sizeof(_array_Core_2_I_syn_gaba_b[0]));
		outfile__array_Core_2_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_nmda;
	outfile__array_Core_2_I_syn_nmda.open("results/_array_Core_2_I_syn_nmda_-3261005608189289516", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_syn_nmda), 256*sizeof(_array_Core_2_I_syn_nmda[0]));
		outfile__array_Core_2_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_ampa;
	outfile__array_Core_2_I_tau_syn_ampa.open("results/_array_Core_2_I_tau_syn_ampa_855571563676913527", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_ampa), 256*sizeof(_array_Core_2_I_tau_syn_ampa[0]));
		outfile__array_Core_2_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_a;
	outfile__array_Core_2_I_tau_syn_gaba_a.open("results/_array_Core_2_I_tau_syn_gaba_a_-8615674692439005305", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_a), 256*sizeof(_array_Core_2_I_tau_syn_gaba_a[0]));
		outfile__array_Core_2_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_b;
	outfile__array_Core_2_I_tau_syn_gaba_b.open("results/_array_Core_2_I_tau_syn_gaba_b_-2225939371784352444", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_b), 256*sizeof(_array_Core_2_I_tau_syn_gaba_b[0]));
		outfile__array_Core_2_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_nmda;
	outfile__array_Core_2_I_tau_syn_nmda.open("results/_array_Core_2_I_tau_syn_nmda_-7564321607887091016", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_nmda), 256*sizeof(_array_Core_2_I_tau_syn_nmda[0]));
		outfile__array_Core_2_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_ampa;
	outfile__array_Core_2_I_wo_syn_ampa.open("results/_array_Core_2_I_wo_syn_ampa_-4747223176970520245", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_ampa), 256*sizeof(_array_Core_2_I_wo_syn_ampa[0]));
		outfile__array_Core_2_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_a;
	outfile__array_Core_2_I_wo_syn_gaba_a.open("results/_array_Core_2_I_wo_syn_gaba_a_-3516452281718852341", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_a), 256*sizeof(_array_Core_2_I_wo_syn_gaba_a[0]));
		outfile__array_Core_2_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_b;
	outfile__array_Core_2_I_wo_syn_gaba_b.open("results/_array_Core_2_I_wo_syn_gaba_b_-6781029077260069709", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_b), 256*sizeof(_array_Core_2_I_wo_syn_gaba_b[0]));
		outfile__array_Core_2_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_nmda;
	outfile__array_Core_2_I_wo_syn_nmda.open("results/_array_Core_2_I_wo_syn_nmda_8120050427308040556", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_nmda), 256*sizeof(_array_Core_2_I_wo_syn_nmda[0]));
		outfile__array_Core_2_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Iagain;
	outfile__array_Core_2_Iagain.open("results/_array_Core_2_Iagain_-4015686173548491282", ios::binary | ios::out);
	if(outfile__array_Core_2_Iagain.is_open())
	{
		outfile__array_Core_2_Iagain.write(reinterpret_cast<char*>(_array_Core_2_Iagain), 1*sizeof(_array_Core_2_Iagain[0]));
		outfile__array_Core_2_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iagain." << endl;
	}
	ofstream outfile__array_Core_2_Iahp;
	outfile__array_Core_2_Iahp.open("results/_array_Core_2_Iahp_3347612591777789011", ios::binary | ios::out);
	if(outfile__array_Core_2_Iahp.is_open())
	{
		outfile__array_Core_2_Iahp.write(reinterpret_cast<char*>(_array_Core_2_Iahp), 256*sizeof(_array_Core_2_Iahp[0]));
		outfile__array_Core_2_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iahp." << endl;
	}
	ofstream outfile__array_Core_2_Ianorm;
	outfile__array_Core_2_Ianorm.open("results/_array_Core_2_Ianorm_-8360366465730996248", ios::binary | ios::out);
	if(outfile__array_Core_2_Ianorm.is_open())
	{
		outfile__array_Core_2_Ianorm.write(reinterpret_cast<char*>(_array_Core_2_Ianorm), 1*sizeof(_array_Core_2_Ianorm[0]));
		outfile__array_Core_2_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ianorm." << endl;
	}
	ofstream outfile__array_Core_2_Iath;
	outfile__array_Core_2_Iath.open("results/_array_Core_2_Iath_3341859996065304452", ios::binary | ios::out);
	if(outfile__array_Core_2_Iath.is_open())
	{
		outfile__array_Core_2_Iath.write(reinterpret_cast<char*>(_array_Core_2_Iath), 1*sizeof(_array_Core_2_Iath[0]));
		outfile__array_Core_2_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iath." << endl;
	}
	ofstream outfile__array_Core_2_Ica;
	outfile__array_Core_2_Ica.open("results/_array_Core_2_Ica_3623387242945593699", ios::binary | ios::out);
	if(outfile__array_Core_2_Ica.is_open())
	{
		outfile__array_Core_2_Ica.write(reinterpret_cast<char*>(_array_Core_2_Ica), 256*sizeof(_array_Core_2_Ica[0]));
		outfile__array_Core_2_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ica." << endl;
	}
	ofstream outfile__array_Core_2_Iconst;
	outfile__array_Core_2_Iconst.open("results/_array_Core_2_Iconst_2011122363927891143", ios::binary | ios::out);
	if(outfile__array_Core_2_Iconst.is_open())
	{
		outfile__array_Core_2_Iconst.write(reinterpret_cast<char*>(_array_Core_2_Iconst), 256*sizeof(_array_Core_2_Iconst[0]));
		outfile__array_Core_2_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iconst." << endl;
	}
	ofstream outfile__array_Core_2_Imem;
	outfile__array_Core_2_Imem.open("results/_array_Core_2_Imem_-7164886921256918446", ios::binary | ios::out);
	if(outfile__array_Core_2_Imem.is_open())
	{
		outfile__array_Core_2_Imem.write(reinterpret_cast<char*>(_array_Core_2_Imem), 256*sizeof(_array_Core_2_Imem[0]));
		outfile__array_Core_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Imem." << endl;
	}
	ofstream outfile__array_Core_2_Io;
	outfile__array_Core_2_Io.open("results/_array_Core_2_Io_-1731356464879493242", ios::binary | ios::out);
	if(outfile__array_Core_2_Io.is_open())
	{
		outfile__array_Core_2_Io.write(reinterpret_cast<char*>(_array_Core_2_Io), 1*sizeof(_array_Core_2_Io[0]));
		outfile__array_Core_2_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Io." << endl;
	}
	ofstream outfile__array_Core_2_Ireset;
	outfile__array_Core_2_Ireset.open("results/_array_Core_2_Ireset_-450917754082670966", ios::binary | ios::out);
	if(outfile__array_Core_2_Ireset.is_open())
	{
		outfile__array_Core_2_Ireset.write(reinterpret_cast<char*>(_array_Core_2_Ireset), 1*sizeof(_array_Core_2_Ireset[0]));
		outfile__array_Core_2_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ireset." << endl;
	}
	ofstream outfile__array_Core_2_Ishunt;
	outfile__array_Core_2_Ishunt.open("results/_array_Core_2_Ishunt_8562323081776337332", ios::binary | ios::out);
	if(outfile__array_Core_2_Ishunt.is_open())
	{
		outfile__array_Core_2_Ishunt.write(reinterpret_cast<char*>(_array_Core_2_Ishunt), 256*sizeof(_array_Core_2_Ishunt[0]));
		outfile__array_Core_2_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ishunt." << endl;
	}
	ofstream outfile__array_Core_2_Ispkthr;
	outfile__array_Core_2_Ispkthr.open("results/_array_Core_2_Ispkthr_5777970055305841883", ios::binary | ios::out);
	if(outfile__array_Core_2_Ispkthr.is_open())
	{
		outfile__array_Core_2_Ispkthr.write(reinterpret_cast<char*>(_array_Core_2_Ispkthr), 1*sizeof(_array_Core_2_Ispkthr[0]));
		outfile__array_Core_2_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_2_Itau;
	outfile__array_Core_2_Itau.open("results/_array_Core_2_Itau_3865330267265384978", ios::binary | ios::out);
	if(outfile__array_Core_2_Itau.is_open())
	{
		outfile__array_Core_2_Itau.write(reinterpret_cast<char*>(_array_Core_2_Itau), 1*sizeof(_array_Core_2_Itau[0]));
		outfile__array_Core_2_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itau." << endl;
	}
	ofstream outfile__array_Core_2_Itauahp;
	outfile__array_Core_2_Itauahp.open("results/_array_Core_2_Itauahp_-7921420860825675132", ios::binary | ios::out);
	if(outfile__array_Core_2_Itauahp.is_open())
	{
		outfile__array_Core_2_Itauahp.write(reinterpret_cast<char*>(_array_Core_2_Itauahp), 1*sizeof(_array_Core_2_Itauahp[0]));
		outfile__array_Core_2_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itauahp." << endl;
	}
	ofstream outfile__array_Core_2_Ith;
	outfile__array_Core_2_Ith.open("results/_array_Core_2_Ith_4632141561188572316", ios::binary | ios::out);
	if(outfile__array_Core_2_Ith.is_open())
	{
		outfile__array_Core_2_Ith.write(reinterpret_cast<char*>(_array_Core_2_Ith), 1*sizeof(_array_Core_2_Ith[0]));
		outfile__array_Core_2_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ith." << endl;
	}
	ofstream outfile__array_Core_2_Ithahp;
	outfile__array_Core_2_Ithahp.open("results/_array_Core_2_Ithahp_225951013746537215", ios::binary | ios::out);
	if(outfile__array_Core_2_Ithahp.is_open())
	{
		outfile__array_Core_2_Ithahp.write(reinterpret_cast<char*>(_array_Core_2_Ithahp), 1*sizeof(_array_Core_2_Ithahp[0]));
		outfile__array_Core_2_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ithahp." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_1207315247443631031", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_3453002427729019489", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_-6462242780603396985", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_6140344169567718363", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_refP;
	outfile__array_Core_2_refP.open("results/_array_Core_2_refP_-7277493327001050333", ios::binary | ios::out);
	if(outfile__array_Core_2_refP.is_open())
	{
		outfile__array_Core_2_refP.write(reinterpret_cast<char*>(_array_Core_2_refP), 1*sizeof(_array_Core_2_refP[0]));
		outfile__array_Core_2_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_refP." << endl;
	}
	ofstream outfile__array_Core_2_tauca;
	outfile__array_Core_2_tauca.open("results/_array_Core_2_tauca_7944621279189138626", ios::binary | ios::out);
	if(outfile__array_Core_2_tauca.is_open())
	{
		outfile__array_Core_2_tauca.write(reinterpret_cast<char*>(_array_Core_2_tauca), 1*sizeof(_array_Core_2_tauca[0]));
		outfile__array_Core_2_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tauca." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_194078096199831985", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_-8878492935850302543", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_ampa;
	outfile__array_Core_3_C_syn_ampa.open("results/_array_Core_3_C_syn_ampa_-1984501659240466142", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_ampa.is_open())
	{
		outfile__array_Core_3_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_C_syn_ampa), 256*sizeof(_array_Core_3_C_syn_ampa[0]));
		outfile__array_Core_3_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_a;
	outfile__array_Core_3_C_syn_gaba_a.open("results/_array_Core_3_C_syn_gaba_a_7092480609544031760", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_a), 256*sizeof(_array_Core_3_C_syn_gaba_a[0]));
		outfile__array_Core_3_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_b;
	outfile__array_Core_3_C_syn_gaba_b.open("results/_array_Core_3_C_syn_gaba_b_-1452513691016961747", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_b), 256*sizeof(_array_Core_3_C_syn_gaba_b[0]));
		outfile__array_Core_3_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_nmda;
	outfile__array_Core_3_C_syn_nmda.open("results/_array_Core_3_C_syn_nmda_506855480084061468", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_nmda.is_open())
	{
		outfile__array_Core_3_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_C_syn_nmda), 256*sizeof(_array_Core_3_C_syn_nmda[0]));
		outfile__array_Core_3_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Cahp;
	outfile__array_Core_3_Cahp.open("results/_array_Core_3_Cahp_-7819647528479504839", ios::binary | ios::out);
	if(outfile__array_Core_3_Cahp.is_open())
	{
		outfile__array_Core_3_Cahp.write(reinterpret_cast<char*>(_array_Core_3_Cahp), 1*sizeof(_array_Core_3_Cahp[0]));
		outfile__array_Core_3_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cahp." << endl;
	}
	ofstream outfile__array_Core_3_Cmem;
	outfile__array_Core_3_Cmem.open("results/_array_Core_3_Cmem_-3997173218632418415", ios::binary | ios::out);
	if(outfile__array_Core_3_Cmem.is_open())
	{
		outfile__array_Core_3_Cmem.write(reinterpret_cast<char*>(_array_Core_3_Cmem), 1*sizeof(_array_Core_3_Cmem[0]));
		outfile__array_Core_3_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cmem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_-3692073746994142885", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_ampa;
	outfile__array_Core_3_I_g_syn_ampa.open("results/_array_Core_3_I_g_syn_ampa_-645829098630424351", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_ampa), 256*sizeof(_array_Core_3_I_g_syn_ampa[0]));
		outfile__array_Core_3_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_a;
	outfile__array_Core_3_I_g_syn_gaba_a.open("results/_array_Core_3_I_g_syn_gaba_a_-9181887797572632566", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_a), 256*sizeof(_array_Core_3_I_g_syn_gaba_a[0]));
		outfile__array_Core_3_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_b;
	outfile__array_Core_3_I_g_syn_gaba_b.open("results/_array_Core_3_I_g_syn_gaba_b_526119655857971262", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_b), 256*sizeof(_array_Core_3_I_g_syn_gaba_b[0]));
		outfile__array_Core_3_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_nmda;
	outfile__array_Core_3_I_g_syn_nmda.open("results/_array_Core_3_I_g_syn_nmda_-1676947389141590292", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_nmda), 256*sizeof(_array_Core_3_I_g_syn_nmda[0]));
		outfile__array_Core_3_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_ampa;
	outfile__array_Core_3_I_syn_ampa.open("results/_array_Core_3_I_syn_ampa_-7732277529593338395", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_syn_ampa), 256*sizeof(_array_Core_3_I_syn_ampa[0]));
		outfile__array_Core_3_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_a;
	outfile__array_Core_3_I_syn_gaba_a.open("results/_array_Core_3_I_syn_gaba_a_-8684274318161680419", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_a), 256*sizeof(_array_Core_3_I_syn_gaba_a[0]));
		outfile__array_Core_3_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_b;
	outfile__array_Core_3_I_syn_gaba_b.open("results/_array_Core_3_I_syn_gaba_b_7601609198073057679", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_b), 256*sizeof(_array_Core_3_I_syn_gaba_b[0]));
		outfile__array_Core_3_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_nmda;
	outfile__array_Core_3_I_syn_nmda.open("results/_array_Core_3_I_syn_nmda_-2249968774307133676", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_syn_nmda), 256*sizeof(_array_Core_3_I_syn_nmda[0]));
		outfile__array_Core_3_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_ampa;
	outfile__array_Core_3_I_tau_syn_ampa.open("results/_array_Core_3_I_tau_syn_ampa_5514513043141738251", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_ampa), 256*sizeof(_array_Core_3_I_tau_syn_ampa[0]));
		outfile__array_Core_3_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_a;
	outfile__array_Core_3_I_tau_syn_gaba_a.open("results/_array_Core_3_I_tau_syn_gaba_a_-742095981766220662", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_a), 256*sizeof(_array_Core_3_I_tau_syn_gaba_a[0]));
		outfile__array_Core_3_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_b;
	outfile__array_Core_3_I_tau_syn_gaba_b.open("results/_array_Core_3_I_tau_syn_gaba_b_8467742146563038691", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_b), 256*sizeof(_array_Core_3_I_tau_syn_gaba_b[0]));
		outfile__array_Core_3_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_nmda;
	outfile__array_Core_3_I_tau_syn_nmda.open("results/_array_Core_3_I_tau_syn_nmda_3014830051893650828", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_nmda), 256*sizeof(_array_Core_3_I_tau_syn_nmda[0]));
		outfile__array_Core_3_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_ampa;
	outfile__array_Core_3_I_wo_syn_ampa.open("results/_array_Core_3_I_wo_syn_ampa_3270599614090578328", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_ampa), 256*sizeof(_array_Core_3_I_wo_syn_ampa[0]));
		outfile__array_Core_3_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_a;
	outfile__array_Core_3_I_wo_syn_gaba_a.open("results/_array_Core_3_I_wo_syn_gaba_a_-6518530011849004346", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_a), 256*sizeof(_array_Core_3_I_wo_syn_gaba_a[0]));
		outfile__array_Core_3_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_b;
	outfile__array_Core_3_I_wo_syn_gaba_b.open("results/_array_Core_3_I_wo_syn_gaba_b_-1888098851762081654", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_b), 256*sizeof(_array_Core_3_I_wo_syn_gaba_b[0]));
		outfile__array_Core_3_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_nmda;
	outfile__array_Core_3_I_wo_syn_nmda.open("results/_array_Core_3_I_wo_syn_nmda_-5650195242669279016", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_nmda), 256*sizeof(_array_Core_3_I_wo_syn_nmda[0]));
		outfile__array_Core_3_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Iagain;
	outfile__array_Core_3_Iagain.open("results/_array_Core_3_Iagain_-5182300490010876210", ios::binary | ios::out);
	if(outfile__array_Core_3_Iagain.is_open())
	{
		outfile__array_Core_3_Iagain.write(reinterpret_cast<char*>(_array_Core_3_Iagain), 1*sizeof(_array_Core_3_Iagain[0]));
		outfile__array_Core_3_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iagain." << endl;
	}
	ofstream outfile__array_Core_3_Iahp;
	outfile__array_Core_3_Iahp.open("results/_array_Core_3_Iahp_8482107041631680152", ios::binary | ios::out);
	if(outfile__array_Core_3_Iahp.is_open())
	{
		outfile__array_Core_3_Iahp.write(reinterpret_cast<char*>(_array_Core_3_Iahp), 256*sizeof(_array_Core_3_Iahp[0]));
		outfile__array_Core_3_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iahp." << endl;
	}
	ofstream outfile__array_Core_3_Ianorm;
	outfile__array_Core_3_Ianorm.open("results/_array_Core_3_Ianorm_-357076459821844290", ios::binary | ios::out);
	if(outfile__array_Core_3_Ianorm.is_open())
	{
		outfile__array_Core_3_Ianorm.write(reinterpret_cast<char*>(_array_Core_3_Ianorm), 1*sizeof(_array_Core_3_Ianorm[0]));
		outfile__array_Core_3_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ianorm." << endl;
	}
	ofstream outfile__array_Core_3_Iath;
	outfile__array_Core_3_Iath.open("results/_array_Core_3_Iath_-1904201004818938039", ios::binary | ios::out);
	if(outfile__array_Core_3_Iath.is_open())
	{
		outfile__array_Core_3_Iath.write(reinterpret_cast<char*>(_array_Core_3_Iath), 1*sizeof(_array_Core_3_Iath[0]));
		outfile__array_Core_3_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iath." << endl;
	}
	ofstream outfile__array_Core_3_Ica;
	outfile__array_Core_3_Ica.open("results/_array_Core_3_Ica_-5575612371929496101", ios::binary | ios::out);
	if(outfile__array_Core_3_Ica.is_open())
	{
		outfile__array_Core_3_Ica.write(reinterpret_cast<char*>(_array_Core_3_Ica), 256*sizeof(_array_Core_3_Ica[0]));
		outfile__array_Core_3_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ica." << endl;
	}
	ofstream outfile__array_Core_3_Iconst;
	outfile__array_Core_3_Iconst.open("results/_array_Core_3_Iconst_6461030038968763856", ios::binary | ios::out);
	if(outfile__array_Core_3_Iconst.is_open())
	{
		outfile__array_Core_3_Iconst.write(reinterpret_cast<char*>(_array_Core_3_Iconst), 256*sizeof(_array_Core_3_Iconst[0]));
		outfile__array_Core_3_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iconst." << endl;
	}
	ofstream outfile__array_Core_3_Imem;
	outfile__array_Core_3_Imem.open("results/_array_Core_3_Imem_-4058249828787229082", ios::binary | ios::out);
	if(outfile__array_Core_3_Imem.is_open())
	{
		outfile__array_Core_3_Imem.write(reinterpret_cast<char*>(_array_Core_3_Imem), 256*sizeof(_array_Core_3_Imem[0]));
		outfile__array_Core_3_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Imem." << endl;
	}
	ofstream outfile__array_Core_3_Io;
	outfile__array_Core_3_Io.open("results/_array_Core_3_Io_449389442761529675", ios::binary | ios::out);
	if(outfile__array_Core_3_Io.is_open())
	{
		outfile__array_Core_3_Io.write(reinterpret_cast<char*>(_array_Core_3_Io), 1*sizeof(_array_Core_3_Io[0]));
		outfile__array_Core_3_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Io." << endl;
	}
	ofstream outfile__array_Core_3_Ireset;
	outfile__array_Core_3_Ireset.open("results/_array_Core_3_Ireset_7098757951505339233", ios::binary | ios::out);
	if(outfile__array_Core_3_Ireset.is_open())
	{
		outfile__array_Core_3_Ireset.write(reinterpret_cast<char*>(_array_Core_3_Ireset), 1*sizeof(_array_Core_3_Ireset[0]));
		outfile__array_Core_3_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ireset." << endl;
	}
	ofstream outfile__array_Core_3_Ishunt;
	outfile__array_Core_3_Ishunt.open("results/_array_Core_3_Ishunt_-3544758332537811166", ios::binary | ios::out);
	if(outfile__array_Core_3_Ishunt.is_open())
	{
		outfile__array_Core_3_Ishunt.write(reinterpret_cast<char*>(_array_Core_3_Ishunt), 256*sizeof(_array_Core_3_Ishunt[0]));
		outfile__array_Core_3_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ishunt." << endl;
	}
	ofstream outfile__array_Core_3_Ispkthr;
	outfile__array_Core_3_Ispkthr.open("results/_array_Core_3_Ispkthr_-8418926784064599302", ios::binary | ios::out);
	if(outfile__array_Core_3_Ispkthr.is_open())
	{
		outfile__array_Core_3_Ispkthr.write(reinterpret_cast<char*>(_array_Core_3_Ispkthr), 1*sizeof(_array_Core_3_Ispkthr[0]));
		outfile__array_Core_3_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_3_Itau;
	outfile__array_Core_3_Itau.open("results/_array_Core_3_Itau_-256327405498049637", ios::binary | ios::out);
	if(outfile__array_Core_3_Itau.is_open())
	{
		outfile__array_Core_3_Itau.write(reinterpret_cast<char*>(_array_Core_3_Itau), 1*sizeof(_array_Core_3_Itau[0]));
		outfile__array_Core_3_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itau." << endl;
	}
	ofstream outfile__array_Core_3_Itauahp;
	outfile__array_Core_3_Itauahp.open("results/_array_Core_3_Itauahp_2046309331186981635", ios::binary | ios::out);
	if(outfile__array_Core_3_Itauahp.is_open())
	{
		outfile__array_Core_3_Itauahp.write(reinterpret_cast<char*>(_array_Core_3_Itauahp), 1*sizeof(_array_Core_3_Itauahp[0]));
		outfile__array_Core_3_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itauahp." << endl;
	}
	ofstream outfile__array_Core_3_Ith;
	outfile__array_Core_3_Ith.open("results/_array_Core_3_Ith_9013645877549481701", ios::binary | ios::out);
	if(outfile__array_Core_3_Ith.is_open())
	{
		outfile__array_Core_3_Ith.write(reinterpret_cast<char*>(_array_Core_3_Ith), 1*sizeof(_array_Core_3_Ith[0]));
		outfile__array_Core_3_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ith." << endl;
	}
	ofstream outfile__array_Core_3_Ithahp;
	outfile__array_Core_3_Ithahp.open("results/_array_Core_3_Ithahp_4893810212656739355", ios::binary | ios::out);
	if(outfile__array_Core_3_Ithahp.is_open())
	{
		outfile__array_Core_3_Ithahp.write(reinterpret_cast<char*>(_array_Core_3_Ithahp), 1*sizeof(_array_Core_3_Ithahp[0]));
		outfile__array_Core_3_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ithahp." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_-6481694510354979840", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_-6754839437108704548", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_-6685143322761603494", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_1267897084822871775", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_refP;
	outfile__array_Core_3_refP.open("results/_array_Core_3_refP_8545676063331873430", ios::binary | ios::out);
	if(outfile__array_Core_3_refP.is_open())
	{
		outfile__array_Core_3_refP.write(reinterpret_cast<char*>(_array_Core_3_refP), 1*sizeof(_array_Core_3_refP[0]));
		outfile__array_Core_3_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_refP." << endl;
	}
	ofstream outfile__array_Core_3_tauca;
	outfile__array_Core_3_tauca.open("results/_array_Core_3_tauca_6169758083556511240", ios::binary | ios::out);
	if(outfile__array_Core_3_tauca.is_open())
	{
		outfile__array_Core_3_tauca.write(reinterpret_cast<char*>(_array_Core_3_tauca), 1*sizeof(_array_Core_3_tauca[0]));
		outfile__array_Core_3_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tauca." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_7507911301556907299", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_7914608550395254734", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_5927500599671396118", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_53640577467780044", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_GABA_B4_N;
	outfile__array_GABA_B4_N.open("results/_array_GABA_B4_N_-501825036322171224", ios::binary | ios::out);
	if(outfile__array_GABA_B4_N.is_open())
	{
		outfile__array_GABA_B4_N.write(reinterpret_cast<char*>(_array_GABA_B4_N), 1*sizeof(_array_GABA_B4_N[0]));
		outfile__array_GABA_B4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B4_N." << endl;
	}
	ofstream outfile__array_GABA_B5_N;
	outfile__array_GABA_B5_N.open("results/_array_GABA_B5_N_5269775267698985617", ios::binary | ios::out);
	if(outfile__array_GABA_B5_N.is_open())
	{
		outfile__array_GABA_B5_N.write(reinterpret_cast<char*>(_array_GABA_B5_N), 1*sizeof(_array_GABA_B5_N[0]));
		outfile__array_GABA_B5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B5_N." << endl;
	}
	ofstream outfile__array_GABA_B6_N;
	outfile__array_GABA_B6_N.open("results/_array_GABA_B6_N_-192896019597061299", ios::binary | ios::out);
	if(outfile__array_GABA_B6_N.is_open())
	{
		outfile__array_GABA_B6_N.write(reinterpret_cast<char*>(_array_GABA_B6_N), 1*sizeof(_array_GABA_B6_N[0]));
		outfile__array_GABA_B6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B6_N." << endl;
	}
	ofstream outfile__array_GABA_B7_N;
	outfile__array_GABA_B7_N.open("results/_array_GABA_B7_N_4455262355447441040", ios::binary | ios::out);
	if(outfile__array_GABA_B7_N.is_open())
	{
		outfile__array_GABA_B7_N.write(reinterpret_cast<char*>(_array_GABA_B7_N), 1*sizeof(_array_GABA_B7_N[0]));
		outfile__array_GABA_B7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B7_N." << endl;
	}
	ofstream outfile__array_GABA_B8_N;
	outfile__array_GABA_B8_N.open("results/_array_GABA_B8_N_4231281170780482312", ios::binary | ios::out);
	if(outfile__array_GABA_B8_N.is_open())
	{
		outfile__array_GABA_B8_N.write(reinterpret_cast<char*>(_array_GABA_B8_N), 1*sizeof(_array_GABA_B8_N[0]));
		outfile__array_GABA_B8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B8_N." << endl;
	}
	ofstream outfile__array_GABA_B9_N;
	outfile__array_GABA_B9_N.open("results/_array_GABA_B9_N_1578594977130716060", ios::binary | ios::out);
	if(outfile__array_GABA_B9_N.is_open())
	{
		outfile__array_GABA_B9_N.write(reinterpret_cast<char*>(_array_GABA_B9_N), 1*sizeof(_array_GABA_B9_N[0]));
		outfile__array_GABA_B9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B9_N." << endl;
	}
	ofstream outfile__array_inh_neuron_output__source_idx;
	outfile__array_inh_neuron_output__source_idx.open("results/_array_inh_neuron_output__source_idx_876494676916595032", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output__source_idx.is_open())
	{
		outfile__array_inh_neuron_output__source_idx.write(reinterpret_cast<char*>(_array_inh_neuron_output__source_idx), 2*sizeof(_array_inh_neuron_output__source_idx[0]));
		outfile__array_inh_neuron_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output__source_idx." << endl;
	}
	ofstream outfile__array_inh_neuron_output_count;
	outfile__array_inh_neuron_output_count.open("results/_array_inh_neuron_output_count_7091388660937367135", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output_count.is_open())
	{
		outfile__array_inh_neuron_output_count.write(reinterpret_cast<char*>(_array_inh_neuron_output_count), 2*sizeof(_array_inh_neuron_output_count[0]));
		outfile__array_inh_neuron_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output_count." << endl;
	}
	ofstream outfile__array_inh_neuron_output_N;
	outfile__array_inh_neuron_output_N.open("results/_array_inh_neuron_output_N_-3600122960585667097", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output_N.is_open())
	{
		outfile__array_inh_neuron_output_N.write(reinterpret_cast<char*>(_array_inh_neuron_output_N), 1*sizeof(_array_inh_neuron_output_N[0]));
		outfile__array_inh_neuron_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output_N." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__lastindex;
	outfile__array_InpSpikeGenerator__lastindex.open("results/_array_InpSpikeGenerator__lastindex_-1471832926253797827", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__lastindex.is_open())
	{
		outfile__array_InpSpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__lastindex), 1*sizeof(_array_InpSpikeGenerator__lastindex[0]));
		outfile__array_InpSpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__period_bins;
	outfile__array_InpSpikeGenerator__period_bins.open("results/_array_InpSpikeGenerator__period_bins_2930847762737691083", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__period_bins.is_open())
	{
		outfile__array_InpSpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__period_bins), 1*sizeof(_array_InpSpikeGenerator__period_bins[0]));
		outfile__array_InpSpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__spikespace;
	outfile__array_InpSpikeGenerator__spikespace.open("results/_array_InpSpikeGenerator__spikespace_-2845848400685140700", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__spikespace.is_open())
	{
		outfile__array_InpSpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__spikespace), 2*sizeof(_array_InpSpikeGenerator__spikespace[0]));
		outfile__array_InpSpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_i;
	outfile__array_InpSpikeGenerator_i.open("results/_array_InpSpikeGenerator_i_3127906651109950498", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_i.is_open())
	{
		outfile__array_InpSpikeGenerator_i.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_i), 1*sizeof(_array_InpSpikeGenerator_i[0]));
		outfile__array_InpSpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_i." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_period;
	outfile__array_InpSpikeGenerator_period.open("results/_array_InpSpikeGenerator_period_-2501760283541788185", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_period.is_open())
	{
		outfile__array_InpSpikeGenerator_period.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_period), 1*sizeof(_array_InpSpikeGenerator_period[0]));
		outfile__array_InpSpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_period." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_3309006458294404693", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_2309665667300052486", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_7759581868629726001", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_NMDA1_N;
	outfile__array_NMDA1_N.open("results/_array_NMDA1_N_8885478118211289501", ios::binary | ios::out);
	if(outfile__array_NMDA1_N.is_open())
	{
		outfile__array_NMDA1_N.write(reinterpret_cast<char*>(_array_NMDA1_N), 1*sizeof(_array_NMDA1_N[0]));
		outfile__array_NMDA1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA1_N." << endl;
	}
	ofstream outfile__array_NMDA2_N;
	outfile__array_NMDA2_N.open("results/_array_NMDA2_N_-4692804475048281657", ios::binary | ios::out);
	if(outfile__array_NMDA2_N.is_open())
	{
		outfile__array_NMDA2_N.write(reinterpret_cast<char*>(_array_NMDA2_N), 1*sizeof(_array_NMDA2_N[0]));
		outfile__array_NMDA2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA2_N." << endl;
	}
	ofstream outfile__array_NMDA3_N;
	outfile__array_NMDA3_N.open("results/_array_NMDA3_N_324300327488229859", ios::binary | ios::out);
	if(outfile__array_NMDA3_N.is_open())
	{
		outfile__array_NMDA3_N.write(reinterpret_cast<char*>(_array_NMDA3_N), 1*sizeof(_array_NMDA3_N[0]));
		outfile__array_NMDA3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA3_N." << endl;
	}
	ofstream outfile__array_spikemonitor_3__source_idx;
	outfile__array_spikemonitor_3__source_idx.open("results/_array_spikemonitor_3__source_idx_8866698715300300326", ios::binary | ios::out);
	if(outfile__array_spikemonitor_3__source_idx.is_open())
	{
		outfile__array_spikemonitor_3__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_3__source_idx), 2*sizeof(_array_spikemonitor_3__source_idx[0]));
		outfile__array_spikemonitor_3__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_3__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_3_count;
	outfile__array_spikemonitor_3_count.open("results/_array_spikemonitor_3_count_-4177944002685171036", ios::binary | ios::out);
	if(outfile__array_spikemonitor_3_count.is_open())
	{
		outfile__array_spikemonitor_3_count.write(reinterpret_cast<char*>(_array_spikemonitor_3_count), 2*sizeof(_array_spikemonitor_3_count[0]));
		outfile__array_spikemonitor_3_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_3_count." << endl;
	}
	ofstream outfile__array_spikemonitor_3_N;
	outfile__array_spikemonitor_3_N.open("results/_array_spikemonitor_3_N_4351354981446606499", ios::binary | ios::out);
	if(outfile__array_spikemonitor_3_N.is_open())
	{
		outfile__array_spikemonitor_3_N.write(reinterpret_cast<char*>(_array_spikemonitor_3_N), 1*sizeof(_array_spikemonitor_3_N[0]));
		outfile__array_spikemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_3_N." << endl;
	}
	ofstream outfile__array_spikemonitor_4__source_idx;
	outfile__array_spikemonitor_4__source_idx.open("results/_array_spikemonitor_4__source_idx_-2071976133684931448", ios::binary | ios::out);
	if(outfile__array_spikemonitor_4__source_idx.is_open())
	{
		outfile__array_spikemonitor_4__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_4__source_idx), 2*sizeof(_array_spikemonitor_4__source_idx[0]));
		outfile__array_spikemonitor_4__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_4__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_4_count;
	outfile__array_spikemonitor_4_count.open("results/_array_spikemonitor_4_count_-6244539875143430824", ios::binary | ios::out);
	if(outfile__array_spikemonitor_4_count.is_open())
	{
		outfile__array_spikemonitor_4_count.write(reinterpret_cast<char*>(_array_spikemonitor_4_count), 2*sizeof(_array_spikemonitor_4_count[0]));
		outfile__array_spikemonitor_4_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_4_count." << endl;
	}
	ofstream outfile__array_spikemonitor_4_N;
	outfile__array_spikemonitor_4_N.open("results/_array_spikemonitor_4_N_2206101722504308364", ios::binary | ios::out);
	if(outfile__array_spikemonitor_4_N.is_open())
	{
		outfile__array_spikemonitor_4_N.write(reinterpret_cast<char*>(_array_spikemonitor_4_N), 1*sizeof(_array_spikemonitor_4_N[0]));
		outfile__array_spikemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_4_N." << endl;
	}
	ofstream outfile__array_spikemonitor_5__source_idx;
	outfile__array_spikemonitor_5__source_idx.open("results/_array_spikemonitor_5__source_idx_5567447042205102016", ios::binary | ios::out);
	if(outfile__array_spikemonitor_5__source_idx.is_open())
	{
		outfile__array_spikemonitor_5__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_5__source_idx), 2*sizeof(_array_spikemonitor_5__source_idx[0]));
		outfile__array_spikemonitor_5__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_5__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_5_count;
	outfile__array_spikemonitor_5_count.open("results/_array_spikemonitor_5_count_8069214162983774840", ios::binary | ios::out);
	if(outfile__array_spikemonitor_5_count.is_open())
	{
		outfile__array_spikemonitor_5_count.write(reinterpret_cast<char*>(_array_spikemonitor_5_count), 2*sizeof(_array_spikemonitor_5_count[0]));
		outfile__array_spikemonitor_5_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_5_count." << endl;
	}
	ofstream outfile__array_spikemonitor_5_N;
	outfile__array_spikemonitor_5_N.open("results/_array_spikemonitor_5_N_-5858796409289393473", ios::binary | ios::out);
	if(outfile__array_spikemonitor_5_N.is_open())
	{
		outfile__array_spikemonitor_5_N.write(reinterpret_cast<char*>(_array_spikemonitor_5_N), 1*sizeof(_array_spikemonitor_5_N[0]));
		outfile__array_spikemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor_13__indices;
	outfile__array_statemonitor_13__indices.open("results/_array_statemonitor_13__indices_-4914336328254515168", ios::binary | ios::out);
	if(outfile__array_statemonitor_13__indices.is_open())
	{
		outfile__array_statemonitor_13__indices.write(reinterpret_cast<char*>(_array_statemonitor_13__indices), 2*sizeof(_array_statemonitor_13__indices[0]));
		outfile__array_statemonitor_13__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13__indices." << endl;
	}
	ofstream outfile__array_statemonitor_13_N;
	outfile__array_statemonitor_13_N.open("results/_array_statemonitor_13_N_-3950380751412865038", ios::binary | ios::out);
	if(outfile__array_statemonitor_13_N.is_open())
	{
		outfile__array_statemonitor_13_N.write(reinterpret_cast<char*>(_array_statemonitor_13_N), 1*sizeof(_array_statemonitor_13_N[0]));
		outfile__array_statemonitor_13_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13_N." << endl;
	}
	ofstream outfile__array_statemonitor_14__indices;
	outfile__array_statemonitor_14__indices.open("results/_array_statemonitor_14__indices_5654253662256853318", ios::binary | ios::out);
	if(outfile__array_statemonitor_14__indices.is_open())
	{
		outfile__array_statemonitor_14__indices.write(reinterpret_cast<char*>(_array_statemonitor_14__indices), 2*sizeof(_array_statemonitor_14__indices[0]));
		outfile__array_statemonitor_14__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_14__indices." << endl;
	}
	ofstream outfile__array_statemonitor_14_N;
	outfile__array_statemonitor_14_N.open("results/_array_statemonitor_14_N_2697172735399113048", ios::binary | ios::out);
	if(outfile__array_statemonitor_14_N.is_open())
	{
		outfile__array_statemonitor_14_N.write(reinterpret_cast<char*>(_array_statemonitor_14_N), 1*sizeof(_array_statemonitor_14_N[0]));
		outfile__array_statemonitor_14_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_14_N." << endl;
	}
	ofstream outfile__array_statemonitor_15__indices;
	outfile__array_statemonitor_15__indices.open("results/_array_statemonitor_15__indices_262493864601655453", ios::binary | ios::out);
	if(outfile__array_statemonitor_15__indices.is_open())
	{
		outfile__array_statemonitor_15__indices.write(reinterpret_cast<char*>(_array_statemonitor_15__indices), 2*sizeof(_array_statemonitor_15__indices[0]));
		outfile__array_statemonitor_15__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_15__indices." << endl;
	}
	ofstream outfile__array_statemonitor_15_N;
	outfile__array_statemonitor_15_N.open("results/_array_statemonitor_15_N_521801638560409773", ios::binary | ios::out);
	if(outfile__array_statemonitor_15_N.is_open())
	{
		outfile__array_statemonitor_15_N.write(reinterpret_cast<char*>(_array_statemonitor_15_N), 1*sizeof(_array_statemonitor_15_N[0]));
		outfile__array_statemonitor_15_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_15_N." << endl;
	}
	ofstream outfile__array_statemonitor_16__indices;
	outfile__array_statemonitor_16__indices.open("results/_array_statemonitor_16__indices_-4254941344806388303", ios::binary | ios::out);
	if(outfile__array_statemonitor_16__indices.is_open())
	{
		outfile__array_statemonitor_16__indices.write(reinterpret_cast<char*>(_array_statemonitor_16__indices), 1*sizeof(_array_statemonitor_16__indices[0]));
		outfile__array_statemonitor_16__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_16__indices." << endl;
	}
	ofstream outfile__array_statemonitor_16_N;
	outfile__array_statemonitor_16_N.open("results/_array_statemonitor_16_N_5167321881553473195", ios::binary | ios::out);
	if(outfile__array_statemonitor_16_N.is_open())
	{
		outfile__array_statemonitor_16_N.write(reinterpret_cast<char*>(_array_statemonitor_16_N), 1*sizeof(_array_statemonitor_16_N[0]));
		outfile__array_statemonitor_16_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_16_N." << endl;
	}
	ofstream outfile__array_statemonitor_17__indices;
	outfile__array_statemonitor_17__indices.open("results/_array_statemonitor_17__indices_95365107426675460", ios::binary | ios::out);
	if(outfile__array_statemonitor_17__indices.is_open())
	{
		outfile__array_statemonitor_17__indices.write(reinterpret_cast<char*>(_array_statemonitor_17__indices), 1*sizeof(_array_statemonitor_17__indices[0]));
		outfile__array_statemonitor_17__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_17__indices." << endl;
	}
	ofstream outfile__array_statemonitor_17_N;
	outfile__array_statemonitor_17_N.open("results/_array_statemonitor_17_N_7962788785950242085", ios::binary | ios::out);
	if(outfile__array_statemonitor_17_N.is_open())
	{
		outfile__array_statemonitor_17_N.write(reinterpret_cast<char*>(_array_statemonitor_17_N), 1*sizeof(_array_statemonitor_17_N[0]));
		outfile__array_statemonitor_17_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_17_N." << endl;
	}
	ofstream outfile__array_statemonitor_18__indices;
	outfile__array_statemonitor_18__indices.open("results/_array_statemonitor_18__indices_-9047752152008062726", ios::binary | ios::out);
	if(outfile__array_statemonitor_18__indices.is_open())
	{
		outfile__array_statemonitor_18__indices.write(reinterpret_cast<char*>(_array_statemonitor_18__indices), 1*sizeof(_array_statemonitor_18__indices[0]));
		outfile__array_statemonitor_18__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_18__indices." << endl;
	}
	ofstream outfile__array_statemonitor_18_N;
	outfile__array_statemonitor_18_N.open("results/_array_statemonitor_18_N_-7131400184363122166", ios::binary | ios::out);
	if(outfile__array_statemonitor_18_N.is_open())
	{
		outfile__array_statemonitor_18_N.write(reinterpret_cast<char*>(_array_statemonitor_18_N), 1*sizeof(_array_statemonitor_18_N[0]));
		outfile__array_statemonitor_18_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_18_N." << endl;
	}
	ofstream outfile__array_statemonitor_19__indices;
	outfile__array_statemonitor_19__indices.open("results/_array_statemonitor_19__indices_4592411641473261296", ios::binary | ios::out);
	if(outfile__array_statemonitor_19__indices.is_open())
	{
		outfile__array_statemonitor_19__indices.write(reinterpret_cast<char*>(_array_statemonitor_19__indices), 1*sizeof(_array_statemonitor_19__indices[0]));
		outfile__array_statemonitor_19__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_19__indices." << endl;
	}
	ofstream outfile__array_statemonitor_19_N;
	outfile__array_statemonitor_19_N.open("results/_array_statemonitor_19_N_2146250711802475739", ios::binary | ios::out);
	if(outfile__array_statemonitor_19_N.is_open())
	{
		outfile__array_statemonitor_19_N.write(reinterpret_cast<char*>(_array_statemonitor_19_N), 1*sizeof(_array_statemonitor_19_N[0]));
		outfile__array_statemonitor_19_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_19_N." << endl;
	}
	ofstream outfile__array_statemonitor_20__indices;
	outfile__array_statemonitor_20__indices.open("results/_array_statemonitor_20__indices_3073056146654531244", ios::binary | ios::out);
	if(outfile__array_statemonitor_20__indices.is_open())
	{
		outfile__array_statemonitor_20__indices.write(reinterpret_cast<char*>(_array_statemonitor_20__indices), 1*sizeof(_array_statemonitor_20__indices[0]));
		outfile__array_statemonitor_20__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_20__indices." << endl;
	}
	ofstream outfile__array_statemonitor_20_N;
	outfile__array_statemonitor_20_N.open("results/_array_statemonitor_20_N_1135896302235989906", ios::binary | ios::out);
	if(outfile__array_statemonitor_20_N.is_open())
	{
		outfile__array_statemonitor_20_N.write(reinterpret_cast<char*>(_array_statemonitor_20_N), 1*sizeof(_array_statemonitor_20_N[0]));
		outfile__array_statemonitor_20_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_20_N." << endl;
	}
	ofstream outfile__array_statemonitor_21__indices;
	outfile__array_statemonitor_21__indices.open("results/_array_statemonitor_21__indices_3384166296761724739", ios::binary | ios::out);
	if(outfile__array_statemonitor_21__indices.is_open())
	{
		outfile__array_statemonitor_21__indices.write(reinterpret_cast<char*>(_array_statemonitor_21__indices), 1*sizeof(_array_statemonitor_21__indices[0]));
		outfile__array_statemonitor_21__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_21__indices." << endl;
	}
	ofstream outfile__array_statemonitor_21_N;
	outfile__array_statemonitor_21_N.open("results/_array_statemonitor_21_N_8289121304334585342", ios::binary | ios::out);
	if(outfile__array_statemonitor_21_N.is_open())
	{
		outfile__array_statemonitor_21_N.write(reinterpret_cast<char*>(_array_statemonitor_21_N), 1*sizeof(_array_statemonitor_21_N[0]));
		outfile__array_statemonitor_21_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_21_N." << endl;
	}
	ofstream outfile__array_statemonitor_22__indices;
	outfile__array_statemonitor_22__indices.open("results/_array_statemonitor_22__indices_-3533651283089672202", ios::binary | ios::out);
	if(outfile__array_statemonitor_22__indices.is_open())
	{
		outfile__array_statemonitor_22__indices.write(reinterpret_cast<char*>(_array_statemonitor_22__indices), 1*sizeof(_array_statemonitor_22__indices[0]));
		outfile__array_statemonitor_22__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_22__indices." << endl;
	}
	ofstream outfile__array_statemonitor_22_N;
	outfile__array_statemonitor_22_N.open("results/_array_statemonitor_22_N_7189949889404450531", ios::binary | ios::out);
	if(outfile__array_statemonitor_22_N.is_open())
	{
		outfile__array_statemonitor_22_N.write(reinterpret_cast<char*>(_array_statemonitor_22_N), 1*sizeof(_array_statemonitor_22_N[0]));
		outfile__array_statemonitor_22_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_22_N." << endl;
	}
	ofstream outfile__array_statemonitor_23__indices;
	outfile__array_statemonitor_23__indices.open("results/_array_statemonitor_23__indices_-7130907327056443359", ios::binary | ios::out);
	if(outfile__array_statemonitor_23__indices.is_open())
	{
		outfile__array_statemonitor_23__indices.write(reinterpret_cast<char*>(_array_statemonitor_23__indices), 1*sizeof(_array_statemonitor_23__indices[0]));
		outfile__array_statemonitor_23__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_23__indices." << endl;
	}
	ofstream outfile__array_statemonitor_23_N;
	outfile__array_statemonitor_23_N.open("results/_array_statemonitor_23_N_-4402418315098733184", ios::binary | ios::out);
	if(outfile__array_statemonitor_23_N.is_open())
	{
		outfile__array_statemonitor_23_N.write(reinterpret_cast<char*>(_array_statemonitor_23_N), 1*sizeof(_array_statemonitor_23_N[0]));
		outfile__array_statemonitor_23_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_23_N." << endl;
	}
	ofstream outfile__array_statemonitor_24__indices;
	outfile__array_statemonitor_24__indices.open("results/_array_statemonitor_24__indices_7675705153437568067", ios::binary | ios::out);
	if(outfile__array_statemonitor_24__indices.is_open())
	{
		outfile__array_statemonitor_24__indices.write(reinterpret_cast<char*>(_array_statemonitor_24__indices), 1*sizeof(_array_statemonitor_24__indices[0]));
		outfile__array_statemonitor_24__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_24__indices." << endl;
	}
	ofstream outfile__array_statemonitor_24_N;
	outfile__array_statemonitor_24_N.open("results/_array_statemonitor_24_N_-6738770363890133581", ios::binary | ios::out);
	if(outfile__array_statemonitor_24_N.is_open())
	{
		outfile__array_statemonitor_24_N.write(reinterpret_cast<char*>(_array_statemonitor_24_N), 1*sizeof(_array_statemonitor_24_N[0]));
		outfile__array_statemonitor_24_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_24_N." << endl;
	}
	ofstream outfile__array_statemonitor_25__indices;
	outfile__array_statemonitor_25__indices.open("results/_array_statemonitor_25__indices_4712484708524285705", ios::binary | ios::out);
	if(outfile__array_statemonitor_25__indices.is_open())
	{
		outfile__array_statemonitor_25__indices.write(reinterpret_cast<char*>(_array_statemonitor_25__indices), 1*sizeof(_array_statemonitor_25__indices[0]));
		outfile__array_statemonitor_25__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_25__indices." << endl;
	}
	ofstream outfile__array_statemonitor_25_N;
	outfile__array_statemonitor_25_N.open("results/_array_statemonitor_25_N_-2850222877496054058", ios::binary | ios::out);
	if(outfile__array_statemonitor_25_N.is_open())
	{
		outfile__array_statemonitor_25_N.write(reinterpret_cast<char*>(_array_statemonitor_25_N), 1*sizeof(_array_statemonitor_25_N[0]));
		outfile__array_statemonitor_25_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_25_N." << endl;
	}
	ofstream outfile__array_statemonitor_26__indices;
	outfile__array_statemonitor_26__indices.open("results/_array_statemonitor_26__indices_-6014952524460280954", ios::binary | ios::out);
	if(outfile__array_statemonitor_26__indices.is_open())
	{
		outfile__array_statemonitor_26__indices.write(reinterpret_cast<char*>(_array_statemonitor_26__indices), 1*sizeof(_array_statemonitor_26__indices[0]));
		outfile__array_statemonitor_26__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_26__indices." << endl;
	}
	ofstream outfile__array_statemonitor_26_N;
	outfile__array_statemonitor_26_N.open("results/_array_statemonitor_26_N_4653526192973429980", ios::binary | ios::out);
	if(outfile__array_statemonitor_26_N.is_open())
	{
		outfile__array_statemonitor_26_N.write(reinterpret_cast<char*>(_array_statemonitor_26_N), 1*sizeof(_array_statemonitor_26_N[0]));
		outfile__array_statemonitor_26_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_26_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_8366921506721434855", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_-7852628982497818819", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_7801548700424343221", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_-7855640167907575197", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_-6234203046229799885", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_7738016710709236525", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_8462795195520510520", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4__synaptic_post.open("results/_dynamic_array_GABA_B4__synaptic_post_430825268228449924", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4__synaptic_pre.open("results/_dynamic_array_GABA_B4__synaptic_pre_3083099629529976474", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_delay.open("results/_dynamic_array_GABA_B4_delay_8955592027652335183", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_delay_1.open("results/_dynamic_array_GABA_B4_delay_1_2245992425315690663", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_N_incoming.open("results/_dynamic_array_GABA_B4_N_incoming_-1904996412440492917", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_N_outgoing.open("results/_dynamic_array_GABA_B4_N_outgoing_-7296800762890910118", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_weight.open("results/_dynamic_array_GABA_B4_weight_6730034129210986224", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5__synaptic_post.open("results/_dynamic_array_GABA_B5__synaptic_post_7829906378100778594", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5__synaptic_pre.open("results/_dynamic_array_GABA_B5__synaptic_pre_3381802591393451047", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_delay.open("results/_dynamic_array_GABA_B5_delay_-2443617954928217225", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_delay_1.open("results/_dynamic_array_GABA_B5_delay_1_8049824998964808595", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_N_incoming.open("results/_dynamic_array_GABA_B5_N_incoming_1170774028852731878", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_N_outgoing.open("results/_dynamic_array_GABA_B5_N_outgoing_-9218787124510506079", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_weight.open("results/_dynamic_array_GABA_B5_weight_-2711644887770846837", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6__synaptic_post.open("results/_dynamic_array_GABA_B6__synaptic_post_-5429919007962498841", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6__synaptic_pre.open("results/_dynamic_array_GABA_B6__synaptic_pre_5347948287050561123", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_delay.open("results/_dynamic_array_GABA_B6_delay_-2009872967558132639", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_delay_1.open("results/_dynamic_array_GABA_B6_delay_1_7285471209189786625", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_N_incoming.open("results/_dynamic_array_GABA_B6_N_incoming_1835171843178575895", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_N_outgoing.open("results/_dynamic_array_GABA_B6_N_outgoing_2357703466138246097", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_weight.open("results/_dynamic_array_GABA_B6_weight_-5196198982279165804", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7__synaptic_post.open("results/_dynamic_array_GABA_B7__synaptic_post_6720847859426932338", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7__synaptic_pre.open("results/_dynamic_array_GABA_B7__synaptic_pre_-5830995697721324921", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_delay.open("results/_dynamic_array_GABA_B7_delay_-4820777189007015405", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_delay_1.open("results/_dynamic_array_GABA_B7_delay_1_-3578120068787031661", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_N_incoming.open("results/_dynamic_array_GABA_B7_N_incoming_-189515015242184614", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_N_outgoing.open("results/_dynamic_array_GABA_B7_N_outgoing_732518000342903216", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_weight.open("results/_dynamic_array_GABA_B7_weight_-3929759243857939572", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8__synaptic_post.open("results/_dynamic_array_GABA_B8__synaptic_post_6206547866504050737", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8__synaptic_pre.open("results/_dynamic_array_GABA_B8__synaptic_pre_5882311198802030257", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_delay.open("results/_dynamic_array_GABA_B8_delay_-1911713248916023913", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_delay_1.open("results/_dynamic_array_GABA_B8_delay_1_1632029285071600952", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_N_incoming.open("results/_dynamic_array_GABA_B8_N_incoming_157212065498769718", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_N_outgoing.open("results/_dynamic_array_GABA_B8_N_outgoing_586504248369289129", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_weight.open("results/_dynamic_array_GABA_B8_weight_-697971401783404633", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9__synaptic_post.open("results/_dynamic_array_GABA_B9__synaptic_post_-2894553834245054846", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9__synaptic_pre.open("results/_dynamic_array_GABA_B9__synaptic_pre_-573008275001576553", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_delay.open("results/_dynamic_array_GABA_B9_delay_-8404370225736124990", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_delay_1.open("results/_dynamic_array_GABA_B9_delay_1_5032249864921134866", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_N_incoming.open("results/_dynamic_array_GABA_B9_N_incoming_-3279581358514185766", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_N_outgoing.open("results/_dynamic_array_GABA_B9_N_outgoing_-7207887734614870320", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_weight.open("results/_dynamic_array_GABA_B9_weight_-2226750404893139752", ios::binary | ios::out);
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
	outfile__dynamic_array_inh_neuron_output_i.open("results/_dynamic_array_inh_neuron_output_i_-171779015492048967", ios::binary | ios::out);
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
	outfile__dynamic_array_inh_neuron_output_t.open("results/_dynamic_array_inh_neuron_output_t_8125838472445411561", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator__timebins.open("results/_dynamic_array_InpSpikeGenerator__timebins_-2583729984067048433", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator_neuron_index.open("results/_dynamic_array_InpSpikeGenerator_neuron_index_1166205933422638557", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator_spike_number.open("results/_dynamic_array_InpSpikeGenerator_spike_number_5976259954746415927", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator_spike_time.open("results/_dynamic_array_InpSpikeGenerator_spike_time_-6952588522832681935", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_-33440380169616519", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_4946579276001819003", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1__synaptic_post.open("results/_dynamic_array_NMDA1__synaptic_post_-8496103577642544617", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1__synaptic_pre.open("results/_dynamic_array_NMDA1__synaptic_pre_1988585492536556459", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_delay.open("results/_dynamic_array_NMDA1_delay_-1328909855831205216", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_delay_1.open("results/_dynamic_array_NMDA1_delay_1_-82576587788692033", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_N_incoming.open("results/_dynamic_array_NMDA1_N_incoming_6077653531262735846", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_N_outgoing.open("results/_dynamic_array_NMDA1_N_outgoing_-890823982411953859", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_weight.open("results/_dynamic_array_NMDA1_weight_-5164113558095218171", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2__synaptic_post.open("results/_dynamic_array_NMDA2__synaptic_post_-8362864359125709543", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2__synaptic_pre.open("results/_dynamic_array_NMDA2__synaptic_pre_7002342726601383472", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_delay.open("results/_dynamic_array_NMDA2_delay_852003100652415317", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_delay_1.open("results/_dynamic_array_NMDA2_delay_1_1662738022064027707", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_N_incoming.open("results/_dynamic_array_NMDA2_N_incoming_-6249966539627047377", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_N_outgoing.open("results/_dynamic_array_NMDA2_N_outgoing_366162814915903623", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_weight.open("results/_dynamic_array_NMDA2_weight_138377579064553212", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3__synaptic_post.open("results/_dynamic_array_NMDA3__synaptic_post_-4169286186829989675", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3__synaptic_pre.open("results/_dynamic_array_NMDA3__synaptic_pre_-3183982199022338145", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_delay.open("results/_dynamic_array_NMDA3_delay_2999537508358014855", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_delay_1.open("results/_dynamic_array_NMDA3_delay_1_-4094263407220980577", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_N_incoming.open("results/_dynamic_array_NMDA3_N_incoming_-1104110244076222245", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_N_outgoing.open("results/_dynamic_array_NMDA3_N_outgoing_1272972597164622178", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_weight.open("results/_dynamic_array_NMDA3_weight_-1642751778800528817", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_spikemonitor_3_i;
	outfile__dynamic_array_spikemonitor_3_i.open("results/_dynamic_array_spikemonitor_3_i_2384780077501053979", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_3_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_3_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_3_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_3_i[0]), _dynamic_array_spikemonitor_3_i.size()*sizeof(_dynamic_array_spikemonitor_3_i[0]));
		    outfile__dynamic_array_spikemonitor_3_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_3_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_3_t;
	outfile__dynamic_array_spikemonitor_3_t.open("results/_dynamic_array_spikemonitor_3_t_6073087468381962688", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_3_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_3_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_3_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_3_t[0]), _dynamic_array_spikemonitor_3_t.size()*sizeof(_dynamic_array_spikemonitor_3_t[0]));
		    outfile__dynamic_array_spikemonitor_3_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_3_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_4_i;
	outfile__dynamic_array_spikemonitor_4_i.open("results/_dynamic_array_spikemonitor_4_i_-3640787350377816628", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_4_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_4_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_4_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_4_i[0]), _dynamic_array_spikemonitor_4_i.size()*sizeof(_dynamic_array_spikemonitor_4_i[0]));
		    outfile__dynamic_array_spikemonitor_4_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_4_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_4_t;
	outfile__dynamic_array_spikemonitor_4_t.open("results/_dynamic_array_spikemonitor_4_t_-9005076022036297123", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_4_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_4_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_4_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_4_t[0]), _dynamic_array_spikemonitor_4_t.size()*sizeof(_dynamic_array_spikemonitor_4_t[0]));
		    outfile__dynamic_array_spikemonitor_4_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_4_t." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_5_i;
	outfile__dynamic_array_spikemonitor_5_i.open("results/_dynamic_array_spikemonitor_5_i_111139581584878635", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_5_i.is_open())
	{
        if (! _dynamic_array_spikemonitor_5_i.empty() )
        {
			outfile__dynamic_array_spikemonitor_5_i.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_5_i[0]), _dynamic_array_spikemonitor_5_i.size()*sizeof(_dynamic_array_spikemonitor_5_i[0]));
		    outfile__dynamic_array_spikemonitor_5_i.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_5_i." << endl;
	}
	ofstream outfile__dynamic_array_spikemonitor_5_t;
	outfile__dynamic_array_spikemonitor_5_t.open("results/_dynamic_array_spikemonitor_5_t_-6745785738033128415", ios::binary | ios::out);
	if(outfile__dynamic_array_spikemonitor_5_t.is_open())
	{
        if (! _dynamic_array_spikemonitor_5_t.empty() )
        {
			outfile__dynamic_array_spikemonitor_5_t.write(reinterpret_cast<char*>(&_dynamic_array_spikemonitor_5_t[0]), _dynamic_array_spikemonitor_5_t.size()*sizeof(_dynamic_array_spikemonitor_5_t[0]));
		    outfile__dynamic_array_spikemonitor_5_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_spikemonitor_5_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_13_t;
	outfile__dynamic_array_statemonitor_13_t.open("results/_dynamic_array_statemonitor_13_t_4547614186530097397", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_13_t.is_open())
	{
        if (! _dynamic_array_statemonitor_13_t.empty() )
        {
			outfile__dynamic_array_statemonitor_13_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_13_t[0]), _dynamic_array_statemonitor_13_t.size()*sizeof(_dynamic_array_statemonitor_13_t[0]));
		    outfile__dynamic_array_statemonitor_13_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_13_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_14_t;
	outfile__dynamic_array_statemonitor_14_t.open("results/_dynamic_array_statemonitor_14_t_-45025161343123651", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_15_t;
	outfile__dynamic_array_statemonitor_15_t.open("results/_dynamic_array_statemonitor_15_t_5926433431864289924", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_15_t.is_open())
	{
        if (! _dynamic_array_statemonitor_15_t.empty() )
        {
			outfile__dynamic_array_statemonitor_15_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_15_t[0]), _dynamic_array_statemonitor_15_t.size()*sizeof(_dynamic_array_statemonitor_15_t[0]));
		    outfile__dynamic_array_statemonitor_15_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_15_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_16_t;
	outfile__dynamic_array_statemonitor_16_t.open("results/_dynamic_array_statemonitor_16_t_-5509333834210428694", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_16_t.is_open())
	{
        if (! _dynamic_array_statemonitor_16_t.empty() )
        {
			outfile__dynamic_array_statemonitor_16_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_16_t[0]), _dynamic_array_statemonitor_16_t.size()*sizeof(_dynamic_array_statemonitor_16_t[0]));
		    outfile__dynamic_array_statemonitor_16_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_16_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_17_t;
	outfile__dynamic_array_statemonitor_17_t.open("results/_dynamic_array_statemonitor_17_t_6937390536428564157", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_17_t.is_open())
	{
        if (! _dynamic_array_statemonitor_17_t.empty() )
        {
			outfile__dynamic_array_statemonitor_17_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_17_t[0]), _dynamic_array_statemonitor_17_t.size()*sizeof(_dynamic_array_statemonitor_17_t[0]));
		    outfile__dynamic_array_statemonitor_17_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_17_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_18_t;
	outfile__dynamic_array_statemonitor_18_t.open("results/_dynamic_array_statemonitor_18_t_208042101161149539", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_18_t.is_open())
	{
        if (! _dynamic_array_statemonitor_18_t.empty() )
        {
			outfile__dynamic_array_statemonitor_18_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_18_t[0]), _dynamic_array_statemonitor_18_t.size()*sizeof(_dynamic_array_statemonitor_18_t[0]));
		    outfile__dynamic_array_statemonitor_18_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_18_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_19_t;
	outfile__dynamic_array_statemonitor_19_t.open("results/_dynamic_array_statemonitor_19_t_-1399516246875522062", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_19_t.is_open())
	{
        if (! _dynamic_array_statemonitor_19_t.empty() )
        {
			outfile__dynamic_array_statemonitor_19_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_19_t[0]), _dynamic_array_statemonitor_19_t.size()*sizeof(_dynamic_array_statemonitor_19_t[0]));
		    outfile__dynamic_array_statemonitor_19_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_19_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_20_t;
	outfile__dynamic_array_statemonitor_20_t.open("results/_dynamic_array_statemonitor_20_t_-7286088678342730360", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_20_t.is_open())
	{
        if (! _dynamic_array_statemonitor_20_t.empty() )
        {
			outfile__dynamic_array_statemonitor_20_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_20_t[0]), _dynamic_array_statemonitor_20_t.size()*sizeof(_dynamic_array_statemonitor_20_t[0]));
		    outfile__dynamic_array_statemonitor_20_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_20_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_21_t;
	outfile__dynamic_array_statemonitor_21_t.open("results/_dynamic_array_statemonitor_21_t_7417947383746694009", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_21_t.is_open())
	{
        if (! _dynamic_array_statemonitor_21_t.empty() )
        {
			outfile__dynamic_array_statemonitor_21_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_21_t[0]), _dynamic_array_statemonitor_21_t.size()*sizeof(_dynamic_array_statemonitor_21_t[0]));
		    outfile__dynamic_array_statemonitor_21_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_21_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_22_t;
	outfile__dynamic_array_statemonitor_22_t.open("results/_dynamic_array_statemonitor_22_t_-9128660408268223418", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_22_t.is_open())
	{
        if (! _dynamic_array_statemonitor_22_t.empty() )
        {
			outfile__dynamic_array_statemonitor_22_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_22_t[0]), _dynamic_array_statemonitor_22_t.size()*sizeof(_dynamic_array_statemonitor_22_t[0]));
		    outfile__dynamic_array_statemonitor_22_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_22_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_23_t;
	outfile__dynamic_array_statemonitor_23_t.open("results/_dynamic_array_statemonitor_23_t_-1022716622597831532", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_23_t.is_open())
	{
        if (! _dynamic_array_statemonitor_23_t.empty() )
        {
			outfile__dynamic_array_statemonitor_23_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_23_t[0]), _dynamic_array_statemonitor_23_t.size()*sizeof(_dynamic_array_statemonitor_23_t[0]));
		    outfile__dynamic_array_statemonitor_23_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_23_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_24_t;
	outfile__dynamic_array_statemonitor_24_t.open("results/_dynamic_array_statemonitor_24_t_8744182506531749975", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_24_t.is_open())
	{
        if (! _dynamic_array_statemonitor_24_t.empty() )
        {
			outfile__dynamic_array_statemonitor_24_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_24_t[0]), _dynamic_array_statemonitor_24_t.size()*sizeof(_dynamic_array_statemonitor_24_t[0]));
		    outfile__dynamic_array_statemonitor_24_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_24_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_25_t;
	outfile__dynamic_array_statemonitor_25_t.open("results/_dynamic_array_statemonitor_25_t_-4404121403019047146", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_25_t.is_open())
	{
        if (! _dynamic_array_statemonitor_25_t.empty() )
        {
			outfile__dynamic_array_statemonitor_25_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_25_t[0]), _dynamic_array_statemonitor_25_t.size()*sizeof(_dynamic_array_statemonitor_25_t[0]));
		    outfile__dynamic_array_statemonitor_25_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_25_t." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_26_t;
	outfile__dynamic_array_statemonitor_26_t.open("results/_dynamic_array_statemonitor_26_t_-6387290176860250179", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_26_t.is_open())
	{
        if (! _dynamic_array_statemonitor_26_t.empty() )
        {
			outfile__dynamic_array_statemonitor_26_t.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_26_t[0]), _dynamic_array_statemonitor_26_t.size()*sizeof(_dynamic_array_statemonitor_26_t[0]));
		    outfile__dynamic_array_statemonitor_26_t.close();
		}
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_26_t." << endl;
	}

	ofstream outfile__dynamic_array_statemonitor_13_Imem;
	outfile__dynamic_array_statemonitor_13_Imem.open("results/_dynamic_array_statemonitor_13_Imem_-2900074111736525662", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_13_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_13_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_13_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_13_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_13_Imem(n, 0)), _dynamic_array_statemonitor_13_Imem.m*sizeof(_dynamic_array_statemonitor_13_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_13_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_13_Imem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_14_Imem;
	outfile__dynamic_array_statemonitor_14_Imem.open("results/_dynamic_array_statemonitor_14_Imem_7758490681139177808", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_15_Imem;
	outfile__dynamic_array_statemonitor_15_Imem.open("results/_dynamic_array_statemonitor_15_Imem_1802514194442831502", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_15_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_15_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_15_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_15_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_15_Imem(n, 0)), _dynamic_array_statemonitor_15_Imem.m*sizeof(_dynamic_array_statemonitor_15_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_15_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_15_Imem." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_16_I_syn_nmda;
	outfile__dynamic_array_statemonitor_16_I_syn_nmda.open("results/_dynamic_array_statemonitor_16_I_syn_nmda_708610453541866626", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_16_I_syn_nmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_16_I_syn_nmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_16_I_syn_nmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_16_I_syn_nmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_16_I_syn_nmda(n, 0)), _dynamic_array_statemonitor_16_I_syn_nmda.m*sizeof(_dynamic_array_statemonitor_16_I_syn_nmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_16_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_16_I_syn_nmda." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_17_I_syn_nmda;
	outfile__dynamic_array_statemonitor_17_I_syn_nmda.open("results/_dynamic_array_statemonitor_17_I_syn_nmda_1845667928878727774", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_17_I_syn_nmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_17_I_syn_nmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_17_I_syn_nmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_17_I_syn_nmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_17_I_syn_nmda(n, 0)), _dynamic_array_statemonitor_17_I_syn_nmda.m*sizeof(_dynamic_array_statemonitor_17_I_syn_nmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_17_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_17_I_syn_nmda." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_18_I_syn_nmda;
	outfile__dynamic_array_statemonitor_18_I_syn_nmda.open("results/_dynamic_array_statemonitor_18_I_syn_nmda_-6910209003459222075", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_18_I_syn_nmda.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_18_I_syn_nmda.n; n++)
        {
            if (! _dynamic_array_statemonitor_18_I_syn_nmda(n).empty())
            {
                outfile__dynamic_array_statemonitor_18_I_syn_nmda.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_18_I_syn_nmda(n, 0)), _dynamic_array_statemonitor_18_I_syn_nmda.m*sizeof(_dynamic_array_statemonitor_18_I_syn_nmda(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_18_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_18_I_syn_nmda." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_19_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_19_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_19_I_syn_gaba_b_-4292289109521636252", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_19_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_19_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_19_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_19_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_19_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_19_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_19_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_19_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_19_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_20_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_20_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_20_I_syn_gaba_b_2613298579154839726", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_20_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_20_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_20_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_20_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_20_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_20_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_20_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_20_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_20_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_21_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_21_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_21_I_syn_gaba_b_6847065675134740633", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_21_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_21_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_21_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_21_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_21_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_21_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_21_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_21_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_21_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_22_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_22_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_22_I_syn_gaba_b_7919628342857783632", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_22_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_22_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_22_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_22_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_22_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_22_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_22_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_22_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_22_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_23_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_23_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_23_I_syn_gaba_b_-7354615669539897313", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_23_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_23_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_23_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_23_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_23_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_23_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_23_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_23_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_23_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_24_I_syn_gaba_b;
	outfile__dynamic_array_statemonitor_24_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_24_I_syn_gaba_b_-1172006057456506624", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_24_I_syn_gaba_b.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_24_I_syn_gaba_b.n; n++)
        {
            if (! _dynamic_array_statemonitor_24_I_syn_gaba_b(n).empty())
            {
                outfile__dynamic_array_statemonitor_24_I_syn_gaba_b.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_24_I_syn_gaba_b(n, 0)), _dynamic_array_statemonitor_24_I_syn_gaba_b.m*sizeof(_dynamic_array_statemonitor_24_I_syn_gaba_b(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_24_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_24_I_syn_gaba_b." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_25_I_syn_ampa;
	outfile__dynamic_array_statemonitor_25_I_syn_ampa.open("results/_dynamic_array_statemonitor_25_I_syn_ampa_-4296298418046209019", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_25_I_syn_ampa.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_25_I_syn_ampa.n; n++)
        {
            if (! _dynamic_array_statemonitor_25_I_syn_ampa(n).empty())
            {
                outfile__dynamic_array_statemonitor_25_I_syn_ampa.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_25_I_syn_ampa(n, 0)), _dynamic_array_statemonitor_25_I_syn_ampa.m*sizeof(_dynamic_array_statemonitor_25_I_syn_ampa(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_25_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_25_I_syn_ampa." << endl;
	}
	ofstream outfile__dynamic_array_statemonitor_26_Imem;
	outfile__dynamic_array_statemonitor_26_Imem.open("results/_dynamic_array_statemonitor_26_Imem_8898059509790738650", ios::binary | ios::out);
	if(outfile__dynamic_array_statemonitor_26_Imem.is_open())
	{
        for (int n=0; n<_dynamic_array_statemonitor_26_Imem.n; n++)
        {
            if (! _dynamic_array_statemonitor_26_Imem(n).empty())
            {
                outfile__dynamic_array_statemonitor_26_Imem.write(reinterpret_cast<char*>(&_dynamic_array_statemonitor_26_Imem(n, 0)), _dynamic_array_statemonitor_26_Imem.m*sizeof(_dynamic_array_statemonitor_26_Imem(0, 0)));
            }
        }
        outfile__dynamic_array_statemonitor_26_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _dynamic_array_statemonitor_26_Imem." << endl;
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
	if(_static_array__array_statemonitor_13__indices!=0)
	{
		delete [] _static_array__array_statemonitor_13__indices;
		_static_array__array_statemonitor_13__indices = 0;
	}
	if(_static_array__array_statemonitor_14__indices!=0)
	{
		delete [] _static_array__array_statemonitor_14__indices;
		_static_array__array_statemonitor_14__indices = 0;
	}
	if(_static_array__array_statemonitor_15__indices!=0)
	{
		delete [] _static_array__array_statemonitor_15__indices;
		_static_array__array_statemonitor_15__indices = 0;
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

