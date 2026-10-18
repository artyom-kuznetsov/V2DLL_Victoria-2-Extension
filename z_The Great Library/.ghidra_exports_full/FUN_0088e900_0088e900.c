// FUN_0088e900 @ 0088e900 body=[[0088e900, 0088e93e]]


void FUN_0088e900(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  if (param_2 != 0x4a1) {
    FUN_00876b30(param_1,param_2);
    return;
  }
  iVar1 = FUN_00aaf0c5(param_1 + 0x22c);
  *(int *)(in_ECX + 0x20) = iVar1 * 1000;
  return;
}

