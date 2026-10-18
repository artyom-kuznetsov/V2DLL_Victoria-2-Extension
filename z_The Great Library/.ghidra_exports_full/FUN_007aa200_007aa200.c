// FUN_007aa200 @ 007aa200 body=[[007aa200, 007aa281] [007aa285, 007aa2a0] [007aa2a4, 007aa412]]


undefined4 * FUN_007aa200(undefined4 *param_1,undefined4 param_2)

{
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba502a;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("topcolor_technology",0x13);
  local_8 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("country_technology",0x12);
  local_8._0_1_ = 1;
  FUN_007536e0(param_1,param_2,local_2c,local_48);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  *param_1 = CTechnologyView::vftable;
  param_1[0x17] = 0;
  param_1[0x18] = CButtonObserverGlue<CTechnologyView>::vftable;
  param_1[0x19] = param_1;
  param_1[0x1a] = FUN_007aec10;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = CButtonObserverGlue<CTechnologyView>::vftable;
  param_1[0x24] = param_1;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = FUN_007aecb0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = CButtonObserverGlue<CTechnologyView>::vftable;
  param_1[0x2f] = param_1;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = FUN_007ae990;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = CButtonObserverGlue<CTechnologyView>::vftable;
  param_1[0x45] = param_1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = FUN_007ae8d0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  local_8 = CONCAT31(local_8._1_3_,10);
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 1;
  FUN_007abda0(param_1);
  ExceptionList = local_10;
  return param_1;
}

