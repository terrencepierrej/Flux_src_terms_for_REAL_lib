/*
 * Compute the characteristic speeds in0th direction
 */
void calculate_characteristic_speed_0th_direction(const rhss_paramstruct *restrict rhss_params, const prims_struct *restrict reconstructed_prims, const metric_quantities_struct *restrict metric_face_quantities, conservative_fluxes_struct *restrict conservative_fluxes) {

{
const double u4_rU0 = reconstructed_prims->u4_rU0;
const double u4_rU1 = reconstructed_prims->u4_rU1;
const double u4_rU2 = reconstructed_prims->u4_rU2;
const double u4_rU3 = reconstructed_prims->u4_rU3;
const double u4_lU0 = reconstructed_prims->u4_lU0;
const double u4_lU1 = reconstructed_prims->u4_lU1;
const double u4_lU2 = reconstructed_prims->u4_lU2;
const double u4_lU3 = reconstructed_prims->u4_lU3;
const double B_rU0 = reconstructed_prims->B_rU0;
const double B_rU1 = reconstructed_prims->B_rU1;
const double B_rU2 = reconstructed_prims->B_rU2;
const double B_lU0 = reconstructed_prims->B_lU0;
const double B_lU1 = reconstructed_prims->B_lU1;
const double B_lU2 = reconstructed_prims->B_lU2;
const double P_r = reconstructed_prims->P_r;
const double P_l = reconstructed_prims->P_l;
const double h_r = reconstructed_prims->h_r;
const double h_l = reconstructed_prims->h_l;
const double rhob_r = reconstructed_prims->rhob_r;
const double rhob_l = reconstructed_prims->rhob_l;
const double Gamma_th_r = reconstructed_prims->Gamma_th_r;
const double Gamma_th_l = reconstructed_prims->Gamma_th_l;
const double epsilon_th_r = reconstructed_prims->epsilon_th_r;
const double epsilon_th_l = reconstructed_prims->epsilon_th_l;
const double dPcold_drhob_r = reconstructed_prims->dPcold_drhob_r;
const double dPcold_drhob_l = reconstructed_prims->dPcold_drhob_l;
const double GAMMA_SPEED_LIMIT = rhss_params->GAMMA_SPEED_LIMIT;
const double TINYDOUBLE = rhss_params->TINYDOUBLE;
const double sqrt4pi = rhss_params->sqrt4pi;
const double alpha_face = metric_face_quantities->alpha_face;
const double cf_face = metric_face_quantities->cf_face;
const double vet_faceU0 = metric_face_quantities->vet_faceU0;
const double vet_faceU1 = metric_face_quantities->vet_faceU1;
const double vet_faceU2 = metric_face_quantities->vet_faceU2;
const double h_faceDD00 = metric_face_quantities->h_faceDD00;
const double h_faceDD01 = metric_face_quantities->h_faceDD01;
const double h_faceDD02 = metric_face_quantities->h_faceDD02;
const double h_faceDD01 = metric_face_quantities->h_faceDD01;
const double h_faceDD11 = metric_face_quantities->h_faceDD11;
const double h_faceDD12 = metric_face_quantities->h_faceDD12;
const double h_faceDD02 = metric_face_quantities->h_faceDD02;
const double h_faceDD12 = metric_face_quantities->h_faceDD12;
const double h_faceDD22 = metric_face_quantities->h_faceDD22;
  const double tmp_1 = (1.0/((alpha_face)*(alpha_face)));
  const double tmp_2 = h_faceDD00 + 1;
  const double tmp_3 = ((cf_face)*(cf_face));
  const double tmp_7 = h_faceDD01*vet_faceU1 + h_faceDD02*vet_faceU2 + tmp_2*vet_faceU0;
  const double tmp_8 = h_faceDD11 + 1;
  const double tmp_12 = h_faceDD01*vet_faceU0 + h_faceDD12*vet_faceU2 + tmp_8*vet_faceU1;
  const double tmp_13 = h_faceDD22 + 1;
  const double tmp_17 = h_faceDD02*vet_faceU0 + h_faceDD12*vet_faceU1 + tmp_13*vet_faceU2;
  const double tmp_18 = B_lU0*(h_faceDD01*u4_lU2 + h_faceDD02*u4_lU3 + tmp_2*u4_lU1 + tmp_7*u4_lU0) + B_lU1*(h_faceDD01*u4_lU1 + h_faceDD12*u4_lU3 + tmp_12*u4_lU0 + tmp_8*u4_lU2) + B_lU2*(h_faceDD02*u4_lU1 + h_faceDD12*u4_lU2 + tmp_13*u4_lU3 + tmp_17*u4_lU0);
  const double tmp_19 = B_lU0*tmp_3 + tmp_18*u4_lU1;
  const double tmp_21 = tmp_1/((sqrt4pi)*(sqrt4pi));
  const double tmp_22 = tmp_21/pow(cf_face, 6);
  const double tmp_23 = tmp_22/((u4_lU0)*(u4_lU0));
  const double tmp_24 = B_lU1*tmp_3 + tmp_18*u4_lU2;
  const double tmp_25 = B_lU2*tmp_3 + tmp_18*u4_lU3;
  const double tmp_26 = (1.0/(tmp_3));
  const double tmp_27 = h_faceDD01*tmp_26*vet_faceU1 + h_faceDD02*tmp_26*vet_faceU2 + tmp_2*tmp_26*vet_faceU0;
  const double tmp_28 = h_faceDD01*tmp_26*vet_faceU0 + h_faceDD12*tmp_26*vet_faceU2 + tmp_26*tmp_8*vet_faceU1;
  const double tmp_29 = h_faceDD02*tmp_26*vet_faceU0 + h_faceDD12*tmp_26*vet_faceU1 + tmp_13*tmp_26*vet_faceU2;
  const double tmp_30 = tmp_21/((cf_face)*(cf_face)*(cf_face)*(cf_face));
  const double tmp_31 = tmp_30*(-((alpha_face)*(alpha_face)) + tmp_27*vet_faceU0 + tmp_28*vet_faceU1 + tmp_29*vet_faceU2);
  const double tmp_33 = 2*tmp_19*tmp_23;
  const double tmp_36 = tmp_18/u4_lU0;
  const double tmp_39 = h_faceDD01*tmp_24*tmp_33 + h_faceDD02*tmp_25*tmp_33 + 2*h_faceDD12*tmp_23*tmp_24*tmp_25 + tmp_13*tmp_23*((tmp_25)*(tmp_25)) + ((tmp_18)*(tmp_18))*tmp_31 + ((tmp_19)*(tmp_19))*tmp_2*tmp_23 + 2*tmp_19*tmp_27*tmp_30*tmp_36 + tmp_23*((tmp_24)*(tmp_24))*tmp_8 + 2*tmp_24*tmp_28*tmp_30*tmp_36 + 2*tmp_25*tmp_29*tmp_30*tmp_36;
  const double tmp_40 = tmp_39/(h_l*rhob_l + tmp_39);
  const double tmp_42 = -(tmp_40 - 1)*((Gamma_th_l*epsilon_th_l*(Gamma_th_l - 1) + dPcold_drhob_l)*(Gamma_th_l*epsilon_th_l*(Gamma_th_l - 1) + dPcold_drhob_l))/((h_l)*(h_l));
  const double tmp_43 = tmp_1*(tmp_40 + tmp_42);
  const double tmp_44 = ((u4_lU0)*(u4_lU0))*(-tmp_40 - tmp_42 + 1);
  const double tmp_46 = (1.0/(tmp_43 + tmp_44));
  const double tmp_47 = tmp_1*(2*tmp_40 + 2*tmp_42) + 2*tmp_44;
  const double tmp_48 = (1.0/2.0)*tmp_46*tmp_47;
  const double tmp_50 = (tmp_43 + tmp_44)*(4*tmp_43 + 4*tmp_44);
  const double tmp_51 = sqrt((1.0/2.0)*((tmp_47)*(tmp_47)) - 1.0/2.0*tmp_50 + (1.0/2.0)*fabs(((tmp_47)*(tmp_47)) - tmp_50));
  const double tmp_52 = tmp_46*tmp_51;
  const double tmp_53 = (1.0/2.0)*tmp_52;
  const double tmp_55 = tmp_48 - tmp_53;
  const double tmp_56 = (1.0/(TINYDOUBLE + tmp_52));
  const double tmp_57 = (1.0/2.0)*fabs(tmp_52);
  const double tmp_58 = tmp_53 + tmp_57;
  const double tmp_60 = tmp_55*tmp_56*tmp_58;
  const double tmp_61 = B_rU0*(h_faceDD01*u4_rU2 + h_faceDD02*u4_rU3 + tmp_2*u4_rU1 + tmp_7*u4_rU0) + B_rU1*(h_faceDD01*u4_rU1 + h_faceDD12*u4_rU3 + tmp_12*u4_rU0 + tmp_8*u4_rU2) + B_rU2*(h_faceDD02*u4_rU1 + h_faceDD12*u4_rU2 + tmp_13*u4_rU3 + tmp_17*u4_rU0);
  const double tmp_62 = B_rU0*tmp_3 + tmp_61*u4_rU1;
  const double tmp_64 = tmp_22/((u4_rU0)*(u4_rU0));
  const double tmp_65 = B_rU1*tmp_3 + tmp_61*u4_rU2;
  const double tmp_66 = B_rU2*tmp_3 + tmp_61*u4_rU3;
  const double tmp_68 = 2*tmp_62*tmp_64;
  const double tmp_70 = tmp_61/u4_rU0;
  const double tmp_72 = h_faceDD01*tmp_65*tmp_68 + h_faceDD02*tmp_66*tmp_68 + 2*h_faceDD12*tmp_64*tmp_65*tmp_66 + tmp_13*tmp_64*((tmp_66)*(tmp_66)) + tmp_2*((tmp_62)*(tmp_62))*tmp_64 + 2*tmp_27*tmp_30*tmp_62*tmp_70 + 2*tmp_28*tmp_30*tmp_65*tmp_70 + 2*tmp_29*tmp_30*tmp_66*tmp_70 + tmp_31*((tmp_61)*(tmp_61)) + tmp_64*((tmp_65)*(tmp_65))*tmp_8;
  const double tmp_73 = tmp_72/(h_r*rhob_r + tmp_72);
  const double tmp_75 = -(tmp_73 - 1)*((Gamma_th_r*epsilon_th_r*(Gamma_th_r - 1) + dPcold_drhob_r)*(Gamma_th_r*epsilon_th_r*(Gamma_th_r - 1) + dPcold_drhob_r))/((h_r)*(h_r));
  const double tmp_76 = tmp_1*(tmp_73 + tmp_75);
  const double tmp_77 = ((u4_rU0)*(u4_rU0))*(-tmp_73 - tmp_75 + 1);
  const double tmp_79 = (1.0/(tmp_76 + tmp_77));
  const double tmp_80 = tmp_1*(2*tmp_73 + 2*tmp_75) + 2*tmp_77;
  const double tmp_81 = (1.0/2.0)*tmp_79*tmp_80;
  const double tmp_83 = (tmp_76 + tmp_77)*(4*tmp_76 + 4*tmp_77);
  const double tmp_84 = sqrt((1.0/2.0)*((tmp_80)*(tmp_80)) - 1.0/2.0*tmp_83 + (1.0/2.0)*fabs(((tmp_80)*(tmp_80)) - tmp_83));
  const double tmp_85 = tmp_79*tmp_84;
  const double tmp_86 = (1.0/2.0)*tmp_85;
  const double tmp_88 = tmp_81 - tmp_86;
  const double tmp_89 = (1.0/2.0)*fabs(tmp_85);
  const double tmp_90 = (tmp_86 + tmp_89)/(TINYDOUBLE + tmp_85);
  const double tmp_91 = tmp_88*tmp_90;
  const double tmp_92 = tmp_48 + tmp_53;
  const double tmp_93 = (1.0/(-TINYDOUBLE + tmp_46*tmp_51));
  const double tmp_94 = tmp_53 - tmp_57;
  const double tmp_96 = tmp_92*tmp_93*tmp_94;
  const double tmp_98 = (tmp_86 - tmp_89)/(-TINYDOUBLE + tmp_79*tmp_84);
  const double tmp_99 = tmp_98*(tmp_81 + tmp_86);
  const double tmp_100 = fabs(tmp_55*tmp_56*tmp_58 - tmp_91 + tmp_92*tmp_93*tmp_94 - tmp_99);
  const double tmp_101 = tmp_56*tmp_58*tmp_92;
  const double tmp_102 = tmp_90*(tmp_81 + tmp_86);
  const double tmp_103 = tmp_55*tmp_93*tmp_94;
  const double tmp_104 = tmp_88*tmp_98;
  const double tmp_105 = fabs(-tmp_102 - tmp_104 + tmp_55*tmp_93*tmp_94 + tmp_56*tmp_58*tmp_92);
  conservative_fluxes->cmin_dirn0 = (1.0/4.0)*tmp_100 - 1.0/4.0*tmp_60 - 1.0/4.0*tmp_91 - 1.0/4.0*tmp_96 - 1.0/4.0*tmp_99 + (1.0/2.0)*fabs(-1.0/2.0*tmp_100 + (1.0/2.0)*tmp_60 + (1.0/2.0)*tmp_91 + (1.0/2.0)*tmp_96 + (1.0/2.0)*tmp_99);
  conservative_fluxes->cmax_dirn0 = (1.0/4.0)*tmp_101 + (1.0/4.0)*tmp_102 + (1.0/4.0)*tmp_103 + (1.0/4.0)*tmp_104 + (1.0/4.0)*tmp_105 + (1.0/2.0)*fabs((1.0/2.0)*tmp_101 + (1.0/2.0)*tmp_102 + (1.0/2.0)*tmp_103 + (1.0/2.0)*tmp_104 + (1.0/2.0)*tmp_105);
}
}
