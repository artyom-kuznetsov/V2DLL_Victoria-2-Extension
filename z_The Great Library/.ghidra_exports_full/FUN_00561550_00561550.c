// FUN_00561550 @ 00561550 body=[[00561550, 00561674]]


undefined4 * FUN_00561550(undefined4 *param_1)

{
  void *pvVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4637f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b();
  param_1[2] = pvVar1;
  _memset(pvVar1,0,param_1[1] * 4);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x1ff;
  pvVar1 = (void *)FUN_00aad56b();
  param_1[0xd] = pvVar1;
  _memset(pvVar1,0,param_1[0xc] * 4);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_8._0_1_ = 4;
  FUN_00409350(&DAT_00dfbe80,4);
  FUN_00561260();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00409350("nullcat");
  FUN_00561410();
  ExceptionList = local_10;
  return param_1;
}

