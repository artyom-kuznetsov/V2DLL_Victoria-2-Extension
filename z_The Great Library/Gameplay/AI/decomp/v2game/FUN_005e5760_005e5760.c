// FUN_005e5760 @ 005e5760 body=[[005e5760, 005e57be]]


undefined4 FUN_005e5760(void)

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
      goto LAB_005e57a5;
    }
  }
  iVar1 = 0;
LAB_005e57a5:
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(iVar1 + 0x5c) != 0);
}

