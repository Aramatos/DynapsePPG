#include "code_objects/Core_1_resetter_4_codeobject.h"
#include "objects.h"
#include "brianlib/common_math.h"
#include "brianlib/stdint_compat.h"
#include<cmath>
#include<ctime>
#include<iostream>
#include<fstream>
#include<climits>

////// SUPPORT CODE ///////
namespace {
        
    template < typename T1, typename T2 > struct _higher_type;
    template < > struct _higher_type<int,int> { typedef int type; };
    template < > struct _higher_type<int,long> { typedef long type; };
    template < > struct _higher_type<int,long long> { typedef long long type; };
    template < > struct _higher_type<int,float> { typedef float type; };
    template < > struct _higher_type<int,double> { typedef double type; };
    template < > struct _higher_type<int,long double> { typedef long double type; };
    template < > struct _higher_type<long,int> { typedef long type; };
    template < > struct _higher_type<long,long> { typedef long type; };
    template < > struct _higher_type<long,long long> { typedef long long type; };
    template < > struct _higher_type<long,float> { typedef float type; };
    template < > struct _higher_type<long,double> { typedef double type; };
    template < > struct _higher_type<long,long double> { typedef long double type; };
    template < > struct _higher_type<long long,int> { typedef long long type; };
    template < > struct _higher_type<long long,long> { typedef long long type; };
    template < > struct _higher_type<long long,long long> { typedef long long type; };
    template < > struct _higher_type<long long,float> { typedef float type; };
    template < > struct _higher_type<long long,double> { typedef double type; };
    template < > struct _higher_type<long long,long double> { typedef long double type; };
    template < > struct _higher_type<float,int> { typedef float type; };
    template < > struct _higher_type<float,long> { typedef float type; };
    template < > struct _higher_type<float,long long> { typedef float type; };
    template < > struct _higher_type<float,float> { typedef float type; };
    template < > struct _higher_type<float,double> { typedef double type; };
    template < > struct _higher_type<float,long double> { typedef long double type; };
    template < > struct _higher_type<double,int> { typedef double type; };
    template < > struct _higher_type<double,long> { typedef double type; };
    template < > struct _higher_type<double,long long> { typedef double type; };
    template < > struct _higher_type<double,float> { typedef double type; };
    template < > struct _higher_type<double,double> { typedef double type; };
    template < > struct _higher_type<double,long double> { typedef long double type; };
    template < > struct _higher_type<long double,int> { typedef long double type; };
    template < > struct _higher_type<long double,long> { typedef long double type; };
    template < > struct _higher_type<long double,long long> { typedef long double type; };
    template < > struct _higher_type<long double,float> { typedef long double type; };
    template < > struct _higher_type<long double,double> { typedef long double type; };
    template < > struct _higher_type<long double,long double> { typedef long double type; };
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_mod(T1 x, T2 y)
    {{
        return x-y*floor(1.0*x/y);
    }}
    template < typename T1, typename T2 >
    static inline typename _higher_type<T1,T2>::type
    _brian_floordiv(T1 x, T2 y)
    {{
        return floor(1.0*x/y);
    }}
    #ifdef _MSC_VER
    #define _brian_pow(x, y) (pow((double)(x), (y)))
    #else
    #define _brian_pow(x, y) (pow((x), (y)))
    #endif

}

////// HASH DEFINES ///////



void _run_Core_1_resetter_4_codeobject()
{
    using namespace brian;


    ///// CONSTANTS ///////////
    const size_t _numIahp = 256;
const size_t _num_spikespace = 257;
const int64_t N = 256;
const size_t _numImem = 256;
const size_t _numItauahp = 1;
const size_t _numIreset = 1;
const size_t _numIo = 1;
const size_t _numIca = 256;
const size_t _numIthahp = 1;
const size_t _numnot_refractory = 256;
    ///// POINTERS ////////////
        
    double* __restrict  _ptr_array_Core_1_Iahp_1 = _array_Core_1_Iahp_1;
    int32_t* __restrict  _ptr_array_Core_1__spikespace_1 = _array_Core_1__spikespace_1;
    double* __restrict  _ptr_array_Core_1_Imem_1 = _array_Core_1_Imem_1;
    double*   _ptr_array_Core_1_Itauahp_1 = _array_Core_1_Itauahp_1;
    double*   _ptr_array_Core_1_Ireset_1 = _array_Core_1_Ireset_1;
    double*   _ptr_array_Core_1_Io_1 = _array_Core_1_Io_1;
    double* __restrict  _ptr_array_Core_1_Ica_1 = _array_Core_1_Ica_1;
    double*   _ptr_array_Core_1_Ithahp_1 = _array_Core_1_Ithahp_1;
    char* __restrict  _ptr_array_Core_1_not_refractory_1 = _array_Core_1_not_refractory_1;



	const int32_t *_events = _ptr_array_Core_1__spikespace_1;
	const int32_t _num_events = _ptr_array_Core_1__spikespace_1[N];

	//// MAIN CODE ////////////	
	// scalar code
	const size_t _vectorisation_idx = -1;
 	
 const double Ireset = _ptr_array_Core_1_Ireset_1[0];
 const double Io = _ptr_array_Core_1_Io_1[0];
 const double Ithahp = _ptr_array_Core_1_Ithahp_1[0];
 const double Itauahp = _ptr_array_Core_1_Itauahp_1[0];
 const double _lio_1 = 1.0f*1.0/Itauahp;


	
	for(int32_t _index_events=0; _index_events<_num_events; _index_events++)
	{
	    // vector code
		const size_t _idx = _events[_index_events];
		const size_t _vectorisation_idx = _idx;
                
        double Iahp = _ptr_array_Core_1_Iahp_1[_idx];
        const double Ica = _ptr_array_Core_1_Ica_1[_idx];
        double Imem;
        Imem = Ireset;
        const double Ithahp_clip = (Ithahp * (Iahp > Io)) + (Io * (Iahp <= Io));
        const double Iahpmax = _lio_1 * (Ica * Ithahp_clip);
        Iahp += Iahpmax;
        _ptr_array_Core_1_Iahp_1[_idx] = Iahp;
        _ptr_array_Core_1_Imem_1[_idx] = Imem;

	}

}

