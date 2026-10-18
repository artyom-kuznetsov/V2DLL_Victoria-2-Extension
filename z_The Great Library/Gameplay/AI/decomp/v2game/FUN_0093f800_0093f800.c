// FUN_0093f800 @ 0093f800 body=[[0093f800, 0093f8ba] [0093f8be, 0093f951] [0093f955, 0093f9a2] [0093f9a6, 0093f9ba]]


undefined4 * FUN_0093f800(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 local_48;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b83811;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("wargoal_country_item",0x14);
  local_8 = 0;
  uVar1 = (**(code **)(*param_2 + 0x3c))();
  piVar2 = (int *)(**(code **)(*param_2 + 0x34))();
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  uVar1 = (**(code **)(*piVar2 + 0x2c))(local_2c,uVar1);
  param_1[8] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  param_1[10] = param_3;
  *param_1 = CCountrySelectionItem::vftable;
  param_1[7] = CCountrySelectionItem::vftable;
  param_1[0xb] = *in_ECX;
  param_1[0xc] = in_ECX[1];
  FUN_0094bc20(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("select_country",0xe);
  local_8._0_1_ = 8;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  local_8._0_1_ = 7;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(piVar2[0x15] + 4))(param_1 + 0xe);
  uVar1 = FUN_0055dd40();
  local_8 = CONCAT31(local_8._1_3_,9);
  (**(code **)(*piVar2 + 0xcc))(uVar1,0);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48);
  }
  ExceptionList = local_10;
  return param_1;
}

