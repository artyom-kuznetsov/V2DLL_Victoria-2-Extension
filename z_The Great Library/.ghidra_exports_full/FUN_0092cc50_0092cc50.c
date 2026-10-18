// FUN_0092cc50 @ 0092cc50 body=[[0092cc50, 0092cc9d]]


void FUN_0092cc50(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_012587e4;
  *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                            0xbe8) + *(int *)(in_ECX + 0x14) * 4) + 0x30) = in_ECX;
  *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                   *(int *)(in_ECX + 0xc) * 4) + 0x30) = in_ECX;
  return;
}

