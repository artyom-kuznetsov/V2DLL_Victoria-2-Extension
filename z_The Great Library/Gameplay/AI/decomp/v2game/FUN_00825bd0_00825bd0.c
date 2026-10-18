// FUN_00825bd0 @ 00825bd0 body=[[00825bd0, 00825c41] [00825c65, 00825c87]]


undefined4 * FUN_00825bd0(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b3abd1;
  local_10 = ExceptionList;
  uStack_7 = 0;
  ExceptionList = &local_10;
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
      param_3[1] = 0;
      param_3[2] = 0;
      *(undefined1 *)(param_3 + 3) = 0;
      iVar2 = *param_1;
      while (iVar2 != 0) {
        iVar1 = *(int *)(iVar2 + 8);
        FUN_0057aab0(iVar2);
        iVar2 = iVar1;
      }
    }
    param_3 = param_3 + 4;
  }
  ExceptionList = local_10;
  return param_3;
}

