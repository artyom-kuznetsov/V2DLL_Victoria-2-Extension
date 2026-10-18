// FUN_00a2c8f0 @ 00a2c8f0 body=[[00a2c8f0, 00a2c979]]


undefined4 * FUN_00a2c8f0(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(unaff_EDI + 4);
  *param_1 = &PTR_FUN_00e3fbac;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(unaff_EDI + 8,0,0xffffffff);
  local_8 = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(unaff_EDI + 0x24,0,0xffffffff);
  param_1[0x10] = *(undefined4 *)(unaff_EDI + 0x40);
  ExceptionList = local_10;
  return param_1;
}

