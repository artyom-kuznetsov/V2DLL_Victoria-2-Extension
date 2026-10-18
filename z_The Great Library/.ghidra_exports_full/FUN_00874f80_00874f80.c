// FUN_00874f80 @ 00874f80 body=[[00874f80, 0087503b]]


void FUN_00874f80(int param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b426f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00aae9af();
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_008a88d0();
    local_8._0_1_ = 1;
    FUN_00408ed0(param_1 + 8,0,0xffffffff);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00905b30(iVar1);
  }
  local_8 = 0xffffffff;
  iVar1 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
  ExceptionList = local_10;
  return;
}

