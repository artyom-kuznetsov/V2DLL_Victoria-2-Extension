// FUN_0046ea10 @ 0046ea10 body=[[0046ea10, 0046ea81] [0046ea85, 0046eaa2] [0046eaa6, 0046ead5] [0046ead9, 0046eaf3]]


void FUN_0046ea10(undefined4 *param_1)

{
  int *piVar1;
  uint local_2c;
  int local_20 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4d2e6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNewsManagerList::vftable;
  local_8 = 1;
  local_20[2] = 0xf;
  local_20[1] = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350("interface/news.gui",0x12);
  local_8._0_1_ = 2;
  FUN_009a4ca0(param_1);
  local_8._0_1_ = 1;
  if (0xf < (uint)local_20[2]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c);
  }
  FUN_0046f370(param_1);
  piVar1 = param_1 + 5;
  if (piVar1 != local_20) {
    if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*piVar1);
    }
    *piVar1 = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x50))();
    param_1[1] = 0;
  }
  param_1[0xb] = CWindowObserver::vftable;
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  ExceptionList = local_10;
  return;
}

