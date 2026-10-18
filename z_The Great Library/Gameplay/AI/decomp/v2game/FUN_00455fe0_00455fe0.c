// FUN_00455fe0 @ 00455fe0 body=[[00455fe0, 00456107]]


void FUN_00455fe0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int in_EDX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b47026;
  local_14 = ExceptionList;
  piVar1 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EDX + 0x10) * 4) + 0x148c);
  do {
    ExceptionList = &local_14;
    if (piVar1 == (int *)0x0) goto LAB_004560ea;
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[2];
  } while (*(int *)(iVar2 + 0x6c) != in_ECX);
  ExceptionList = &local_14;
  iVar2 = FUN_00aae9af(0x48);
  local_c = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00584a30(iVar2,in_ECX,*(undefined4 *)(in_EDX + 0xc),*(undefined4 *)(in_EDX + 0x10));
  }
  local_c = 0xffffffff;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  iVar2 = FUN_00aae9af(0x4c);
  puStack_10 = (undefined1 *)0x1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00584340(iVar2,*(undefined4 *)(in_EDX + 0x18),*(undefined4 *)(in_EDX + 0xc),
                         *(undefined4 *)(in_EDX + 0x10),*(undefined4 *)(in_EDX + 0x14));
  }
  puStack_10 = (undefined1 *)0xffffffff;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
LAB_004560ea:
  if (*(int *)(in_EDX + 8) != 0) {
    FUN_00749870(*(int *)(in_EDX + 8));
  }
  ExceptionList = local_14;
  return;
}

