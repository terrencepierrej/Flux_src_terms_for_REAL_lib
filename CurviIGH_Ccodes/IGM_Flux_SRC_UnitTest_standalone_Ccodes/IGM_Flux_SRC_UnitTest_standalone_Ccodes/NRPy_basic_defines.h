// NRPy+ basic definitions, automatically generated from outC_NRPy_basic_defines_h_dict within outputC,
//    and populated within NRPy+ modules. DO NOT EDIT THIS FILE BY HAND.



//********************************************
// Basic definitions for module outputC:

#include "stdio.h"
#include "stdlib.h"
#include "math.h"
#include "string.h" // "string.h Needed for strncmp, etc.
#include "stdint.h" // "stdint.h" Needed for Windows GCC 6.x compatibility, and for int8_t

#ifndef M_PI
#define M_PI 3.141592653589793238462643383279502884L
#endif
#ifndef M_SQRT1_2
#define M_SQRT1_2 0.707106781186547524400844362104849039L
#endif

#ifndef MIN
#define MIN(A, B) ( ((A) < (B)) ? (A) : (B) )
#endif
#ifndef MAX
#define MAX(A, B) ( ((A) > (B)) ? (A) : (B) )
#endif

#ifdef __cplusplus
#define restrict __restrict__
#endif
#define REAL double
//********************************************


//********************************************
// Basic definitions for module NRPy_param_funcs:
typedef struct __paramstruct__ {
  REAL Cart_CoM_offsetx;  // grid::Cart_CoM_offsetx
  REAL Cart_CoM_offsety;  // grid::Cart_CoM_offsety
  REAL Cart_CoM_offsetz;  // grid::Cart_CoM_offsetz
  REAL Cart_originx;  // grid::Cart_originx
  REAL Cart_originy;  // grid::Cart_originy
  REAL Cart_originz;  // grid::Cart_originz
  REAL GAMMA_SPEED_LIMIT;  // GRMHD_equations_new_version::GAMMA_SPEED_LIMIT
  REAL dxx0;  // grid::dxx0
  REAL dxx1;  // grid::dxx1
  REAL dxx2;  // grid::dxx2
  REAL f0_of_xx0;  // reference_metric::f0_of_xx0
  REAL f0_of_xx0__D0;  // reference_metric::f0_of_xx0__D0
  REAL f0_of_xx0__DD00;  // reference_metric::f0_of_xx0__DD00
  REAL f0_of_xx0__DDD000;  // reference_metric::f0_of_xx0__DDD000
  REAL f1_of_xx1;  // reference_metric::f1_of_xx1
  REAL f1_of_xx1__D1;  // reference_metric::f1_of_xx1__D1
  REAL f1_of_xx1__DD11;  // reference_metric::f1_of_xx1__DD11
  REAL f1_of_xx1__DDD111;  // reference_metric::f1_of_xx1__DDD111
  REAL f2_of_xx0_xx1;  // reference_metric::f2_of_xx0_xx1
  REAL f2_of_xx0_xx1__D0;  // reference_metric::f2_of_xx0_xx1__D0
  REAL f2_of_xx0_xx1__D1;  // reference_metric::f2_of_xx0_xx1__D1
  REAL f2_of_xx0_xx1__DD00;  // reference_metric::f2_of_xx0_xx1__DD00
  REAL f2_of_xx0_xx1__DD11;  // reference_metric::f2_of_xx0_xx1__DD11
  REAL f2_of_xx1;  // reference_metric::f2_of_xx1
  REAL f2_of_xx1__D1;  // reference_metric::f2_of_xx1__D1
  REAL f2_of_xx1__DD11;  // reference_metric::f2_of_xx1__DD11
  REAL f2_of_xx1__DDD111;  // reference_metric::f2_of_xx1__DDD111
  REAL f3_of_xx0;  // reference_metric::f3_of_xx0
  REAL f3_of_xx0__D0;  // reference_metric::f3_of_xx0__D0
  REAL f3_of_xx0__DD00;  // reference_metric::f3_of_xx0__DD00
  REAL f4_of_xx2;  // reference_metric::f4_of_xx2
  REAL f4_of_xx2__D2;  // reference_metric::f4_of_xx2__D2
  REAL f4_of_xx2__DD22;  // reference_metric::f4_of_xx2__DD22
  REAL invdx0;  // grid::invdx0
  REAL invdx1;  // grid::invdx1
  REAL invdx2;  // grid::invdx2
  REAL sqrt4pi;  // GRMHD_equations_new_version::sqrt4pi
  REAL xmax;  // reference_metric::xmax
  REAL xmin;  // reference_metric::xmin
  REAL xx0;  // grid::xx0
  REAL xx1;  // grid::xx1
  REAL xx2;  // grid::xx2
  REAL xxmax0;  // grid::xxmax0
  REAL xxmax1;  // grid::xxmax1
  REAL xxmax2;  // grid::xxmax2
  REAL xxmin0;  // grid::xxmin0
  REAL xxmin1;  // grid::xxmin1
  REAL xxmin2;  // grid::xxmin2
  REAL ymax;  // reference_metric::ymax
  REAL ymin;  // reference_metric::ymin
  REAL zmax;  // reference_metric::zmax
  REAL zmin;  // reference_metric::zmin
  int Nxx0;  // grid::Nxx0
  int Nxx1;  // grid::Nxx1
  int Nxx2;  // grid::Nxx2
  int Nxx_plus_2NGHOSTS0;  // grid::Nxx_plus_2NGHOSTS0
  int Nxx_plus_2NGHOSTS1;  // grid::Nxx_plus_2NGHOSTS1
  int Nxx_plus_2NGHOSTS2;  // grid::Nxx_plus_2NGHOSTS2
  int has_outer_boundary;  // CurviBoundaryConditions.CurviBoundaryConditions_new_way::has_outer_boundary
} paramstruct;
//********************************************


