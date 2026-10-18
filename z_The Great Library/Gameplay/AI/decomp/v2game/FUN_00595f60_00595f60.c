// FUN_00595f60 @ 00595f60 body=[[00595f60, 00596050]]


undefined4 * FUN_00595f60(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b460a7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNavalCombatant::CSlot::vftable;
  param_1[2] = 0;
  param_1[3] = DAT_01268fec;
  param_1[4] = DAT_01268ff0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = DAT_01268fec;
  param_1[0xe] = DAT_01268ff0;
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  local_8 = 5;
  uStack_7 = 0;
  param_1[0x16] = 1000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xffffffff;
  param_1[0x20] = 0xf;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  _local_8 = CONCAT31(uStack_7,6);
  param_1[0x22] = 0x2d2d2d;
  param_1[0x23] = 0;
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

