// FUN_004caaa0 @ 004caaa0 body=[[004caaa0, 004cabf1] [004cabf5, 004cac2a] [004cac2e, 004cac3b] [004cac3f, 004cac53]]


undefined4 * FUN_004caaa0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
  uint local_2c;
  undefined1 local_24 [4];
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b75b8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 1;
  uStack_7 = 0;
  *param_1 = CRegion::vftable;
  param_1[10] = 0;
  param_1[0xb] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  FUN_00408ed0();
  param_1[0x12] = 0xf;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  uVar1 = DAT_00f092fc;
  local_8 = 3;
  param_1[0x14] = CColor::vftable;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar1;
  param_1[0x19] = uVar1;
  *(undefined1 *)(param_1 + 0x1a) = 1;
  param_1[0x15] = 0x18d;
  param_1[0x1b] = in_stack_00000024;
  param_1[0x1f] = in_stack_00000024;
  param_1[0x1e] = 0x18d;
  param_1[0x1d] = CColonizationData::vftable;
  param_1[0x20] = 0;
  param_1[0x21] = 43800000;
  param_1[0x21] = DAT_01259abc;
  param_1[0x22] = 0;
  _eh_vector_constructor_iterator_(param_1 + 0x23,0x1c,4,FUN_004ca290,FUN_004010c0);
  local_8 = 4;
  FUN_009a8ee0(local_24,param_1 + 6);
  local_8 = 5;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8 = 6;
  FUN_00408ed0();
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  _local_8 = CONCAT31(uStack_7,7);
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

