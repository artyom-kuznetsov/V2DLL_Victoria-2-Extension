// FUN_008f3c50 @ 008f3c50 body=[[008f3c50, 008f3cc1]]


bool FUN_008f3c50(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0xa0) + 8);
  iVar3 = **(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0xa0);
  iVar4 = *(int *)(iVar3 + 0x14);
  iVar1 = *(int *)(iVar2 + 0x14);
  if ((iVar4 <= iVar1) && ((iVar4 < iVar1 || (*(uint *)(iVar3 + 0x10) < *(uint *)(iVar2 + 0x10)))))
  {
    return *(char *)(in_ECX + 0x1c) == '\x01';
  }
  return *(char *)(in_ECX + 0x1c) == '\0';
}

