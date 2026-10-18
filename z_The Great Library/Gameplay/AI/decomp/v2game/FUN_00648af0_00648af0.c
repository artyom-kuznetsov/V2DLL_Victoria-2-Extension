// FUN_00648af0 @ 00648af0 body=[[00648af0, 00648bfa]]


undefined4 * FUN_00648af0(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b3ccf1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(unaff_EDI + 4);
  *param_1 = CSessionConfiguration::vftable;
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
  local_8 = CONCAT31(local_8._1_3_,2);
  param_1[0x17] = *(undefined4 *)(unaff_EDI + 0x5c);
  param_1[0x18] = *(undefined4 *)(unaff_EDI + 0x60);
  param_1[0x19] = *(undefined4 *)(unaff_EDI + 100);
  param_1[0x1a] = *(undefined4 *)(unaff_EDI + 0x68);
  param_1[0x1b] = *(undefined4 *)(unaff_EDI + 0x6c);
  param_1[0x1d] = *(undefined4 *)(unaff_EDI + 0x74);
  param_1[0x1c] = CVersion::vftable;
  param_1[0x1e] = *(undefined4 *)(unaff_EDI + 0x78);
  param_1[0x1f] = *(undefined4 *)(unaff_EDI + 0x7c);
  param_1[0x20] = *(undefined4 *)(unaff_EDI + 0x80);
  param_1[0x26] = 0xf;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  FUN_00408ed0(unaff_EDI + 0x84,0,0xffffffff);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(unaff_EDI + 0xa0);
  ExceptionList = local_10;
  return param_1;
}

