// FUN_005e09f0 @ 005e09f0 body=[[005e09f0, 005e0a4e]]


undefined4 FUN_005e09f0(void)

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
      goto LAB_005e0a35;
    }
  }
  iVar1 = 0;
LAB_005e0a35:
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x74) == 0);
}

