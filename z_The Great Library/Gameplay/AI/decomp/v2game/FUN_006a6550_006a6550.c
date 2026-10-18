// FUN_006a6550 @ 006a6550 body=[[006a6550, 006a65cb] [006a65cf, 006a660b] [006a660f, 006a6634]]


/* WARNING: Removing unreachable block (ram,0x006a65c3) */

void FUN_006a6550(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7ee7e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CMessageSettingWindow::vftable;
  param_1[1] = CMessageSettingWindow::vftable;
  local_8 = 5;
  FUN_00409350("interface/messagesettings.gui",0x1d);
  local_8._0_1_ = 6;
  FUN_009a4ca0(param_1 + 1);
  local_8 = CONCAT31(local_8._1_3_,5);
  (**(code **)(*(int *)param_1[0xc] + 0x50))();
  param_1[0x44] = CCheckBoxObserver::vftable;
  param_1[0x36] = CCheckBoxObserver::vftable;
  param_1[0x22] = CButtonObserver::vftable;
  param_1[0xe] = CButtonObserver::vftable;
  DAT_0125899f = 0;
  if ((uint)param_1[10] < 0x10) {
    param_1[9] = 0;
    param_1[10] = 0xf;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = CUpdateable::vftable;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(param_1[5]);
}

