// FUN_00b12f80 @ 00b12f80 body=[[00b12f80, 00b130d0]]


undefined4 * FUN_00b12f80(undefined4 *param_1,uint param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00b39b39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_4 = 0;
  if ((param_2 & 1) != 0) {
    FUN_00b13780(",NEUTRAL_POSE",0xd);
  }
  if ((param_2 & 2) != 0) {
    FUN_00b13780(",M_B_P_X",8);
  }
  if ((param_2 & 4) != 0) {
    FUN_00b13780(",AA_AO_OW",9);
  }
  if ((param_2 & 8) != 0) {
    FUN_00b13780(",IH_AE_AH_EY_AY_H",0x11);
  }
  if ((param_2 & 0x10) != 0) {
    FUN_00b13780(&DAT_00de053c,3);
  }
  if ((param_2 & 0x20) != 0) {
    FUN_00b13780(",N_NG_CH_J_DH_D_G_T_K_Z_ZH_TH_S_SH",0x22);
  }
  if ((param_2 & 0x40) != 0) {
    FUN_00b13780(",IY_EH_Y",8);
  }
  if ((char)param_2 < '\0') {
    FUN_00b13780(",UW_UH_OY",9);
  }
  if ((param_2 & 0x100) != 0) {
    FUN_00b13780(&DAT_00de04f8,4);
  }
  if ((param_2 & 0x200) != 0) {
    FUN_00b13780(",L_EL",5);
  }
  if ((param_2 & 0x400) != 0) {
    FUN_00b13780(&DAT_00de04ec,2);
  }
  if ((param_2 & 0x800) != 0) {
    FUN_00b13780(",R_ER",5);
  }
  FUN_00b13ce0(0x2c);
  ExceptionList = local_c;
  return param_1;
}

