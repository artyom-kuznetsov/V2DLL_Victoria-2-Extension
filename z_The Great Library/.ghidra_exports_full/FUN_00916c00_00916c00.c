// FUN_00916c00 @ 00916c00 body=[[00916c00, 00916cfb]]


undefined4 * FUN_00916c00(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b42357;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(unaff_EDI + 4);
  *param_1 = CPeaceOffer::vftable;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(unaff_EDI + 8);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)(unaff_EDI + 9);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_8 = 0;
  FUN_009beeb0(unaff_EDI + 0xc);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  FUN_009beeb0(unaff_EDI + 0x1c);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_8._0_1_ = 4;
  FUN_0042b600(param_1 + 0xb,unaff_EDI + 0x2c);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8._0_1_ = 6;
  FUN_0042b600(param_1 + 0xf,unaff_EDI + 0x3c);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_8._0_1_ = 8;
  FUN_0043a750(unaff_EDI + 0x4c);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_0043a750(unaff_EDI + 0x5c);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(unaff_EDI + 0x6c);
  ExceptionList = local_10;
  return param_1;
}

