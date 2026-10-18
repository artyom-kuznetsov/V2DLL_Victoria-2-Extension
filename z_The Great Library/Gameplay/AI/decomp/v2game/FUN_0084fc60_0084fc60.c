// FUN_0084fc60 @ 0084fc60  (requested 0084FC60, first bytes: 55 8B EC 6A FF 68 8B F8)


void FUN_0084fc60(void)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0057db30(iVar1,*(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
  ExceptionList = local_10;
  return;
}

