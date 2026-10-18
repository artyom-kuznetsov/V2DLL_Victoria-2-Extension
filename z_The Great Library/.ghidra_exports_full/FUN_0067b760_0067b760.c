// FUN_0067b760 @ 0067b760 body=[[0067b760, 0067b7c7]]


void FUN_0067b760(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3b8a1;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_1 = *in_ECX;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    iVar2 = in_ECX[1];
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0057aab0(iVar2);
      iVar2 = iVar1;
    }
  }
  ExceptionList = local_10;
  return;
}

