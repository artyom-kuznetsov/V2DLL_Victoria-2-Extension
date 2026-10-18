// FUN_0089bfa0 @ 0089bfa0 body=[[0089bfa0, 0089bfd6]]


void FUN_0089bfa0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  iVar2 = *(int *)(in_ECX + 0x20) + *(int *)(iVar1 + 0x1430);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  *(int *)(iVar1 + 0x1430) = iVar2;
  return;
}

