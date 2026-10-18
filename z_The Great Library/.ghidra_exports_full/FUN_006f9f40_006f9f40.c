// FUN_006f9f40 @ 006f9f40 body=[[006f9f40, 006f9fe9]]


void FUN_006f9f40(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar3 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = FUN_00aae9af(0x58);
  local_c = 0;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0057c080(iVar1,*(undefined4 *)(iVar3 + 0xb5c),*(undefined4 *)(iVar3 + 0xb60),
                         *(undefined4 *)(*(int *)(in_ECX + 0xd4) + 0x2c));
  }
  local_c = 0xffffffff;
  iVar3 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar3 + 0x38) + 0x18))(uVar2);
  FUN_006f9ff0();
  ExceptionList = pvStack_18;
  return;
}

