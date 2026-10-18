// FUN_0046e170 @ 0046e170 body=[[0046e170, 0046e1d9] [0046e1dd, 0046e200] [0046e204, 0046e21d]]


/* WARNING: Removing unreachable block (ram,0x0046e1d1) */

void FUN_0046e170(undefined4 *param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b93903;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsManagerButton::vftable;
  local_8 = 0;
  FUN_00409350("interface/news.gui",0x12);
  local_8._0_1_ = 1;
  FUN_009a4ca0(param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x50))();
    param_1[1] = 0;
  }
  iVar1 = param_1[0xf];
  if (iVar1 == 0) {
    param_1[3] = CButtonObserver::vftable;
    ExceptionList = local_10;
    return;
  }
  FUN_0046d420(iVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar1);
}

