// FUN_009d4600 @ 009d4600 body=[[009d4600, 009d479f]]


undefined4 * FUN_009d4600(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b41af1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(unaff_EDI + 4);
  *param_1 = &PTR_FUN_00e3b45c;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  FUN_00408ed0(unaff_EDI + 8,0,0xffffffff);
  local_8 = 0;
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(unaff_EDI + 0x24,0,0xffffffff);
  local_8._0_1_ = 1;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0(unaff_EDI + 0x40,0,0xffffffff);
  local_8._0_1_ = 2;
  param_1[0x1c] = 0xf;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_00408ed0(unaff_EDI + 0x5c,0,0xffffffff);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  local_8._0_1_ = 4;
  FUN_004134a0(unaff_EDI + 0x78);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  local_8._0_1_ = 6;
  FUN_004134a0(unaff_EDI + 0x88);
  local_8._0_1_ = 7;
  param_1[0x2b] = 0xf;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  FUN_00408ed0(unaff_EDI + 0x98,0,0xffffffff);
  local_8._0_1_ = 8;
  param_1[0x32] = 0xf;
  param_1[0x31] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  FUN_00408ed0(unaff_EDI + 0xb4,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,9);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(unaff_EDI + 0xd0);
  param_1[0x35] = *(undefined4 *)(unaff_EDI + 0xd4);
  param_1[0x36] = *(undefined4 *)(unaff_EDI + 0xd8);
  param_1[0x37] = *(undefined4 *)(unaff_EDI + 0xdc);
  param_1[0x3d] = 0xf;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  FUN_00408ed0(unaff_EDI + 0xe0,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(unaff_EDI + 0xfc);
  ExceptionList = local_10;
  return param_1;
}

