// FUN_00560ad0 @ 00560ad0 body=[[00560ad0, 00560c62] [00560c66, 00560c97] [00560c9b, 00560cb6] [00560cba, 00560cc7] [00560ccb, 00560cdf]]


undefined4 * FUN_00560ad0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_stack_00000020;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b725b9;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCulture::vftable;
  param_1[2] = 0;
  local_18 = 0x2d2d2d;
  param_1[4] = 0x2d2d2d;
  param_1[5] = 0;
  param_1[0xb] = 0xf;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00408ed0();
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar2 = DAT_00f092fc;
  param_1[0x14] = param_2;
  param_1[0x16] = 0x18d;
  param_1[0x15] = CColor::vftable;
  param_1[0x17] = uVar2;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar2;
  *(undefined1 *)(param_1 + 0x1b) = 1;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_009b7500();
  if ((DAT_00f0ec08 == 0) || (piVar1 = (int *)FUN_009e6c10(), piVar1 == (int *)0x0)) {
    iVar3 = 0xc;
  }
  else {
    iVar3 = *piVar1;
  }
  param_1[3] = iVar3;
  if (iVar3 == 0xc) {
    uVar2 = FUN_009902d0(&param_3,0);
    param_1[3] = uVar2;
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 5;
  FUN_009a8ee0(local_2c,local_48);
  local_8._0_1_ = 6;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 7;
  FUN_00408ed0();
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

