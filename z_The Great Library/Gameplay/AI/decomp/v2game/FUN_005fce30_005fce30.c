// FUN_005fce30 @ 005fce30 body=[[005fce30, 005fcee0] [005fcee4, 005fcf2e]]


undefined4 * FUN_005fce30(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b92f46;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("debt_listitem",0xd);
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
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_2c,uVar2);
  param_1[8] = uVar2;
  local_8 = CONCAT31(local_8._1_3_,6);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CDebtListItem::vftable;
  param_1[7] = CDebtListItem::vftable;
  param_1[10] = *(undefined4 *)(param_2 + 8);
  param_1[0xb] = *(undefined4 *)(param_2 + 0xc);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  param_1[0xc] = param_2;
  *(undefined1 *)(param_1 + 0xd) = 1;
  FUN_005fd030(param_1);
  ExceptionList = local_10;
  return param_1;
}

