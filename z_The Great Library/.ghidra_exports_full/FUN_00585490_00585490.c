// FUN_00585490 @ 00585490 body=[[00585490, 00585670]]


void FUN_00585490(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  iVar3 = DAT_01258a98;
  iVar4 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_005854da;
    iVar2 = FUN_009c1d40();
  }
  else if (DAT_01258a94 == 0) {
LAB_005854da:
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_009c1d40();
    iVar3 = DAT_01258a98;
  }
  if (DAT_012586f1 == '\0') {
    if (*(int *)(iVar2 + 0x84) < 1) {
      return;
    }
    if (*(int *)(iVar2 + 0x84) != 1) {
      return;
    }
  }
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (iVar3 == 0) goto LAB_0058554a;
    iVar3 = FUN_009c1d40();
  }
  else if (iVar4 == 0) {
LAB_0058554a:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
  }
  iVar2 = DAT_012588e8;
  for (piVar5 = *(int **)(iVar3 + 0x48);
      (iVar1 = DAT_01258a94, *(int **)(iVar3 + 0x48) <= piVar5 && (piVar5 < *(int **)(iVar3 + 0x4c))
      ); piVar5 = piVar5 + 1) {
    *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0xacc) + *piVar5 * 4) + 400) = 2;
    iVar4 = iVar1;
  }
  *(undefined4 *)(iVar3 + 0x84) = 2;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 == 0) goto LAB_005855cb;
    iVar3 = FUN_009c1d40();
  }
  else if (iVar4 == 0) {
LAB_005855cb:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_009c1d40();
  }
  if (*(int *)(iVar3 + 0x5c) == *(int *)(iVar2 + 0xb60)) {
    piVar5 = *(int **)(iVar2 + 0xb24);
    iVar4 = (**(code **)(*piVar5 + 0x124))();
    if ((iVar4 != 0) && (*(char *)(*(int *)(iVar4 + 0x20) + 0x67) != '\0')) {
      FUN_00740050(iVar4);
    }
    (**(code **)(*piVar5 + 0xe0))(4);
    iVar4 = DAT_01258a94;
  }
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    if (DAT_01258a98 != 0) {
      iVar4 = FUN_009c1d40();
      goto LAB_0058564e;
    }
  }
  else if (iVar4 != 0) {
    iVar4 = FUN_009c1d40();
    goto LAB_0058564e;
  }
  iVar4 = 0;
LAB_0058564e:
  FUN_00545be0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0x5c) * 4));
  return;
}

