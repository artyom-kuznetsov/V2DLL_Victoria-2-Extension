// FUN_006ebb10 @ 006ebb10 body=[[006ebb10, 006ebba9] [006ebbad, 006ebc5c] [006ebc60, 006ebca2] [006ebca6, 006ebcd0]]


undefined4 *
FUN_006ebb10(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
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
  puStack_c = &LAB_00b7d787;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("project_info",0xc);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  DAT_013f08e0 = DAT_013f08e0 + 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = &PTR_FUN_00e39158;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  *param_1 = &PTR_FUN_00e392f0;
  param_1[7] = &PTR_FUN_00e39320;
  *(undefined1 *)(param_1 + 9) = 0;
  uVar2 = (**(code **)(*in_ECX + 0x2c))(local_2c,param_3);
  param_1[8] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CProjectInfoItem::vftable;
  param_1[7] = CProjectInfoItem::vftable;
  param_1[10] = param_2;
  param_1[0xc] = 0;
  param_1[0xe] = param_4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_00704fb0(&LAB_006ebdf0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 9;
  piVar1 = (int *)param_1[8];
  (**(code **)(*(int *)piVar1[0x125] + 0xb0))();
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("state_name",10);
  local_8._0_1_ = 10;
  uVar2 = (**(code **)(*(int *)param_1[8] + 0x3c))(local_2c);
  local_8._0_1_ = 9;
  param_1[0xb] = uVar2;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("invest_project",0xe);
  local_8._0_1_ = 0xb;
  uVar2 = (**(code **)(*piVar1 + 0x34))(local_48);
  local_8 = CONCAT31(local_8._1_3_,9);
  param_1[0xd] = uVar2;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*(int *)(param_1[0xd] + 0x54) + 4))(param_1 + 0x18);
  }
  ExceptionList = local_10;
  return param_1;
}

