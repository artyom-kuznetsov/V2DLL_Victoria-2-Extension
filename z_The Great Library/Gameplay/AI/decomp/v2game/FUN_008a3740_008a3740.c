// FUN_008a3740 @ 008a3740 body=[[008a3740, 008a37aa]]


undefined4 * FUN_008a3740(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b424d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[1] = 0x18d;
  *(undefined2 *)(param_1 + 7) = 0;
  local_8 = 0;
  *param_1 = CChangeTechSchoolEffect::vftable;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return param_1;
}

