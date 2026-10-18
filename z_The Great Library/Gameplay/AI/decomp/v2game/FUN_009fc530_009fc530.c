// FUN_009fc530 @ 009fc530 body=[[009fc530, 009fc5bb]]


undefined4 * FUN_009fc530(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b416d3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0040a720(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e55c;
  param_1[0x14] = 0xf;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_00408ed0(in_ECX + 0x3c,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x1b] = 0xf;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  FUN_00408ed0(in_ECX + 0x58,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

