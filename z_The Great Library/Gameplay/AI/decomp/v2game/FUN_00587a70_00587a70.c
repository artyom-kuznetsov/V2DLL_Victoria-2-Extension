// FUN_00587a70 @ 00587a70 body=[[00587a70, 00587b1a]]


undefined4 *
FUN_00587a70(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6,undefined1 param_7)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x945;
  param_1[0xc] = 0x945;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0x10) = param_5;
  *(undefined1 *)((int)param_1 + 0x41) = param_7;
  param_1[0xf] = param_6;
  param_1[0x11] = param_3;
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  param_1[0x12] = param_4;
  *param_1 = CSetRallyPoint::vftable;
  *(undefined1 *)((int)param_1 + 0x42) = param_2;
  ExceptionList = local_10;
  return param_1;
}

