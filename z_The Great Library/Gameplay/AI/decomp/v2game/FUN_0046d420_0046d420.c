// FUN_0046d420 @ 0046d420 body=[[0046d420, 0046d489] [0046d48d, 0046d4b7]]


/* WARNING: Removing unreachable block (ram,0x0046d481) */

void FUN_0046d420(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4d303;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsInterface::vftable;
  local_8 = 0;
  FUN_00409350("interface/news.gui",0x12);
  local_8._0_1_ = 1;
  FUN_009a4ca0(param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x50))();
    param_1[1] = 0;
  }
  param_1[4] = CButtonObserver::vftable;
  ExceptionList = local_10;
  return;
}

