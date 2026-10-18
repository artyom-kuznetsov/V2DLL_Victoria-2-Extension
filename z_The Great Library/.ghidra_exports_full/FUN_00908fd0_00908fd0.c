// FUN_00908fd0 @ 00908fd0 body=[[00908fd0, 00909025]]


bool FUN_00908fd0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40();
    *(int *)(in_ECX + 0x3c) = iVar1;
    return iVar1 != 0;
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  return false;
}

