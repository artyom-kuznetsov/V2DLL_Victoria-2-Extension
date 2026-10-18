// FUN_0073c880 @ 0073c880 body=[[0073c880, 0073c927]]


void FUN_0073c880(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x4c);
  uVar3 = 0;
  local_c = 0;
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x30) + 0x164) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = **(int **)(*(int *)(param_1 + 0x30) + 0x15c);
    }
    uVar3 = FUN_00589840(iVar1,*(undefined4 *)(iVar2 + 0x6c),*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60));
  }
  local_c = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = pvStack_18;
  return;
}

