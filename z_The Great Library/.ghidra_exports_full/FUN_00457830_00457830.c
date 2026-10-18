// FUN_00457830 @ 00457830 body=[[00457830, 004578a9]]


undefined4 * FUN_00457830(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b40721;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CNewsCollector::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  local_8 = 2;
  param_1[0xe] = DAT_0125ac7c;
  param_1[0xf] = 0;
  FUN_004bf300(0x400);
  ExceptionList = local_10;
  return param_1;
}

