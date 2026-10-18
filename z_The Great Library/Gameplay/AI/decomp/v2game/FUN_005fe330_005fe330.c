// FUN_005fe330 @ 005fe330 body=[[005fe330, 005fe3d5]]


void FUN_005fe330(void)

{
  int iVar1;
  uint *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 local_1c [8];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9f88b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af(0x48);
  local_8 = 0;
  local_14 = iVar1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    puVar2 = (uint *)(**(code **)(*in_ECX + 0x14))(local_1c);
    uVar3 = FUN_0058bcf0(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                         *(undefined4 *)(DAT_012588e8 + 0xb60),*puVar2 >> 0xf | puVar2[1] << 0x11);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
  ExceptionList = local_10;
  return;
}

