// FUN_00576a40 @ 00576a40 body=[[00576a40, 00576b38] [00576b3c, 00576b73] [00576b79, 00576b8f] [00576b93, 00576ba0] [00576ba4, 00576bb8]]


undefined4 * FUN_00576a40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_stack_0000001c;
  undefined4 in_stack_00000024;
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
  
  puStack_c = &LAB_00b72380;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  *param_1 = CTechnologyFolder::vftable;
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0();
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  local_8._0_1_ = 2;
  param_1[0x10] = in_stack_00000024;
  uVar1 = FUN_009902d0(&param_2,0);
  param_1[1] = uVar1;
  local_2c = 0xf;
  local_30 = 0;
  local_40[0] = local_40[0] & 0xffffff00;
  FUN_00408ed0();
  local_8._0_1_ = 3;
  in_stack_00000024 = FUN_009a8ee0(local_24,local_40);
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
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_1;
}

