// FUN_004565b0 @ 004565b0 body=[[004565b0, 00456600]]


void FUN_004565b0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_2 + 0x118) + DAT_01258720 * 4);
  iVar1 = *(int *)(*(int *)(iVar2 + 0x18) + 0xdc);
  if (0 < iVar1) {
    iVar2 = __alldiv((longlong)*(int *)(iVar2 + 0x24) * (longlong)iVar1,1000,0);
    *param_1 = iVar2 + 100000;
    return;
  }
  *param_1 = 0;
  return;
}

