// FUN_00750790 @ 00750790 body=[[00750790, 00750835]]


void FUN_00750790(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x48);
  local_8 = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(int *)(in_ECX + 0xdc) + 0x164) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = **(int **)(*(int *)(in_ECX + 0xdc) + 0x15c);
    }
    uVar2 = FUN_00589d40(iVar1,*(undefined4 *)(iVar3 + 0x6c),*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60));
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  ExceptionList = local_10;
  return;
}

