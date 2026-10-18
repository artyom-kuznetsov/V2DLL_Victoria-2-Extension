// FUN_00585870 @ 00585870 body=[[00585870, 00585970]]


undefined4 FUN_00585870(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  iVar2 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_005858c2;
    iVar1 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_005858c2:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_009c1d40();
  }
  *(int *)(in_ECX + 0x3c) = iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x68) == 0) {
    return 0;
  }
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar2 = FUN_009c1d40();
      goto LAB_00585915;
    }
  }
  else if (iVar2 != 0) {
    iVar2 = FUN_009c1d40();
    goto LAB_00585915;
  }
  iVar2 = 0;
LAB_00585915:
  if ((DAT_012586f1 != '\0') || ((0 < *(int *)(iVar2 + 0x84) && (*(int *)(iVar2 + 0x84) == 1)))) {
    iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x68) * 4);
    iVar1 = *(int *)(iVar2 + 0x15c4);
    iVar2 = *(int *)(iVar2 + 0x15c0);
    FUN_00967f10();
    iVar3 = FUN_004d5e90();
    if (iVar3 <= iVar1 - iVar2) {
      return 1;
    }
  }
  return 0;
}