//********************************************
// Basic definitions for module finite_difference:

// Set the number of ghost zones
// Note that upwinding in e.g., BSSN requires that NGHOSTS = FD_CENTDERIVS_ORDER/2 + 1 <- Notice the +1.
#define NGHOSTS 1
//********************************************


//********************************************
// Basic definitions for module reference_metric:
//********************************************


//********************************************
// Basic definitions for module grid:
// EVOLVED VARIABLES:
#define NUM_EVOL_GFS 5
#define STILDED0GF	0
#define STILDED1GF	1
#define STILDED2GF	2
#define RHO_STARGF	3
#define TAU_TILDEGF	4


// AUXILIARY VARIABLES:
#define NUM_AUX_GFS 0


// AUXEVOL VARIABLES:
#define NUM_AUXEVOL_GFS 106
#define BU0GF	0
#define BU1GF	1
#define BU2GF	2
#define B_LU0GF	3
#define B_LU1GF	4
#define B_LU2GF	5
#define B_RU0GF	6
#define B_RU1GF	7
#define B_RU2GF	8
#define GAMMA_TH_LGF	9
#define GAMMA_TH_RGF	10
#define HLLE_FLUX_STILDED0GF	11
#define HLLE_FLUX_STILDED1GF	12
#define HLLE_FLUX_STILDED2GF	13
#define HLLE_FLUX_RHO_STARGF	14
#define HLLE_FLUX_TAU_TILDEGF	15
#define KDD00GF	16
#define KDD01GF	17
#define KDD02GF	18
#define KDD11GF	19
#define KDD12GF	20
#define KDD22GF	21
#define PGF	22
#define P_LGF	23
#define P_RGF	24
#define VU0GF	25
#define VU1GF	26
#define VU2GF	27
#define V_LU0GF	28
#define V_LU1GF	29
#define V_LU2GF	30
#define V_RU0GF	31
#define V_RU1GF	32
#define V_RU2GF	33
#define ALPHAGF	34
#define ALPHA_DD0GF	35
#define ALPHA_DD1GF	36
#define ALPHA_DD2GF	37
#define ALPHA_FACEGF	38
#define BETAU0GF	39
#define BETAU1GF	40
#define BETAU2GF	41
#define BETAU_DD00GF	42
#define BETAU_DD01GF	43
#define BETAU_DD02GF	44
#define BETAU_DD10GF	45
#define BETAU_DD11GF	46
#define BETAU_DD12GF	47
#define BETAU_DD20GF	48
#define BETAU_DD21GF	49
#define BETAU_DD22GF	50
#define BETA_FACEU0GF	51
#define BETA_FACEU1GF	52
#define BETA_FACEU2GF	53
#define DPCOLD_DRHOB_LGF	54
#define DPCOLD_DRHOB_RGF	55
#define EPSILON_TH_LGF	56
#define EPSILON_TH_RGF	57
#define GAMMADD00GF	58
#define GAMMADD01GF	59
#define GAMMADD02GF	60
#define GAMMADD11GF	61
#define GAMMADD12GF	62
#define GAMMADD22GF	63
#define GAMMADD_DD000GF	64
#define GAMMADD_DD001GF	65
#define GAMMADD_DD002GF	66
#define GAMMADD_DD010GF	67
#define GAMMADD_DD011GF	68
#define GAMMADD_DD012GF	69
#define GAMMADD_DD020GF	70
#define GAMMADD_DD021GF	71
#define GAMMADD_DD022GF	72
#define GAMMADD_DD110GF	73
#define GAMMADD_DD111GF	74
#define GAMMADD_DD112GF	75
#define GAMMADD_DD120GF	76
#define GAMMADD_DD121GF	77
#define GAMMADD_DD122GF	78
#define GAMMADD_DD220GF	79
#define GAMMADD_DD221GF	80
#define GAMMADD_DD222GF	81
#define GAMMA_FACEDD00GF	82
#define GAMMA_FACEDD01GF	83
#define GAMMA_FACEDD02GF	84
#define GAMMA_FACEDD11GF	85
#define GAMMA_FACEDD12GF	86
#define GAMMA_FACEDD22GF	87
#define HGF	88
#define H_LGF	89
#define H_RGF	90
#define RHOBGF	91
#define RHOB_LGF	92
#define RHOB_RGF	93
#define U4U0GF	94
#define U4U1GF	95
#define U4U2GF	96
#define U4U3GF	97
#define U4_LU0GF	98
#define U4_LU1GF	99
#define U4_LU2GF	100
#define U4_LU3GF	101
#define U4_RU0GF	102
#define U4_RU1GF	103
#define U4_RU2GF	104
#define U4_RU3GF	105


