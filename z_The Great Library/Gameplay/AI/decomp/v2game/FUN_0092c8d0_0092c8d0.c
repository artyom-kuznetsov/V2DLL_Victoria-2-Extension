// FUN_0092c8d0 @ 0092c8d0 body=[[0092c8d0, 0092c925]]


void FUN_0092c8d0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x28) = in_ECX;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0xc) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x28) = in_ECX;
  return;
}

