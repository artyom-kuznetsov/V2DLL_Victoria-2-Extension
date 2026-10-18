// FUN_00825b60 @ 00825b60 body=[[00825b60, 00825bc1]]


void FUN_00825b60(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_10 = ExceptionList;
  puStack_c = &LAB_00b3b8a1;
  local_8 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_10;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    iVar2 = *param_2;
    while (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 8);
      FUN_0057aab0(iVar2);
      iVar2 = iVar1;
    }
  }
  ExceptionList = local_10;
  return;
}

