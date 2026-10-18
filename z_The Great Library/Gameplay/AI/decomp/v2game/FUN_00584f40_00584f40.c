// FUN_00584f40 @ 00584f40 body=[[00584f40, 0058509a]]


void FUN_00584f40(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  
  iVar5 = DAT_01258a98;
  iVar3 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 != 0) {
      FUN_009c1d40();
      iVar3 = DAT_01258a94;
    }
  }
  else if (DAT_01258a94 != 0) {
    FUN_009c1d40();
    iVar5 = DAT_01258a98;
  }
  cVar2 = FUN_004d1e40();
  if (cVar2 == '\0') {
    return;
  }
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (iVar5 != 0) {
      iVar3 = FUN_009c1d40();
      goto LAB_00584ff3;
    }
  }
  else if (iVar3 != 0) {
    iVar3 = FUN_009c1d40();
    goto LAB_00584ff3;
  }
  iVar3 = 0;
LAB_00584ff3:
  iVar5 = *(int *)(iVar3 + 0x5c);
  iVar3 = *(int *)(DAT_012588e8 + 0xb60);
  iVar4 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar4 = DAT_01258a98;
  }
  if (iVar4 != 0) {
    FUN_009c1d40();
  }
  FUN_004d1fa0();
  if (iVar5 == iVar3) {
    piVar1 = *(int **)(DAT_012588e8 + 0xb24);
    iVar3 = (**(code **)(*piVar1 + 0x124))();
    if ((iVar3 != 0) && (*(char *)(*(int *)(iVar3 + 0x20) + 0x67) != '\0')) {
      FUN_00740050(iVar3);
    }
    (**(code **)(*piVar1 + 0xe0))(4);
  }
  FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + iVar5 * 4));
  return;
}

