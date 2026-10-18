// FUN_00581d00 @ 00581d00 body=[[00581d00, 00581db5]]


undefined4 * FUN_00581d00(undefined4 *param_1)

{
  int unaff_EDI;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4617b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = 0x18d;
  *param_1 = CCommand::vftable;
  param_1[7] = 0xf;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  local_8 = 0;
  param_1[0xb] = 0x1ed;
  param_1[0xc] = 0x1ed;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CChangeExpenseSliders::vftable;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  local_8 = 2;
  FUN_0043a750(unaff_EDI + 0x3c);
  param_1[0x13] = *(undefined4 *)(unaff_EDI + 0x4c);
  param_1[0x14] = *(undefined4 *)(unaff_EDI + 0x50);
  ExceptionList = local_10;
  return param_1;
}

