// FUN_008430d0 @ 008430d0  (requested 008430D0, first bytes: 55 8B EC 83 E4 F8 6A FF)


int FUN_008430d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined **local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined4 local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b88998;
  local_14 = ExceptionList;
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_28 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined4 *)(param_1 + 8);
  local_2c = *(undefined4 *)(param_1 + 0xc);
  local_3c = 0x18d;
  local_20 = 0;
  local_1c = 0;
  local_40 = CAskMilitaryAccessAction::vftable;
  local_c = 0;
  ExceptionList = &local_14;
  local_24 = local_28;
  iVar1 = FUN_008419c0(&local_40,0,param_2,param_3);
  ExceptionList = local_14;
  return 0x32 - iVar1;
}

