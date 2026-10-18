// FUN_00624960 @ 00624960 body=[[00624960, 00624a32]]


void FUN_00624960(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = DAT_012587e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fccb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + iVar1 * 4);
  local_1c = *(undefined4 *)(iVar2 + 0x1c);
  local_18 = *(undefined4 *)(iVar2 + 0x20);
  iVar2 = FUN_00aae9af(0x50);
  uVar3 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_00586bf0(iVar2,DAT_012588e8 + 0xb5c,&local_1c);
  }
  local_8 = 0xffffffff;
  iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar2 + 0x38) + 0x18))(uVar3);
  ExceptionList = local_10;
  return;
}

