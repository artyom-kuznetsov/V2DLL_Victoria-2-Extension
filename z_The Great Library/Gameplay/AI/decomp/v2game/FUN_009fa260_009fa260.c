// FUN_009fa260 @ 009fa260 body=[[009fa260, 009fa30d] [009fa311, 009fa330]]


void FUN_009fa260(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b3b98c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e3d5e0;
  param_1[0x15] = &PTR_FUN_00e3d698;
  param_1[0x1f] = &PTR_LAB_00e3d69c;
  param_1[0x20] = &PTR_LAB_00e3d6b8;
  local_8 = 3;
  if ((undefined4 *)param_1[0x29] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x29])(1);
  }
  local_8._0_1_ = 2;
  param_1[0x20] = &PTR_FUN_00e3d5bc;
  FUN_009fa660();
  param_1[0x1f] = CCheckBoxObserver::vftable;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_00a5c580();
  *param_1 = &PTR_FUN_00e387f8;
  if (*(undefined4 **)(param_1[0xd] + 0x98) == param_1) {
    *(undefined4 *)(param_1[0xd] + 0x98) = 0;
  }
  DAT_01258a84 = DAT_01258a84 + -1;
  if (0xf < (uint)param_1[10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[5]);
  }
  param_1[9] = 0;
  param_1[10] = 0xf;
  *(undefined1 *)(param_1 + 5) = 0;
  ExceptionList = local_10;
  return;
}

