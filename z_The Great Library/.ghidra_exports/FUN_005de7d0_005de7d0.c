// FUN_005de7d0 @ 005de7d0  (requested 005DE7D0, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 *
FUN_005de7d0(undefined4 *param_1,int param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6,undefined1 param_7)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b45cb4;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x2f8;
  param_1[0xc] = 0x2f8;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = CMoveCommand::vftable;
  FUN_0079de40(param_1 + 0xf,param_2);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  local_8 = CONCAT31(local_8._1_3_,4);
  *(undefined1 *)(param_1 + 0x22) = param_4;
  *(undefined1 *)((int)param_1 + 0x8a) = param_6;
  *(undefined1 *)((int)param_1 + 0x89) = param_5;
  *(undefined1 *)((int)param_1 + 0x8b) = param_7;
  param_1[0x23] = 0xffffffff;
  FUN_004e9b90();
  param_1[0x23] = *(undefined4 *)(*(int *)(param_2 + 0xdc) + 0x58);
  ExceptionList = local_10;
  return param_1;
}

