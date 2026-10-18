// FUN_009a9e40 @ 009a9e40 body=[[009a9e40, 009a9ecd]]


undefined4 * FUN_009a9e40(undefined4 *param_1)

{
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3e348;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = &PTR_FUN_00e38ecc;
  param_1[1] = *(undefined4 *)(in_ECX + 4);
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(in_ECX + 8,0,0xffffffff);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e38ef4;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(in_ECX + 0x24,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}

