// FUN_0072ca50 @ 0072ca50 body=[[0072ca50, 0072caa9]]


bool FUN_0072ca50(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 100) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40();
    *(int *)(in_ECX + 0x60) = iVar1;
    return iVar1 != 0;
  }
  *(undefined4 *)(in_ECX + 0x60) = 0;
  return false;
}

