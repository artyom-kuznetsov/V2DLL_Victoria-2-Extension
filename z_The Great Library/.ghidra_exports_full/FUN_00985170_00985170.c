// FUN_00985170 @ 00985170 body=[[00985170, 009851f1] [009851f5, 009852c1]]


undefined4 * FUN_00985170(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00baf87f;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("interface/tutorial_control.gui",0x1e);
  local_8 = 0;
  *param_1 = &PTR___purecall_00e38700;
  param_1[6] = 0xf;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  FUN_00408ed0(local_2c,0,0xffffffff);
  local_8._0_1_ = 1;
  FUN_009a4bd0(param_1 + 1,param_1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[10] = param_3;
  *param_1 = CTutorialControl::vftable;
  param_1[8] = 0;
  param_1[9] = param_2;
  param_1[0xb] = CButtonObserverGlue<CTutorialControl>::vftable;
  param_1[0xc] = param_1;
  param_1[0xd] = &LAB_00985e60;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = CButtonObserverGlue<CTutorialControl>::vftable;
  param_1[0x17] = param_1;
  param_1[0x18] = FUN_00985e70;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = CButtonObserverGlue<CTutorialControl>::vftable;
  param_1[0x22] = param_1;
  param_1[0x23] = &LAB_00985ea0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_009853a0();
  ExceptionList = local_10;
  return param_1;
}

