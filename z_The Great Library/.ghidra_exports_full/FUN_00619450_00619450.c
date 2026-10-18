// FUN_00619450 @ 00619450 body=[[00619450, 00619500] [00619504, 006195a4] [006195a8, 006195f9] [006195fd, 00619648] [0061964c, 00619660]]


undefined4 *
FUN_00619450(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  undefined4 local_4c [5];
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b70769;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("cb_type_item",0xc);
  local_8 = 0;
  local_14 = (**(code **)(*param_2 + 0x3c))();
  piVar1 = (int *)(**(code **)(*param_2 + 0x34))();
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
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[10] = param_3;
  *param_1 = CCBTypeEntry::vftable;
  param_1[7] = CCBTypeEntry::vftable;
  param_1[0xb] = param_4;
  param_1[0xc] = *param_5;
  param_1[0xd] = param_5[1];
  param_1[0xe] = *in_ECX;
  param_1[0xf] = in_ECX[1];
  FUN_0061ab90(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("select_cb",9);
  local_8._0_1_ = 8;
  piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_30);
  local_8._0_1_ = 7;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  (**(code **)(piVar1[0x15] + 4))(param_1 + 0x10);
  uVar2 = FUN_0090a830(param_1[10],local_4c);
  local_8._0_1_ = 9;
  (**(code **)(*piVar1 + 0xcc))(uVar2,0);
  local_8._0_1_ = 7;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_4c[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("wargoal_icon",0xc);
  local_8 = CONCAT31(local_8._1_3_,10);
  piVar1 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_30);
  (**(code **)(*piVar1 + 0x48))(*(undefined4 *)(param_1[10] + 0xc));
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

