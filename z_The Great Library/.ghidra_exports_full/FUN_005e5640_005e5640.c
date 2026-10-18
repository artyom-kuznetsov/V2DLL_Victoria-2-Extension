// FUN_005e5640 @ 005e5640 body=[[005e5640, 005e569c]]


void FUN_005e5640(void)

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
      goto LAB_005e5685;
    }
  }
  iVar1 = 0;
LAB_005e5685:
  *(int *)(in_ECX + 0x3c) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x5c) != 0)) {
    FUN_005da120();
  }
  return;
}

