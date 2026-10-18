// FUN_006d1170 @ 006d1170 body=[[006d1170, 006d11fa]]


void FUN_006d1170(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_006d06b0();
  if (iVar1 != 0) {
    iVar3 = DAT_012588e8 + 0xb5c;
    iVar1 = FUN_00aae9af(0x50);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_005880f0(iVar1,iVar3);
    }
    local_8 = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  }
  ExceptionList = local_10;
  return;
}

