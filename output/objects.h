
#ifndef _BRIAN_OBJECTS_H
#define _BRIAN_OBJECTS_H

#include "synapses_classes.h"
#include "brianlib/clocks.h"
#include "brianlib/dynamic_array.h"
#include "brianlib/stdint_compat.h"
#include "network.h"
#include "randomkit.h"
#include<vector>


namespace brian {

// In OpenMP we need one state per thread
extern std::vector< rk_state* > _mersenne_twister_states;

//////////////// clocks ///////////////////
extern Clock defaultclock;

//////////////// networks /////////////////
extern Network network_1;

//////////////// dynamic arrays ///////////
extern std::vector<int32_t> _dynamic_array_AMPA0__synaptic_post;
extern std::vector<int32_t> _dynamic_array_AMPA0__synaptic_pre;
extern std::vector<double> _dynamic_array_AMPA0_delay;
extern std::vector<double> _dynamic_array_AMPA0_delay_1;
extern std::vector<int32_t> _dynamic_array_AMPA0_N_incoming;
extern std::vector<int32_t> _dynamic_array_AMPA0_N_outgoing;
extern std::vector<double> _dynamic_array_AMPA0_weight;
extern std::vector<int32_t> _dynamic_array_GABA_B4__synaptic_post;
extern std::vector<int32_t> _dynamic_array_GABA_B4__synaptic_pre;
extern std::vector<double> _dynamic_array_GABA_B4_delay;
extern std::vector<double> _dynamic_array_GABA_B4_delay_1;
extern std::vector<int32_t> _dynamic_array_GABA_B4_N_incoming;
extern std::vector<int32_t> _dynamic_array_GABA_B4_N_outgoing;
extern std::vector<double> _dynamic_array_GABA_B4_weight;
extern std::vector<int32_t> _dynamic_array_GABA_B5__synaptic_post;
extern std::vector<int32_t> _dynamic_array_GABA_B5__synaptic_pre;
extern std::vector<double> _dynamic_array_GABA_B5_delay;
extern std::vector<double> _dynamic_array_GABA_B5_delay_1;
extern std::vector<int32_t> _dynamic_array_GABA_B5_N_incoming;
extern std::vector<int32_t> _dynamic_array_GABA_B5_N_outgoing;
extern std::vector<double> _dynamic_array_GABA_B5_weight;
extern std::vector<int32_t> _dynamic_array_GABA_B6__synaptic_post;
extern std::vector<int32_t> _dynamic_array_GABA_B6__synaptic_pre;
extern std::vector<double> _dynamic_array_GABA_B6_delay;
extern std::vector<double> _dynamic_array_GABA_B6_delay_1;
extern std::vector<int32_t> _dynamic_array_GABA_B6_N_incoming;
extern std::vector<int32_t> _dynamic_array_GABA_B6_N_outgoing;
extern std::vector<double> _dynamic_array_GABA_B6_weight;
extern std::vector<int32_t> _dynamic_array_GABA_B7__synaptic_post;
extern std::vector<int32_t> _dynamic_array_GABA_B7__synaptic_pre;
extern std::vector<double> _dynamic_array_GABA_B7_delay;
extern std::vector<double> _dynamic_array_GABA_B7_delay_1;
extern std::vector<int32_t> _dynamic_array_GABA_B7_N_incoming;
extern std::vector<int32_t> _dynamic_array_GABA_B7_N_outgoing;
extern std::vector<double> _dynamic_array_GABA_B7_weight;
extern std::vector<int32_t> _dynamic_array_GABA_B8__synaptic_post;
extern std::vector<int32_t> _dynamic_array_GABA_B8__synaptic_pre;
extern std::vector<double> _dynamic_array_GABA_B8_delay;
extern std::vector<double> _dynamic_array_GABA_B8_delay_1;
extern std::vector<int32_t> _dynamic_array_GABA_B8_N_incoming;
extern std::vector<int32_t> _dynamic_array_GABA_B8_N_outgoing;
extern std::vector<double> _dynamic_array_GABA_B8_weight;
extern std::vector<int32_t> _dynamic_array_GABA_B9__synaptic_post;
extern std::vector<int32_t> _dynamic_array_GABA_B9__synaptic_pre;
extern std::vector<double> _dynamic_array_GABA_B9_delay;
extern std::vector<double> _dynamic_array_GABA_B9_delay_1;
extern std::vector<int32_t> _dynamic_array_GABA_B9_N_incoming;
extern std::vector<int32_t> _dynamic_array_GABA_B9_N_outgoing;
extern std::vector<double> _dynamic_array_GABA_B9_weight;
extern std::vector<int32_t> _dynamic_array_inh_neuron_output_i;
extern std::vector<double> _dynamic_array_inh_neuron_output_t;
extern std::vector<int32_t> _dynamic_array_InpSpikeGenerator__timebins;
extern std::vector<int32_t> _dynamic_array_InpSpikeGenerator_neuron_index;
extern std::vector<int32_t> _dynamic_array_InpSpikeGenerator_spike_number;
extern std::vector<double> _dynamic_array_InpSpikeGenerator_spike_time;
extern std::vector<int32_t> _dynamic_array_mon_neuron_input_i;
extern std::vector<double> _dynamic_array_mon_neuron_input_t;
extern std::vector<int32_t> _dynamic_array_NMDA1__synaptic_post;
extern std::vector<int32_t> _dynamic_array_NMDA1__synaptic_pre;
extern std::vector<double> _dynamic_array_NMDA1_delay;
extern std::vector<double> _dynamic_array_NMDA1_delay_1;
extern std::vector<int32_t> _dynamic_array_NMDA1_N_incoming;
extern std::vector<int32_t> _dynamic_array_NMDA1_N_outgoing;
extern std::vector<double> _dynamic_array_NMDA1_weight;
extern std::vector<int32_t> _dynamic_array_NMDA2__synaptic_post;
extern std::vector<int32_t> _dynamic_array_NMDA2__synaptic_pre;
extern std::vector<double> _dynamic_array_NMDA2_delay;
extern std::vector<double> _dynamic_array_NMDA2_delay_1;
extern std::vector<int32_t> _dynamic_array_NMDA2_N_incoming;
extern std::vector<int32_t> _dynamic_array_NMDA2_N_outgoing;
extern std::vector<double> _dynamic_array_NMDA2_weight;
extern std::vector<int32_t> _dynamic_array_NMDA3__synaptic_post;
extern std::vector<int32_t> _dynamic_array_NMDA3__synaptic_pre;
extern std::vector<double> _dynamic_array_NMDA3_delay;
extern std::vector<double> _dynamic_array_NMDA3_delay_1;
extern std::vector<int32_t> _dynamic_array_NMDA3_N_incoming;
extern std::vector<int32_t> _dynamic_array_NMDA3_N_outgoing;
extern std::vector<double> _dynamic_array_NMDA3_weight;
extern std::vector<int32_t> _dynamic_array_spikemonitor_1_i;
extern std::vector<double> _dynamic_array_spikemonitor_1_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_2_i;
extern std::vector<double> _dynamic_array_spikemonitor_2_t;
extern std::vector<int32_t> _dynamic_array_spikemonitor_i;
extern std::vector<double> _dynamic_array_spikemonitor_t;
extern std::vector<double> _dynamic_array_statemonitor_10_t;
extern std::vector<double> _dynamic_array_statemonitor_11_t;
extern std::vector<double> _dynamic_array_statemonitor_12_t;
extern std::vector<double> _dynamic_array_statemonitor_14_t;
extern std::vector<double> _dynamic_array_statemonitor_1_t;
extern std::vector<double> _dynamic_array_statemonitor_2_t;
extern std::vector<double> _dynamic_array_statemonitor_3_t;
extern std::vector<double> _dynamic_array_statemonitor_4_t;
extern std::vector<double> _dynamic_array_statemonitor_5_t;
extern std::vector<double> _dynamic_array_statemonitor_6_t;
extern std::vector<double> _dynamic_array_statemonitor_7_t;
extern std::vector<double> _dynamic_array_statemonitor_8_t;
extern std::vector<double> _dynamic_array_statemonitor_9_t;
extern std::vector<double> _dynamic_array_statemonitor_t;

//////////////// arrays ///////////////////
extern int32_t *_array_AMPA0_N;
extern const int _num__array_AMPA0_N;
extern int32_t *_array_Core_0__spikespace;
extern const int _num__array_Core_0__spikespace;
extern double *_array_Core_0_C_syn_ampa;
extern const int _num__array_Core_0_C_syn_ampa;
extern double *_array_Core_0_C_syn_gaba_a;
extern const int _num__array_Core_0_C_syn_gaba_a;
extern double *_array_Core_0_C_syn_gaba_b;
extern const int _num__array_Core_0_C_syn_gaba_b;
extern double *_array_Core_0_C_syn_nmda;
extern const int _num__array_Core_0_C_syn_nmda;
extern double *_array_Core_0_Cahp;
extern const int _num__array_Core_0_Cahp;
extern double *_array_Core_0_Cmem;
extern const int _num__array_Core_0_Cmem;
extern int32_t *_array_Core_0_i;
extern const int _num__array_Core_0_i;
extern double *_array_Core_0_I_g_syn_ampa;
extern const int _num__array_Core_0_I_g_syn_ampa;
extern double *_array_Core_0_I_g_syn_gaba_a;
extern const int _num__array_Core_0_I_g_syn_gaba_a;
extern double *_array_Core_0_I_g_syn_gaba_b;
extern const int _num__array_Core_0_I_g_syn_gaba_b;
extern double *_array_Core_0_I_g_syn_nmda;
extern const int _num__array_Core_0_I_g_syn_nmda;
extern double *_array_Core_0_I_syn_ampa;
extern const int _num__array_Core_0_I_syn_ampa;
extern double *_array_Core_0_I_syn_gaba_a;
extern const int _num__array_Core_0_I_syn_gaba_a;
extern double *_array_Core_0_I_syn_gaba_b;
extern const int _num__array_Core_0_I_syn_gaba_b;
extern double *_array_Core_0_I_syn_nmda;
extern const int _num__array_Core_0_I_syn_nmda;
extern double *_array_Core_0_I_tau_syn_ampa;
extern const int _num__array_Core_0_I_tau_syn_ampa;
extern double *_array_Core_0_I_tau_syn_gaba_a;
extern const int _num__array_Core_0_I_tau_syn_gaba_a;
extern double *_array_Core_0_I_tau_syn_gaba_b;
extern const int _num__array_Core_0_I_tau_syn_gaba_b;
extern double *_array_Core_0_I_tau_syn_nmda;
extern const int _num__array_Core_0_I_tau_syn_nmda;
extern double *_array_Core_0_I_wo_syn_ampa;
extern const int _num__array_Core_0_I_wo_syn_ampa;
extern double *_array_Core_0_I_wo_syn_gaba_a;
extern const int _num__array_Core_0_I_wo_syn_gaba_a;
extern double *_array_Core_0_I_wo_syn_gaba_b;
extern const int _num__array_Core_0_I_wo_syn_gaba_b;
extern double *_array_Core_0_I_wo_syn_nmda;
extern const int _num__array_Core_0_I_wo_syn_nmda;
extern double *_array_Core_0_Iagain;
extern const int _num__array_Core_0_Iagain;
extern double *_array_Core_0_Iahp;
extern const int _num__array_Core_0_Iahp;
extern double *_array_Core_0_Ianorm;
extern const int _num__array_Core_0_Ianorm;
extern double *_array_Core_0_Iath;
extern const int _num__array_Core_0_Iath;
extern double *_array_Core_0_Ica;
extern const int _num__array_Core_0_Ica;
extern double *_array_Core_0_Iconst;
extern const int _num__array_Core_0_Iconst;
extern double *_array_Core_0_Imem;
extern const int _num__array_Core_0_Imem;
extern double *_array_Core_0_Io;
extern const int _num__array_Core_0_Io;
extern double *_array_Core_0_Ireset;
extern const int _num__array_Core_0_Ireset;
extern double *_array_Core_0_Ishunt;
extern const int _num__array_Core_0_Ishunt;
extern double *_array_Core_0_Ispkthr;
extern const int _num__array_Core_0_Ispkthr;
extern double *_array_Core_0_Itau;
extern const int _num__array_Core_0_Itau;
extern double *_array_Core_0_Itauahp;
extern const int _num__array_Core_0_Itauahp;
extern double *_array_Core_0_Ith;
extern const int _num__array_Core_0_Ith;
extern double *_array_Core_0_Ithahp;
extern const int _num__array_Core_0_Ithahp;
extern double *_array_Core_0_kn;
extern const int _num__array_Core_0_kn;
extern double *_array_Core_0_kp;
extern const int _num__array_Core_0_kp;
extern double *_array_Core_0_lastspike;
extern const int _num__array_Core_0_lastspike;
extern char *_array_Core_0_not_refractory;
extern const int _num__array_Core_0_not_refractory;
extern double *_array_Core_0_refP;
extern const int _num__array_Core_0_refP;
extern double *_array_Core_0_tauca;
extern const int _num__array_Core_0_tauca;
extern double *_array_Core_0_Ut;
extern const int _num__array_Core_0_Ut;
extern int32_t *_array_Core_1__spikespace;
extern const int _num__array_Core_1__spikespace;
extern double *_array_Core_1_C_syn_ampa;
extern const int _num__array_Core_1_C_syn_ampa;
extern double *_array_Core_1_C_syn_gaba_a;
extern const int _num__array_Core_1_C_syn_gaba_a;
extern double *_array_Core_1_C_syn_gaba_b;
extern const int _num__array_Core_1_C_syn_gaba_b;
extern double *_array_Core_1_C_syn_nmda;
extern const int _num__array_Core_1_C_syn_nmda;
extern double *_array_Core_1_Cahp;
extern const int _num__array_Core_1_Cahp;
extern double *_array_Core_1_Cmem;
extern const int _num__array_Core_1_Cmem;
extern int32_t *_array_Core_1_i;
extern const int _num__array_Core_1_i;
extern double *_array_Core_1_I_g_syn_ampa;
extern const int _num__array_Core_1_I_g_syn_ampa;
extern double *_array_Core_1_I_g_syn_gaba_a;
extern const int _num__array_Core_1_I_g_syn_gaba_a;
extern double *_array_Core_1_I_g_syn_gaba_b;
extern const int _num__array_Core_1_I_g_syn_gaba_b;
extern double *_array_Core_1_I_g_syn_nmda;
extern const int _num__array_Core_1_I_g_syn_nmda;
extern double *_array_Core_1_I_syn_ampa;
extern const int _num__array_Core_1_I_syn_ampa;
extern double *_array_Core_1_I_syn_gaba_a;
extern const int _num__array_Core_1_I_syn_gaba_a;
extern double *_array_Core_1_I_syn_gaba_b;
extern const int _num__array_Core_1_I_syn_gaba_b;
extern double *_array_Core_1_I_syn_nmda;
extern const int _num__array_Core_1_I_syn_nmda;
extern double *_array_Core_1_I_tau_syn_ampa;
extern const int _num__array_Core_1_I_tau_syn_ampa;
extern double *_array_Core_1_I_tau_syn_gaba_a;
extern const int _num__array_Core_1_I_tau_syn_gaba_a;
extern double *_array_Core_1_I_tau_syn_gaba_b;
extern const int _num__array_Core_1_I_tau_syn_gaba_b;
extern double *_array_Core_1_I_tau_syn_nmda;
extern const int _num__array_Core_1_I_tau_syn_nmda;
extern double *_array_Core_1_I_wo_syn_ampa;
extern const int _num__array_Core_1_I_wo_syn_ampa;
extern double *_array_Core_1_I_wo_syn_gaba_a;
extern const int _num__array_Core_1_I_wo_syn_gaba_a;
extern double *_array_Core_1_I_wo_syn_gaba_b;
extern const int _num__array_Core_1_I_wo_syn_gaba_b;
extern double *_array_Core_1_I_wo_syn_nmda;
extern const int _num__array_Core_1_I_wo_syn_nmda;
extern double *_array_Core_1_Iagain;
extern const int _num__array_Core_1_Iagain;
extern double *_array_Core_1_Iahp;
extern const int _num__array_Core_1_Iahp;
extern double *_array_Core_1_Ianorm;
extern const int _num__array_Core_1_Ianorm;
extern double *_array_Core_1_Iath;
extern const int _num__array_Core_1_Iath;
extern double *_array_Core_1_Ica;
extern const int _num__array_Core_1_Ica;
extern double *_array_Core_1_Iconst;
extern const int _num__array_Core_1_Iconst;
extern double *_array_Core_1_Imem;
extern const int _num__array_Core_1_Imem;
extern double *_array_Core_1_Io;
extern const int _num__array_Core_1_Io;
extern double *_array_Core_1_Ireset;
extern const int _num__array_Core_1_Ireset;
extern double *_array_Core_1_Ishunt;
extern const int _num__array_Core_1_Ishunt;
extern double *_array_Core_1_Ispkthr;
extern const int _num__array_Core_1_Ispkthr;
extern double *_array_Core_1_Itau;
extern const int _num__array_Core_1_Itau;
extern double *_array_Core_1_Itauahp;
extern const int _num__array_Core_1_Itauahp;
extern double *_array_Core_1_Ith;
extern const int _num__array_Core_1_Ith;
extern double *_array_Core_1_Ithahp;
extern const int _num__array_Core_1_Ithahp;
extern double *_array_Core_1_kn;
extern const int _num__array_Core_1_kn;
extern double *_array_Core_1_kp;
extern const int _num__array_Core_1_kp;
extern double *_array_Core_1_lastspike;
extern const int _num__array_Core_1_lastspike;
extern char *_array_Core_1_not_refractory;
extern const int _num__array_Core_1_not_refractory;
extern double *_array_Core_1_refP;
extern const int _num__array_Core_1_refP;
extern int32_t *_array_Core_1_subgroup_4__sub_idx;
extern const int _num__array_Core_1_subgroup_4__sub_idx;
extern int32_t *_array_Core_1_subgroup_5__sub_idx;
extern const int _num__array_Core_1_subgroup_5__sub_idx;
extern int32_t *_array_Core_1_subgroup_6__sub_idx;
extern const int _num__array_Core_1_subgroup_6__sub_idx;
extern int32_t *_array_Core_1_subgroup_7__sub_idx;
extern const int _num__array_Core_1_subgroup_7__sub_idx;
extern double *_array_Core_1_tauca;
extern const int _num__array_Core_1_tauca;
extern double *_array_Core_1_Ut;
extern const int _num__array_Core_1_Ut;
extern int32_t *_array_Core_2__spikespace;
extern const int _num__array_Core_2__spikespace;
extern double *_array_Core_2_C_syn_ampa;
extern const int _num__array_Core_2_C_syn_ampa;
extern double *_array_Core_2_C_syn_gaba_a;
extern const int _num__array_Core_2_C_syn_gaba_a;
extern double *_array_Core_2_C_syn_gaba_b;
extern const int _num__array_Core_2_C_syn_gaba_b;
extern double *_array_Core_2_C_syn_nmda;
extern const int _num__array_Core_2_C_syn_nmda;
extern double *_array_Core_2_Cahp;
extern const int _num__array_Core_2_Cahp;
extern double *_array_Core_2_Cmem;
extern const int _num__array_Core_2_Cmem;
extern int32_t *_array_Core_2_i;
extern const int _num__array_Core_2_i;
extern double *_array_Core_2_I_g_syn_ampa;
extern const int _num__array_Core_2_I_g_syn_ampa;
extern double *_array_Core_2_I_g_syn_gaba_a;
extern const int _num__array_Core_2_I_g_syn_gaba_a;
extern double *_array_Core_2_I_g_syn_gaba_b;
extern const int _num__array_Core_2_I_g_syn_gaba_b;
extern double *_array_Core_2_I_g_syn_nmda;
extern const int _num__array_Core_2_I_g_syn_nmda;
extern double *_array_Core_2_I_syn_ampa;
extern const int _num__array_Core_2_I_syn_ampa;
extern double *_array_Core_2_I_syn_gaba_a;
extern const int _num__array_Core_2_I_syn_gaba_a;
extern double *_array_Core_2_I_syn_gaba_b;
extern const int _num__array_Core_2_I_syn_gaba_b;
extern double *_array_Core_2_I_syn_nmda;
extern const int _num__array_Core_2_I_syn_nmda;
extern double *_array_Core_2_I_tau_syn_ampa;
extern const int _num__array_Core_2_I_tau_syn_ampa;
extern double *_array_Core_2_I_tau_syn_gaba_a;
extern const int _num__array_Core_2_I_tau_syn_gaba_a;
extern double *_array_Core_2_I_tau_syn_gaba_b;
extern const int _num__array_Core_2_I_tau_syn_gaba_b;
extern double *_array_Core_2_I_tau_syn_nmda;
extern const int _num__array_Core_2_I_tau_syn_nmda;
extern double *_array_Core_2_I_wo_syn_ampa;
extern const int _num__array_Core_2_I_wo_syn_ampa;
extern double *_array_Core_2_I_wo_syn_gaba_a;
extern const int _num__array_Core_2_I_wo_syn_gaba_a;
extern double *_array_Core_2_I_wo_syn_gaba_b;
extern const int _num__array_Core_2_I_wo_syn_gaba_b;
extern double *_array_Core_2_I_wo_syn_nmda;
extern const int _num__array_Core_2_I_wo_syn_nmda;
extern double *_array_Core_2_Iagain;
extern const int _num__array_Core_2_Iagain;
extern double *_array_Core_2_Iahp;
extern const int _num__array_Core_2_Iahp;
extern double *_array_Core_2_Ianorm;
extern const int _num__array_Core_2_Ianorm;
extern double *_array_Core_2_Iath;
extern const int _num__array_Core_2_Iath;
extern double *_array_Core_2_Ica;
extern const int _num__array_Core_2_Ica;
extern double *_array_Core_2_Iconst;
extern const int _num__array_Core_2_Iconst;
extern double *_array_Core_2_Imem;
extern const int _num__array_Core_2_Imem;
extern double *_array_Core_2_Io;
extern const int _num__array_Core_2_Io;
extern double *_array_Core_2_Ireset;
extern const int _num__array_Core_2_Ireset;
extern double *_array_Core_2_Ishunt;
extern const int _num__array_Core_2_Ishunt;
extern double *_array_Core_2_Ispkthr;
extern const int _num__array_Core_2_Ispkthr;
extern double *_array_Core_2_Itau;
extern const int _num__array_Core_2_Itau;
extern double *_array_Core_2_Itauahp;
extern const int _num__array_Core_2_Itauahp;
extern double *_array_Core_2_Ith;
extern const int _num__array_Core_2_Ith;
extern double *_array_Core_2_Ithahp;
extern const int _num__array_Core_2_Ithahp;
extern double *_array_Core_2_kn;
extern const int _num__array_Core_2_kn;
extern double *_array_Core_2_kp;
extern const int _num__array_Core_2_kp;
extern double *_array_Core_2_lastspike;
extern const int _num__array_Core_2_lastspike;
extern char *_array_Core_2_not_refractory;
extern const int _num__array_Core_2_not_refractory;
extern double *_array_Core_2_refP;
extern const int _num__array_Core_2_refP;
extern double *_array_Core_2_tauca;
extern const int _num__array_Core_2_tauca;
extern double *_array_Core_2_Ut;
extern const int _num__array_Core_2_Ut;
extern int32_t *_array_Core_3__spikespace;
extern const int _num__array_Core_3__spikespace;
extern double *_array_Core_3_C_syn_ampa;
extern const int _num__array_Core_3_C_syn_ampa;
extern double *_array_Core_3_C_syn_gaba_a;
extern const int _num__array_Core_3_C_syn_gaba_a;
extern double *_array_Core_3_C_syn_gaba_b;
extern const int _num__array_Core_3_C_syn_gaba_b;
extern double *_array_Core_3_C_syn_nmda;
extern const int _num__array_Core_3_C_syn_nmda;
extern double *_array_Core_3_Cahp;
extern const int _num__array_Core_3_Cahp;
extern double *_array_Core_3_Cmem;
extern const int _num__array_Core_3_Cmem;
extern int32_t *_array_Core_3_i;
extern const int _num__array_Core_3_i;
extern double *_array_Core_3_I_g_syn_ampa;
extern const int _num__array_Core_3_I_g_syn_ampa;
extern double *_array_Core_3_I_g_syn_gaba_a;
extern const int _num__array_Core_3_I_g_syn_gaba_a;
extern double *_array_Core_3_I_g_syn_gaba_b;
extern const int _num__array_Core_3_I_g_syn_gaba_b;
extern double *_array_Core_3_I_g_syn_nmda;
extern const int _num__array_Core_3_I_g_syn_nmda;
extern double *_array_Core_3_I_syn_ampa;
extern const int _num__array_Core_3_I_syn_ampa;
extern double *_array_Core_3_I_syn_gaba_a;
extern const int _num__array_Core_3_I_syn_gaba_a;
extern double *_array_Core_3_I_syn_gaba_b;
extern const int _num__array_Core_3_I_syn_gaba_b;
extern double *_array_Core_3_I_syn_nmda;
extern const int _num__array_Core_3_I_syn_nmda;
extern double *_array_Core_3_I_tau_syn_ampa;
extern const int _num__array_Core_3_I_tau_syn_ampa;
extern double *_array_Core_3_I_tau_syn_gaba_a;
extern const int _num__array_Core_3_I_tau_syn_gaba_a;
extern double *_array_Core_3_I_tau_syn_gaba_b;
extern const int _num__array_Core_3_I_tau_syn_gaba_b;
extern double *_array_Core_3_I_tau_syn_nmda;
extern const int _num__array_Core_3_I_tau_syn_nmda;
extern double *_array_Core_3_I_wo_syn_ampa;
extern const int _num__array_Core_3_I_wo_syn_ampa;
extern double *_array_Core_3_I_wo_syn_gaba_a;
extern const int _num__array_Core_3_I_wo_syn_gaba_a;
extern double *_array_Core_3_I_wo_syn_gaba_b;
extern const int _num__array_Core_3_I_wo_syn_gaba_b;
extern double *_array_Core_3_I_wo_syn_nmda;
extern const int _num__array_Core_3_I_wo_syn_nmda;
extern double *_array_Core_3_Iagain;
extern const int _num__array_Core_3_Iagain;
extern double *_array_Core_3_Iahp;
extern const int _num__array_Core_3_Iahp;
extern double *_array_Core_3_Ianorm;
extern const int _num__array_Core_3_Ianorm;
extern double *_array_Core_3_Iath;
extern const int _num__array_Core_3_Iath;
extern double *_array_Core_3_Ica;
extern const int _num__array_Core_3_Ica;
extern double *_array_Core_3_Iconst;
extern const int _num__array_Core_3_Iconst;
extern double *_array_Core_3_Imem;
extern const int _num__array_Core_3_Imem;
extern double *_array_Core_3_Io;
extern const int _num__array_Core_3_Io;
extern double *_array_Core_3_Ireset;
extern const int _num__array_Core_3_Ireset;
extern double *_array_Core_3_Ishunt;
extern const int _num__array_Core_3_Ishunt;
extern double *_array_Core_3_Ispkthr;
extern const int _num__array_Core_3_Ispkthr;
extern double *_array_Core_3_Itau;
extern const int _num__array_Core_3_Itau;
extern double *_array_Core_3_Itauahp;
extern const int _num__array_Core_3_Itauahp;
extern double *_array_Core_3_Ith;
extern const int _num__array_Core_3_Ith;
extern double *_array_Core_3_Ithahp;
extern const int _num__array_Core_3_Ithahp;
extern double *_array_Core_3_kn;
extern const int _num__array_Core_3_kn;
extern double *_array_Core_3_kp;
extern const int _num__array_Core_3_kp;
extern double *_array_Core_3_lastspike;
extern const int _num__array_Core_3_lastspike;
extern char *_array_Core_3_not_refractory;
extern const int _num__array_Core_3_not_refractory;
extern double *_array_Core_3_refP;
extern const int _num__array_Core_3_refP;
extern double *_array_Core_3_tauca;
extern const int _num__array_Core_3_tauca;
extern double *_array_Core_3_Ut;
extern const int _num__array_Core_3_Ut;
extern double *_array_defaultclock_dt;
extern const int _num__array_defaultclock_dt;
extern double *_array_defaultclock_t;
extern const int _num__array_defaultclock_t;
extern int64_t *_array_defaultclock_timestep;
extern const int _num__array_defaultclock_timestep;
extern int32_t *_array_GABA_B4_N;
extern const int _num__array_GABA_B4_N;
extern int32_t *_array_GABA_B5_N;
extern const int _num__array_GABA_B5_N;
extern int32_t *_array_GABA_B6_N;
extern const int _num__array_GABA_B6_N;
extern int32_t *_array_GABA_B7_N;
extern const int _num__array_GABA_B7_N;
extern int32_t *_array_GABA_B8_N;
extern const int _num__array_GABA_B8_N;
extern int32_t *_array_GABA_B9_N;
extern const int _num__array_GABA_B9_N;
extern int32_t *_array_inh_neuron_output__source_idx;
extern const int _num__array_inh_neuron_output__source_idx;
extern int32_t *_array_inh_neuron_output_count;
extern const int _num__array_inh_neuron_output_count;
extern int32_t *_array_inh_neuron_output_N;
extern const int _num__array_inh_neuron_output_N;
extern int32_t *_array_InpSpikeGenerator__lastindex;
extern const int _num__array_InpSpikeGenerator__lastindex;
extern int32_t *_array_InpSpikeGenerator__period_bins;
extern const int _num__array_InpSpikeGenerator__period_bins;
extern int32_t *_array_InpSpikeGenerator__spikespace;
extern const int _num__array_InpSpikeGenerator__spikespace;
extern int32_t *_array_InpSpikeGenerator_i;
extern const int _num__array_InpSpikeGenerator_i;
extern double *_array_InpSpikeGenerator_period;
extern const int _num__array_InpSpikeGenerator_period;
extern int32_t *_array_mon_neuron_input__source_idx;
extern const int _num__array_mon_neuron_input__source_idx;
extern int32_t *_array_mon_neuron_input_count;
extern const int _num__array_mon_neuron_input_count;
extern int32_t *_array_mon_neuron_input_N;
extern const int _num__array_mon_neuron_input_N;
extern int32_t *_array_NMDA1_N;
extern const int _num__array_NMDA1_N;
extern int32_t *_array_NMDA2_N;
extern const int _num__array_NMDA2_N;
extern int32_t *_array_NMDA3_N;
extern const int _num__array_NMDA3_N;
extern int32_t *_array_spikemonitor_1__source_idx;
extern const int _num__array_spikemonitor_1__source_idx;
extern int32_t *_array_spikemonitor_1_count;
extern const int _num__array_spikemonitor_1_count;
extern int32_t *_array_spikemonitor_1_N;
extern const int _num__array_spikemonitor_1_N;
extern int32_t *_array_spikemonitor_2__source_idx;
extern const int _num__array_spikemonitor_2__source_idx;
extern int32_t *_array_spikemonitor_2_count;
extern const int _num__array_spikemonitor_2_count;
extern int32_t *_array_spikemonitor_2_N;
extern const int _num__array_spikemonitor_2_N;
extern int32_t *_array_spikemonitor__source_idx;
extern const int _num__array_spikemonitor__source_idx;
extern int32_t *_array_spikemonitor_count;
extern const int _num__array_spikemonitor_count;
extern int32_t *_array_spikemonitor_N;
extern const int _num__array_spikemonitor_N;
extern int32_t *_array_statemonitor_10__indices;
extern const int _num__array_statemonitor_10__indices;
extern double *_array_statemonitor_10_I_syn_gaba_b;
extern const int _num__array_statemonitor_10_I_syn_gaba_b;
extern int32_t *_array_statemonitor_10_N;
extern const int _num__array_statemonitor_10_N;
extern int32_t *_array_statemonitor_11__indices;
extern const int _num__array_statemonitor_11__indices;
extern double *_array_statemonitor_11_I_syn_gaba_b;
extern const int _num__array_statemonitor_11_I_syn_gaba_b;
extern int32_t *_array_statemonitor_11_N;
extern const int _num__array_statemonitor_11_N;
extern int32_t *_array_statemonitor_12__indices;
extern const int _num__array_statemonitor_12__indices;
extern double *_array_statemonitor_12_I_syn_ampa;
extern const int _num__array_statemonitor_12_I_syn_ampa;
extern int32_t *_array_statemonitor_12_N;
extern const int _num__array_statemonitor_12_N;
extern int32_t *_array_statemonitor_14__indices;
extern const int _num__array_statemonitor_14__indices;
extern double *_array_statemonitor_14_Imem;
extern const int _num__array_statemonitor_14_Imem;
extern int32_t *_array_statemonitor_14_N;
extern const int _num__array_statemonitor_14_N;
extern int32_t *_array_statemonitor_1__indices;
extern const int _num__array_statemonitor_1__indices;
extern double *_array_statemonitor_1_Imem;
extern const int _num__array_statemonitor_1_Imem;
extern int32_t *_array_statemonitor_1_N;
extern const int _num__array_statemonitor_1_N;
extern int32_t *_array_statemonitor_2__indices;
extern const int _num__array_statemonitor_2__indices;
extern double *_array_statemonitor_2_Imem;
extern const int _num__array_statemonitor_2_Imem;
extern int32_t *_array_statemonitor_2_N;
extern const int _num__array_statemonitor_2_N;
extern int32_t *_array_statemonitor_3__indices;
extern const int _num__array_statemonitor_3__indices;
extern double *_array_statemonitor_3_I_syn_nmda;
extern const int _num__array_statemonitor_3_I_syn_nmda;
extern int32_t *_array_statemonitor_3_N;
extern const int _num__array_statemonitor_3_N;
extern int32_t *_array_statemonitor_4__indices;
extern const int _num__array_statemonitor_4__indices;
extern double *_array_statemonitor_4_I_syn_nmda;
extern const int _num__array_statemonitor_4_I_syn_nmda;
extern int32_t *_array_statemonitor_4_N;
extern const int _num__array_statemonitor_4_N;
extern int32_t *_array_statemonitor_5__indices;
extern const int _num__array_statemonitor_5__indices;
extern double *_array_statemonitor_5_I_syn_nmda;
extern const int _num__array_statemonitor_5_I_syn_nmda;
extern int32_t *_array_statemonitor_5_N;
extern const int _num__array_statemonitor_5_N;
extern int32_t *_array_statemonitor_6__indices;
extern const int _num__array_statemonitor_6__indices;
extern double *_array_statemonitor_6_I_syn_gaba_b;
extern const int _num__array_statemonitor_6_I_syn_gaba_b;
extern int32_t *_array_statemonitor_6_N;
extern const int _num__array_statemonitor_6_N;
extern int32_t *_array_statemonitor_7__indices;
extern const int _num__array_statemonitor_7__indices;
extern double *_array_statemonitor_7_I_syn_gaba_b;
extern const int _num__array_statemonitor_7_I_syn_gaba_b;
extern int32_t *_array_statemonitor_7_N;
extern const int _num__array_statemonitor_7_N;
extern int32_t *_array_statemonitor_8__indices;
extern const int _num__array_statemonitor_8__indices;
extern double *_array_statemonitor_8_I_syn_gaba_b;
extern const int _num__array_statemonitor_8_I_syn_gaba_b;
extern int32_t *_array_statemonitor_8_N;
extern const int _num__array_statemonitor_8_N;
extern int32_t *_array_statemonitor_9__indices;
extern const int _num__array_statemonitor_9__indices;
extern double *_array_statemonitor_9_I_syn_gaba_b;
extern const int _num__array_statemonitor_9_I_syn_gaba_b;
extern int32_t *_array_statemonitor_9_N;
extern const int _num__array_statemonitor_9_N;
extern int32_t *_array_statemonitor__indices;
extern const int _num__array_statemonitor__indices;
extern double *_array_statemonitor_Imem;
extern const int _num__array_statemonitor_Imem;
extern int32_t *_array_statemonitor_N;
extern const int _num__array_statemonitor_N;

//////////////// dynamic arrays 2d /////////
extern DynamicArray2D<double> _dynamic_array_statemonitor_10_I_syn_gaba_b;
extern DynamicArray2D<double> _dynamic_array_statemonitor_11_I_syn_gaba_b;
extern DynamicArray2D<double> _dynamic_array_statemonitor_12_I_syn_ampa;
extern DynamicArray2D<double> _dynamic_array_statemonitor_14_Imem;
extern DynamicArray2D<double> _dynamic_array_statemonitor_1_Imem;
extern DynamicArray2D<double> _dynamic_array_statemonitor_2_Imem;
extern DynamicArray2D<double> _dynamic_array_statemonitor_3_I_syn_nmda;
extern DynamicArray2D<double> _dynamic_array_statemonitor_4_I_syn_nmda;
extern DynamicArray2D<double> _dynamic_array_statemonitor_5_I_syn_nmda;
extern DynamicArray2D<double> _dynamic_array_statemonitor_6_I_syn_gaba_b;
extern DynamicArray2D<double> _dynamic_array_statemonitor_7_I_syn_gaba_b;
extern DynamicArray2D<double> _dynamic_array_statemonitor_8_I_syn_gaba_b;
extern DynamicArray2D<double> _dynamic_array_statemonitor_9_I_syn_gaba_b;
extern DynamicArray2D<double> _dynamic_array_statemonitor_Imem;

/////////////// static arrays /////////////
extern int32_t *_static_array__array_statemonitor_1__indices;
extern const int _num__static_array__array_statemonitor_1__indices;
extern int32_t *_static_array__array_statemonitor_2__indices;
extern const int _num__static_array__array_statemonitor_2__indices;
extern int32_t *_static_array__array_statemonitor__indices;
extern const int _num__static_array__array_statemonitor__indices;
extern int32_t *_static_array__dynamic_array_InpSpikeGenerator__timebins;
extern const int _num__static_array__dynamic_array_InpSpikeGenerator__timebins;
extern double *_static_array__dynamic_array_InpSpikeGenerator_neuron_index;
extern const int _num__static_array__dynamic_array_InpSpikeGenerator_neuron_index;
extern int64_t *_static_array__dynamic_array_InpSpikeGenerator_spike_number;
extern const int _num__static_array__dynamic_array_InpSpikeGenerator_spike_number;
extern double *_static_array__dynamic_array_InpSpikeGenerator_spike_time;
extern const int _num__static_array__dynamic_array_InpSpikeGenerator_spike_time;

//////////////// synapses /////////////////
// AMPA0
extern SynapticPathway AMPA0_post;
extern SynapticPathway AMPA0_pre;
// GABA_B4
extern SynapticPathway GABA_B4_post;
extern SynapticPathway GABA_B4_pre;
// GABA_B5
extern SynapticPathway GABA_B5_post;
extern SynapticPathway GABA_B5_pre;
// GABA_B6
extern SynapticPathway GABA_B6_post;
extern SynapticPathway GABA_B6_pre;
// GABA_B7
extern SynapticPathway GABA_B7_post;
extern SynapticPathway GABA_B7_pre;
// GABA_B8
extern SynapticPathway GABA_B8_post;
extern SynapticPathway GABA_B8_pre;
// GABA_B9
extern SynapticPathway GABA_B9_post;
extern SynapticPathway GABA_B9_pre;
// NMDA1
extern SynapticPathway NMDA1_post;
extern SynapticPathway NMDA1_pre;
// NMDA2
extern SynapticPathway NMDA2_post;
extern SynapticPathway NMDA2_pre;
// NMDA3
extern SynapticPathway NMDA3_post;
extern SynapticPathway NMDA3_pre;

// Profiling information for each code object
}

void _init_arrays();
void _load_arrays();
void _write_arrays();
void _dealloc_arrays();

#endif


