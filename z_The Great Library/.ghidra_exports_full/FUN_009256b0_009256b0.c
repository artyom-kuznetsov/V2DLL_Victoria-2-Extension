// FUN_009256b0 @ 009256b0 body=[[009256b0, 00925820] [00925824, 00925850] [00925854, 0092587b] [0092587f, 009258bf] [009258c3, 009258e4] [009258e8, 00925911] [00925915, 00925930] [00925934, 0092594f] [00925953, 009259a1]]


undefined1 * FUN_009256b0(undefined1 *param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  undefined4 local_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint auStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  uint uStack_c4;
  undefined4 uStack_b4;
  uint uStack_b0;
  uint uStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  uint uStack_8c;
  undefined4 uStack_7c;
  uint uStack_78;
  uint uStack_70;
  undefined4 uStack_60;
  uint uStack_5c;
  uint uStack_54;
  undefined4 uStack_44;
  uint uStack_40;
  uint uStack_38;
  undefined4 uStack_28;
  uint uStack_24;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b847b9;
  pvStack_14 = ExceptionList;
  local_f4 = 0;
  ExceptionList = &pvStack_14;
  cVar1 = (**(code **)(*in_ECX + 0x90))(0);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00409350(&DAT_00ded94d,0);
    ExceptionList = pvStack_18;
    return param_1;
  }
  uStack_94 = 0xf;
  uStack_98 = 0;
  uStack_a8 = uStack_a8 & 0xffffff00;
  FUN_00409350(&DAT_00df8514,2);
  puStack_10 = (undefined1 *)0x0;
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
  FUN_00409350(&DAT_00df963c,2);
  puStack_10._0_1_ = 1;
  uStack_cc = 0xf;
  uStack_d0 = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  FUN_00409350("INCREASE_RELATION_MAX",0x15);
  puStack_10._0_1_ = 2;
  FUN_0055dd40();
  puStack_10._0_1_ = 3;
  FUN_009a8ee0(&local_f4,auStack_e0);
  puStack_10._0_1_ = 4;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  puStack_10._0_1_ = 5;
  FUN_00988f20();
  puStack_10._0_1_ = 6;
  FUN_00988f20();
  puStack_10._0_1_ = 7;
  FUN_00988f20();
  if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_40 = 0xf;
  uStack_44 = 0;
  uStack_54 = uStack_54 & 0xffffff00;
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_78 = 0xf;
  uStack_7c = 0;
  uStack_8c = uStack_8c & 0xffffff00;
  if (0xf < uStack_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_5c = 0xf;
  uStack_60 = 0;
  uStack_70 = uStack_70 & 0xffffff00;
  puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,8);
  FUN_009adb70();
  if (iStack_f0 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  if (0xf < uStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_24 = 0xf;
  uStack_28 = 0;
  uStack_38 = uStack_38 & 0xffffff00;
  if (0xf < uStack_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_cc = 0xf;
  uStack_d0 = 0;
  auStack_e0[0] = auStack_e0[0] & 0xffffff00;
  if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  uStack_c4 = uStack_c4 & 0xffffff00;
  if (0xf < uStack_94) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = pvStack_18;
  return param_1;
}

