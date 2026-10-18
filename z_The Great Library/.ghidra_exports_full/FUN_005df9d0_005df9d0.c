// FUN_005df9d0 @ 005df9d0 body=[[005df9d0, 005dfa60]]


uint FUN_005df9d0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40();
    if (iVar1 != 0) {
      iVar1 = iVar1 + -8;
      goto LAB_005dfa15;
    }
  }
  iVar1 = 0;
LAB_005dfa15:
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_009c16d0(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)(iVar1 + -8) >> 8),*(char *)(iVar1 + 0xfc) == '\0');
  }
  return (uint)(cRam00000104 == '\0');
}

