// FUN_0057fec0 @ 0057fec0 body=[[0057fec0, 0057ff1f]]


uint FUN_0057fec0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(DAT_012587e4 + 4);
  if (((*(char *)(*(int *)(uVar2 + *(int *)(in_ECX + 0x48) * 4) + 0x67c) == '\0') &&
      (*(int *)(in_ECX + 0x40) != 0)) && (*(int *)(in_ECX + 0x48) != 0)) {
    iVar1 = *(int *)(uVar2 + *(int *)(in_ECX + 0x40) * 4);
    uVar2 = iVar1 + 0x9d8;
    if ((int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU) < 1) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

