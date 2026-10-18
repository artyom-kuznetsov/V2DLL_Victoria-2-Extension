// FUN_00a71800 @ 00a71800 body=[[00a71800, 00a7186f] [00a71873, 00a718a0]]


void FUN_00a71800(undefined4 param_1,int param_2)

{
  int iVar1;
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b5fed8;
  local_14 = ExceptionList;
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[2] = 0;
  local_c = 0;
  if (param_2 != 0xd0) {
    ExceptionList = &local_14;
    FUN_009a0f40();
    ExceptionList = local_14;
    return;
  }
  ExceptionList = &local_14;
  FUN_0045be80(param_1,local_28);
  FUN_00462dc0();
  iVar1 = local_28[0];
  if (local_28[0] != 0) {
    FUN_00413860();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(iVar1);
  }
  ExceptionList = local_14;
  return;
}

