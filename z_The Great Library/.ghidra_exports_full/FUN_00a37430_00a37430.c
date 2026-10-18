// FUN_00a37430 @ 00a37430 body=[[00a37430, 00a374c5]]


undefined4 * FUN_00a37430(undefined4 *param_1)

{
  undefined4 *unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b48b6e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = *unaff_EDI;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(unaff_EDI + 1,0,0xffffffff);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_009beeb0(unaff_EDI + 8);
  local_8 = CONCAT31(local_8._1_3_,2);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(unaff_EDI + 0xc);
  param_1[0xd] = unaff_EDI[0xd];
  FUN_00a374d0(param_1 + 0xe,unaff_EDI + 0xe);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(unaff_EDI + 0x14);
  ExceptionList = local_10;
  return param_1;
}

