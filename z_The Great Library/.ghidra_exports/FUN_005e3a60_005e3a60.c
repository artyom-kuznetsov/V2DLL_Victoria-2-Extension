// FUN_005e3a60 @ 005e3a60  (requested 005E3A60, first bytes: 55 8B EC 6A FF 68 8E 5A)


undefined4 *
FUN_005e3a60(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45a8e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x9a8;
  param_1[0xc] = 0x9a8;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CSplitAndLoadArmyCommand::vftable;
  FUN_0079de40(param_1 + 0xf,param_2);
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_0079de40(param_1 + 0x19,param_4);
  param_1[0x23] = param_3;
  DAT_0131ca68 = FUN_009c12d0();
  iVar1 = DAT_01258a9c + 1;
  DAT_01258a9c = iVar1;
  param_1[0x24] = DAT_01258a90 + 0x1268;
  param_1[0x25] = iVar1;
  ExceptionList = local_10;
  return param_1;
}

