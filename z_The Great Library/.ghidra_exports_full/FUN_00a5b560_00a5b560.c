// FUN_00a5b560 @ 00a5b560 body=[[00a5b560, 00a5b5f6] [00a5b5fa, 00a5b64c] [00a5b650, 00a5b667]]


int FUN_00a5b560(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  uint in_stack_00000018;
  undefined4 in_stack_00000020;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3b6c0;
  local_10 = ExceptionList;
  iVar2 = 0;
  local_8 = 0;
  ExceptionList = &local_10;
  iVar1 = (**(code **)(*(int *)(unaff_EDI + 0xa0) + 4))(&param_1);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(unaff_EDI + 0x9c) + 0x48))(unaff_EDI + 0x78);
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00408ed0(&param_1,0,0xffffffff);
    local_8._0_1_ = 1;
    (**(code **)(*(int *)(iVar1 + 0xa0) + 4))(local_2c);
    local_8 = (uint)local_8._1_3_ << 8;
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  iVar1 = FUN_00a56bb0(*(undefined4 *)(unaff_EDI + 0x98),*(undefined4 *)(unaff_EDI + 0x9c),
                       in_stack_00000020);
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar1 + 0x54;
    if (iVar3 != 0) {
      iVar2 = iVar1;
    }
  }
  (**(code **)(**(int **)(unaff_EDI + 0x9c) + 0x40))(iVar2);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1);
  }
  ExceptionList = local_10;
  return iVar3;
}

