// FUN_0045dca0 @ 0045dca0 body=[[0045dca0, 0045dd17] [0045dd2e, 0045dd4f]]


void FUN_0045dca0(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int local_28 [5];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5fed8;
  local_14 = ExceptionList;
  if (param_2 == 0x3b6) {
    ExceptionList = &local_14;
    (**(code **)(*(int *)(in_ECX + 8) + 0xc))(param_1);
  }
  else if (param_2 == 0x9b9) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[2] = 0;
    local_c = 0;
    ExceptionList = &local_14;
    FUN_0045be80(param_1,local_28);
    FUN_00462dc0();
    iVar1 = local_28[0];
    if (local_28[0] != 0) {
      FUN_00413860();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
  }
  ExceptionList = local_14;
  return;
}

