// FUN_00588650 @ 00588650 body=[[00588650, 005886f3]]


undefined4 *
FUN_00588650(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_EDI;
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
  param_1[0xb] = 0x974;
  param_1[0xc] = 0x974;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CInvestProjectCommand::vftable;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xf] = *unaff_EDI;
  param_1[0x10] = unaff_EDI[1];
  param_1[0x11] = param_2;
  param_1[0x13] = param_4;
  param_1[0x12] = param_3;
  ExceptionList = local_10;
  return param_1;
}

