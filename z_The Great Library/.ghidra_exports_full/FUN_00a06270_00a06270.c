// FUN_00a06270 @ 00a06270 body=[[00a06270, 00a062fc]]


void FUN_00a06270(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b524bb;
  local_10 = ExceptionList;
  if (param_2 != 0xe7) {
    ExceptionList = &local_10;
    FUN_009a2620(param_1,param_2);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0xa0);
  local_8 = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00a16090(iVar1);
  }
  local_8 = 0xffffffff;
  *(int **)(in_ECX + 0x3c) = piVar2;
  (**(code **)(*piVar2 + 0xc))(param_1);
  ExceptionList = local_10;
  return;
}

