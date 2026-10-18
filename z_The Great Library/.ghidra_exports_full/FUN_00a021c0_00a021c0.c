// FUN_00a021c0 @ 00a021c0 body=[[00a021c0, 00a0226e]]


undefined4 * FUN_00a021c0(undefined4 *param_1,undefined2 param_2,undefined4 param_3)

{
  undefined4 unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4167b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0xda;
  param_1[0xc] = 0xda;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = unaff_EDI;
  *(undefined2 *)(param_1 + 10) = param_2;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_00e3e73c;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8 = 2;
  FUN_009beeb0(param_3);
  param_1[0x13] = unaff_EDI;
  ExceptionList = local_10;
  return param_1;
}

