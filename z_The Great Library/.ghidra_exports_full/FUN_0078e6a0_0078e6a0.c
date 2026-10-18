// FUN_0078e6a0 @ 0078e6a0 body=[[0078e6a0, 0078e71c]]


void FUN_0078e6a0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(100);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005e33e0(iVar1,*(undefined4 *)(in_ECX + 600));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

