// FUN_00581740 @ 00581740 body=[[00581740, 005817de]]


undefined4 * FUN_00581740(undefined4 *param_1)

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
  param_1[0xb] = 0x1cf;
  param_1[0xc] = 0x1cf;
  *(undefined2 *)(param_1 + 0xd) = 0xffff;
  FUN_00409350(&DAT_00ded94d,0);
  param_1[9] = 0;
  *(undefined2 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  *param_1 = CChangeCultureCommand::vftable;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xf] = *(undefined4 *)(unaff_EDI + 0x3c);
  param_1[0x10] = *(undefined4 *)(unaff_EDI + 0x40);
  param_1[0x11] = *(undefined4 *)(unaff_EDI + 0x44);
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(unaff_EDI + 0x48);
  ExceptionList = local_10;
  return param_1;
}

