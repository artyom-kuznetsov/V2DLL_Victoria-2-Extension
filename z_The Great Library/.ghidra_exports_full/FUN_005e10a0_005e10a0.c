// FUN_005e10a0 @ 005e10a0 body=[[005e10a0, 005e1111]]


void FUN_005e10a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x3c) = iVar1;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x74) != 0)) {
    FUN_005cb230(iVar1);
    FUN_0068a900(iVar1);
  }
  return;
}