// SET gridfunctions_f_infinity[i] = value of gridfunction i in the limit r->infinity:
static const REAL gridfunctions_f_infinity[NUM_EVOL_GFS] = { 0.0, 0.0, 0.0, 0.0, 0.0 };


// SET gridfunctions_wavespeed[i] = gridfunction i's characteristic wave speed:
static const REAL gridfunctions_wavespeed[NUM_EVOL_GFS] = { 1.0, 1.0, 1.0, 1.0, 1.0 };

// Declare the IDX4S(gf,i,j,k) macro, which enables us to store 4-dimensions of
//   data in a 1D array. In this case, consecutive values of "i"
//   (all other indices held to a fixed value) are consecutive in memory, where
//   consecutive values of "j" (fixing all other indices) are separated by
//   Nxx_plus_2NGHOSTS0 elements in memory. Similarly, consecutive values of
//   "k" are separated by Nxx_plus_2NGHOSTS0*Nxx_plus_2NGHOSTS1 in memory, etc.
#define IDX4S(g,i,j,k)                                                  \
  ( (i) + Nxx_plus_2NGHOSTS0 * ( (j) + Nxx_plus_2NGHOSTS1 * ( (k) + Nxx_plus_2NGHOSTS2 * (g) ) ) )
#define IDX4ptS(g,idx) ( (idx) + (Nxx_plus_2NGHOSTS0*Nxx_plus_2NGHOSTS1*Nxx_plus_2NGHOSTS2) * (g) )
#define IDX3S(i,j,k) ( (i) + Nxx_plus_2NGHOSTS0 * ( (j) + Nxx_plus_2NGHOSTS1 * ( (k) ) ) )
#define LOOP_REGION(i0min,i0max, i1min,i1max, i2min,i2max)              \
  for(int i2=i2min;i2<i2max;i2++) for(int i1=i1min;i1<i1max;i1++) for(int i0=i0min;i0<i0max;i0++)
