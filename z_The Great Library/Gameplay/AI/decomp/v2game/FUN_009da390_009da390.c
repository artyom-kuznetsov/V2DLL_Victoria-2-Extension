// FUN_009da390 @ 009da390 body=[[009da390, 009da3f9]]


undefined4 * FUN_009da390(undefined4 *param_1,undefined4 param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3df1b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CVersion::vftable;
  param_1[2] = 0;
  param_1[10] = 0xf;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  local_8 = 0;
  FUN_00408ed0(param_2,0,0xffffffff);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  ExceptionList = local_10;
  return param_1;
}

