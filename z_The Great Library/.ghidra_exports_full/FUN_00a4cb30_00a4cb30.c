// FUN_00a4cb30 @ 00a4cb30 body=[[00a4cb30, 00a4cb73]]


void FUN_00a4cb30(int param_1,int param_2)

{
  int iVar1;
  
  do {
    iVar1 = param_1 + 0x50;
    D3DXMatrixMultiply(iVar1,param_1 + 4,param_2);
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_00a4cb30(*(int *)(param_1 + 0x48),param_2);
    }
    param_1 = *(int *)(param_1 + 0x4c);
    param_2 = iVar1;
  } while (param_1 != 0);
  return;
}

