// FUN_005928b0 @ 005928b0 body=[[005928b0, 00592900]]


bool FUN_005928b0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x74) < 0x1269) {
    iVar1 = DAT_01258a98;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_009c1d40();
    if (iVar1 != 0) {
      return *(int *)(in_ECX + 0x48) != 0;
    }
  }
  return false;
}

