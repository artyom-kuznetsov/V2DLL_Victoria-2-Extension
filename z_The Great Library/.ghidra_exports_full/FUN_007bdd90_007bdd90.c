// FUN_007bdd90 @ 007bdd90 body=[[007bdd90, 007bde18]]


void FUN_007bdd90(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x6c);
  uVar2 = 0;
  local_8 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00584e90(iVar1,*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(DAT_012588e8 + 0xb5c)
                         ,*(undefined4 *)(DAT_012588e8 + 0xb60));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

