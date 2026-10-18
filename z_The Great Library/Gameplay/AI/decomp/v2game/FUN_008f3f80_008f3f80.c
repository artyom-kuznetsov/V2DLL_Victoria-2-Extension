// FUN_008f3f80 @ 008f3f80 body=[[008f3f80, 008f4007]]


uint FUN_008f3f80(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x6c) + 0x50);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    (*(int *)(iVar1 + 0x20) != 0) == (bool)*(char *)(in_ECX + 0x1c));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                             0xe64) + 0x50);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    (*(int *)(iVar1 + 0x20) != 0) == (bool)*(char *)(in_ECX + 0x1c));
  }
  return uVar2 & 0xffffff00;
}

