// FUN_00576fe0 @ 00576fe0  (requested 00576FE0, first bytes: 55 8B EC 64 A1 00 00 00)


undefined4 * FUN_00576fe0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b3fb9e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  param_1[4] = 0;
  param_1[5] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[6] = pvVar1;
  _memset(pvVar1,0,param_1[5] * 4);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_8._0_1_ = 2;
  param_1[0xb] = 0;
  param_1[0xc] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[0xd] = pvVar1;
  _memset(pvVar1,0,param_1[0xc] * 4);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_8._0_1_ = 4;
  param_1[0x12] = 0;
  param_1[0x13] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x14] = pvVar1;
  _memset(pvVar1,0,param_1[0x13] * 4);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  local_8._0_1_ = 7;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x1f] = pvVar1;
  _memset(pvVar1,0,param_1[0x1e] * 4);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  local_8 = CONCAT31(local_8._1_3_,9);
  param_1[0x24] = 0;
  param_1[0x25] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b(0x7fc);
  param_1[0x26] = pvVar1;
  _memset(pvVar1,0,param_1[0x25] * 4);
  ExceptionList = local_10;
  return param_1;
}

