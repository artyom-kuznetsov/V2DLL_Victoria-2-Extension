// FUN_009790b0 @ 009790b0 body=[[009790b0, 00979141] [00979145, 00979158]]


undefined4 FUN_009790b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b7230b;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_009a8ee0(local_28,param_1 + 0x30);
  local_8 = 1;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c),*(undefined8 *)(iVar1 + 0x74));
  local_14 = 1;
  local_8 = 2;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

