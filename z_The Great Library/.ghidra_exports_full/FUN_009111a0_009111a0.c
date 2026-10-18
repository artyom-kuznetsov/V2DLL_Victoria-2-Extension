// FUN_009111a0 @ 009111a0 body=[[009111a0, 0091126f] [00911273, 00911286]]


undefined4 FUN_009111a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4a9a9;
  local_10 = ExceptionList;
  local_8 = 0;
  if (*(int **)(in_ECX + 0x3c) == (int *)0x0) {
    ExceptionList = &local_10;
    iVar1 = FUN_00aae9af(0x40);
    local_8._0_1_ = 2;
    if (iVar1 == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_00aae9af(0x44);
      local_8._0_1_ = 3;
      if (iVar2 == 0) {
        local_8._0_1_ = 2;
        uVar3 = FUN_0090f620(iVar1,0);
      }
      else {
        uVar3 = FUN_00913230(iVar2);
        local_8._0_1_ = 2;
        uVar3 = FUN_0090f620(iVar1,uVar3);
      }
    }
  }
  else {
    ExceptionList = &local_10;
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x30))();
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x1c);
    iVar2 = FUN_00aae9af(0x40);
    local_8._0_1_ = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0090f620(iVar2,iVar1);
    }
  }
  if (in_stack_00000018 < 0x10) {
    ExceptionList = local_10;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

