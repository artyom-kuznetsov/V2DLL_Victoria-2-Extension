// FUN_00880e70 @ 00880e70 body=[[00880e70, 00880fa8]]


void FUN_00880e70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 local_20;
  int local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b6342b;
  local_14 = ExceptionList;
  local_20 = *(undefined4 *)(in_ECX + 0x20);
  local_1c = *(int *)(in_ECX + 0x24);
  if (*(char *)(in_ECX + 0x28) != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                             0xe64) + 0x50);
    local_20 = *(undefined4 *)(iVar1 + 0x1c);
    local_1c = *(int *)(iVar1 + 0x20);
  }
  if (local_1c != 0) {
    if (*(char *)(in_ECX + 0x29) == '\0') {
      if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0xc)) {
        ExceptionList = &local_14;
        iVar1 = FUN_00aae9af(0x50);
        local_c = 0;
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          iVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
          uVar3 = FUN_007297a0(iVar1,local_20,local_1c,*(undefined4 *)(param_1 + 8),
                               *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar2 + 0x6c));
        }
        local_c = 0xffffffff;
        iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar3);
      }
    }
    else {
      ExceptionList = &local_14;
      FUN_006881d0(DAT_012588e8,param_1 + 8,&local_20);
    }
    *(undefined4 *)(param_1 + 8) = local_20;
    *(int *)(param_1 + 0xc) = local_1c;
  }
  ExceptionList = local_14;
  return;
}

