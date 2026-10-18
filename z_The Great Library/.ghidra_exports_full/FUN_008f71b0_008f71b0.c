// FUN_008f71b0 @ 008f71b0 body=[[008f71b0, 008f71e7]]


undefined4 FUN_008f71b0(int param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(in_ECX + 0x19) != '\0') {
    iVar1 = *(int *)(param_1 + 0x30);
  }
  return CONCAT31((int3)((uint)DAT_012587e4 >> 8),
                  *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x1544));
}

