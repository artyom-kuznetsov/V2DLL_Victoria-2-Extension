// FUN_00749c80 @ 00749c80 body=[[00749c80, 00749e19]]


void FUN_00749c80(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  undefined4 uVar4;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b47026;
  pvStack_14 = ExceptionList;
  if (*(int *)(*(int *)(in_ECX + 0x38) + 0x164) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(*(int *)(in_ECX + 0x38) + 0x15c);
  }
  ExceptionList = &pvStack_14;
  cVar1 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                          *(int *)(*(int *)(in_ECX + 0x3c) + 4) * 0x10) +
                                 *(int *)(iVar2 + 0x6c) * 4) + 0x34))();
  iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 0x3c) + 4) * 4);
  if (*(int *)(iVar2 + 0x1494) < *(int *)(iVar2 + 0x1488)) {
    if (cVar1 == '\0') goto LAB_00749d9f;
  }
  else if (cVar1 == '\0') {
    FUN_007496f0(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(*(int *)(in_ECX + 0x38) + 0x58));
    ExceptionList = pvStack_14;
    return;
  }
  iVar2 = FUN_00aae9af(0x48);
  uVar4 = 0;
  uStack_c = 0;
  if (iVar2 != 0) {
    if (*(int *)(*(int *)(in_ECX + 0x38) + 0x164) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(*(int *)(in_ECX + 0x38) + 0x15c);
    }
    uVar4 = FUN_00584a30(iVar2,*(undefined4 *)(iVar3 + 0x6c),**(undefined4 **)(in_ECX + 0x3c),
                         (*(undefined4 **)(in_ECX + 0x3c))[1]);
  }
  uStack_c = 0xffffffff;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar4);
LAB_00749d9f:
  iVar2 = FUN_00aae9af(0x4c);
  uStack_c = 1;
  if (iVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00584340(iVar2,*(undefined4 *)(*(int *)(in_ECX + 0x38) + 0x58),
                         **(undefined4 **)(in_ECX + 0x3c),(*(undefined4 **)(in_ECX + 0x3c))[1],
                         *(undefined4 *)(in_ECX + 4));
  }
  uStack_c = 0xffffffff;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar4);
  FUN_00749870(*(undefined4 *)(in_ECX + 0x40));
  ExceptionList = pvStack_18;
  return;
}

