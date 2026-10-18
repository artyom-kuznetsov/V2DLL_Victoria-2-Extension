// FUN_0058c170 @ 0058c170 body=[[0058c170, 0058c220]]


undefined4 *
FUN_0058c170(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8)

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
  param_1[0xb] = 0x855;
  param_1[0xc] = 0x855;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = param_3;
  param_1[0x11] = param_4;
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CChangeTradeSetting::vftable;
  param_1[0x12] = param_5;
  param_1[0x13] = param_6;
  *(undefined1 *)(param_1 + 0x14) = param_7;
  *(undefined1 *)((int)param_1 + 0x51) = param_8;
  ExceptionList = local_10;
  return param_1;
}

