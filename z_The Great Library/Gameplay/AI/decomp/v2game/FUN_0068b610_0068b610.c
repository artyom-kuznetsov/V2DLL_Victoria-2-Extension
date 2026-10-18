// FUN_0068b610 @ 0068b610 body=[[0068b610, 0068b64e]]


int FUN_0068b610(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  while( true ) {
    if (iVar1 == 0) {
      return param_1 + 0x28;
    }
    iVar2 = *(int *)(iVar1 + 0x1c);
    iVar3 = (**(code **)(**(int **)(param_1 + 0xb24) + 0x44))();
    if (iVar2 == *(int *)(iVar3 + 0x6c)) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  return iVar1;
}

