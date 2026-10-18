// FUN_00a139b0 @ 00a139b0 body=[[00a139b0, 00a13a7a]]


void FUN_00a139b0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = DAT_01258a98;
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x7c) < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar3 = FUN_009c1d40();
      goto LAB_00a13a06;
    }
  }
  else if (DAT_01258a94 != 0) {
    iVar3 = FUN_009c1d40();
    goto LAB_00a13a06;
  }
  iVar3 = 0;
LAB_00a13a06:
  *(int *)(in_ECX + 0x78) = iVar3;
  if (iVar3 != 0) {
    if (*(uint *)(in_ECX + 0x7c) < 0x1269) {
      if (iVar2 != 0) {
        FUN_009c1d40();
        FUN_00a14770(in_ECX + 0x3c);
        return;
      }
    }
    else if (iVar1 != 0) {
      FUN_009c1d40();
      FUN_00a14770(in_ECX + 0x3c);
      return;
    }
    FUN_00a14770(in_ECX + 0x3c);
  }
  return;
}

