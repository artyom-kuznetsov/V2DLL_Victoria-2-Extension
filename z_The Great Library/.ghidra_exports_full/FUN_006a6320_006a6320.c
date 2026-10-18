// FUN_006a6320 @ 006a6320 body=[[006a6320, 006a64f4] [006a64f8, 006a6513]]


undefined4 * FUN_006a6320(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b7ee7e;
  local_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_10;
  param_1[1] = CReloadDispatcher::vftable;
  param_1[2] = param_4;
  *param_1 = CMessageSettingWindow::vftable;
  param_1[1] = CMessageSettingWindow::vftable;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_4 + 0xd);
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)(param_4 + 0xc);
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)(param_4 + 0xe);
  *(undefined2 *)((int)param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  FUN_00408ed0(param_3,0,0xffffffff);
  param_1[0xd] = param_2;
  param_1[0xc] = 0;
  FUN_006a7320(FUN_006a6ca0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  FUN_006a7320(&LAB_006a7090,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = FUN_006a70a0;
  param_1[0x36] = CCheckBoxObserverGlue<CMessageSettingWindow>::vftable;
  param_1[0x37] = param_1;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = FUN_006a70c0;
  param_1[0x44] = CCheckBoxObserverGlue<CMessageSettingWindow>::vftable;
  param_1[0x45] = param_1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  local_8._0_1_ = 5;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("interface/messagesettings.gui",0x1d);
  local_8._0_1_ = 6;
  FUN_009a4bd0(local_2c,param_1 + 1);
  local_8 = CONCAT31(local_8._1_3_,5);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  FUN_006a6640();
  ExceptionList = local_10;
  return param_1;
}

