// FUN_00567280 @ 00567280 body=[[00567280, 005673b5] [005673b9, 005673f0] [005673f6, 0056740c] [00567410, 0056741d] [00567421, 00567435]]


undefined4 * FUN_00567280(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_ECX;
  uint in_stack_00000020;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b724a0;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[2] = in_ECX;
  param_1[1] = 0x18d;
  *param_1 = CReligion::vftable;
  param_1[3] = 0;
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00408ed0();
  param_1[0x10] = 0xf;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  uVar1 = DAT_00f092fc;
  local_8._0_1_ = 2;
  param_1[0x13] = param_2;
  param_1[0x15] = 0x18d;
  param_1[0x14] = CColor::vftable;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  uVar1 = FUN_009902d0(&param_3,0);
  param_1[0x12] = uVar1;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  FUN_009a8ee0(local_24,local_40);
  local_8._0_1_ = 4;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 5;
  FUN_00408ed0();
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_2c) {
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

