const int Nxx0 = params.Nxx0;  // grid::Nxx0
const int Nxx1 = params.Nxx1;  // grid::Nxx1
const int Nxx2 = params.Nxx2;  // grid::Nxx2
const int Nxx_plus_2NGHOSTS0 = params.Nxx_plus_2NGHOSTS0;  // grid::Nxx_plus_2NGHOSTS0
const int Nxx_plus_2NGHOSTS1 = params.Nxx_plus_2NGHOSTS1;  // grid::Nxx_plus_2NGHOSTS1
const int Nxx_plus_2NGHOSTS2 = params.Nxx_plus_2NGHOSTS2;  // grid::Nxx_plus_2NGHOSTS2
const REAL dxx0 = params.dxx0;  // grid::dxx0
const REAL dxx1 = params.dxx1;  // grid::dxx1
const REAL dxx2 = params.dxx2;  // grid::dxx2
const REAL xxmin0 = params.xxmin0;  // grid::xxmin0
const REAL xxmin1 = params.xxmin1;  // grid::xxmin1
const REAL xxmin2 = params.xxmin2;  // grid::xxmin2
const REAL xxmax0 = params.xxmax0;  // grid::xxmax0
const REAL xxmax1 = params.xxmax1;  // grid::xxmax1
const REAL xxmax2 = params.xxmax2;  // grid::xxmax2
const REAL invdx0 = params.invdx0;  // grid::invdx0
const REAL invdx1 = params.invdx1;  // grid::invdx1
const REAL invdx2 = params.invdx2;  // grid::invdx2
const REAL Cart_originx = params.Cart_originx;  // grid::Cart_originx
const REAL Cart_originy = params.Cart_originy;  // grid::Cart_originy
const REAL Cart_originz = params.Cart_originz;  // grid::Cart_originz
const REAL Cart_CoM_offsetx = params.Cart_CoM_offsetx;  // grid::Cart_CoM_offsetx
const REAL Cart_CoM_offsety = params.Cart_CoM_offsety;  // grid::Cart_CoM_offsety
const REAL Cart_CoM_offsetz = params.Cart_CoM_offsetz;  // grid::Cart_CoM_offsetz
const REAL xmin = params.xmin;  // reference_metric::xmin
const REAL xmax = params.xmax;  // reference_metric::xmax
const REAL ymin = params.ymin;  // reference_metric::ymin
const REAL ymax = params.ymax;  // reference_metric::ymax
const REAL zmin = params.zmin;  // reference_metric::zmin
const REAL zmax = params.zmax;  // reference_metric::zmax
const REAL GAMMA_SPEED_LIMIT = params.GAMMA_SPEED_LIMIT;  // GRMHD_equations_new_version::GAMMA_SPEED_LIMIT
const REAL sqrt4pi = params.sqrt4pi;  // GRMHD_equations_new_version::sqrt4pi
const int has_outer_boundary = params.has_outer_boundary;  // CurviBoundaryConditions.CurviBoundaryConditions_new_way::has_outer_boundary
