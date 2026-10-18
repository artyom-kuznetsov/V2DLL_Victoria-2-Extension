// FUN_0061ac70 @ 0061ac70 body=[[0061ac70, 0061acd6] [0061acda, 0061ad74] [0061ad78, 0061adab] [0061adaf, 0061adcd] [0061add1, 0061ae12] [0061ae16, 0061ae90] [0061ae94, 0061aed8] [0061aedc, 0061aeff] [0061af03, 0061af17]]


undefined4 * FUN_0061ac70(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_ECX;
  uint local_94 [4];
  undefined4 local_84;
  uint local_80;
  uint local_78;
  undefined4 local_68;
  uint local_64;
  undefined1 local_5c [4];
  int local_58;
  uint local_48 [2];
  undefined1 local_40 [4];
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9542a;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("DefaultConfirm",0xe);
  local_8 = 0;
  FUN_00640680(param_1,local_2c);
  local_8._0_1_ = 2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  *param_1 = _anon_E783597C::CConfirmIntervention::vftable;
  param_1[0x1a] = in_ECX;
  param_1[0x1b] = param_2;
  local_80 = 0xf;
  local_84 = 0;
  local_94[0] = local_94[0] & 0xffffff00;
  FUN_00409350("CONFIRM_INTERVENTION",0x14);
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_40,local_94);
  local_8._0_1_ = 4;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 5;
  FUN_00641710();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = local_78 & 0xffffff00;
  local_8._0_1_ = 6;
  FUN_009adb70();
  if (local_3c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (0xf < local_80) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("CONFIRM_INTERVENTION_DESC",0x19);
  local_8._0_1_ = 7;
  FUN_009a8ee0(local_5c,local_48);
  local_8._0_1_ = 9;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350(&DAT_00e00e10,3);
  local_8._0_1_ = 10;
  param_2 = FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  FUN_009e6810(local_2c,&param_2);
  local_8._0_1_ = 9;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_8._0_1_ = 0xc;
  FUN_006417b0();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0xd);
  FUN_009adb70();
  if (local_58 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

