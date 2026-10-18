// FUN_00624ca0 @ 00624ca0 body=[[00624ca0, 00624d35]]


void FUN_00624ca0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*param_1 + 0x80))();
  iVar2 = FUN_00aae9af(0x48);
  uVar3 = 0;
  local_8 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_005894d0(iVar2,iVar1 == 1);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = local_10;
  return;
}

