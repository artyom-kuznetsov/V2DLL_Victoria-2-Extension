// FUN_00a10b70 @ 00a10b70 body=[[00a10b70, 00a10c0b]]


undefined4 * FUN_00a10b70(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b49123;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009fc530(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3ecdc;
  param_1[0x22] = 0xf;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_00408ed0(unaff_EDI + 0x74,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x29] = 0xf;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x24) = 0;
  FUN_00408ed0(unaff_EDI + 0x90,0,0xffffffff);
  param_1[0x2b] = *(undefined4 *)(unaff_EDI + 0xac);
  ExceptionList = local_10;
  return param_1;
}

