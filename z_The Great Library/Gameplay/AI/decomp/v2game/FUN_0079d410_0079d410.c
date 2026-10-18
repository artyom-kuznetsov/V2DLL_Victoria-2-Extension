// FUN_0079d410 @ 0079d410 body=[[0079d410, 0079d46f]]


void FUN_0079d410(int *param_1)

{
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3ca39;
  pvStack_10 = ExceptionList;
  local_8 = 6;
  ExceptionList = &pvStack_10;
  if ((int *)*param_1 != (int *)0x0) {
    ExceptionList = &pvStack_10;
    (**(code **)(*(int *)*param_1 + 0x50))();
  }
  param_1[0x41] = (int)CButtonObserver::vftable;
  param_1[0x36] = (int)CButtonObserver::vftable;
  param_1[0x2b] = (int)CButtonObserver::vftable;
  param_1[0x20] = (int)CButtonObserver::vftable;
  param_1[0x18] = (int)CCheckBoxObserver::vftable;
  param_1[0xd] = (int)CButtonObserver::vftable;
  param_1[2] = (int)CButtonObserver::vftable;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1);
}

