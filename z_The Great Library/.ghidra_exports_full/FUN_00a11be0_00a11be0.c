// FUN_00a11be0 @ 00a11be0 body=[[00a11be0, 00a11c77]]


undefined4 * FUN_00a11be0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b49173;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x131;
  param_1[0xc] = 0x131;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 1;
  param_1[0xe] = 0;
  local_8 = 1;
  *param_1 = &PTR_FUN_00e3ed90;
  FUN_00a16090(param_1 + 0xf);
  ExceptionList = local_10;
  return param_1;
}