#define LOOP_OMP(__OMP_PRAGMA__, i0,i0min,i0max, i1,i1min,i1max, i2,i2min,i2max) _Pragma(__OMP_PRAGMA__) \
    for(int (i2)=(i2min);(i2)<(i2max);(i2)++) for(int (i1)=(i1min);(i1)<(i1max);(i1)++) for(int (i0)=(i0min);(i0)<(i0max);(i0)++)
#define LOOP_NOOMP(i0,i0min,i0max, i1,i1min,i1max, i2,i2min,i2max)      \
  for(int (i2)=(i2min);(i2)<(i2max);(i2)++) for(int (i1)=(i1min);(i1)<(i1max);(i1)++) for(int (i0)=(i0min);(i0)<(i0max);(i0)++)
#define LOOP_BREAKOUT(i0,i1,i2, i0max,i1max,i2max) i0=(i0max); i1=(i1max); i2=(i2max); break;
#define IS_IN_GRID_INTERIOR(i0i1i2, Nxx_plus_2NGHOSTS0,Nxx_plus_2NGHOSTS1,Nxx_plus_2NGHOSTS2, NG) \
  ( i0i1i2[0] >= (NG) && i0i1i2[0] < (Nxx_plus_2NGHOSTS0)-(NG) &&       \
    i0i1i2[1] >= (NG) && i0i1i2[1] < (Nxx_plus_2NGHOSTS1)-(NG) &&       \
    i0i1i2[2] >= (NG) && i0i1i2[2] < (Nxx_plus_2NGHOSTS2)-(NG) )

typedef struct __griddata__ {
  paramstruct params;
  REAL *restrict xx[3];
} griddata_struct;
//********************************************


//#ifndef TINYDOUBLE
static const double TINYDOUBLE = 1e-100;
//#endif

//#ifndef sqrt4pi
static const double sqrt4pi = 3.544907701811032054596334966682290365L;
//#endif

static const int kronecker_delta[4][3] = { { 0,0,0 },
                                    { 1,0,0 },
                                    { 0,1,0 },
                                    { 0,0,1 } };

/*
   The struct reconstructed_prims_struct contains variables for storing the (point-wise)
   reconstructed primitive variables. The struct elements are detailed below:
   
 --rhob: the baryonic density
 
 --P: the pressure
 
 --u4U*: the contravariant fluid 4-velocity
   
 --BU*: the contravariant magnetic field
 
 --h: the enthalpy
 
 --Gamma_th: an EOS quantity
 
 --epsilon_th: an EOS quantity
 
 --dPcold_drhob: an EOS quantity
*/

typedef struct __reconstructed_prims__ {
double u4U0, u4U1, u4U2, u4U3;
double BU0, BU1, BU2;
double rhob;
double P, h, Gamma_th, epsilon_th, dPcold_drhob;
} reconstructed_prims_struct;


/*
   Parameters used throughout the module. The struct elements are detailed below:
 
 --TINYDOUBLE: tiny double to avoid divide by zero issues
 
 --sqrt4pi: \sqrt{4\pi} to 16 S.D.
*/

/*
typedef struct __rhss_params__ {
double TINYDOUBLE, sqrt4pi;
} rhss_params_struct;
*/


/*
   The struct conservative_fluxes_struct contains variables for HLLE fluxes that the user
   will finite difference later. Note that we do not store the fluxes for all three
   directions. The struct elements are detailed below:
   
 --cmin* / cmax*: the minimum and maximum characteristic speeds for all three flux directions
 
 --HLLE_flux_StildeD*: the HLLE flux for the momentum term term, all three components
 
 --HLLE_flux_rho_star: the HLLE flux for the baryonic density
   
 --HLLE_flux_tau_tilde: the HLLE flux for the energy
*/

