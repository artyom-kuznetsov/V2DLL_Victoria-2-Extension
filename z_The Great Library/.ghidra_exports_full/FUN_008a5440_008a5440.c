// FUN_008a5440 @ 008a5440 body=[[008a5440, 008a54ba]]


void FUN_008a5440(void)

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
  iVar1 = FUN_00aae9af(0x40);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00589030(iVar1,*(undefined1 *)(in_ECX + 0x20));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

