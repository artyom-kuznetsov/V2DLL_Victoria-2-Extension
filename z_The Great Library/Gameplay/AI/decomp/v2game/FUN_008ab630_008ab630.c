// FUN_008ab630 @ 008ab630 body=[[008ab630, 008ab6a8] [008ab6b2, 008ab6f5]]


void FUN_008ab630(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3aa5f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CEventWindow::vftable;
  local_8 = 3;
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xc4))();
  (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xfc))(param_1[3]);
  (**(code **)(*(int *)param_1[1] + 0x50))();
  if (param_1[0x2d] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_1[0x2d]);
  }
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x22] = CButtonObserver::vftable;
  param_1[0x17] = CButtonObserver::vftable;
  *param_1 = CUpdateable::vftable;
  ExceptionList = local_10;
  return;
}

