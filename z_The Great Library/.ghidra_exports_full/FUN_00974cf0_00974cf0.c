// FUN_00974cf0 @ 00974cf0 body=[[00974cf0, 00974ddd]]


undefined4 * FUN_00974cf0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3a968;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[2] = pvVar1;
  _memset(pvVar1,0,param_1[1] * 4);
  local_8 = 0;
  param_1[3] = 0;
  param_1[4] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[5] = pvVar1;
  _memset(pvVar1,0,param_1[4] * 4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  ExceptionList = local_10;
  return param_1;
}

