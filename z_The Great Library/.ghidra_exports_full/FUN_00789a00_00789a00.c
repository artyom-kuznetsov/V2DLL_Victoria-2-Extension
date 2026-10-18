// FUN_00789a00 @ 00789a00 body=[[00789a00, 00789a5c]]


undefined4 FUN_00789a00(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x70) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40();
    if (iVar1 != 0) {
      iVar1 = iVar1 + -8;
      *(int *)(in_ECX + 0x6c) = iVar1;
      return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 != 0);
    }
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  return 0;
}

