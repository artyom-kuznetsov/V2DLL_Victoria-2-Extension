// FUN_0040a720 @ 0040a720 body=[[0040a720, 0040a7b4]]


undefined4 * FUN_0040a720(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4619b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = *(undefined4 *)(unaff_EDI + 0x2c);
  param_1[0xc] = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(unaff_EDI + 0x34);
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined1 *)((int)param_1 + 0x36) = *(undefined1 *)(unaff_EDI + 0x36);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(unaff_EDI + 0x28);
  *(undefined1 *)((int)param_1 + 0x37) = 0;
  param_1[0xe] = *(undefined4 *)(unaff_EDI + 0x38);
  ExceptionList = local_10;
  return param_1;
}

