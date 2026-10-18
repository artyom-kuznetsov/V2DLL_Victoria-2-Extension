// FUN_00a03770 @ 00a03770 body=[[00a03770, 00a03823]]


undefined4 * FUN_00a03770(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b492a3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009fc530(param_1);
  local_8 = 0;
  *param_1 = &PTR_FUN_00e3e7f0;
  param_1[0x1d] = *(undefined4 *)(unaff_EDI + 0x74);
  param_1[0x1e] = *(undefined4 *)(unaff_EDI + 0x78);
  param_1[0x1f] = *(undefined4 *)(unaff_EDI + 0x7c);
  param_1[0x25] = 0xf;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_00408ed0(unaff_EDI + 0x80,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  param_1[0x2c] = 0xf;
  param_1[0x2b] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  FUN_00408ed0(unaff_EDI + 0x9c,0,0xffffffff);
  param_1[0x2e] = *(undefined4 *)(unaff_EDI + 0xb8);
  ExceptionList = local_10;
  return param_1;
}

