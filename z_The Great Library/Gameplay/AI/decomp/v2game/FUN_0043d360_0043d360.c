// FUN_0043d360 @ 0043d360 body=[[0043d360, 0043d3d0] [0043d3d4, 0043d415]]


/* WARNING: Removing unreachable block (ram,0x0043d3c8) */

void FUN_0043d360(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d8c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CInvestProject::vftable;
  local_8 = 3;
  FUN_00409350("interface/invest_project.gui",0x1c);
  local_8._0_1_ = 4;
  FUN_009a4ca0(param_1);
  local_8 = CONCAT31(local_8._1_3_,3);
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 0x50))();
    param_1[2] = 0;
  }
  param_1[0x2f] = CScrollbarObserver::vftable;
  param_1[0x20] = CButtonObserver::vftable;
  param_1[0x15] = CButtonObserver::vftable;
  param_1[10] = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

