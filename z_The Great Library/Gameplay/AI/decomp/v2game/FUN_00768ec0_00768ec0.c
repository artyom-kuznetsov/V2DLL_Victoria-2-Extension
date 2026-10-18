// FUN_00768ec0 @ 00768ec0 body=[[00768ec0, 00768f89]]


void FUN_00768ec0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a1c6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x44);
  uVar2 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_0072b010(iVar1,*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xa4));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  iVar1 = FUN_00aae9af(0xf0);
  local_8 = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0072ab10(iVar1,*(undefined4 *)(in_ECX + 0x28));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

