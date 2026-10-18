// FUN_0058eaf0 @ 0058eaf0 body=[[0058eaf0, 0058eb8e]]


undefined4 *
FUN_0058eaf0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

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
  param_1[0xb] = 0x639;
  param_1[0xc] = 0x639;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = param_3;
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  param_1[0x11] = param_4;
  *param_1 = CSetPoliticalReformCommand::vftable;
  param_1[0x12] = param_5;
  ExceptionList = local_10;
  return param_1;
}

