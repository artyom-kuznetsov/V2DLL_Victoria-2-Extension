// FUN_008d4620 @ 008d4620 body=[[008d4620, 008d467f]]


undefined4 FUN_008d4620(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  if (*(char *)(in_ECX + 0x18) == '\0') {
    if (*(char *)(in_ECX + 0x19) != '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x30);
    }
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0xc);
  }
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  *(char *)(*(int *)(param_1 + 0xc) + *(int *)(iVar1 + 0xd08)) != '\0');
}

