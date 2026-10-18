// FUN_00595a50 @ 00595a50 body=[[00595a50, 00595b14]]


undefined4 * FUN_00595a50(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b497db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = *(undefined4 *)(unaff_EDI + 4);
  *param_1 = CTextBlock::vftable;
  param_1[3] = *(undefined4 *)(unaff_EDI + 0xc);
  param_1[2] = CColor::vftable;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(unaff_EDI + 0x10);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(unaff_EDI + 0x18);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(unaff_EDI + 0x20);
  param_1[0xe] = 0xf;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  FUN_00408ed0(unaff_EDI + 0x24,0,0xffffffff);
  local_8 = 0;
  param_1[0x15] = 0xf;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00408ed0(unaff_EDI + 0x40,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x17) = *(undefined8 *)(unaff_EDI + 0x5c);
  *(undefined8 *)(param_1 + 0x19) = *(undefined8 *)(unaff_EDI + 100);
  param_1[0x1b] = *(undefined4 *)(unaff_EDI + 0x6c);
  ExceptionList = local_10;
  return param_1;
}

