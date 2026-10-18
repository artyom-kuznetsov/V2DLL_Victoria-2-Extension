// FUN_0066ff10 @ 0066ff10 body=[[0066ff10, 006700e5] [006700e9, 006700fd]]


undefined4 * FUN_0066ff10(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b451e9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8 = 3;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = (**(code **)(*in_ECX + 0x2c))(param_2);
  param_1[8] = uVar1;
  *param_1 = CMessageSettingsItem::vftable;
  param_1[7] = CMessageSettingsItem::vftable;
  param_1[10] = param_3;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = FUN_00671a80;
  param_1[0x11] = 0;
  param_1[0x12] = FUN_00671a80;
  param_1[0xc] = CCheckBoxObserverGlue<CMessageSettingsItem>::vftable;
  param_1[0xd] = param_1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = FUN_00671c60;
  param_1[0x1f] = 0;
  param_1[0x20] = FUN_00671c60;
  param_1[0x1a] = CCheckBoxObserverGlue<CMessageSettingsItem>::vftable;
  param_1[0x1b] = param_1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = CCheckBoxObserverGlue<CMessageSettingsItem>::vftable;
  param_1[0x29] = param_1;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = FUN_00671e40;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  local_8._0_1_ = 7;
  local_8._1_3_ = 0;
  FUN_006701b0(param_3,0);
  FUN_006701b0(*(undefined4 *)(param_3 + 0x38),1);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("message_setting_item",0x14);
  local_8 = CONCAT31(local_8._1_3_,8);
  (**(code **)(*(int *)(param_1[8] + 0x18) + 0x78))(local_2c);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

