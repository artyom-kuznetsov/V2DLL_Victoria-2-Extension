// FUN_009f4530 @ 009f4530 body=[[009f4530, 009f45f1]]


void FUN_009f4530(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = DAT_01258a98;
  iVar1 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar3 = FUN_009c1d40();
      goto LAB_009f4583;
    }
  }
  else if (DAT_01258a94 != 0) {
    iVar3 = FUN_009c1d40();
    goto LAB_009f4583;
  }
  iVar3 = 0;
LAB_009f4583:
  *(int *)(in_ECX + 0x3c) = iVar3;
  if ((iVar3 != 0) && (*(int *)(in_ECX + 100) != 0)) {
    if (*(uint *)(in_ECX + 0x40) < 0x1269) {
      if (iVar2 != 0) {
        FUN_009c1d40();
        FUN_009f40a0();
        return;
      }
    }
    else if (iVar1 != 0) {
      FUN_009c1d40();
      FUN_009f40a0();
      return;
    }
    FUN_009f40a0();
  }
  return;
}

