// FUN_00719e50 @ 00719e50 body=[[00719e50, 00719f46] [00719f4a, 00719f93] [00719f97, 00719fab]]


undefined4 * FUN_00719e50(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4459e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
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
  local_8 = 3;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar1 = (**(code **)(*piVar2 + 0x2c))(param_3,uVar1);
  param_1[8] = uVar1;
  local_8 = 4;
  *param_1 = CGoodsListboxItem::vftable;
  param_1[7] = CGoodsListboxItem::vftable;
  param_1[10] = in_ECX;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goods_type",10);
  local_8._0_1_ = 5;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*piVar2 + 0x48))(*(int *)(in_ECX + 8) + 2);
  local_8._0_1_ = 4;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("goods_type",10);
  local_8 = CONCAT31(local_8._1_3_,6);
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_4);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

