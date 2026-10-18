// FUN_00a5dc20 @ 00a5dc20 body=[[00a5dc20, 00a5dcb3] [00a5dcb7, 00a5dcca]]


undefined4 FUN_00a5dc20(int param_1,undefined4 param_2,int param_3)

{
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
  FUN_009a8ee0(local_28,param_1 + 200);
  local_8 = 1;
  FUN_009a9880(*(undefined8 *)(*(int *)(param_3 + 0xa8) + 8),
               *(undefined8 *)(*(int *)(param_3 + 0xa8) + 0x10));
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

