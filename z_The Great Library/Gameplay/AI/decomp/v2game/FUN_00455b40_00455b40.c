// FUN_00455b40 @ 00455b40 body=[[00455b40, 00455bf9] [00455bfd, 00455c17]]


undefined4 * FUN_00455b40(undefined4 *param_1)

{
  undefined4 in_EDX;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b4d4e3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CNationalFocusOverwrite::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = in_EDX;
  local_18 = 0x2d2d2d;
  param_1[3] = 0x2d2d2d;
  param_1[4] = 0;
  param_1[9] = CButtonObserverGlue<CNationalFocusOverwrite>::vftable;
  param_1[10] = param_1;
  param_1[0xb] = FUN_00455fa0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_8 = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("interface/nationalfocus_overwrite.gui",0x25);
  local_8._0_1_ = 1;
  FUN_009a4bd0(local_34,param_1);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  FUN_00455d80();
  ExceptionList = local_10;
  return param_1;
}

