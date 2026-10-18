// FUN_00593060 @ 00593060  (requested 00593060, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 * FUN_00593060(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b460eb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CBattleResult::vftable;
  FUN_00592910(param_1 + 2);
  local_8 = 0;
  FUN_00592910(param_1 + 0x12);
  param_1[0x28] = 0;
  param_1[0x29] = 0xf;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  ExceptionList = local_10;
  return param_1;
}

