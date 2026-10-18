// FUN_007aec10 @ 007aec10 body=[[007aec10, 007aecaa]]


void FUN_007aec10(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  local_14 = ExceptionList;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    ExceptionList = &local_14;
    iVar1 = FUN_00aae9af(0x48);
    local_c = 0;
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0058ad00(iVar1,*(undefined4 *)(DAT_012588e8 + 0xb5c),
                           *(undefined4 *)(DAT_012588e8 + 0xb60),*(undefined4 *)(in_ECX + 0x5c));
    }
    local_c = 0xffffffff;
    iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
    (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))(uVar2);
  }
  ExceptionList = local_14;
  return;
}

