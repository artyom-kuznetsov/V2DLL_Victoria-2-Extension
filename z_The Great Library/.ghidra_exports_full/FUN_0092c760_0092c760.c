// FUN_0092c760 @ 0092c760 body=[[0092c760, 0092c7fc]]


void FUN_0092c760(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = DAT_012587e4;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                           0xbe8) + *(int *)(in_ECX + 0x14) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x20) = in_ECX;
  iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(in_ECX + 0x14) * 4) + 0xbe8) +
                  *(int *)(in_ECX + 0xc) * 4);
  *(undefined1 *)(iVar1 + 0x71) = 1;
  *(int *)(iVar1 + 0x20) = in_ECX;
  if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
    iVar1 = *(int *)(DAT_012588e8 + 0xb24);
    *(uint *)(iVar1 + 0x74) = *(uint *)(iVar1 + 0x74) | 0xf;
    if ((*(int *)(iVar1 + 0x7c) - *(int *)(iVar1 + 0x78) & 0xfffffffcU) == 0) {
      FUN_004e9b90();
      return;
    }
    **(undefined4 **)(iVar1 + 0x78) = 0xffffffff;
  }
  return;
}

