// FUN_006e7bc0 @ 006e7bc0 body=[[006e7bc0, 006e7c6c] [006e7c70, 006e7d09] [006e7d10, 006e7d41]]


undefined4 * FUN_006e7bc0(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
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
  puStack_c = &LAB_00b7db49;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("production_info",0xf);
  piVar1 = DAT_01258a80;
  local_8 = 0;
  uVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_48,uVar2);
  param_1[8] = uVar2;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  param_1[10] = param_2;
  iVar3 = DAT_012587f0 + 0x48;
  *param_1 = CGoodsProductInfoItem::vftable;
  param_1[7] = CGoodsProductInfoItem::vftable;
  param_1[0xb] = iVar3;
  FUN_00704f30(&LAB_006e7d50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("output_factory",0xe);
  local_8._0_1_ = 8;
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  local_8 = CONCAT31(local_8._1_3_,7);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (iVar3 != 0) {
    (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xc);
  }
  ExceptionList = local_10;
  return param_1;
}

