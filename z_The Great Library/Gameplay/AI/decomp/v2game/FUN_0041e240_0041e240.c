// FUN_0041e240 @ 0041e240 body=[[0041e240, 0041e29a]]


undefined1 * FUN_0041e240(undefined1 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b60b69;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = 0;
  local_8 = 0;
  *param_1 = 1;
  FUN_00409350("ph\'nglui mglw\'nafh Cthulhu R\'lyeh wgah\'nagl fhtagn!",0x33);
  ExceptionList = local_10;
  return param_1;
}