typedef struct __conservative_fluxes__ {
double cmin_dirn0, cmin_dirn1, cmin_dirn2;
double cmax_dirn0, cmax_dirn1, cmax_dirn2;
double HLLE_flux_StildeD0, HLLE_flux_StildeD1, HLLE_flux_StildeD2;
double HLLE_flux_rho_star, HLLE_flux_tau_tilde;
} conservative_fluxes_struct;


/*
   The struct conservative_sources_struct contains stores the point-wise values 
   of the source terms for the momentum and energy equations. The struct 
   elements are detailed below:
   
 --StildeD*_src: momentum equations source terms
 
 --tau_tilde_src: tau equation source term
*/

typedef struct __conservative_sources__ {
double StildeD0_src, StildeD1_src, StildeD2_src;
double tau_tilde_src;
} conservative_sources_struct;



/*
   The struct metric_quantities_struct contains variables for storing the (point-wise)
   metric variables. The struct elements are detailed below:
   
 --alpha: the lapse
 
 --betaU*: the shift vector
   
 --gammaDD**: the physical 3-metric
 
 --KDD*: the extrinsic curvature
*/

typedef struct __metric_quantities__ {
double alpha;
double betaU0, betaU1, betaU2;
double gammaDD01, gammaDD02, gammaDD12, gammaDD00, gammaDD11, gammaDD22;
double KDD01, KDD02, KDD12, KDD00, KDD11, KDD22;
} metric_quantities_struct;


/*
   The struct metric_face_quantities_struct contains metric quantities stored on grid faces.
*/

typedef struct __metric_face_quantities__ {
double alpha_face;
double beta_faceU0, beta_faceU1, beta_faceU2;
double gamma_faceDD01, gamma_faceDD02, gamma_faceDD12, gamma_faceDD00, gamma_faceDD11, gamma_faceDD22;
} metric_face_quantities_struct;


/*
   The struct metric_quantities_derivatives_struct contains variables for
   precomputed derivatives of the metric quantities.
*/

typedef struct __metric_quantities_derivatives__ {
double gammaDD_dD220;
double gammaDD_dD012;
double gammaDD_dD122;
double gammaDD_dD010;
double gammaDD_dD120;
double betaU_dD20;
double betaU_dD02;
double gammaDD_dD002;
double betaU_dD11;
double alpha_dD2;
double gammaDD_dD001;
double gammaDD_dD020;
double alpha_dD0;
double gammaDD_dD222;
double betaU_dD00;
double betaU_dD22;
double betaU_dD10;
double gammaDD_dD110;
double gammaDD_dD022;
double gammaDD_dD021;
double gammaDD_dD111;
double gammaDD_dD000;
double gammaDD_dD112;
double gammaDD_dD011;
double betaU_dD21;
double betaU_dD12;
double betaU_dD01;
double alpha_dD1;
double gammaDD_dD221;
double gammaDD_dD121;

} metric_quantities_derivatives_struct;

static const int cctk_lsh[3] = {1,1,1};
// Define CCTK macros
#define CCTK_REAL double
#define CCTK_INT int
typedef struct __cGH__ {
double *cctkGH;
} cGH;

// Define dz in CCTK
static CCTK_REAL cactus_dz;
#define CCTK_DELTA_SPACE(i) cactus_dz

static const CCTK_REAL GAMMA_SPEED_LIMIT = 2000.0;

// Dummy ETK function:
#define CCTK_GFINDEX3D(cctkGH,i,j,k) 0
#define CCTK_VInfo(a01,a02,a03,a04,a05,a06,a07,a08,a09,a10,a11,a12) //
#define CCTK_VWarn(b01,b02,b03,b04,b05,b06,b07,b08,b09,b10,b11,b12,b13,b14,b15,b16,b17,b18,b19,b20,b21,b22,b23,b24,b25) //

#define SQR(x) ((x) * (x))
#define ONE_OVER_SQRT_4PI 0.282094791773878143474039725780

//#define VERR_DEF_PARAMS __LINE__, __FILE__, CCTK_THORNSTRING

