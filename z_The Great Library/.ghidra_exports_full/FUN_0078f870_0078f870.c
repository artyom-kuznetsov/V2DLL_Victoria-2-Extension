// FUN_0078f870 @ 0078f870 body=[[0078f870, 0078f8fc]]


void FUN_0078f870(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0078f7d0(in_ECX);
  if (iVar1 != 0) {
    iVar2 = FUN_00aae9af(0x8c);
    local_8 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_005e5080(iVar2,*(undefined4 *)(in_ECX + 600),iVar1);
    }
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  }
  ExceptionList = local_10;
  return;
}

