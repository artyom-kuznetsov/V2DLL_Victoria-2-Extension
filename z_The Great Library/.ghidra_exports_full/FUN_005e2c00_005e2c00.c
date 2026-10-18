// FUN_005e2c00 @ 005e2c00 body=[[005e2c00, 005e2c67]]


void FUN_005e2c00(void)

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
      *(int *)(in_ECX + 0x3c) = iVar1 + -8;
      FUN_005cdc70(in_ECX + 100);
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  FUN_005cdc70(in_ECX + 100);
  return;
}

