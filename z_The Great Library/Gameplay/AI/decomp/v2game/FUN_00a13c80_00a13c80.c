// FUN_00a13c80 @ 00a13c80 body=[[00a13c80, 00a13d42]]


undefined4 * FUN_00a13c80(undefined4 *param_1)

{
  undefined4 uVar1;
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
  param_1[0xb] = 0x15a;
  param_1[0xc] = 0x15a;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = &PTR_FUN_00e3ef78;
  param_1[0xf] = 0xffffffff;
  FUN_00401000(0x3f000000);
  uVar1 = FUN_00b31c00();
  param_1[0x10] = uVar1;
  ExceptionList = local_10;
  return param_1;
}

