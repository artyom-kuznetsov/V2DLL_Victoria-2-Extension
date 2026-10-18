// FUN_0092cab0 @ 0092cab0 body=[[0092cab0, 0092cb05]]


void FUN_0092cab0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x2c) = in_ECX;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0xc) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x2c) = in_ECX;
  return;
}

