// FUN_006aa9c0 @ 006aa9c0 body=[[006aa9c0, 006aaa63]]


void FUN_006aa9c0(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4c0cb;
  pvStack_14 = ExceptionList;
  iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x48);
  local_c = 1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005dce00(iVar1,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),1);
  }
  local_c = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(iVar3 + 0xcdc) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar2);
  ExceptionList = pvStack_18;
  return;
}

