// FUN_008b1c00 @ 008b1c00 body=[[008b1c00, 008b1c63]]


uint FUN_008b1c00(void)

{
  int iVar1;
  uint uVar2;
  int in_EDX;
  
  if (*(int *)(in_EDX + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 0x18) * 4);
    if ((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1) {
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  uVar2 = *(uint *)(in_EDX + 8);
  if ((*(int *)(uVar2 + 0x50) - *(int *)(uVar2 + 0x4c) & 0xfffffffcU) == 0) {
    return uVar2 & 0xffffff00;
  }
  uVar2 = (**(code **)(*(int *)(uVar2 + 0x44) + 0x18))(in_EDX + 0xc);
  return uVar2;
}

