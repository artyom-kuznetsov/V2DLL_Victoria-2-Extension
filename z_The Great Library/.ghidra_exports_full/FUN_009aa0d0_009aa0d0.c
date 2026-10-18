// FUN_009aa0d0 @ 009aa0d0 body=[[009aa0d0, 009aa157]]


undefined4 * FUN_009aa0d0(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41cb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38ecc;
  param_1[1] = *(undefined4 *)(in_ECX + 4);
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(in_ECX + 8,0,0xffffffff);
  *param_1 = &PTR_FUN_00e38f08;
  param_1[9] = *(undefined4 *)(in_ECX + 0x24);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_8 = 1;
  FUN_009a97b0();
  ExceptionList = local_10;
  return param_1;
}

