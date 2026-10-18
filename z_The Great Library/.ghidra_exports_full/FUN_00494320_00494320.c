// FUN_00494320 @ 00494320 body=[[00494320, 0049442b] [0049442f, 00494464] [00494468, 00494475] [00494479, 0049448d]]


undefined4 * FUN_00494320(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint in_stack_0000001c;
  uint local_30;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b76a8b;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  FUN_0044bc60();
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_8._0_1_ = 2;
  *param_1 = CContinent::vftable;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0();
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  uVar1 = DAT_00f092fc;
  local_8._0_1_ = 4;
  param_1[0x1f] = 0x18d;
  param_1[0x1e] = CColor::vftable;
  param_1[0x20] = uVar1;
  param_1[0x21] = uVar1;
  param_1[0x22] = uVar1;
  param_1[0x23] = uVar1;
  *(undefined1 *)(param_1 + 0x24) = 1;
  local_14 = FUN_009a8ee0(local_28,param_1 + 0x10);
  local_8._0_1_ = 5;
  iVar2 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
  local_8._0_1_ = 6;
  FUN_00408ed0();
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,7);
  FUN_009adb70();
  if (local_24 != 0) {
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

