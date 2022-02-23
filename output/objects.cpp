
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
int32_t * _array_Core_1_subgroup_1__sub_idx;
const int _num__array_Core_1_subgroup_1__sub_idx = 2;
int32_t * _array_Core_1_subgroup_2__sub_idx;
const int _num__array_Core_1_subgroup_2__sub_idx = 2;
int32_t * _array_Core_1_subgroup_3__sub_idx;
const int _num__array_Core_1_subgroup_3__sub_idx = 2;
int32_t * _array_Core_1_subgroup__sub_idx;
const int _num__array_Core_1_subgroup__sub_idx = 2;
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
int32_t * _array_statemonitor_13__indices;
const int _num__array_statemonitor_13__indices = 1;
double * _array_statemonitor_13_Imem;
const int _num__array_statemonitor_13_Imem = (0, 1);
int32_t * _array_statemonitor_13_N;
const int _num__array_statemonitor_13_N = 1;
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
std::vector<double> _dynamic_array_statemonitor_13_t;
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
DynamicArray2D<double> _dynamic_array_statemonitor_13_Imem;
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

	_array_Core_1_subgroup_1__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_1__sub_idx[i] = 0;

	_array_Core_1_subgroup_2__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_2__sub_idx[i] = 0;

	_array_Core_1_subgroup_3__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_3__sub_idx[i] = 0;

	_array_Core_1_subgroup__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup__sub_idx[i] = 0;

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

	_array_statemonitor_13__indices = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_13__indices[i] = 0;

	_array_statemonitor_13_N = new int32_t[1];
    
	for(int i=0; i<1; i++) _array_statemonitor_13_N[i] = 0;

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

	_array_Core_1_subgroup_1__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_1__sub_idx[i] = 2 + i;

	_array_Core_1_subgroup_2__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_2__sub_idx[i] = 4 + i;

	_array_Core_1_subgroup_3__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup_3__sub_idx[i] = 6 + i;

	_array_Core_1_subgroup__sub_idx = new int32_t[2];
    
	for(int i=0; i<2; i++) _array_Core_1_subgroup__sub_idx[i] = 0 + i;

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
	outfile__array_AMPA0_N.open("results/_array_AMPA0_N_3327326766035378104", ios::binary | ios::out);
	if(outfile__array_AMPA0_N.is_open())
	{
		outfile__array_AMPA0_N.write(reinterpret_cast<char*>(_array_AMPA0_N), 1*sizeof(_array_AMPA0_N[0]));
		outfile__array_AMPA0_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_AMPA0_N." << endl;
	}
	ofstream outfile__array_Core_0__spikespace;
	outfile__array_Core_0__spikespace.open("results/_array_Core_0__spikespace_-1828655349150066055", ios::binary | ios::out);
	if(outfile__array_Core_0__spikespace.is_open())
	{
		outfile__array_Core_0__spikespace.write(reinterpret_cast<char*>(_array_Core_0__spikespace), 257*sizeof(_array_Core_0__spikespace[0]));
		outfile__array_Core_0__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0__spikespace." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_ampa;
	outfile__array_Core_0_C_syn_ampa.open("results/_array_Core_0_C_syn_ampa_-4411111563150614923", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_ampa.is_open())
	{
		outfile__array_Core_0_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_C_syn_ampa), 256*sizeof(_array_Core_0_C_syn_ampa[0]));
		outfile__array_Core_0_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_a;
	outfile__array_Core_0_C_syn_gaba_a.open("results/_array_Core_0_C_syn_gaba_a_-6744145545856913025", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_a), 256*sizeof(_array_Core_0_C_syn_gaba_a[0]));
		outfile__array_Core_0_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_gaba_b;
	outfile__array_Core_0_C_syn_gaba_b.open("results/_array_Core_0_C_syn_gaba_b_8121496139754442232", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_C_syn_gaba_b), 256*sizeof(_array_Core_0_C_syn_gaba_b[0]));
		outfile__array_Core_0_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_C_syn_nmda;
	outfile__array_Core_0_C_syn_nmda.open("results/_array_Core_0_C_syn_nmda_6798671361123557792", ios::binary | ios::out);
	if(outfile__array_Core_0_C_syn_nmda.is_open())
	{
		outfile__array_Core_0_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_C_syn_nmda), 256*sizeof(_array_Core_0_C_syn_nmda[0]));
		outfile__array_Core_0_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Cahp;
	outfile__array_Core_0_Cahp.open("results/_array_Core_0_Cahp_5635944112589848306", ios::binary | ios::out);
	if(outfile__array_Core_0_Cahp.is_open())
	{
		outfile__array_Core_0_Cahp.write(reinterpret_cast<char*>(_array_Core_0_Cahp), 1*sizeof(_array_Core_0_Cahp[0]));
		outfile__array_Core_0_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cahp." << endl;
	}
	ofstream outfile__array_Core_0_Cmem;
	outfile__array_Core_0_Cmem.open("results/_array_Core_0_Cmem_8172479009914981820", ios::binary | ios::out);
	if(outfile__array_Core_0_Cmem.is_open())
	{
		outfile__array_Core_0_Cmem.write(reinterpret_cast<char*>(_array_Core_0_Cmem), 1*sizeof(_array_Core_0_Cmem[0]));
		outfile__array_Core_0_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Cmem." << endl;
	}
	ofstream outfile__array_Core_0_i;
	outfile__array_Core_0_i.open("results/_array_Core_0_i_-8054591972378684761", ios::binary | ios::out);
	if(outfile__array_Core_0_i.is_open())
	{
		outfile__array_Core_0_i.write(reinterpret_cast<char*>(_array_Core_0_i), 256*sizeof(_array_Core_0_i[0]));
		outfile__array_Core_0_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_i." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_ampa;
	outfile__array_Core_0_I_g_syn_ampa.open("results/_array_Core_0_I_g_syn_ampa_-9177657109315384428", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_ampa), 256*sizeof(_array_Core_0_I_g_syn_ampa[0]));
		outfile__array_Core_0_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_a;
	outfile__array_Core_0_I_g_syn_gaba_a.open("results/_array_Core_0_I_g_syn_gaba_a_-6799670039802683267", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_a), 256*sizeof(_array_Core_0_I_g_syn_gaba_a[0]));
		outfile__array_Core_0_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_gaba_b;
	outfile__array_Core_0_I_g_syn_gaba_b.open("results/_array_Core_0_I_g_syn_gaba_b_-1192746427343377115", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_gaba_b), 256*sizeof(_array_Core_0_I_g_syn_gaba_b[0]));
		outfile__array_Core_0_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_g_syn_nmda;
	outfile__array_Core_0_I_g_syn_nmda.open("results/_array_Core_0_I_g_syn_nmda_-7612526159959684710", ios::binary | ios::out);
	if(outfile__array_Core_0_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_g_syn_nmda), 256*sizeof(_array_Core_0_I_g_syn_nmda[0]));
		outfile__array_Core_0_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_ampa;
	outfile__array_Core_0_I_syn_ampa.open("results/_array_Core_0_I_syn_ampa_-4870774411310414847", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_syn_ampa), 256*sizeof(_array_Core_0_I_syn_ampa[0]));
		outfile__array_Core_0_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_a;
	outfile__array_Core_0_I_syn_gaba_a.open("results/_array_Core_0_I_syn_gaba_a_-133209987736604278", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_a), 256*sizeof(_array_Core_0_I_syn_gaba_a[0]));
		outfile__array_Core_0_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_gaba_b;
	outfile__array_Core_0_I_syn_gaba_b.open("results/_array_Core_0_I_syn_gaba_b_-2662298330352522975", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_syn_gaba_b), 256*sizeof(_array_Core_0_I_syn_gaba_b[0]));
		outfile__array_Core_0_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_syn_nmda;
	outfile__array_Core_0_I_syn_nmda.open("results/_array_Core_0_I_syn_nmda_7720934683517660511", ios::binary | ios::out);
	if(outfile__array_Core_0_I_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_syn_nmda), 256*sizeof(_array_Core_0_I_syn_nmda[0]));
		outfile__array_Core_0_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_ampa;
	outfile__array_Core_0_I_tau_syn_ampa.open("results/_array_Core_0_I_tau_syn_ampa_8874132707847409021", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_ampa), 256*sizeof(_array_Core_0_I_tau_syn_ampa[0]));
		outfile__array_Core_0_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_a;
	outfile__array_Core_0_I_tau_syn_gaba_a.open("results/_array_Core_0_I_tau_syn_gaba_a_4246201558045470636", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_a), 256*sizeof(_array_Core_0_I_tau_syn_gaba_a[0]));
		outfile__array_Core_0_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_gaba_b;
	outfile__array_Core_0_I_tau_syn_gaba_b.open("results/_array_Core_0_I_tau_syn_gaba_b_-6385569827055628564", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_gaba_b), 256*sizeof(_array_Core_0_I_tau_syn_gaba_b[0]));
		outfile__array_Core_0_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_tau_syn_nmda;
	outfile__array_Core_0_I_tau_syn_nmda.open("results/_array_Core_0_I_tau_syn_nmda_7751069232440554520", ios::binary | ios::out);
	if(outfile__array_Core_0_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_tau_syn_nmda), 256*sizeof(_array_Core_0_I_tau_syn_nmda[0]));
		outfile__array_Core_0_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_ampa;
	outfile__array_Core_0_I_wo_syn_ampa.open("results/_array_Core_0_I_wo_syn_ampa_439957963484876532", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_0_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_ampa), 256*sizeof(_array_Core_0_I_wo_syn_ampa[0]));
		outfile__array_Core_0_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_a;
	outfile__array_Core_0_I_wo_syn_gaba_a.open("results/_array_Core_0_I_wo_syn_gaba_a_7249944051669955887", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_a), 256*sizeof(_array_Core_0_I_wo_syn_gaba_a[0]));
		outfile__array_Core_0_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_gaba_b;
	outfile__array_Core_0_I_wo_syn_gaba_b.open("results/_array_Core_0_I_wo_syn_gaba_b_-1927407886818000582", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_0_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_gaba_b), 256*sizeof(_array_Core_0_I_wo_syn_gaba_b[0]));
		outfile__array_Core_0_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_0_I_wo_syn_nmda;
	outfile__array_Core_0_I_wo_syn_nmda.open("results/_array_Core_0_I_wo_syn_nmda_-9164593742699204888", ios::binary | ios::out);
	if(outfile__array_Core_0_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_0_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_0_I_wo_syn_nmda), 256*sizeof(_array_Core_0_I_wo_syn_nmda[0]));
		outfile__array_Core_0_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_0_Iagain;
	outfile__array_Core_0_Iagain.open("results/_array_Core_0_Iagain_-4000361266715912237", ios::binary | ios::out);
	if(outfile__array_Core_0_Iagain.is_open())
	{
		outfile__array_Core_0_Iagain.write(reinterpret_cast<char*>(_array_Core_0_Iagain), 1*sizeof(_array_Core_0_Iagain[0]));
		outfile__array_Core_0_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iagain." << endl;
	}
	ofstream outfile__array_Core_0_Iahp;
	outfile__array_Core_0_Iahp.open("results/_array_Core_0_Iahp_4928699146482473894", ios::binary | ios::out);
	if(outfile__array_Core_0_Iahp.is_open())
	{
		outfile__array_Core_0_Iahp.write(reinterpret_cast<char*>(_array_Core_0_Iahp), 256*sizeof(_array_Core_0_Iahp[0]));
		outfile__array_Core_0_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iahp." << endl;
	}
	ofstream outfile__array_Core_0_Ianorm;
	outfile__array_Core_0_Ianorm.open("results/_array_Core_0_Ianorm_2207211928249626737", ios::binary | ios::out);
	if(outfile__array_Core_0_Ianorm.is_open())
	{
		outfile__array_Core_0_Ianorm.write(reinterpret_cast<char*>(_array_Core_0_Ianorm), 1*sizeof(_array_Core_0_Ianorm[0]));
		outfile__array_Core_0_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ianorm." << endl;
	}
	ofstream outfile__array_Core_0_Iath;
	outfile__array_Core_0_Iath.open("results/_array_Core_0_Iath_1459100066198586099", ios::binary | ios::out);
	if(outfile__array_Core_0_Iath.is_open())
	{
		outfile__array_Core_0_Iath.write(reinterpret_cast<char*>(_array_Core_0_Iath), 1*sizeof(_array_Core_0_Iath[0]));
		outfile__array_Core_0_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iath." << endl;
	}
	ofstream outfile__array_Core_0_Ica;
	outfile__array_Core_0_Ica.open("results/_array_Core_0_Ica_2481651961067627809", ios::binary | ios::out);
	if(outfile__array_Core_0_Ica.is_open())
	{
		outfile__array_Core_0_Ica.write(reinterpret_cast<char*>(_array_Core_0_Ica), 256*sizeof(_array_Core_0_Ica[0]));
		outfile__array_Core_0_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ica." << endl;
	}
	ofstream outfile__array_Core_0_Iconst;
	outfile__array_Core_0_Iconst.open("results/_array_Core_0_Iconst_1296768525006633068", ios::binary | ios::out);
	if(outfile__array_Core_0_Iconst.is_open())
	{
		outfile__array_Core_0_Iconst.write(reinterpret_cast<char*>(_array_Core_0_Iconst), 256*sizeof(_array_Core_0_Iconst[0]));
		outfile__array_Core_0_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Iconst." << endl;
	}
	ofstream outfile__array_Core_0_Imem;
	outfile__array_Core_0_Imem.open("results/_array_Core_0_Imem_-4874465380357709732", ios::binary | ios::out);
	if(outfile__array_Core_0_Imem.is_open())
	{
		outfile__array_Core_0_Imem.write(reinterpret_cast<char*>(_array_Core_0_Imem), 256*sizeof(_array_Core_0_Imem[0]));
		outfile__array_Core_0_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Imem." << endl;
	}
	ofstream outfile__array_Core_0_Io;
	outfile__array_Core_0_Io.open("results/_array_Core_0_Io_-309538358438028868", ios::binary | ios::out);
	if(outfile__array_Core_0_Io.is_open())
	{
		outfile__array_Core_0_Io.write(reinterpret_cast<char*>(_array_Core_0_Io), 1*sizeof(_array_Core_0_Io[0]));
		outfile__array_Core_0_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Io." << endl;
	}
	ofstream outfile__array_Core_0_Ireset;
	outfile__array_Core_0_Ireset.open("results/_array_Core_0_Ireset_-5600072600122317931", ios::binary | ios::out);
	if(outfile__array_Core_0_Ireset.is_open())
	{
		outfile__array_Core_0_Ireset.write(reinterpret_cast<char*>(_array_Core_0_Ireset), 1*sizeof(_array_Core_0_Ireset[0]));
		outfile__array_Core_0_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ireset." << endl;
	}
	ofstream outfile__array_Core_0_Ishunt;
	outfile__array_Core_0_Ishunt.open("results/_array_Core_0_Ishunt_1360621365062955382", ios::binary | ios::out);
	if(outfile__array_Core_0_Ishunt.is_open())
	{
		outfile__array_Core_0_Ishunt.write(reinterpret_cast<char*>(_array_Core_0_Ishunt), 256*sizeof(_array_Core_0_Ishunt[0]));
		outfile__array_Core_0_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ishunt." << endl;
	}
	ofstream outfile__array_Core_0_Ispkthr;
	outfile__array_Core_0_Ispkthr.open("results/_array_Core_0_Ispkthr_-6202656013806686156", ios::binary | ios::out);
	if(outfile__array_Core_0_Ispkthr.is_open())
	{
		outfile__array_Core_0_Ispkthr.write(reinterpret_cast<char*>(_array_Core_0_Ispkthr), 1*sizeof(_array_Core_0_Ispkthr[0]));
		outfile__array_Core_0_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_0_Itau;
	outfile__array_Core_0_Itau.open("results/_array_Core_0_Itau_-6667807402957117962", ios::binary | ios::out);
	if(outfile__array_Core_0_Itau.is_open())
	{
		outfile__array_Core_0_Itau.write(reinterpret_cast<char*>(_array_Core_0_Itau), 1*sizeof(_array_Core_0_Itau[0]));
		outfile__array_Core_0_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itau." << endl;
	}
	ofstream outfile__array_Core_0_Itauahp;
	outfile__array_Core_0_Itauahp.open("results/_array_Core_0_Itauahp_-5529485481367596801", ios::binary | ios::out);
	if(outfile__array_Core_0_Itauahp.is_open())
	{
		outfile__array_Core_0_Itauahp.write(reinterpret_cast<char*>(_array_Core_0_Itauahp), 1*sizeof(_array_Core_0_Itauahp[0]));
		outfile__array_Core_0_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Itauahp." << endl;
	}
	ofstream outfile__array_Core_0_Ith;
	outfile__array_Core_0_Ith.open("results/_array_Core_0_Ith_3645395859525376468", ios::binary | ios::out);
	if(outfile__array_Core_0_Ith.is_open())
	{
		outfile__array_Core_0_Ith.write(reinterpret_cast<char*>(_array_Core_0_Ith), 1*sizeof(_array_Core_0_Ith[0]));
		outfile__array_Core_0_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ith." << endl;
	}
	ofstream outfile__array_Core_0_Ithahp;
	outfile__array_Core_0_Ithahp.open("results/_array_Core_0_Ithahp_-5314649593513225090", ios::binary | ios::out);
	if(outfile__array_Core_0_Ithahp.is_open())
	{
		outfile__array_Core_0_Ithahp.write(reinterpret_cast<char*>(_array_Core_0_Ithahp), 1*sizeof(_array_Core_0_Ithahp[0]));
		outfile__array_Core_0_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ithahp." << endl;
	}
	ofstream outfile__array_Core_0_kn;
	outfile__array_Core_0_kn.open("results/_array_Core_0_kn_6007363563179146296", ios::binary | ios::out);
	if(outfile__array_Core_0_kn.is_open())
	{
		outfile__array_Core_0_kn.write(reinterpret_cast<char*>(_array_Core_0_kn), 1*sizeof(_array_Core_0_kn[0]));
		outfile__array_Core_0_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kn." << endl;
	}
	ofstream outfile__array_Core_0_kp;
	outfile__array_Core_0_kp.open("results/_array_Core_0_kp_3257089960167675868", ios::binary | ios::out);
	if(outfile__array_Core_0_kp.is_open())
	{
		outfile__array_Core_0_kp.write(reinterpret_cast<char*>(_array_Core_0_kp), 1*sizeof(_array_Core_0_kp[0]));
		outfile__array_Core_0_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_kp." << endl;
	}
	ofstream outfile__array_Core_0_lastspike;
	outfile__array_Core_0_lastspike.open("results/_array_Core_0_lastspike_7486639958782208737", ios::binary | ios::out);
	if(outfile__array_Core_0_lastspike.is_open())
	{
		outfile__array_Core_0_lastspike.write(reinterpret_cast<char*>(_array_Core_0_lastspike), 256*sizeof(_array_Core_0_lastspike[0]));
		outfile__array_Core_0_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_lastspike." << endl;
	}
	ofstream outfile__array_Core_0_not_refractory;
	outfile__array_Core_0_not_refractory.open("results/_array_Core_0_not_refractory_4301116277180496451", ios::binary | ios::out);
	if(outfile__array_Core_0_not_refractory.is_open())
	{
		outfile__array_Core_0_not_refractory.write(reinterpret_cast<char*>(_array_Core_0_not_refractory), 256*sizeof(_array_Core_0_not_refractory[0]));
		outfile__array_Core_0_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_not_refractory." << endl;
	}
	ofstream outfile__array_Core_0_refP;
	outfile__array_Core_0_refP.open("results/_array_Core_0_refP_7003615285391549718", ios::binary | ios::out);
	if(outfile__array_Core_0_refP.is_open())
	{
		outfile__array_Core_0_refP.write(reinterpret_cast<char*>(_array_Core_0_refP), 1*sizeof(_array_Core_0_refP[0]));
		outfile__array_Core_0_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_refP." << endl;
	}
	ofstream outfile__array_Core_0_tauca;
	outfile__array_Core_0_tauca.open("results/_array_Core_0_tauca_-6200203905106976140", ios::binary | ios::out);
	if(outfile__array_Core_0_tauca.is_open())
	{
		outfile__array_Core_0_tauca.write(reinterpret_cast<char*>(_array_Core_0_tauca), 1*sizeof(_array_Core_0_tauca[0]));
		outfile__array_Core_0_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_tauca." << endl;
	}
	ofstream outfile__array_Core_0_Ut;
	outfile__array_Core_0_Ut.open("results/_array_Core_0_Ut_-7613120448507261911", ios::binary | ios::out);
	if(outfile__array_Core_0_Ut.is_open())
	{
		outfile__array_Core_0_Ut.write(reinterpret_cast<char*>(_array_Core_0_Ut), 1*sizeof(_array_Core_0_Ut[0]));
		outfile__array_Core_0_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_0_Ut." << endl;
	}
	ofstream outfile__array_Core_1__spikespace;
	outfile__array_Core_1__spikespace.open("results/_array_Core_1__spikespace_3314730433435169155", ios::binary | ios::out);
	if(outfile__array_Core_1__spikespace.is_open())
	{
		outfile__array_Core_1__spikespace.write(reinterpret_cast<char*>(_array_Core_1__spikespace), 257*sizeof(_array_Core_1__spikespace[0]));
		outfile__array_Core_1__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1__spikespace." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_ampa;
	outfile__array_Core_1_C_syn_ampa.open("results/_array_Core_1_C_syn_ampa_-3035801699778825807", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_ampa.is_open())
	{
		outfile__array_Core_1_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_C_syn_ampa), 256*sizeof(_array_Core_1_C_syn_ampa[0]));
		outfile__array_Core_1_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_a;
	outfile__array_Core_1_C_syn_gaba_a.open("results/_array_Core_1_C_syn_gaba_a_8023276362159654255", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_a), 256*sizeof(_array_Core_1_C_syn_gaba_a[0]));
		outfile__array_Core_1_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_gaba_b;
	outfile__array_Core_1_C_syn_gaba_b.open("results/_array_Core_1_C_syn_gaba_b_-4961892960990560399", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_C_syn_gaba_b), 256*sizeof(_array_Core_1_C_syn_gaba_b[0]));
		outfile__array_Core_1_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_C_syn_nmda;
	outfile__array_Core_1_C_syn_nmda.open("results/_array_Core_1_C_syn_nmda_-7235889674835185231", ios::binary | ios::out);
	if(outfile__array_Core_1_C_syn_nmda.is_open())
	{
		outfile__array_Core_1_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_C_syn_nmda), 256*sizeof(_array_Core_1_C_syn_nmda[0]));
		outfile__array_Core_1_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Cahp;
	outfile__array_Core_1_Cahp.open("results/_array_Core_1_Cahp_8716420166353659537", ios::binary | ios::out);
	if(outfile__array_Core_1_Cahp.is_open())
	{
		outfile__array_Core_1_Cahp.write(reinterpret_cast<char*>(_array_Core_1_Cahp), 1*sizeof(_array_Core_1_Cahp[0]));
		outfile__array_Core_1_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cahp." << endl;
	}
	ofstream outfile__array_Core_1_Cmem;
	outfile__array_Core_1_Cmem.open("results/_array_Core_1_Cmem_2668720213690235580", ios::binary | ios::out);
	if(outfile__array_Core_1_Cmem.is_open())
	{
		outfile__array_Core_1_Cmem.write(reinterpret_cast<char*>(_array_Core_1_Cmem), 1*sizeof(_array_Core_1_Cmem[0]));
		outfile__array_Core_1_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Cmem." << endl;
	}
	ofstream outfile__array_Core_1_i;
	outfile__array_Core_1_i.open("results/_array_Core_1_i_6989728193605138997", ios::binary | ios::out);
	if(outfile__array_Core_1_i.is_open())
	{
		outfile__array_Core_1_i.write(reinterpret_cast<char*>(_array_Core_1_i), 256*sizeof(_array_Core_1_i[0]));
		outfile__array_Core_1_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_i." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_ampa;
	outfile__array_Core_1_I_g_syn_ampa.open("results/_array_Core_1_I_g_syn_ampa_7183653765620574641", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_ampa), 256*sizeof(_array_Core_1_I_g_syn_ampa[0]));
		outfile__array_Core_1_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_a;
	outfile__array_Core_1_I_g_syn_gaba_a.open("results/_array_Core_1_I_g_syn_gaba_a_1289893012819464073", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_a), 256*sizeof(_array_Core_1_I_g_syn_gaba_a[0]));
		outfile__array_Core_1_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_gaba_b;
	outfile__array_Core_1_I_g_syn_gaba_b.open("results/_array_Core_1_I_g_syn_gaba_b_5775473883025806741", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_gaba_b), 256*sizeof(_array_Core_1_I_g_syn_gaba_b[0]));
		outfile__array_Core_1_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_g_syn_nmda;
	outfile__array_Core_1_I_g_syn_nmda.open("results/_array_Core_1_I_g_syn_nmda_6150227223193651115", ios::binary | ios::out);
	if(outfile__array_Core_1_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_g_syn_nmda), 256*sizeof(_array_Core_1_I_g_syn_nmda[0]));
		outfile__array_Core_1_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_ampa;
	outfile__array_Core_1_I_syn_ampa.open("results/_array_Core_1_I_syn_ampa_1063185407902367066", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_syn_ampa), 256*sizeof(_array_Core_1_I_syn_ampa[0]));
		outfile__array_Core_1_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_a;
	outfile__array_Core_1_I_syn_gaba_a.open("results/_array_Core_1_I_syn_gaba_a_-8772519240781700408", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_a), 256*sizeof(_array_Core_1_I_syn_gaba_a[0]));
		outfile__array_Core_1_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_gaba_b;
	outfile__array_Core_1_I_syn_gaba_b.open("results/_array_Core_1_I_syn_gaba_b_-2376669707005425889", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_syn_gaba_b), 256*sizeof(_array_Core_1_I_syn_gaba_b[0]));
		outfile__array_Core_1_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_syn_nmda;
	outfile__array_Core_1_I_syn_nmda.open("results/_array_Core_1_I_syn_nmda_-743985850785811575", ios::binary | ios::out);
	if(outfile__array_Core_1_I_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_syn_nmda), 256*sizeof(_array_Core_1_I_syn_nmda[0]));
		outfile__array_Core_1_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_ampa;
	outfile__array_Core_1_I_tau_syn_ampa.open("results/_array_Core_1_I_tau_syn_ampa_6433588745204646731", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_ampa), 256*sizeof(_array_Core_1_I_tau_syn_ampa[0]));
		outfile__array_Core_1_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_a;
	outfile__array_Core_1_I_tau_syn_gaba_a.open("results/_array_Core_1_I_tau_syn_gaba_a_7065858412720868764", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_a), 256*sizeof(_array_Core_1_I_tau_syn_gaba_a[0]));
		outfile__array_Core_1_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_gaba_b;
	outfile__array_Core_1_I_tau_syn_gaba_b.open("results/_array_Core_1_I_tau_syn_gaba_b_-519106319957859402", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_gaba_b), 256*sizeof(_array_Core_1_I_tau_syn_gaba_b[0]));
		outfile__array_Core_1_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_tau_syn_nmda;
	outfile__array_Core_1_I_tau_syn_nmda.open("results/_array_Core_1_I_tau_syn_nmda_-1233906889798068364", ios::binary | ios::out);
	if(outfile__array_Core_1_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_tau_syn_nmda), 256*sizeof(_array_Core_1_I_tau_syn_nmda[0]));
		outfile__array_Core_1_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_ampa;
	outfile__array_Core_1_I_wo_syn_ampa.open("results/_array_Core_1_I_wo_syn_ampa_7497694930468175696", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_1_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_ampa), 256*sizeof(_array_Core_1_I_wo_syn_ampa[0]));
		outfile__array_Core_1_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_a;
	outfile__array_Core_1_I_wo_syn_gaba_a.open("results/_array_Core_1_I_wo_syn_gaba_a_6096196319381768702", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_a), 256*sizeof(_array_Core_1_I_wo_syn_gaba_a[0]));
		outfile__array_Core_1_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_gaba_b;
	outfile__array_Core_1_I_wo_syn_gaba_b.open("results/_array_Core_1_I_wo_syn_gaba_b_6820266781853621196", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_1_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_gaba_b), 256*sizeof(_array_Core_1_I_wo_syn_gaba_b[0]));
		outfile__array_Core_1_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_1_I_wo_syn_nmda;
	outfile__array_Core_1_I_wo_syn_nmda.open("results/_array_Core_1_I_wo_syn_nmda_7185887631331114130", ios::binary | ios::out);
	if(outfile__array_Core_1_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_1_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_1_I_wo_syn_nmda), 256*sizeof(_array_Core_1_I_wo_syn_nmda[0]));
		outfile__array_Core_1_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_1_Iagain;
	outfile__array_Core_1_Iagain.open("results/_array_Core_1_Iagain_-8433066628936678061", ios::binary | ios::out);
	if(outfile__array_Core_1_Iagain.is_open())
	{
		outfile__array_Core_1_Iagain.write(reinterpret_cast<char*>(_array_Core_1_Iagain), 1*sizeof(_array_Core_1_Iagain[0]));
		outfile__array_Core_1_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iagain." << endl;
	}
	ofstream outfile__array_Core_1_Iahp;
	outfile__array_Core_1_Iahp.open("results/_array_Core_1_Iahp_-9105361819779343073", ios::binary | ios::out);
	if(outfile__array_Core_1_Iahp.is_open())
	{
		outfile__array_Core_1_Iahp.write(reinterpret_cast<char*>(_array_Core_1_Iahp), 256*sizeof(_array_Core_1_Iahp[0]));
		outfile__array_Core_1_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iahp." << endl;
	}
	ofstream outfile__array_Core_1_Ianorm;
	outfile__array_Core_1_Ianorm.open("results/_array_Core_1_Ianorm_8034341583100709585", ios::binary | ios::out);
	if(outfile__array_Core_1_Ianorm.is_open())
	{
		outfile__array_Core_1_Ianorm.write(reinterpret_cast<char*>(_array_Core_1_Ianorm), 1*sizeof(_array_Core_1_Ianorm[0]));
		outfile__array_Core_1_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ianorm." << endl;
	}
	ofstream outfile__array_Core_1_Iath;
	outfile__array_Core_1_Iath.open("results/_array_Core_1_Iath_5405755191505624475", ios::binary | ios::out);
	if(outfile__array_Core_1_Iath.is_open())
	{
		outfile__array_Core_1_Iath.write(reinterpret_cast<char*>(_array_Core_1_Iath), 1*sizeof(_array_Core_1_Iath[0]));
		outfile__array_Core_1_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iath." << endl;
	}
	ofstream outfile__array_Core_1_Ica;
	outfile__array_Core_1_Ica.open("results/_array_Core_1_Ica_-7902398518286717276", ios::binary | ios::out);
	if(outfile__array_Core_1_Ica.is_open())
	{
		outfile__array_Core_1_Ica.write(reinterpret_cast<char*>(_array_Core_1_Ica), 256*sizeof(_array_Core_1_Ica[0]));
		outfile__array_Core_1_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ica." << endl;
	}
	ofstream outfile__array_Core_1_Iconst;
	outfile__array_Core_1_Iconst.open("results/_array_Core_1_Iconst_4215181125987245090", ios::binary | ios::out);
	if(outfile__array_Core_1_Iconst.is_open())
	{
		outfile__array_Core_1_Iconst.write(reinterpret_cast<char*>(_array_Core_1_Iconst), 256*sizeof(_array_Core_1_Iconst[0]));
		outfile__array_Core_1_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Iconst." << endl;
	}
	ofstream outfile__array_Core_1_Imem;
	outfile__array_Core_1_Imem.open("results/_array_Core_1_Imem_-6694814975272541236", ios::binary | ios::out);
	if(outfile__array_Core_1_Imem.is_open())
	{
		outfile__array_Core_1_Imem.write(reinterpret_cast<char*>(_array_Core_1_Imem), 256*sizeof(_array_Core_1_Imem[0]));
		outfile__array_Core_1_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Imem." << endl;
	}
	ofstream outfile__array_Core_1_Io;
	outfile__array_Core_1_Io.open("results/_array_Core_1_Io_-601528655577168027", ios::binary | ios::out);
	if(outfile__array_Core_1_Io.is_open())
	{
		outfile__array_Core_1_Io.write(reinterpret_cast<char*>(_array_Core_1_Io), 1*sizeof(_array_Core_1_Io[0]));
		outfile__array_Core_1_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Io." << endl;
	}
	ofstream outfile__array_Core_1_Ireset;
	outfile__array_Core_1_Ireset.open("results/_array_Core_1_Ireset_-7509298360957381581", ios::binary | ios::out);
	if(outfile__array_Core_1_Ireset.is_open())
	{
		outfile__array_Core_1_Ireset.write(reinterpret_cast<char*>(_array_Core_1_Ireset), 1*sizeof(_array_Core_1_Ireset[0]));
		outfile__array_Core_1_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ireset." << endl;
	}
	ofstream outfile__array_Core_1_Ishunt;
	outfile__array_Core_1_Ishunt.open("results/_array_Core_1_Ishunt_1721192752463356360", ios::binary | ios::out);
	if(outfile__array_Core_1_Ishunt.is_open())
	{
		outfile__array_Core_1_Ishunt.write(reinterpret_cast<char*>(_array_Core_1_Ishunt), 256*sizeof(_array_Core_1_Ishunt[0]));
		outfile__array_Core_1_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ishunt." << endl;
	}
	ofstream outfile__array_Core_1_Ispkthr;
	outfile__array_Core_1_Ispkthr.open("results/_array_Core_1_Ispkthr_-7670041400639578934", ios::binary | ios::out);
	if(outfile__array_Core_1_Ispkthr.is_open())
	{
		outfile__array_Core_1_Ispkthr.write(reinterpret_cast<char*>(_array_Core_1_Ispkthr), 1*sizeof(_array_Core_1_Ispkthr[0]));
		outfile__array_Core_1_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_1_Itau;
	outfile__array_Core_1_Itau.open("results/_array_Core_1_Itau_4125301312368076743", ios::binary | ios::out);
	if(outfile__array_Core_1_Itau.is_open())
	{
		outfile__array_Core_1_Itau.write(reinterpret_cast<char*>(_array_Core_1_Itau), 1*sizeof(_array_Core_1_Itau[0]));
		outfile__array_Core_1_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itau." << endl;
	}
	ofstream outfile__array_Core_1_Itauahp;
	outfile__array_Core_1_Itauahp.open("results/_array_Core_1_Itauahp_8448349058865843375", ios::binary | ios::out);
	if(outfile__array_Core_1_Itauahp.is_open())
	{
		outfile__array_Core_1_Itauahp.write(reinterpret_cast<char*>(_array_Core_1_Itauahp), 1*sizeof(_array_Core_1_Itauahp[0]));
		outfile__array_Core_1_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Itauahp." << endl;
	}
	ofstream outfile__array_Core_1_Ith;
	outfile__array_Core_1_Ith.open("results/_array_Core_1_Ith_-4282278235907686491", ios::binary | ios::out);
	if(outfile__array_Core_1_Ith.is_open())
	{
		outfile__array_Core_1_Ith.write(reinterpret_cast<char*>(_array_Core_1_Ith), 1*sizeof(_array_Core_1_Ith[0]));
		outfile__array_Core_1_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ith." << endl;
	}
	ofstream outfile__array_Core_1_Ithahp;
	outfile__array_Core_1_Ithahp.open("results/_array_Core_1_Ithahp_611844702474134066", ios::binary | ios::out);
	if(outfile__array_Core_1_Ithahp.is_open())
	{
		outfile__array_Core_1_Ithahp.write(reinterpret_cast<char*>(_array_Core_1_Ithahp), 1*sizeof(_array_Core_1_Ithahp[0]));
		outfile__array_Core_1_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ithahp." << endl;
	}
	ofstream outfile__array_Core_1_kn;
	outfile__array_Core_1_kn.open("results/_array_Core_1_kn_-70173680841257118", ios::binary | ios::out);
	if(outfile__array_Core_1_kn.is_open())
	{
		outfile__array_Core_1_kn.write(reinterpret_cast<char*>(_array_Core_1_kn), 1*sizeof(_array_Core_1_kn[0]));
		outfile__array_Core_1_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kn." << endl;
	}
	ofstream outfile__array_Core_1_kp;
	outfile__array_Core_1_kp.open("results/_array_Core_1_kp_-8502103705166094561", ios::binary | ios::out);
	if(outfile__array_Core_1_kp.is_open())
	{
		outfile__array_Core_1_kp.write(reinterpret_cast<char*>(_array_Core_1_kp), 1*sizeof(_array_Core_1_kp[0]));
		outfile__array_Core_1_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_kp." << endl;
	}
	ofstream outfile__array_Core_1_lastspike;
	outfile__array_Core_1_lastspike.open("results/_array_Core_1_lastspike_-8612863217366201430", ios::binary | ios::out);
	if(outfile__array_Core_1_lastspike.is_open())
	{
		outfile__array_Core_1_lastspike.write(reinterpret_cast<char*>(_array_Core_1_lastspike), 256*sizeof(_array_Core_1_lastspike[0]));
		outfile__array_Core_1_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_lastspike." << endl;
	}
	ofstream outfile__array_Core_1_not_refractory;
	outfile__array_Core_1_not_refractory.open("results/_array_Core_1_not_refractory_-1236990476480608249", ios::binary | ios::out);
	if(outfile__array_Core_1_not_refractory.is_open())
	{
		outfile__array_Core_1_not_refractory.write(reinterpret_cast<char*>(_array_Core_1_not_refractory), 256*sizeof(_array_Core_1_not_refractory[0]));
		outfile__array_Core_1_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_not_refractory." << endl;
	}
	ofstream outfile__array_Core_1_refP;
	outfile__array_Core_1_refP.open("results/_array_Core_1_refP_5076119013122341295", ios::binary | ios::out);
	if(outfile__array_Core_1_refP.is_open())
	{
		outfile__array_Core_1_refP.write(reinterpret_cast<char*>(_array_Core_1_refP), 1*sizeof(_array_Core_1_refP[0]));
		outfile__array_Core_1_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_refP." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_1__sub_idx;
	outfile__array_Core_1_subgroup_1__sub_idx.open("results/_array_Core_1_subgroup_1__sub_idx_8628375743117902183", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_1__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_1__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_1__sub_idx), 2*sizeof(_array_Core_1_subgroup_1__sub_idx[0]));
		outfile__array_Core_1_subgroup_1__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_1__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_2__sub_idx;
	outfile__array_Core_1_subgroup_2__sub_idx.open("results/_array_Core_1_subgroup_2__sub_idx_-7914175529218451655", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_2__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_2__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_2__sub_idx), 2*sizeof(_array_Core_1_subgroup_2__sub_idx[0]));
		outfile__array_Core_1_subgroup_2__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_2__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup_3__sub_idx;
	outfile__array_Core_1_subgroup_3__sub_idx.open("results/_array_Core_1_subgroup_3__sub_idx_8212664747075356755", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup_3__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup_3__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup_3__sub_idx), 2*sizeof(_array_Core_1_subgroup_3__sub_idx[0]));
		outfile__array_Core_1_subgroup_3__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup_3__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_subgroup__sub_idx;
	outfile__array_Core_1_subgroup__sub_idx.open("results/_array_Core_1_subgroup__sub_idx_-630548047644705714", ios::binary | ios::out);
	if(outfile__array_Core_1_subgroup__sub_idx.is_open())
	{
		outfile__array_Core_1_subgroup__sub_idx.write(reinterpret_cast<char*>(_array_Core_1_subgroup__sub_idx), 2*sizeof(_array_Core_1_subgroup__sub_idx[0]));
		outfile__array_Core_1_subgroup__sub_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_subgroup__sub_idx." << endl;
	}
	ofstream outfile__array_Core_1_tauca;
	outfile__array_Core_1_tauca.open("results/_array_Core_1_tauca_3906699216663627446", ios::binary | ios::out);
	if(outfile__array_Core_1_tauca.is_open())
	{
		outfile__array_Core_1_tauca.write(reinterpret_cast<char*>(_array_Core_1_tauca), 1*sizeof(_array_Core_1_tauca[0]));
		outfile__array_Core_1_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_tauca." << endl;
	}
	ofstream outfile__array_Core_1_Ut;
	outfile__array_Core_1_Ut.open("results/_array_Core_1_Ut_-2419667729623866761", ios::binary | ios::out);
	if(outfile__array_Core_1_Ut.is_open())
	{
		outfile__array_Core_1_Ut.write(reinterpret_cast<char*>(_array_Core_1_Ut), 1*sizeof(_array_Core_1_Ut[0]));
		outfile__array_Core_1_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_1_Ut." << endl;
	}
	ofstream outfile__array_Core_2__spikespace;
	outfile__array_Core_2__spikespace.open("results/_array_Core_2__spikespace_8988491115953500903", ios::binary | ios::out);
	if(outfile__array_Core_2__spikespace.is_open())
	{
		outfile__array_Core_2__spikespace.write(reinterpret_cast<char*>(_array_Core_2__spikespace), 257*sizeof(_array_Core_2__spikespace[0]));
		outfile__array_Core_2__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2__spikespace." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_ampa;
	outfile__array_Core_2_C_syn_ampa.open("results/_array_Core_2_C_syn_ampa_180612002018665555", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_ampa.is_open())
	{
		outfile__array_Core_2_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_C_syn_ampa), 256*sizeof(_array_Core_2_C_syn_ampa[0]));
		outfile__array_Core_2_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_a;
	outfile__array_Core_2_C_syn_gaba_a.open("results/_array_Core_2_C_syn_gaba_a_6428531208166149063", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_a), 256*sizeof(_array_Core_2_C_syn_gaba_a[0]));
		outfile__array_Core_2_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_gaba_b;
	outfile__array_Core_2_C_syn_gaba_b.open("results/_array_Core_2_C_syn_gaba_b_-9014320039096481551", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_C_syn_gaba_b), 256*sizeof(_array_Core_2_C_syn_gaba_b[0]));
		outfile__array_Core_2_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_C_syn_nmda;
	outfile__array_Core_2_C_syn_nmda.open("results/_array_Core_2_C_syn_nmda_-4334893867179909332", ios::binary | ios::out);
	if(outfile__array_Core_2_C_syn_nmda.is_open())
	{
		outfile__array_Core_2_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_C_syn_nmda), 256*sizeof(_array_Core_2_C_syn_nmda[0]));
		outfile__array_Core_2_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Cahp;
	outfile__array_Core_2_Cahp.open("results/_array_Core_2_Cahp_4468235879164641673", ios::binary | ios::out);
	if(outfile__array_Core_2_Cahp.is_open())
	{
		outfile__array_Core_2_Cahp.write(reinterpret_cast<char*>(_array_Core_2_Cahp), 1*sizeof(_array_Core_2_Cahp[0]));
		outfile__array_Core_2_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cahp." << endl;
	}
	ofstream outfile__array_Core_2_Cmem;
	outfile__array_Core_2_Cmem.open("results/_array_Core_2_Cmem_-1953003106955848187", ios::binary | ios::out);
	if(outfile__array_Core_2_Cmem.is_open())
	{
		outfile__array_Core_2_Cmem.write(reinterpret_cast<char*>(_array_Core_2_Cmem), 1*sizeof(_array_Core_2_Cmem[0]));
		outfile__array_Core_2_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Cmem." << endl;
	}
	ofstream outfile__array_Core_2_i;
	outfile__array_Core_2_i.open("results/_array_Core_2_i_8732930224210581604", ios::binary | ios::out);
	if(outfile__array_Core_2_i.is_open())
	{
		outfile__array_Core_2_i.write(reinterpret_cast<char*>(_array_Core_2_i), 256*sizeof(_array_Core_2_i[0]));
		outfile__array_Core_2_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_i." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_ampa;
	outfile__array_Core_2_I_g_syn_ampa.open("results/_array_Core_2_I_g_syn_ampa_-7513582480525182552", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_ampa), 256*sizeof(_array_Core_2_I_g_syn_ampa[0]));
		outfile__array_Core_2_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_a;
	outfile__array_Core_2_I_g_syn_gaba_a.open("results/_array_Core_2_I_g_syn_gaba_a_-3359873508480815126", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_a), 256*sizeof(_array_Core_2_I_g_syn_gaba_a[0]));
		outfile__array_Core_2_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_gaba_b;
	outfile__array_Core_2_I_g_syn_gaba_b.open("results/_array_Core_2_I_g_syn_gaba_b_489812686401762135", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_gaba_b), 256*sizeof(_array_Core_2_I_g_syn_gaba_b[0]));
		outfile__array_Core_2_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_g_syn_nmda;
	outfile__array_Core_2_I_g_syn_nmda.open("results/_array_Core_2_I_g_syn_nmda_4982953305772702648", ios::binary | ios::out);
	if(outfile__array_Core_2_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_g_syn_nmda), 256*sizeof(_array_Core_2_I_g_syn_nmda[0]));
		outfile__array_Core_2_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_ampa;
	outfile__array_Core_2_I_syn_ampa.open("results/_array_Core_2_I_syn_ampa_6037604535452806926", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_syn_ampa), 256*sizeof(_array_Core_2_I_syn_ampa[0]));
		outfile__array_Core_2_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_a;
	outfile__array_Core_2_I_syn_gaba_a.open("results/_array_Core_2_I_syn_gaba_a_-991485161637619084", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_a), 256*sizeof(_array_Core_2_I_syn_gaba_a[0]));
		outfile__array_Core_2_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_gaba_b;
	outfile__array_Core_2_I_syn_gaba_b.open("results/_array_Core_2_I_syn_gaba_b_1768727163383049999", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_syn_gaba_b), 256*sizeof(_array_Core_2_I_syn_gaba_b[0]));
		outfile__array_Core_2_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_syn_nmda;
	outfile__array_Core_2_I_syn_nmda.open("results/_array_Core_2_I_syn_nmda_563293878714841538", ios::binary | ios::out);
	if(outfile__array_Core_2_I_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_syn_nmda), 256*sizeof(_array_Core_2_I_syn_nmda[0]));
		outfile__array_Core_2_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_ampa;
	outfile__array_Core_2_I_tau_syn_ampa.open("results/_array_Core_2_I_tau_syn_ampa_1727572839730924704", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_ampa), 256*sizeof(_array_Core_2_I_tau_syn_ampa[0]));
		outfile__array_Core_2_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_a;
	outfile__array_Core_2_I_tau_syn_gaba_a.open("results/_array_Core_2_I_tau_syn_gaba_a_-8975934060337272705", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_a), 256*sizeof(_array_Core_2_I_tau_syn_gaba_a[0]));
		outfile__array_Core_2_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_gaba_b;
	outfile__array_Core_2_I_tau_syn_gaba_b.open("results/_array_Core_2_I_tau_syn_gaba_b_-1806490045212890848", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_gaba_b), 256*sizeof(_array_Core_2_I_tau_syn_gaba_b[0]));
		outfile__array_Core_2_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_tau_syn_nmda;
	outfile__array_Core_2_I_tau_syn_nmda.open("results/_array_Core_2_I_tau_syn_nmda_-2128375826874719378", ios::binary | ios::out);
	if(outfile__array_Core_2_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_tau_syn_nmda), 256*sizeof(_array_Core_2_I_tau_syn_nmda[0]));
		outfile__array_Core_2_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_ampa;
	outfile__array_Core_2_I_wo_syn_ampa.open("results/_array_Core_2_I_wo_syn_ampa_-9003300935073056262", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_2_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_ampa), 256*sizeof(_array_Core_2_I_wo_syn_ampa[0]));
		outfile__array_Core_2_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_a;
	outfile__array_Core_2_I_wo_syn_gaba_a.open("results/_array_Core_2_I_wo_syn_gaba_a_3524048015738992201", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_a), 256*sizeof(_array_Core_2_I_wo_syn_gaba_a[0]));
		outfile__array_Core_2_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_gaba_b;
	outfile__array_Core_2_I_wo_syn_gaba_b.open("results/_array_Core_2_I_wo_syn_gaba_b_545102339952295541", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_2_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_gaba_b), 256*sizeof(_array_Core_2_I_wo_syn_gaba_b[0]));
		outfile__array_Core_2_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_2_I_wo_syn_nmda;
	outfile__array_Core_2_I_wo_syn_nmda.open("results/_array_Core_2_I_wo_syn_nmda_5940952726158186670", ios::binary | ios::out);
	if(outfile__array_Core_2_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_2_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_2_I_wo_syn_nmda), 256*sizeof(_array_Core_2_I_wo_syn_nmda[0]));
		outfile__array_Core_2_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_2_Iagain;
	outfile__array_Core_2_Iagain.open("results/_array_Core_2_Iagain_-5795088090975473095", ios::binary | ios::out);
	if(outfile__array_Core_2_Iagain.is_open())
	{
		outfile__array_Core_2_Iagain.write(reinterpret_cast<char*>(_array_Core_2_Iagain), 1*sizeof(_array_Core_2_Iagain[0]));
		outfile__array_Core_2_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iagain." << endl;
	}
	ofstream outfile__array_Core_2_Iahp;
	outfile__array_Core_2_Iahp.open("results/_array_Core_2_Iahp_-4459261348143766073", ios::binary | ios::out);
	if(outfile__array_Core_2_Iahp.is_open())
	{
		outfile__array_Core_2_Iahp.write(reinterpret_cast<char*>(_array_Core_2_Iahp), 256*sizeof(_array_Core_2_Iahp[0]));
		outfile__array_Core_2_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iahp." << endl;
	}
	ofstream outfile__array_Core_2_Ianorm;
	outfile__array_Core_2_Ianorm.open("results/_array_Core_2_Ianorm_-1836417508415210619", ios::binary | ios::out);
	if(outfile__array_Core_2_Ianorm.is_open())
	{
		outfile__array_Core_2_Ianorm.write(reinterpret_cast<char*>(_array_Core_2_Ianorm), 1*sizeof(_array_Core_2_Ianorm[0]));
		outfile__array_Core_2_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ianorm." << endl;
	}
	ofstream outfile__array_Core_2_Iath;
	outfile__array_Core_2_Iath.open("results/_array_Core_2_Iath_8585897793056510503", ios::binary | ios::out);
	if(outfile__array_Core_2_Iath.is_open())
	{
		outfile__array_Core_2_Iath.write(reinterpret_cast<char*>(_array_Core_2_Iath), 1*sizeof(_array_Core_2_Iath[0]));
		outfile__array_Core_2_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iath." << endl;
	}
	ofstream outfile__array_Core_2_Ica;
	outfile__array_Core_2_Ica.open("results/_array_Core_2_Ica_-2625244980853632466", ios::binary | ios::out);
	if(outfile__array_Core_2_Ica.is_open())
	{
		outfile__array_Core_2_Ica.write(reinterpret_cast<char*>(_array_Core_2_Ica), 256*sizeof(_array_Core_2_Ica[0]));
		outfile__array_Core_2_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ica." << endl;
	}
	ofstream outfile__array_Core_2_Iconst;
	outfile__array_Core_2_Iconst.open("results/_array_Core_2_Iconst_-2347413499411308590", ios::binary | ios::out);
	if(outfile__array_Core_2_Iconst.is_open())
	{
		outfile__array_Core_2_Iconst.write(reinterpret_cast<char*>(_array_Core_2_Iconst), 256*sizeof(_array_Core_2_Iconst[0]));
		outfile__array_Core_2_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Iconst." << endl;
	}
	ofstream outfile__array_Core_2_Imem;
	outfile__array_Core_2_Imem.open("results/_array_Core_2_Imem_-3807820738130529962", ios::binary | ios::out);
	if(outfile__array_Core_2_Imem.is_open())
	{
		outfile__array_Core_2_Imem.write(reinterpret_cast<char*>(_array_Core_2_Imem), 256*sizeof(_array_Core_2_Imem[0]));
		outfile__array_Core_2_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Imem." << endl;
	}
	ofstream outfile__array_Core_2_Io;
	outfile__array_Core_2_Io.open("results/_array_Core_2_Io_-1310523870520732661", ios::binary | ios::out);
	if(outfile__array_Core_2_Io.is_open())
	{
		outfile__array_Core_2_Io.write(reinterpret_cast<char*>(_array_Core_2_Io), 1*sizeof(_array_Core_2_Io[0]));
		outfile__array_Core_2_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Io." << endl;
	}
	ofstream outfile__array_Core_2_Ireset;
	outfile__array_Core_2_Ireset.open("results/_array_Core_2_Ireset_-416498456929318355", ios::binary | ios::out);
	if(outfile__array_Core_2_Ireset.is_open())
	{
		outfile__array_Core_2_Ireset.write(reinterpret_cast<char*>(_array_Core_2_Ireset), 1*sizeof(_array_Core_2_Ireset[0]));
		outfile__array_Core_2_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ireset." << endl;
	}
	ofstream outfile__array_Core_2_Ishunt;
	outfile__array_Core_2_Ishunt.open("results/_array_Core_2_Ishunt_-200481137802204648", ios::binary | ios::out);
	if(outfile__array_Core_2_Ishunt.is_open())
	{
		outfile__array_Core_2_Ishunt.write(reinterpret_cast<char*>(_array_Core_2_Ishunt), 256*sizeof(_array_Core_2_Ishunt[0]));
		outfile__array_Core_2_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ishunt." << endl;
	}
	ofstream outfile__array_Core_2_Ispkthr;
	outfile__array_Core_2_Ispkthr.open("results/_array_Core_2_Ispkthr_6347668636147831086", ios::binary | ios::out);
	if(outfile__array_Core_2_Ispkthr.is_open())
	{
		outfile__array_Core_2_Ispkthr.write(reinterpret_cast<char*>(_array_Core_2_Ispkthr), 1*sizeof(_array_Core_2_Ispkthr[0]));
		outfile__array_Core_2_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_2_Itau;
	outfile__array_Core_2_Itau.open("results/_array_Core_2_Itau_7321606669182315353", ios::binary | ios::out);
	if(outfile__array_Core_2_Itau.is_open())
	{
		outfile__array_Core_2_Itau.write(reinterpret_cast<char*>(_array_Core_2_Itau), 1*sizeof(_array_Core_2_Itau[0]));
		outfile__array_Core_2_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itau." << endl;
	}
	ofstream outfile__array_Core_2_Itauahp;
	outfile__array_Core_2_Itauahp.open("results/_array_Core_2_Itauahp_-6403188025571524563", ios::binary | ios::out);
	if(outfile__array_Core_2_Itauahp.is_open())
	{
		outfile__array_Core_2_Itauahp.write(reinterpret_cast<char*>(_array_Core_2_Itauahp), 1*sizeof(_array_Core_2_Itauahp[0]));
		outfile__array_Core_2_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Itauahp." << endl;
	}
	ofstream outfile__array_Core_2_Ith;
	outfile__array_Core_2_Ith.open("results/_array_Core_2_Ith_-1137210467230660052", ios::binary | ios::out);
	if(outfile__array_Core_2_Ith.is_open())
	{
		outfile__array_Core_2_Ith.write(reinterpret_cast<char*>(_array_Core_2_Ith), 1*sizeof(_array_Core_2_Ith[0]));
		outfile__array_Core_2_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ith." << endl;
	}
	ofstream outfile__array_Core_2_Ithahp;
	outfile__array_Core_2_Ithahp.open("results/_array_Core_2_Ithahp_6537460518603174033", ios::binary | ios::out);
	if(outfile__array_Core_2_Ithahp.is_open())
	{
		outfile__array_Core_2_Ithahp.write(reinterpret_cast<char*>(_array_Core_2_Ithahp), 1*sizeof(_array_Core_2_Ithahp[0]));
		outfile__array_Core_2_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ithahp." << endl;
	}
	ofstream outfile__array_Core_2_kn;
	outfile__array_Core_2_kn.open("results/_array_Core_2_kn_-509287141664481963", ios::binary | ios::out);
	if(outfile__array_Core_2_kn.is_open())
	{
		outfile__array_Core_2_kn.write(reinterpret_cast<char*>(_array_Core_2_kn), 1*sizeof(_array_Core_2_kn[0]));
		outfile__array_Core_2_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kn." << endl;
	}
	ofstream outfile__array_Core_2_kp;
	outfile__array_Core_2_kp.open("results/_array_Core_2_kp_1336698978282525875", ios::binary | ios::out);
	if(outfile__array_Core_2_kp.is_open())
	{
		outfile__array_Core_2_kp.write(reinterpret_cast<char*>(_array_Core_2_kp), 1*sizeof(_array_Core_2_kp[0]));
		outfile__array_Core_2_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_kp." << endl;
	}
	ofstream outfile__array_Core_2_lastspike;
	outfile__array_Core_2_lastspike.open("results/_array_Core_2_lastspike_-3789593861708654671", ios::binary | ios::out);
	if(outfile__array_Core_2_lastspike.is_open())
	{
		outfile__array_Core_2_lastspike.write(reinterpret_cast<char*>(_array_Core_2_lastspike), 256*sizeof(_array_Core_2_lastspike[0]));
		outfile__array_Core_2_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_lastspike." << endl;
	}
	ofstream outfile__array_Core_2_not_refractory;
	outfile__array_Core_2_not_refractory.open("results/_array_Core_2_not_refractory_3387532061760480667", ios::binary | ios::out);
	if(outfile__array_Core_2_not_refractory.is_open())
	{
		outfile__array_Core_2_not_refractory.write(reinterpret_cast<char*>(_array_Core_2_not_refractory), 256*sizeof(_array_Core_2_not_refractory[0]));
		outfile__array_Core_2_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_not_refractory." << endl;
	}
	ofstream outfile__array_Core_2_refP;
	outfile__array_Core_2_refP.open("results/_array_Core_2_refP_-598166086308017325", ios::binary | ios::out);
	if(outfile__array_Core_2_refP.is_open())
	{
		outfile__array_Core_2_refP.write(reinterpret_cast<char*>(_array_Core_2_refP), 1*sizeof(_array_Core_2_refP[0]));
		outfile__array_Core_2_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_refP." << endl;
	}
	ofstream outfile__array_Core_2_tauca;
	outfile__array_Core_2_tauca.open("results/_array_Core_2_tauca_2863197658328558900", ios::binary | ios::out);
	if(outfile__array_Core_2_tauca.is_open())
	{
		outfile__array_Core_2_tauca.write(reinterpret_cast<char*>(_array_Core_2_tauca), 1*sizeof(_array_Core_2_tauca[0]));
		outfile__array_Core_2_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_tauca." << endl;
	}
	ofstream outfile__array_Core_2_Ut;
	outfile__array_Core_2_Ut.open("results/_array_Core_2_Ut_1030964505001086774", ios::binary | ios::out);
	if(outfile__array_Core_2_Ut.is_open())
	{
		outfile__array_Core_2_Ut.write(reinterpret_cast<char*>(_array_Core_2_Ut), 1*sizeof(_array_Core_2_Ut[0]));
		outfile__array_Core_2_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_2_Ut." << endl;
	}
	ofstream outfile__array_Core_3__spikespace;
	outfile__array_Core_3__spikespace.open("results/_array_Core_3__spikespace_-2451340696645852730", ios::binary | ios::out);
	if(outfile__array_Core_3__spikespace.is_open())
	{
		outfile__array_Core_3__spikespace.write(reinterpret_cast<char*>(_array_Core_3__spikespace), 257*sizeof(_array_Core_3__spikespace[0]));
		outfile__array_Core_3__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3__spikespace." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_ampa;
	outfile__array_Core_3_C_syn_ampa.open("results/_array_Core_3_C_syn_ampa_2425320875685870965", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_ampa.is_open())
	{
		outfile__array_Core_3_C_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_C_syn_ampa), 256*sizeof(_array_Core_3_C_syn_ampa[0]));
		outfile__array_Core_3_C_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_a;
	outfile__array_Core_3_C_syn_gaba_a.open("results/_array_Core_3_C_syn_gaba_a_-2591723313358688636", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_a), 256*sizeof(_array_Core_3_C_syn_gaba_a[0]));
		outfile__array_Core_3_C_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_gaba_b;
	outfile__array_Core_3_C_syn_gaba_b.open("results/_array_Core_3_C_syn_gaba_b_-7640467410250022680", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_C_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_C_syn_gaba_b), 256*sizeof(_array_Core_3_C_syn_gaba_b[0]));
		outfile__array_Core_3_C_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_C_syn_nmda;
	outfile__array_Core_3_C_syn_nmda.open("results/_array_Core_3_C_syn_nmda_-593795600940580878", ios::binary | ios::out);
	if(outfile__array_Core_3_C_syn_nmda.is_open())
	{
		outfile__array_Core_3_C_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_C_syn_nmda), 256*sizeof(_array_Core_3_C_syn_nmda[0]));
		outfile__array_Core_3_C_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_C_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Cahp;
	outfile__array_Core_3_Cahp.open("results/_array_Core_3_Cahp_-5121596048364696491", ios::binary | ios::out);
	if(outfile__array_Core_3_Cahp.is_open())
	{
		outfile__array_Core_3_Cahp.write(reinterpret_cast<char*>(_array_Core_3_Cahp), 1*sizeof(_array_Core_3_Cahp[0]));
		outfile__array_Core_3_Cahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cahp." << endl;
	}
	ofstream outfile__array_Core_3_Cmem;
	outfile__array_Core_3_Cmem.open("results/_array_Core_3_Cmem_-7259073304411298214", ios::binary | ios::out);
	if(outfile__array_Core_3_Cmem.is_open())
	{
		outfile__array_Core_3_Cmem.write(reinterpret_cast<char*>(_array_Core_3_Cmem), 1*sizeof(_array_Core_3_Cmem[0]));
		outfile__array_Core_3_Cmem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Cmem." << endl;
	}
	ofstream outfile__array_Core_3_i;
	outfile__array_Core_3_i.open("results/_array_Core_3_i_1598286347704890946", ios::binary | ios::out);
	if(outfile__array_Core_3_i.is_open())
	{
		outfile__array_Core_3_i.write(reinterpret_cast<char*>(_array_Core_3_i), 256*sizeof(_array_Core_3_i[0]));
		outfile__array_Core_3_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_i." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_ampa;
	outfile__array_Core_3_I_g_syn_ampa.open("results/_array_Core_3_I_g_syn_ampa_-1692536306487006215", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_g_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_ampa), 256*sizeof(_array_Core_3_I_g_syn_ampa[0]));
		outfile__array_Core_3_I_g_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_a;
	outfile__array_Core_3_I_g_syn_gaba_a.open("results/_array_Core_3_I_g_syn_gaba_a_-2879083521186268846", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_a), 256*sizeof(_array_Core_3_I_g_syn_gaba_a[0]));
		outfile__array_Core_3_I_g_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_gaba_b;
	outfile__array_Core_3_I_g_syn_gaba_b.open("results/_array_Core_3_I_g_syn_gaba_b_1984556864842459667", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_g_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_gaba_b), 256*sizeof(_array_Core_3_I_g_syn_gaba_b[0]));
		outfile__array_Core_3_I_g_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_g_syn_nmda;
	outfile__array_Core_3_I_g_syn_nmda.open("results/_array_Core_3_I_g_syn_nmda_-2557546933874030719", ios::binary | ios::out);
	if(outfile__array_Core_3_I_g_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_g_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_g_syn_nmda), 256*sizeof(_array_Core_3_I_g_syn_nmda[0]));
		outfile__array_Core_3_I_g_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_g_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_ampa;
	outfile__array_Core_3_I_syn_ampa.open("results/_array_Core_3_I_syn_ampa_3420769721718199825", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_syn_ampa), 256*sizeof(_array_Core_3_I_syn_ampa[0]));
		outfile__array_Core_3_I_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_a;
	outfile__array_Core_3_I_syn_gaba_a.open("results/_array_Core_3_I_syn_gaba_a_-1254048388352625234", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_a), 256*sizeof(_array_Core_3_I_syn_gaba_a[0]));
		outfile__array_Core_3_I_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_gaba_b;
	outfile__array_Core_3_I_syn_gaba_b.open("results/_array_Core_3_I_syn_gaba_b_1619239935217281717", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_syn_gaba_b), 256*sizeof(_array_Core_3_I_syn_gaba_b[0]));
		outfile__array_Core_3_I_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_syn_nmda;
	outfile__array_Core_3_I_syn_nmda.open("results/_array_Core_3_I_syn_nmda_-1946705487691164676", ios::binary | ios::out);
	if(outfile__array_Core_3_I_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_syn_nmda), 256*sizeof(_array_Core_3_I_syn_nmda[0]));
		outfile__array_Core_3_I_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_ampa;
	outfile__array_Core_3_I_tau_syn_ampa.open("results/_array_Core_3_I_tau_syn_ampa_7221859065826075081", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_tau_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_ampa), 256*sizeof(_array_Core_3_I_tau_syn_ampa[0]));
		outfile__array_Core_3_I_tau_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_a;
	outfile__array_Core_3_I_tau_syn_gaba_a.open("results/_array_Core_3_I_tau_syn_gaba_a_-3128654524919491776", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_a), 256*sizeof(_array_Core_3_I_tau_syn_gaba_a[0]));
		outfile__array_Core_3_I_tau_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_gaba_b;
	outfile__array_Core_3_I_tau_syn_gaba_b.open("results/_array_Core_3_I_tau_syn_gaba_b_-3834490803755233158", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_tau_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_gaba_b), 256*sizeof(_array_Core_3_I_tau_syn_gaba_b[0]));
		outfile__array_Core_3_I_tau_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_tau_syn_nmda;
	outfile__array_Core_3_I_tau_syn_nmda.open("results/_array_Core_3_I_tau_syn_nmda_-4040903034419207049", ios::binary | ios::out);
	if(outfile__array_Core_3_I_tau_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_tau_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_tau_syn_nmda), 256*sizeof(_array_Core_3_I_tau_syn_nmda[0]));
		outfile__array_Core_3_I_tau_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_tau_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_ampa;
	outfile__array_Core_3_I_wo_syn_ampa.open("results/_array_Core_3_I_wo_syn_ampa_-6130893694875201784", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_ampa.is_open())
	{
		outfile__array_Core_3_I_wo_syn_ampa.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_ampa), 256*sizeof(_array_Core_3_I_wo_syn_ampa[0]));
		outfile__array_Core_3_I_wo_syn_ampa.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_ampa." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_a;
	outfile__array_Core_3_I_wo_syn_gaba_a.open("results/_array_Core_3_I_wo_syn_gaba_a_-4642644651274418791", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_a.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_a.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_a), 256*sizeof(_array_Core_3_I_wo_syn_gaba_a[0]));
		outfile__array_Core_3_I_wo_syn_gaba_a.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_a." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_gaba_b;
	outfile__array_Core_3_I_wo_syn_gaba_b.open("results/_array_Core_3_I_wo_syn_gaba_b_-3155868939406097444", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_gaba_b.is_open())
	{
		outfile__array_Core_3_I_wo_syn_gaba_b.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_gaba_b), 256*sizeof(_array_Core_3_I_wo_syn_gaba_b[0]));
		outfile__array_Core_3_I_wo_syn_gaba_b.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_gaba_b." << endl;
	}
	ofstream outfile__array_Core_3_I_wo_syn_nmda;
	outfile__array_Core_3_I_wo_syn_nmda.open("results/_array_Core_3_I_wo_syn_nmda_5813125632591757740", ios::binary | ios::out);
	if(outfile__array_Core_3_I_wo_syn_nmda.is_open())
	{
		outfile__array_Core_3_I_wo_syn_nmda.write(reinterpret_cast<char*>(_array_Core_3_I_wo_syn_nmda), 256*sizeof(_array_Core_3_I_wo_syn_nmda[0]));
		outfile__array_Core_3_I_wo_syn_nmda.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_I_wo_syn_nmda." << endl;
	}
	ofstream outfile__array_Core_3_Iagain;
	outfile__array_Core_3_Iagain.open("results/_array_Core_3_Iagain_3404026695985239115", ios::binary | ios::out);
	if(outfile__array_Core_3_Iagain.is_open())
	{
		outfile__array_Core_3_Iagain.write(reinterpret_cast<char*>(_array_Core_3_Iagain), 1*sizeof(_array_Core_3_Iagain[0]));
		outfile__array_Core_3_Iagain.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iagain." << endl;
	}
	ofstream outfile__array_Core_3_Iahp;
	outfile__array_Core_3_Iahp.open("results/_array_Core_3_Iahp_3898240792372715931", ios::binary | ios::out);
	if(outfile__array_Core_3_Iahp.is_open())
	{
		outfile__array_Core_3_Iahp.write(reinterpret_cast<char*>(_array_Core_3_Iahp), 256*sizeof(_array_Core_3_Iahp[0]));
		outfile__array_Core_3_Iahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iahp." << endl;
	}
	ofstream outfile__array_Core_3_Ianorm;
	outfile__array_Core_3_Ianorm.open("results/_array_Core_3_Ianorm_4101013237923559863", ios::binary | ios::out);
	if(outfile__array_Core_3_Ianorm.is_open())
	{
		outfile__array_Core_3_Ianorm.write(reinterpret_cast<char*>(_array_Core_3_Ianorm), 1*sizeof(_array_Core_3_Ianorm[0]));
		outfile__array_Core_3_Ianorm.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ianorm." << endl;
	}
	ofstream outfile__array_Core_3_Iath;
	outfile__array_Core_3_Iath.open("results/_array_Core_3_Iath_-3188936036103111537", ios::binary | ios::out);
	if(outfile__array_Core_3_Iath.is_open())
	{
		outfile__array_Core_3_Iath.write(reinterpret_cast<char*>(_array_Core_3_Iath), 1*sizeof(_array_Core_3_Iath[0]));
		outfile__array_Core_3_Iath.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iath." << endl;
	}
	ofstream outfile__array_Core_3_Ica;
	outfile__array_Core_3_Ica.open("results/_array_Core_3_Ica_8955201117371635640", ios::binary | ios::out);
	if(outfile__array_Core_3_Ica.is_open())
	{
		outfile__array_Core_3_Ica.write(reinterpret_cast<char*>(_array_Core_3_Ica), 256*sizeof(_array_Core_3_Ica[0]));
		outfile__array_Core_3_Ica.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ica." << endl;
	}
	ofstream outfile__array_Core_3_Iconst;
	outfile__array_Core_3_Iconst.open("results/_array_Core_3_Iconst_-318157235354994544", ios::binary | ios::out);
	if(outfile__array_Core_3_Iconst.is_open())
	{
		outfile__array_Core_3_Iconst.write(reinterpret_cast<char*>(_array_Core_3_Iconst), 256*sizeof(_array_Core_3_Iconst[0]));
		outfile__array_Core_3_Iconst.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Iconst." << endl;
	}
	ofstream outfile__array_Core_3_Imem;
	outfile__array_Core_3_Imem.open("results/_array_Core_3_Imem_3577170735796928123", ios::binary | ios::out);
	if(outfile__array_Core_3_Imem.is_open())
	{
		outfile__array_Core_3_Imem.write(reinterpret_cast<char*>(_array_Core_3_Imem), 256*sizeof(_array_Core_3_Imem[0]));
		outfile__array_Core_3_Imem.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Imem." << endl;
	}
	ofstream outfile__array_Core_3_Io;
	outfile__array_Core_3_Io.open("results/_array_Core_3_Io_-7951256269831871981", ios::binary | ios::out);
	if(outfile__array_Core_3_Io.is_open())
	{
		outfile__array_Core_3_Io.write(reinterpret_cast<char*>(_array_Core_3_Io), 1*sizeof(_array_Core_3_Io[0]));
		outfile__array_Core_3_Io.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Io." << endl;
	}
	ofstream outfile__array_Core_3_Ireset;
	outfile__array_Core_3_Ireset.open("results/_array_Core_3_Ireset_-8630885332277510383", ios::binary | ios::out);
	if(outfile__array_Core_3_Ireset.is_open())
	{
		outfile__array_Core_3_Ireset.write(reinterpret_cast<char*>(_array_Core_3_Ireset), 1*sizeof(_array_Core_3_Ireset[0]));
		outfile__array_Core_3_Ireset.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ireset." << endl;
	}
	ofstream outfile__array_Core_3_Ishunt;
	outfile__array_Core_3_Ishunt.open("results/_array_Core_3_Ishunt_3827427015836325005", ios::binary | ios::out);
	if(outfile__array_Core_3_Ishunt.is_open())
	{
		outfile__array_Core_3_Ishunt.write(reinterpret_cast<char*>(_array_Core_3_Ishunt), 256*sizeof(_array_Core_3_Ishunt[0]));
		outfile__array_Core_3_Ishunt.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ishunt." << endl;
	}
	ofstream outfile__array_Core_3_Ispkthr;
	outfile__array_Core_3_Ispkthr.open("results/_array_Core_3_Ispkthr_4656627572447793863", ios::binary | ios::out);
	if(outfile__array_Core_3_Ispkthr.is_open())
	{
		outfile__array_Core_3_Ispkthr.write(reinterpret_cast<char*>(_array_Core_3_Ispkthr), 1*sizeof(_array_Core_3_Ispkthr[0]));
		outfile__array_Core_3_Ispkthr.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ispkthr." << endl;
	}
	ofstream outfile__array_Core_3_Itau;
	outfile__array_Core_3_Itau.open("results/_array_Core_3_Itau_-6791934046649459190", ios::binary | ios::out);
	if(outfile__array_Core_3_Itau.is_open())
	{
		outfile__array_Core_3_Itau.write(reinterpret_cast<char*>(_array_Core_3_Itau), 1*sizeof(_array_Core_3_Itau[0]));
		outfile__array_Core_3_Itau.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itau." << endl;
	}
	ofstream outfile__array_Core_3_Itauahp;
	outfile__array_Core_3_Itauahp.open("results/_array_Core_3_Itauahp_-1765049629123661225", ios::binary | ios::out);
	if(outfile__array_Core_3_Itauahp.is_open())
	{
		outfile__array_Core_3_Itauahp.write(reinterpret_cast<char*>(_array_Core_3_Itauahp), 1*sizeof(_array_Core_3_Itauahp[0]));
		outfile__array_Core_3_Itauahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Itauahp." << endl;
	}
	ofstream outfile__array_Core_3_Ith;
	outfile__array_Core_3_Ith.open("results/_array_Core_3_Ith_223856820910406249", ios::binary | ios::out);
	if(outfile__array_Core_3_Ith.is_open())
	{
		outfile__array_Core_3_Ith.write(reinterpret_cast<char*>(_array_Core_3_Ith), 1*sizeof(_array_Core_3_Ith[0]));
		outfile__array_Core_3_Ith.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ith." << endl;
	}
	ofstream outfile__array_Core_3_Ithahp;
	outfile__array_Core_3_Ithahp.open("results/_array_Core_3_Ithahp_5776794821521882032", ios::binary | ios::out);
	if(outfile__array_Core_3_Ithahp.is_open())
	{
		outfile__array_Core_3_Ithahp.write(reinterpret_cast<char*>(_array_Core_3_Ithahp), 1*sizeof(_array_Core_3_Ithahp[0]));
		outfile__array_Core_3_Ithahp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ithahp." << endl;
	}
	ofstream outfile__array_Core_3_kn;
	outfile__array_Core_3_kn.open("results/_array_Core_3_kn_1137741944287494463", ios::binary | ios::out);
	if(outfile__array_Core_3_kn.is_open())
	{
		outfile__array_Core_3_kn.write(reinterpret_cast<char*>(_array_Core_3_kn), 1*sizeof(_array_Core_3_kn[0]));
		outfile__array_Core_3_kn.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kn." << endl;
	}
	ofstream outfile__array_Core_3_kp;
	outfile__array_Core_3_kp.open("results/_array_Core_3_kp_-9149370980294432555", ios::binary | ios::out);
	if(outfile__array_Core_3_kp.is_open())
	{
		outfile__array_Core_3_kp.write(reinterpret_cast<char*>(_array_Core_3_kp), 1*sizeof(_array_Core_3_kp[0]));
		outfile__array_Core_3_kp.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_kp." << endl;
	}
	ofstream outfile__array_Core_3_lastspike;
	outfile__array_Core_3_lastspike.open("results/_array_Core_3_lastspike_7321637415883921786", ios::binary | ios::out);
	if(outfile__array_Core_3_lastspike.is_open())
	{
		outfile__array_Core_3_lastspike.write(reinterpret_cast<char*>(_array_Core_3_lastspike), 256*sizeof(_array_Core_3_lastspike[0]));
		outfile__array_Core_3_lastspike.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_lastspike." << endl;
	}
	ofstream outfile__array_Core_3_not_refractory;
	outfile__array_Core_3_not_refractory.open("results/_array_Core_3_not_refractory_-4388788445879746107", ios::binary | ios::out);
	if(outfile__array_Core_3_not_refractory.is_open())
	{
		outfile__array_Core_3_not_refractory.write(reinterpret_cast<char*>(_array_Core_3_not_refractory), 256*sizeof(_array_Core_3_not_refractory[0]));
		outfile__array_Core_3_not_refractory.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_not_refractory." << endl;
	}
	ofstream outfile__array_Core_3_refP;
	outfile__array_Core_3_refP.open("results/_array_Core_3_refP_-8633413910452033085", ios::binary | ios::out);
	if(outfile__array_Core_3_refP.is_open())
	{
		outfile__array_Core_3_refP.write(reinterpret_cast<char*>(_array_Core_3_refP), 1*sizeof(_array_Core_3_refP[0]));
		outfile__array_Core_3_refP.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_refP." << endl;
	}
	ofstream outfile__array_Core_3_tauca;
	outfile__array_Core_3_tauca.open("results/_array_Core_3_tauca_-6718975249609425136", ios::binary | ios::out);
	if(outfile__array_Core_3_tauca.is_open())
	{
		outfile__array_Core_3_tauca.write(reinterpret_cast<char*>(_array_Core_3_tauca), 1*sizeof(_array_Core_3_tauca[0]));
		outfile__array_Core_3_tauca.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_tauca." << endl;
	}
	ofstream outfile__array_Core_3_Ut;
	outfile__array_Core_3_Ut.open("results/_array_Core_3_Ut_2940021451809237789", ios::binary | ios::out);
	if(outfile__array_Core_3_Ut.is_open())
	{
		outfile__array_Core_3_Ut.write(reinterpret_cast<char*>(_array_Core_3_Ut), 1*sizeof(_array_Core_3_Ut[0]));
		outfile__array_Core_3_Ut.close();
	} else
	{
		std::cout << "Error writing output file for _array_Core_3_Ut." << endl;
	}
	ofstream outfile__array_defaultclock_dt;
	outfile__array_defaultclock_dt.open("results/_array_defaultclock_dt_-2768802996864391322", ios::binary | ios::out);
	if(outfile__array_defaultclock_dt.is_open())
	{
		outfile__array_defaultclock_dt.write(reinterpret_cast<char*>(_array_defaultclock_dt), 1*sizeof(_array_defaultclock_dt[0]));
		outfile__array_defaultclock_dt.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_dt." << endl;
	}
	ofstream outfile__array_defaultclock_t;
	outfile__array_defaultclock_t.open("results/_array_defaultclock_t_-1472594582314362659", ios::binary | ios::out);
	if(outfile__array_defaultclock_t.is_open())
	{
		outfile__array_defaultclock_t.write(reinterpret_cast<char*>(_array_defaultclock_t), 1*sizeof(_array_defaultclock_t[0]));
		outfile__array_defaultclock_t.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_t." << endl;
	}
	ofstream outfile__array_defaultclock_timestep;
	outfile__array_defaultclock_timestep.open("results/_array_defaultclock_timestep_-7691126741160503907", ios::binary | ios::out);
	if(outfile__array_defaultclock_timestep.is_open())
	{
		outfile__array_defaultclock_timestep.write(reinterpret_cast<char*>(_array_defaultclock_timestep), 1*sizeof(_array_defaultclock_timestep[0]));
		outfile__array_defaultclock_timestep.close();
	} else
	{
		std::cout << "Error writing output file for _array_defaultclock_timestep." << endl;
	}
	ofstream outfile__array_GABA_B4_N;
	outfile__array_GABA_B4_N.open("results/_array_GABA_B4_N_4359141585059487574", ios::binary | ios::out);
	if(outfile__array_GABA_B4_N.is_open())
	{
		outfile__array_GABA_B4_N.write(reinterpret_cast<char*>(_array_GABA_B4_N), 1*sizeof(_array_GABA_B4_N[0]));
		outfile__array_GABA_B4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B4_N." << endl;
	}
	ofstream outfile__array_GABA_B5_N;
	outfile__array_GABA_B5_N.open("results/_array_GABA_B5_N_8263054008862034975", ios::binary | ios::out);
	if(outfile__array_GABA_B5_N.is_open())
	{
		outfile__array_GABA_B5_N.write(reinterpret_cast<char*>(_array_GABA_B5_N), 1*sizeof(_array_GABA_B5_N[0]));
		outfile__array_GABA_B5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B5_N." << endl;
	}
	ofstream outfile__array_GABA_B6_N;
	outfile__array_GABA_B6_N.open("results/_array_GABA_B6_N_8590158801275652024", ios::binary | ios::out);
	if(outfile__array_GABA_B6_N.is_open())
	{
		outfile__array_GABA_B6_N.write(reinterpret_cast<char*>(_array_GABA_B6_N), 1*sizeof(_array_GABA_B6_N[0]));
		outfile__array_GABA_B6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B6_N." << endl;
	}
	ofstream outfile__array_GABA_B7_N;
	outfile__array_GABA_B7_N.open("results/_array_GABA_B7_N_-655472239576205457", ios::binary | ios::out);
	if(outfile__array_GABA_B7_N.is_open())
	{
		outfile__array_GABA_B7_N.write(reinterpret_cast<char*>(_array_GABA_B7_N), 1*sizeof(_array_GABA_B7_N[0]));
		outfile__array_GABA_B7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B7_N." << endl;
	}
	ofstream outfile__array_GABA_B8_N;
	outfile__array_GABA_B8_N.open("results/_array_GABA_B8_N_1776236867967895015", ios::binary | ios::out);
	if(outfile__array_GABA_B8_N.is_open())
	{
		outfile__array_GABA_B8_N.write(reinterpret_cast<char*>(_array_GABA_B8_N), 1*sizeof(_array_GABA_B8_N[0]));
		outfile__array_GABA_B8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B8_N." << endl;
	}
	ofstream outfile__array_GABA_B9_N;
	outfile__array_GABA_B9_N.open("results/_array_GABA_B9_N_3233223808470790824", ios::binary | ios::out);
	if(outfile__array_GABA_B9_N.is_open())
	{
		outfile__array_GABA_B9_N.write(reinterpret_cast<char*>(_array_GABA_B9_N), 1*sizeof(_array_GABA_B9_N[0]));
		outfile__array_GABA_B9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_GABA_B9_N." << endl;
	}
	ofstream outfile__array_inh_neuron_output__source_idx;
	outfile__array_inh_neuron_output__source_idx.open("results/_array_inh_neuron_output__source_idx_-3626918678880579011", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output__source_idx.is_open())
	{
		outfile__array_inh_neuron_output__source_idx.write(reinterpret_cast<char*>(_array_inh_neuron_output__source_idx), 2*sizeof(_array_inh_neuron_output__source_idx[0]));
		outfile__array_inh_neuron_output__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output__source_idx." << endl;
	}
	ofstream outfile__array_inh_neuron_output_count;
	outfile__array_inh_neuron_output_count.open("results/_array_inh_neuron_output_count_-4131475526973090337", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output_count.is_open())
	{
		outfile__array_inh_neuron_output_count.write(reinterpret_cast<char*>(_array_inh_neuron_output_count), 2*sizeof(_array_inh_neuron_output_count[0]));
		outfile__array_inh_neuron_output_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output_count." << endl;
	}
	ofstream outfile__array_inh_neuron_output_N;
	outfile__array_inh_neuron_output_N.open("results/_array_inh_neuron_output_N_1214689022176741522", ios::binary | ios::out);
	if(outfile__array_inh_neuron_output_N.is_open())
	{
		outfile__array_inh_neuron_output_N.write(reinterpret_cast<char*>(_array_inh_neuron_output_N), 1*sizeof(_array_inh_neuron_output_N[0]));
		outfile__array_inh_neuron_output_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_inh_neuron_output_N." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__lastindex;
	outfile__array_InpSpikeGenerator__lastindex.open("results/_array_InpSpikeGenerator__lastindex_-6190845058658518043", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__lastindex.is_open())
	{
		outfile__array_InpSpikeGenerator__lastindex.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__lastindex), 1*sizeof(_array_InpSpikeGenerator__lastindex[0]));
		outfile__array_InpSpikeGenerator__lastindex.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__lastindex." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__period_bins;
	outfile__array_InpSpikeGenerator__period_bins.open("results/_array_InpSpikeGenerator__period_bins_2665286847929122583", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__period_bins.is_open())
	{
		outfile__array_InpSpikeGenerator__period_bins.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__period_bins), 1*sizeof(_array_InpSpikeGenerator__period_bins[0]));
		outfile__array_InpSpikeGenerator__period_bins.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__period_bins." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator__spikespace;
	outfile__array_InpSpikeGenerator__spikespace.open("results/_array_InpSpikeGenerator__spikespace_6250368330177901902", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator__spikespace.is_open())
	{
		outfile__array_InpSpikeGenerator__spikespace.write(reinterpret_cast<char*>(_array_InpSpikeGenerator__spikespace), 2*sizeof(_array_InpSpikeGenerator__spikespace[0]));
		outfile__array_InpSpikeGenerator__spikespace.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator__spikespace." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_i;
	outfile__array_InpSpikeGenerator_i.open("results/_array_InpSpikeGenerator_i_2152259717554904539", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_i.is_open())
	{
		outfile__array_InpSpikeGenerator_i.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_i), 1*sizeof(_array_InpSpikeGenerator_i[0]));
		outfile__array_InpSpikeGenerator_i.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_i." << endl;
	}
	ofstream outfile__array_InpSpikeGenerator_period;
	outfile__array_InpSpikeGenerator_period.open("results/_array_InpSpikeGenerator_period_-4535599532730712707", ios::binary | ios::out);
	if(outfile__array_InpSpikeGenerator_period.is_open())
	{
		outfile__array_InpSpikeGenerator_period.write(reinterpret_cast<char*>(_array_InpSpikeGenerator_period), 1*sizeof(_array_InpSpikeGenerator_period[0]));
		outfile__array_InpSpikeGenerator_period.close();
	} else
	{
		std::cout << "Error writing output file for _array_InpSpikeGenerator_period." << endl;
	}
	ofstream outfile__array_mon_neuron_input__source_idx;
	outfile__array_mon_neuron_input__source_idx.open("results/_array_mon_neuron_input__source_idx_7340235666961118555", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input__source_idx.is_open())
	{
		outfile__array_mon_neuron_input__source_idx.write(reinterpret_cast<char*>(_array_mon_neuron_input__source_idx), 1*sizeof(_array_mon_neuron_input__source_idx[0]));
		outfile__array_mon_neuron_input__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input__source_idx." << endl;
	}
	ofstream outfile__array_mon_neuron_input_count;
	outfile__array_mon_neuron_input_count.open("results/_array_mon_neuron_input_count_547304920496020350", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_count.is_open())
	{
		outfile__array_mon_neuron_input_count.write(reinterpret_cast<char*>(_array_mon_neuron_input_count), 1*sizeof(_array_mon_neuron_input_count[0]));
		outfile__array_mon_neuron_input_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_count." << endl;
	}
	ofstream outfile__array_mon_neuron_input_N;
	outfile__array_mon_neuron_input_N.open("results/_array_mon_neuron_input_N_-4489597859357635424", ios::binary | ios::out);
	if(outfile__array_mon_neuron_input_N.is_open())
	{
		outfile__array_mon_neuron_input_N.write(reinterpret_cast<char*>(_array_mon_neuron_input_N), 1*sizeof(_array_mon_neuron_input_N[0]));
		outfile__array_mon_neuron_input_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_mon_neuron_input_N." << endl;
	}
	ofstream outfile__array_NMDA1_N;
	outfile__array_NMDA1_N.open("results/_array_NMDA1_N_6232765361237049844", ios::binary | ios::out);
	if(outfile__array_NMDA1_N.is_open())
	{
		outfile__array_NMDA1_N.write(reinterpret_cast<char*>(_array_NMDA1_N), 1*sizeof(_array_NMDA1_N[0]));
		outfile__array_NMDA1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA1_N." << endl;
	}
	ofstream outfile__array_NMDA2_N;
	outfile__array_NMDA2_N.open("results/_array_NMDA2_N_6066495036844350390", ios::binary | ios::out);
	if(outfile__array_NMDA2_N.is_open())
	{
		outfile__array_NMDA2_N.write(reinterpret_cast<char*>(_array_NMDA2_N), 1*sizeof(_array_NMDA2_N[0]));
		outfile__array_NMDA2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA2_N." << endl;
	}
	ofstream outfile__array_NMDA3_N;
	outfile__array_NMDA3_N.open("results/_array_NMDA3_N_863044584286190956", ios::binary | ios::out);
	if(outfile__array_NMDA3_N.is_open())
	{
		outfile__array_NMDA3_N.write(reinterpret_cast<char*>(_array_NMDA3_N), 1*sizeof(_array_NMDA3_N[0]));
		outfile__array_NMDA3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_NMDA3_N." << endl;
	}
	ofstream outfile__array_spikemonitor_1__source_idx;
	outfile__array_spikemonitor_1__source_idx.open("results/_array_spikemonitor_1__source_idx_-5938300337885065421", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1__source_idx.is_open())
	{
		outfile__array_spikemonitor_1__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_1__source_idx), 2*sizeof(_array_spikemonitor_1__source_idx[0]));
		outfile__array_spikemonitor_1__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_1_count;
	outfile__array_spikemonitor_1_count.open("results/_array_spikemonitor_1_count_-4086320703922819204", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1_count.is_open())
	{
		outfile__array_spikemonitor_1_count.write(reinterpret_cast<char*>(_array_spikemonitor_1_count), 2*sizeof(_array_spikemonitor_1_count[0]));
		outfile__array_spikemonitor_1_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1_count." << endl;
	}
	ofstream outfile__array_spikemonitor_1_N;
	outfile__array_spikemonitor_1_N.open("results/_array_spikemonitor_1_N_-4291217845798623494", ios::binary | ios::out);
	if(outfile__array_spikemonitor_1_N.is_open())
	{
		outfile__array_spikemonitor_1_N.write(reinterpret_cast<char*>(_array_spikemonitor_1_N), 1*sizeof(_array_spikemonitor_1_N[0]));
		outfile__array_spikemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_1_N." << endl;
	}
	ofstream outfile__array_spikemonitor_2__source_idx;
	outfile__array_spikemonitor_2__source_idx.open("results/_array_spikemonitor_2__source_idx_-3836101264670983660", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2__source_idx.is_open())
	{
		outfile__array_spikemonitor_2__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor_2__source_idx), 2*sizeof(_array_spikemonitor_2__source_idx[0]));
		outfile__array_spikemonitor_2__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_2_count;
	outfile__array_spikemonitor_2_count.open("results/_array_spikemonitor_2_count_4481167828303914471", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2_count.is_open())
	{
		outfile__array_spikemonitor_2_count.write(reinterpret_cast<char*>(_array_spikemonitor_2_count), 2*sizeof(_array_spikemonitor_2_count[0]));
		outfile__array_spikemonitor_2_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2_count." << endl;
	}
	ofstream outfile__array_spikemonitor_2_N;
	outfile__array_spikemonitor_2_N.open("results/_array_spikemonitor_2_N_2018588274889472393", ios::binary | ios::out);
	if(outfile__array_spikemonitor_2_N.is_open())
	{
		outfile__array_spikemonitor_2_N.write(reinterpret_cast<char*>(_array_spikemonitor_2_N), 1*sizeof(_array_spikemonitor_2_N[0]));
		outfile__array_spikemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_2_N." << endl;
	}
	ofstream outfile__array_spikemonitor__source_idx;
	outfile__array_spikemonitor__source_idx.open("results/_array_spikemonitor__source_idx_-572631763309251777", ios::binary | ios::out);
	if(outfile__array_spikemonitor__source_idx.is_open())
	{
		outfile__array_spikemonitor__source_idx.write(reinterpret_cast<char*>(_array_spikemonitor__source_idx), 2*sizeof(_array_spikemonitor__source_idx[0]));
		outfile__array_spikemonitor__source_idx.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor__source_idx." << endl;
	}
	ofstream outfile__array_spikemonitor_count;
	outfile__array_spikemonitor_count.open("results/_array_spikemonitor_count_-9196512660936010935", ios::binary | ios::out);
	if(outfile__array_spikemonitor_count.is_open())
	{
		outfile__array_spikemonitor_count.write(reinterpret_cast<char*>(_array_spikemonitor_count), 2*sizeof(_array_spikemonitor_count[0]));
		outfile__array_spikemonitor_count.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_count." << endl;
	}
	ofstream outfile__array_spikemonitor_N;
	outfile__array_spikemonitor_N.open("results/_array_spikemonitor_N_5077165216381053270", ios::binary | ios::out);
	if(outfile__array_spikemonitor_N.is_open())
	{
		outfile__array_spikemonitor_N.write(reinterpret_cast<char*>(_array_spikemonitor_N), 1*sizeof(_array_spikemonitor_N[0]));
		outfile__array_spikemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_spikemonitor_N." << endl;
	}
	ofstream outfile__array_statemonitor_10__indices;
	outfile__array_statemonitor_10__indices.open("results/_array_statemonitor_10__indices_3269165420697722964", ios::binary | ios::out);
	if(outfile__array_statemonitor_10__indices.is_open())
	{
		outfile__array_statemonitor_10__indices.write(reinterpret_cast<char*>(_array_statemonitor_10__indices), 1*sizeof(_array_statemonitor_10__indices[0]));
		outfile__array_statemonitor_10__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10__indices." << endl;
	}
	ofstream outfile__array_statemonitor_10_N;
	outfile__array_statemonitor_10_N.open("results/_array_statemonitor_10_N_-5526225154136323879", ios::binary | ios::out);
	if(outfile__array_statemonitor_10_N.is_open())
	{
		outfile__array_statemonitor_10_N.write(reinterpret_cast<char*>(_array_statemonitor_10_N), 1*sizeof(_array_statemonitor_10_N[0]));
		outfile__array_statemonitor_10_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_10_N." << endl;
	}
	ofstream outfile__array_statemonitor_11__indices;
	outfile__array_statemonitor_11__indices.open("results/_array_statemonitor_11__indices_5416862027412207570", ios::binary | ios::out);
	if(outfile__array_statemonitor_11__indices.is_open())
	{
		outfile__array_statemonitor_11__indices.write(reinterpret_cast<char*>(_array_statemonitor_11__indices), 1*sizeof(_array_statemonitor_11__indices[0]));
		outfile__array_statemonitor_11__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11__indices." << endl;
	}
	ofstream outfile__array_statemonitor_11_N;
	outfile__array_statemonitor_11_N.open("results/_array_statemonitor_11_N_7293581124055528875", ios::binary | ios::out);
	if(outfile__array_statemonitor_11_N.is_open())
	{
		outfile__array_statemonitor_11_N.write(reinterpret_cast<char*>(_array_statemonitor_11_N), 1*sizeof(_array_statemonitor_11_N[0]));
		outfile__array_statemonitor_11_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_11_N." << endl;
	}
	ofstream outfile__array_statemonitor_12__indices;
	outfile__array_statemonitor_12__indices.open("results/_array_statemonitor_12__indices_-7271658222569650800", ios::binary | ios::out);
	if(outfile__array_statemonitor_12__indices.is_open())
	{
		outfile__array_statemonitor_12__indices.write(reinterpret_cast<char*>(_array_statemonitor_12__indices), 1*sizeof(_array_statemonitor_12__indices[0]));
		outfile__array_statemonitor_12__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12__indices." << endl;
	}
	ofstream outfile__array_statemonitor_12_N;
	outfile__array_statemonitor_12_N.open("results/_array_statemonitor_12_N_297110138134559600", ios::binary | ios::out);
	if(outfile__array_statemonitor_12_N.is_open())
	{
		outfile__array_statemonitor_12_N.write(reinterpret_cast<char*>(_array_statemonitor_12_N), 1*sizeof(_array_statemonitor_12_N[0]));
		outfile__array_statemonitor_12_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_12_N." << endl;
	}
	ofstream outfile__array_statemonitor_13__indices;
	outfile__array_statemonitor_13__indices.open("results/_array_statemonitor_13__indices_3689247973508770422", ios::binary | ios::out);
	if(outfile__array_statemonitor_13__indices.is_open())
	{
		outfile__array_statemonitor_13__indices.write(reinterpret_cast<char*>(_array_statemonitor_13__indices), 1*sizeof(_array_statemonitor_13__indices[0]));
		outfile__array_statemonitor_13__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13__indices." << endl;
	}
	ofstream outfile__array_statemonitor_13_N;
	outfile__array_statemonitor_13_N.open("results/_array_statemonitor_13_N_-4115811006384360507", ios::binary | ios::out);
	if(outfile__array_statemonitor_13_N.is_open())
	{
		outfile__array_statemonitor_13_N.write(reinterpret_cast<char*>(_array_statemonitor_13_N), 1*sizeof(_array_statemonitor_13_N[0]));
		outfile__array_statemonitor_13_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_13_N." << endl;
	}
	ofstream outfile__array_statemonitor_1__indices;
	outfile__array_statemonitor_1__indices.open("results/_array_statemonitor_1__indices_5753536062069043004", ios::binary | ios::out);
	if(outfile__array_statemonitor_1__indices.is_open())
	{
		outfile__array_statemonitor_1__indices.write(reinterpret_cast<char*>(_array_statemonitor_1__indices), 2*sizeof(_array_statemonitor_1__indices[0]));
		outfile__array_statemonitor_1__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1__indices." << endl;
	}
	ofstream outfile__array_statemonitor_1_N;
	outfile__array_statemonitor_1_N.open("results/_array_statemonitor_1_N_4398450055592996390", ios::binary | ios::out);
	if(outfile__array_statemonitor_1_N.is_open())
	{
		outfile__array_statemonitor_1_N.write(reinterpret_cast<char*>(_array_statemonitor_1_N), 1*sizeof(_array_statemonitor_1_N[0]));
		outfile__array_statemonitor_1_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_1_N." << endl;
	}
	ofstream outfile__array_statemonitor_2__indices;
	outfile__array_statemonitor_2__indices.open("results/_array_statemonitor_2__indices_1367712746406843936", ios::binary | ios::out);
	if(outfile__array_statemonitor_2__indices.is_open())
	{
		outfile__array_statemonitor_2__indices.write(reinterpret_cast<char*>(_array_statemonitor_2__indices), 2*sizeof(_array_statemonitor_2__indices[0]));
		outfile__array_statemonitor_2__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2__indices." << endl;
	}
	ofstream outfile__array_statemonitor_2_N;
	outfile__array_statemonitor_2_N.open("results/_array_statemonitor_2_N_6560739428085683477", ios::binary | ios::out);
	if(outfile__array_statemonitor_2_N.is_open())
	{
		outfile__array_statemonitor_2_N.write(reinterpret_cast<char*>(_array_statemonitor_2_N), 1*sizeof(_array_statemonitor_2_N[0]));
		outfile__array_statemonitor_2_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_2_N." << endl;
	}
	ofstream outfile__array_statemonitor_3__indices;
	outfile__array_statemonitor_3__indices.open("results/_array_statemonitor_3__indices_-6334045799397029485", ios::binary | ios::out);
	if(outfile__array_statemonitor_3__indices.is_open())
	{
		outfile__array_statemonitor_3__indices.write(reinterpret_cast<char*>(_array_statemonitor_3__indices), 1*sizeof(_array_statemonitor_3__indices[0]));
		outfile__array_statemonitor_3__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3__indices." << endl;
	}
	ofstream outfile__array_statemonitor_3_N;
	outfile__array_statemonitor_3_N.open("results/_array_statemonitor_3_N_8780449629497072067", ios::binary | ios::out);
	if(outfile__array_statemonitor_3_N.is_open())
	{
		outfile__array_statemonitor_3_N.write(reinterpret_cast<char*>(_array_statemonitor_3_N), 1*sizeof(_array_statemonitor_3_N[0]));
		outfile__array_statemonitor_3_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_3_N." << endl;
	}
	ofstream outfile__array_statemonitor_4__indices;
	outfile__array_statemonitor_4__indices.open("results/_array_statemonitor_4__indices_-3447002250941358900", ios::binary | ios::out);
	if(outfile__array_statemonitor_4__indices.is_open())
	{
		outfile__array_statemonitor_4__indices.write(reinterpret_cast<char*>(_array_statemonitor_4__indices), 1*sizeof(_array_statemonitor_4__indices[0]));
		outfile__array_statemonitor_4__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4__indices." << endl;
	}
	ofstream outfile__array_statemonitor_4_N;
	outfile__array_statemonitor_4_N.open("results/_array_statemonitor_4_N_-7390075008672207691", ios::binary | ios::out);
	if(outfile__array_statemonitor_4_N.is_open())
	{
		outfile__array_statemonitor_4_N.write(reinterpret_cast<char*>(_array_statemonitor_4_N), 1*sizeof(_array_statemonitor_4_N[0]));
		outfile__array_statemonitor_4_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_4_N." << endl;
	}
	ofstream outfile__array_statemonitor_5__indices;
	outfile__array_statemonitor_5__indices.open("results/_array_statemonitor_5__indices_5749292594995118793", ios::binary | ios::out);
	if(outfile__array_statemonitor_5__indices.is_open())
	{
		outfile__array_statemonitor_5__indices.write(reinterpret_cast<char*>(_array_statemonitor_5__indices), 1*sizeof(_array_statemonitor_5__indices[0]));
		outfile__array_statemonitor_5__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5__indices." << endl;
	}
	ofstream outfile__array_statemonitor_5_N;
	outfile__array_statemonitor_5_N.open("results/_array_statemonitor_5_N_-1105169097148550227", ios::binary | ios::out);
	if(outfile__array_statemonitor_5_N.is_open())
	{
		outfile__array_statemonitor_5_N.write(reinterpret_cast<char*>(_array_statemonitor_5_N), 1*sizeof(_array_statemonitor_5_N[0]));
		outfile__array_statemonitor_5_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_5_N." << endl;
	}
	ofstream outfile__array_statemonitor_6__indices;
	outfile__array_statemonitor_6__indices.open("results/_array_statemonitor_6__indices_8707943042361917385", ios::binary | ios::out);
	if(outfile__array_statemonitor_6__indices.is_open())
	{
		outfile__array_statemonitor_6__indices.write(reinterpret_cast<char*>(_array_statemonitor_6__indices), 1*sizeof(_array_statemonitor_6__indices[0]));
		outfile__array_statemonitor_6__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6__indices." << endl;
	}
	ofstream outfile__array_statemonitor_6_N;
	outfile__array_statemonitor_6_N.open("results/_array_statemonitor_6_N_7065640885040571390", ios::binary | ios::out);
	if(outfile__array_statemonitor_6_N.is_open())
	{
		outfile__array_statemonitor_6_N.write(reinterpret_cast<char*>(_array_statemonitor_6_N), 1*sizeof(_array_statemonitor_6_N[0]));
		outfile__array_statemonitor_6_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_6_N." << endl;
	}
	ofstream outfile__array_statemonitor_7__indices;
	outfile__array_statemonitor_7__indices.open("results/_array_statemonitor_7__indices_5563446832785426068", ios::binary | ios::out);
	if(outfile__array_statemonitor_7__indices.is_open())
	{
		outfile__array_statemonitor_7__indices.write(reinterpret_cast<char*>(_array_statemonitor_7__indices), 1*sizeof(_array_statemonitor_7__indices[0]));
		outfile__array_statemonitor_7__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7__indices." << endl;
	}
	ofstream outfile__array_statemonitor_7_N;
	outfile__array_statemonitor_7_N.open("results/_array_statemonitor_7_N_-3452215286716819451", ios::binary | ios::out);
	if(outfile__array_statemonitor_7_N.is_open())
	{
		outfile__array_statemonitor_7_N.write(reinterpret_cast<char*>(_array_statemonitor_7_N), 1*sizeof(_array_statemonitor_7_N[0]));
		outfile__array_statemonitor_7_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_7_N." << endl;
	}
	ofstream outfile__array_statemonitor_8__indices;
	outfile__array_statemonitor_8__indices.open("results/_array_statemonitor_8__indices_6779717818584758158", ios::binary | ios::out);
	if(outfile__array_statemonitor_8__indices.is_open())
	{
		outfile__array_statemonitor_8__indices.write(reinterpret_cast<char*>(_array_statemonitor_8__indices), 1*sizeof(_array_statemonitor_8__indices[0]));
		outfile__array_statemonitor_8__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8__indices." << endl;
	}
	ofstream outfile__array_statemonitor_8_N;
	outfile__array_statemonitor_8_N.open("results/_array_statemonitor_8_N_-2681481564298154756", ios::binary | ios::out);
	if(outfile__array_statemonitor_8_N.is_open())
	{
		outfile__array_statemonitor_8_N.write(reinterpret_cast<char*>(_array_statemonitor_8_N), 1*sizeof(_array_statemonitor_8_N[0]));
		outfile__array_statemonitor_8_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_8_N." << endl;
	}
	ofstream outfile__array_statemonitor_9__indices;
	outfile__array_statemonitor_9__indices.open("results/_array_statemonitor_9__indices_893290087045394290", ios::binary | ios::out);
	if(outfile__array_statemonitor_9__indices.is_open())
	{
		outfile__array_statemonitor_9__indices.write(reinterpret_cast<char*>(_array_statemonitor_9__indices), 1*sizeof(_array_statemonitor_9__indices[0]));
		outfile__array_statemonitor_9__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9__indices." << endl;
	}
	ofstream outfile__array_statemonitor_9_N;
	outfile__array_statemonitor_9_N.open("results/_array_statemonitor_9_N_3802723263042239252", ios::binary | ios::out);
	if(outfile__array_statemonitor_9_N.is_open())
	{
		outfile__array_statemonitor_9_N.write(reinterpret_cast<char*>(_array_statemonitor_9_N), 1*sizeof(_array_statemonitor_9_N[0]));
		outfile__array_statemonitor_9_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_9_N." << endl;
	}
	ofstream outfile__array_statemonitor__indices;
	outfile__array_statemonitor__indices.open("results/_array_statemonitor__indices_8604292339465143096", ios::binary | ios::out);
	if(outfile__array_statemonitor__indices.is_open())
	{
		outfile__array_statemonitor__indices.write(reinterpret_cast<char*>(_array_statemonitor__indices), 2*sizeof(_array_statemonitor__indices[0]));
		outfile__array_statemonitor__indices.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor__indices." << endl;
	}
	ofstream outfile__array_statemonitor_N;
	outfile__array_statemonitor_N.open("results/_array_statemonitor_N_-8604578423892770641", ios::binary | ios::out);
	if(outfile__array_statemonitor_N.is_open())
	{
		outfile__array_statemonitor_N.write(reinterpret_cast<char*>(_array_statemonitor_N), 1*sizeof(_array_statemonitor_N[0]));
		outfile__array_statemonitor_N.close();
	} else
	{
		std::cout << "Error writing output file for _array_statemonitor_N." << endl;
	}

	ofstream outfile__dynamic_array_AMPA0__synaptic_post;
	outfile__dynamic_array_AMPA0__synaptic_post.open("results/_dynamic_array_AMPA0__synaptic_post_401340605242494660", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0__synaptic_pre.open("results/_dynamic_array_AMPA0__synaptic_pre_-6043615477817440154", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay.open("results/_dynamic_array_AMPA0_delay_-741336851270458246", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_delay_1.open("results/_dynamic_array_AMPA0_delay_1_9094519459256808514", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_incoming.open("results/_dynamic_array_AMPA0_N_incoming_2629773545809427592", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_N_outgoing.open("results/_dynamic_array_AMPA0_N_outgoing_2654437804081468450", ios::binary | ios::out);
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
	outfile__dynamic_array_AMPA0_weight.open("results/_dynamic_array_AMPA0_weight_5777792697490469329", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4__synaptic_post.open("results/_dynamic_array_GABA_B4__synaptic_post_3862995639561528373", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4__synaptic_pre.open("results/_dynamic_array_GABA_B4__synaptic_pre_-7868698199072035910", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_delay.open("results/_dynamic_array_GABA_B4_delay_2397286214888843075", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_delay_1.open("results/_dynamic_array_GABA_B4_delay_1_-615550089807136660", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_N_incoming.open("results/_dynamic_array_GABA_B4_N_incoming_-6936833628975289711", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_N_outgoing.open("results/_dynamic_array_GABA_B4_N_outgoing_5459079884636228239", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B4_weight.open("results/_dynamic_array_GABA_B4_weight_-2532442072990410284", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5__synaptic_post.open("results/_dynamic_array_GABA_B5__synaptic_post_-6600282168134928457", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5__synaptic_pre.open("results/_dynamic_array_GABA_B5__synaptic_pre_3049252588939043019", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_delay.open("results/_dynamic_array_GABA_B5_delay_7931126973524907450", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_delay_1.open("results/_dynamic_array_GABA_B5_delay_1_8465790916340836641", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_N_incoming.open("results/_dynamic_array_GABA_B5_N_incoming_197355535740534014", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_N_outgoing.open("results/_dynamic_array_GABA_B5_N_outgoing_6076558279631211431", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B5_weight.open("results/_dynamic_array_GABA_B5_weight_-6690993853023663685", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6__synaptic_post.open("results/_dynamic_array_GABA_B6__synaptic_post_7111663607839758182", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6__synaptic_pre.open("results/_dynamic_array_GABA_B6__synaptic_pre_-5775956415864837550", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_delay.open("results/_dynamic_array_GABA_B6_delay_8613509864768838292", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_delay_1.open("results/_dynamic_array_GABA_B6_delay_1_4938209008406657342", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_N_incoming.open("results/_dynamic_array_GABA_B6_N_incoming_6958147332933181545", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_N_outgoing.open("results/_dynamic_array_GABA_B6_N_outgoing_7057145961331025426", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B6_weight.open("results/_dynamic_array_GABA_B6_weight_-7683461322081092815", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7__synaptic_post.open("results/_dynamic_array_GABA_B7__synaptic_post_-8225496509175064990", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7__synaptic_pre.open("results/_dynamic_array_GABA_B7__synaptic_pre_-7564717607048276180", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_delay.open("results/_dynamic_array_GABA_B7_delay_8567131450256368629", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_delay_1.open("results/_dynamic_array_GABA_B7_delay_1_3845363971504563938", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_N_incoming.open("results/_dynamic_array_GABA_B7_N_incoming_-5937523201638996432", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_N_outgoing.open("results/_dynamic_array_GABA_B7_N_outgoing_-180098822262059211", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B7_weight.open("results/_dynamic_array_GABA_B7_weight_-1345851621130074932", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8__synaptic_post.open("results/_dynamic_array_GABA_B8__synaptic_post_8761982833299039487", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8__synaptic_pre.open("results/_dynamic_array_GABA_B8__synaptic_pre_5361313064615383089", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_delay.open("results/_dynamic_array_GABA_B8_delay_-2922068631445424782", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_delay_1.open("results/_dynamic_array_GABA_B8_delay_1_4618261598398609824", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_N_incoming.open("results/_dynamic_array_GABA_B8_N_incoming_-1907473584324646845", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_N_outgoing.open("results/_dynamic_array_GABA_B8_N_outgoing_-5308943169975204696", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B8_weight.open("results/_dynamic_array_GABA_B8_weight_540820382517963148", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9__synaptic_post.open("results/_dynamic_array_GABA_B9__synaptic_post_-2955020415411347942", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9__synaptic_pre.open("results/_dynamic_array_GABA_B9__synaptic_pre_-59409722403702818", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_delay.open("results/_dynamic_array_GABA_B9_delay_-2681620116431124656", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_delay_1.open("results/_dynamic_array_GABA_B9_delay_1_-5786816416999032453", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_N_incoming.open("results/_dynamic_array_GABA_B9_N_incoming_-1659175737705232920", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_N_outgoing.open("results/_dynamic_array_GABA_B9_N_outgoing_-5590001363347581017", ios::binary | ios::out);
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
	outfile__dynamic_array_GABA_B9_weight.open("results/_dynamic_array_GABA_B9_weight_4696798916246658913", ios::binary | ios::out);
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
	outfile__dynamic_array_inh_neuron_output_i.open("results/_dynamic_array_inh_neuron_output_i_5005267263558885041", ios::binary | ios::out);
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
	outfile__dynamic_array_inh_neuron_output_t.open("results/_dynamic_array_inh_neuron_output_t_3235557940162511351", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator__timebins.open("results/_dynamic_array_InpSpikeGenerator__timebins_-5796389346610688384", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator_neuron_index.open("results/_dynamic_array_InpSpikeGenerator_neuron_index_3591678113273160676", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator_spike_number.open("results/_dynamic_array_InpSpikeGenerator_spike_number_-567252331587331663", ios::binary | ios::out);
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
	outfile__dynamic_array_InpSpikeGenerator_spike_time.open("results/_dynamic_array_InpSpikeGenerator_spike_time_-8548035669425522203", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_i.open("results/_dynamic_array_mon_neuron_input_i_3798092890420286391", ios::binary | ios::out);
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
	outfile__dynamic_array_mon_neuron_input_t.open("results/_dynamic_array_mon_neuron_input_t_-682545238338536800", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1__synaptic_post.open("results/_dynamic_array_NMDA1__synaptic_post_-1573674580787968967", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1__synaptic_pre.open("results/_dynamic_array_NMDA1__synaptic_pre_-3637255274221491531", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_delay.open("results/_dynamic_array_NMDA1_delay_-8840590994741254810", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_delay_1.open("results/_dynamic_array_NMDA1_delay_1_-913065352183428437", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_N_incoming.open("results/_dynamic_array_NMDA1_N_incoming_6213212572842821700", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_N_outgoing.open("results/_dynamic_array_NMDA1_N_outgoing_-8576661007283033979", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA1_weight.open("results/_dynamic_array_NMDA1_weight_6651244308517838652", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2__synaptic_post.open("results/_dynamic_array_NMDA2__synaptic_post_2888187122211519741", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2__synaptic_pre.open("results/_dynamic_array_NMDA2__synaptic_pre_5294716041280153100", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_delay.open("results/_dynamic_array_NMDA2_delay_-5667597254479529645", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_delay_1.open("results/_dynamic_array_NMDA2_delay_1_-3721596398731867398", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_N_incoming.open("results/_dynamic_array_NMDA2_N_incoming_5825058587083587825", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_N_outgoing.open("results/_dynamic_array_NMDA2_N_outgoing_-3995769184201495147", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA2_weight.open("results/_dynamic_array_NMDA2_weight_7128583458882162313", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3__synaptic_post.open("results/_dynamic_array_NMDA3__synaptic_post_-6775868201944866965", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3__synaptic_pre.open("results/_dynamic_array_NMDA3__synaptic_pre_5126197164779755366", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_delay.open("results/_dynamic_array_NMDA3_delay_1015154022629790983", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_delay_1.open("results/_dynamic_array_NMDA3_delay_1_-2422820066599829868", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_N_incoming.open("results/_dynamic_array_NMDA3_N_incoming_2018515726689495488", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_N_outgoing.open("results/_dynamic_array_NMDA3_N_outgoing_-7989199356536406437", ios::binary | ios::out);
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
	outfile__dynamic_array_NMDA3_weight.open("results/_dynamic_array_NMDA3_weight_8756734206430644646", ios::binary | ios::out);
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
	outfile__dynamic_array_spikemonitor_1_i.open("results/_dynamic_array_spikemonitor_1_i_1267585113027105249", ios::binary | ios::out);
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
	outfile__dynamic_array_spikemonitor_1_t.open("results/_dynamic_array_spikemonitor_1_t_2679073290865369157", ios::binary | ios::out);
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
	outfile__dynamic_array_spikemonitor_2_i.open("results/_dynamic_array_spikemonitor_2_i_4917542500323662340", ios::binary | ios::out);
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
	outfile__dynamic_array_spikemonitor_2_t.open("results/_dynamic_array_spikemonitor_2_t_-4263450442666021339", ios::binary | ios::out);
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
	outfile__dynamic_array_spikemonitor_i.open("results/_dynamic_array_spikemonitor_i_8404191011333782515", ios::binary | ios::out);
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
	outfile__dynamic_array_spikemonitor_t.open("results/_dynamic_array_spikemonitor_t_-8396542277962823268", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_10_t.open("results/_dynamic_array_statemonitor_10_t_-5315293074163858873", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_11_t.open("results/_dynamic_array_statemonitor_11_t_-7605468471842519951", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_12_t.open("results/_dynamic_array_statemonitor_12_t_6696901463713081349", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_13_t;
	outfile__dynamic_array_statemonitor_13_t.open("results/_dynamic_array_statemonitor_13_t_5745681390922849429", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_1_t;
	outfile__dynamic_array_statemonitor_1_t.open("results/_dynamic_array_statemonitor_1_t_-8802693919743730405", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_2_t.open("results/_dynamic_array_statemonitor_2_t_4173003091620005513", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_3_t.open("results/_dynamic_array_statemonitor_3_t_6719448661748410993", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_4_t.open("results/_dynamic_array_statemonitor_4_t_7854899431389469652", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_5_t.open("results/_dynamic_array_statemonitor_5_t_-7089722322543537583", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_6_t.open("results/_dynamic_array_statemonitor_6_t_-3326633168495906292", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_7_t.open("results/_dynamic_array_statemonitor_7_t_990226638669057680", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_8_t.open("results/_dynamic_array_statemonitor_8_t_8115188715159505472", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_9_t.open("results/_dynamic_array_statemonitor_9_t_-5966315130554876884", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_t.open("results/_dynamic_array_statemonitor_t_-9088141762307926170", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_10_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_10_I_syn_gaba_b_6542121126831881813", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_11_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_11_I_syn_gaba_b_6067580636255303245", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_12_I_syn_ampa.open("results/_dynamic_array_statemonitor_12_I_syn_ampa_2743410726028856631", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_13_Imem;
	outfile__dynamic_array_statemonitor_13_Imem.open("results/_dynamic_array_statemonitor_13_Imem_4023798759419939133", ios::binary | ios::out);
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
	ofstream outfile__dynamic_array_statemonitor_1_Imem;
	outfile__dynamic_array_statemonitor_1_Imem.open("results/_dynamic_array_statemonitor_1_Imem_2195799793708726193", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_2_Imem.open("results/_dynamic_array_statemonitor_2_Imem_-4563036837346237629", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_3_I_syn_nmda.open("results/_dynamic_array_statemonitor_3_I_syn_nmda_-4687811664674237402", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_4_I_syn_nmda.open("results/_dynamic_array_statemonitor_4_I_syn_nmda_-6673593774964046154", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_5_I_syn_nmda.open("results/_dynamic_array_statemonitor_5_I_syn_nmda_-5454551481481096695", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_6_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_6_I_syn_gaba_b_-4916000502346982593", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_7_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_7_I_syn_gaba_b_1471037711278240167", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_8_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_8_I_syn_gaba_b_-302329582157101566", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_9_I_syn_gaba_b.open("results/_dynamic_array_statemonitor_9_I_syn_gaba_b_2274751430515987546", ios::binary | ios::out);
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
	outfile__dynamic_array_statemonitor_Imem.open("results/_dynamic_array_statemonitor_Imem_3321391875635288614", ios::binary | ios::out);
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

