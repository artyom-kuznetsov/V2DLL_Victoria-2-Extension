// FUN_00647bf0 @ 00647bf0 body=[[00647bf0, 00647c6f]]


void FUN_00647bf0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x4c);
  uVar2 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_005dfb90(iVar1);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  *(undefined1 *)(in_ECX + 100) = 1;
  *(undefined1 *)(*(int *)(in_ECX + 0x68) + 0xdb0) = 1;
  ExceptionList = local_10;
  return;
}

