// FUN_008750a0 @ 008750a0 body=[[008750a0, 0087515b]]


undefined4 * FUN_008750a0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a9e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[2] = pvVar1;
  _memset(pvVar1,0,param_1[1] * 4);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_8 = 1;
  param_1[7] = 0;
  param_1[8] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[9] = pvVar1;
  _memset(pvVar1,0,param_1[8] * 4);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  ExceptionList = local_10;
  return param_1;
}

