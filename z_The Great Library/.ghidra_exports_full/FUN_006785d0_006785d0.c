// FUN_006785d0 @ 006785d0 body=[[006785d0, 006786d5]]


void FUN_006785d0(char param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9a5b6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int **)(in_ECX + 0x1d80) != (int *)0x0) {
    ExceptionList = &local_10;
    (**(code **)(**(int **)(in_ECX + 0x1d80) + 4))(1);
    *(undefined4 *)(in_ECX + 0x1d80) = 0;
    if (*(int **)(in_ECX + 0x1d84) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x1d84) + 4))(1);
    }
    *(undefined4 *)(in_ECX + 0x1d84) = 0;
  }
  if (param_1 != '\0') {
    iVar1 = FUN_00aae9af(0x40);
    local_8 = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_008677a0(iVar1);
    }
    local_8 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x1d80) = uVar2;
    if (param_2 < 1) {
      param_2 = 1;
    }
    iVar1 = FUN_00aae9af(0xb0);
    local_8 = 1;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00985170(iVar1,in_ECX,*(undefined4 *)(in_ECX + 0x1d80));
    }
    local_8 = 0xffffffff;
    *(int *)(in_ECX + 0x1d84) = iVar1;
    (**(code **)(*(int *)(*(int *)(iVar1 + 0x20) + 0x18) + 0x34))();
    FUN_00867dd0(*(undefined4 *)(in_ECX + 0x1d80),param_2 + -1,*(undefined4 *)(DAT_012588e8 + 0xd18)
                );
  }
  ExceptionList = local_10;
  return;
}

