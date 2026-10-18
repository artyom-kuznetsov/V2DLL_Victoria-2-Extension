// FUN_00455c20 @ 00455c20 body=[[00455c20, 00455c89] [00455c8d, 00455cb7]]


/* WARNING: Removing unreachable block (ram,0x00455c81) */

void FUN_00455c20(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4d4c3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNationalFocusOverwrite::vftable;
  local_8 = 0;
  FUN_00409350("interface/nationalfocus_overwrite.gui",0x25);
  local_8._0_1_ = 1;
  FUN_009a4ca0(param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x50))();
    param_1[1] = 0;
  }
  param_1[9] = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

