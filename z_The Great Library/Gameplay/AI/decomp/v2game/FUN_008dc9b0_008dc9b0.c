// FUN_008dc9b0 @ 008dc9b0 body=[[008dc9b0, 008dca1a]]


undefined4 FUN_008dc9b0(int param_1)

{
  int iVar1;
  undefined3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
  uVar2 = (undefined3)((uint)iVar1 >> 8);
  if (*(int *)(iVar1 + 300) != 0) {
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar1 + 300) * 4) + 0xbe4) ==
        *(int *)(iVar1 + 0x58)) {
      return CONCAT31(uVar2,*(char *)(in_ECX + 0x1c) == '\x01');
    }
  }
  return CONCAT31(uVar2,*(char *)(in_ECX + 0x1c) == '\0');
}

