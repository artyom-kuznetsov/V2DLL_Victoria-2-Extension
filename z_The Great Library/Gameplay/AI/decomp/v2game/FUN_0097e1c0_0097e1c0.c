// FUN_0097e1c0 @ 0097e1c0 body=[[0097e1c0, 0097e272] [0097e276, 0097e2e8] [0097e2ec, 0097e300]]


undefined4 * FUN_0097e1c0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  uint local_4c [4];
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba27de;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("popdetail_needs_entry",0x15);
  local_8 = 0;
  local_14 = (**(code **)(*in_ECX + 0x3c))();
  piVar1 = (int *)(**(code **)(*in_ECX + 0x34))();
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
  uVar2 = (**(code **)(*piVar1 + 0x2c))(local_30,local_14);
  param_1[8] = uVar2;
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  *param_1 = CPopNeedListboxItem::vftable;
  param_1[7] = CPopNeedListboxItem::vftable;
  param_1[10] = param_2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = local_4c[0] & 0xffffff00;
  FUN_00409350("goods_type",10);
  local_8 = CONCAT31(local_8._1_3_,7);
  piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_4c);
  (**(code **)(*piVar1 + 0x48))(*(int *)(param_2 + 8) + 2);
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