// The order here MATTERS, as we assume that GUPXX+1=GUPYY, etc.
static const int PHI=0,PSI=1,GXX=2,GXY=3,GXZ=4,GYY=5,GYZ=6,GZZ=7,
  LAPM1=8,SHIFTX=9,SHIFTY=10,SHIFTZ=11,GUPXX=12,GUPYY=13,GUPZZ=14,
  NUMVARS_FOR_METRIC_FACEVALS=15; //<-- Be _sure_ to set this correctly, or you'll have memory access bugs!

// These are not used for facevals in the reconstruction step, but boy are they useful anyway.
static const int GUPXY=15,GUPXZ=16,GUPYZ=17,
  NUMVARS_FOR_METRIC=18; //<-- Be _sure_ to set this correctly, or you'll have memory access bugs!

// The order here MATTERS, and must be consistent with the order in the in_prims[] array in driver_evaluate_MHD_rhs.C.
static const int RHOB=0,PRESSURE=1,VX=2,VY=3,VZ=4,
  BX_CENTER=5,BY_CENTER=6,BZ_CENTER=7,BX_STAGGER=8,BY_STAGGER=9,BZ_STAGGER=10,
  VXR=11,VYR=12,VZR=13,VXL=14,VYL=15,VZL=16,MAXNUMVARS=17;  //<-- Be _sure_ to define MAXNUMVARS appropriately!

static const int UT=0,UX=1,UY=2,UZ=3;

// The "I" suffix denotes interpolation. In other words, these
//    definitions are used for interpolation ONLY. The order here
//    matters as well!
static const int SHIFTXI=0,SHIFTYI=1,SHIFTZI=2,GUPXXI=3,GUPXYI=4,GUPXZI=5,GUPYYI=6,GUPYZI=7,GUPZZI=8,
  PSII=9,LAPM1I=10,A_XI=11,A_YI=12,A_ZI=13,LAPSE_PSI2I=14,LAPSE_OVER_PSI6I=15,MAXNUMINTERP=16;

// Again, the order here MATTERS, since we assume in the code that, e.g., smallb[0]=b^t, smallb[3]=b^z, etc.
static const int SMALLBT=0,SMALLBX=1,SMALLBY=2,SMALLBZ=3,SMALLB2=4,NUMVARS_SMALLB=5;

// Again, the order here MATTERS, since we assume in the code that, CONSERV[STILDEX+1] = 	ilde{S}_y
static const int RHOSTAR=0,STILDEX=1,STILDEY=2,STILDEZ=3,TAUENERGY=4,NUM_CONSERVS=5;

static const int LAPSE=0,PSI2=1,PSI4=2,PSI6=3,PSIM4=4,LAPSEINV=5,NUMVARS_METRIC_AUX=6;
#define SET_LAPSE_PSI4(array_name,METRIC)   {                         array_name[LAPSE] = METRIC[LAPM1]+1.0;                          array_name[PSI2]  = exp(2.0*METRIC[PHI]);                       array_name[PSI4]  = SQR(array_name[PSI2]);                      array_name[PSI6]  = array_name[PSI4]*array_name[PSI2];          array_name[PSIM4]  = 1.0/array_name[PSI4];                      array_name[LAPSEINV]  = 1.0/array_name[LAPSE];              }

// Keeping track of ghostzones between routines is a nightmare, so
//   we instead attach ghostzone info to each gridfunction and set
//   the ghostzone information correctly within each routine.
typedef struct __gf_and_gz_struct__ {
  CCTK_REAL *gf;
  int gz_lo[4],gz_hi[4];
} gf_and_gz_struct;

#define MAX_EOS_PARAMS 10
typedef struct __eos_struct__ {
  int neos;
  CCTK_REAL rho_tab[MAX_EOS_PARAMS],P_tab[MAX_EOS_PARAMS],eps_tab[MAX_EOS_PARAMS],k_tab[MAX_EOS_PARAMS],gamma_tab[MAX_EOS_PARAMS];
  CCTK_REAL gamma_th;
  CCTK_REAL K_poly;
} eos_struct;

typedef struct __output_stats__ {
  int font_fixed,vel_limited,failure_checker;
  long n_iter;
} output_stats;


