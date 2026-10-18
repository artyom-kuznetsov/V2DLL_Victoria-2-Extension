// FUN_007a03c0 @ 007a03c0 body=[[007a03c0, 007a045e] [007a0462, 007a04f2] [007a04f6, 007a0542] [007a0546, 007a0595] [007a0599, 007a05ad]]


undefined4 * FUN_007a03c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
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
  puStack_c = &LAB_00b43769;
  local_10 = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("ChannelUserSelectionItem",0x18);
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
  uVar1 = (**(code **)(*in_ECX + 0x2c))(local_2c,param_3);
  param_1[8] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  *param_1 = CUserSelectionOption::vftable;
  param_1[7] = CUserSelectionOption::vftable;
  FUN_007a3320(FUN_007a05b0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ChannelUserSelectionButton",0x1a);
  local_8._0_1_ = 8;
  piVar2 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_2c);
  (**(code **)(*piVar2 + 0xcc))(param_2,0);
  local_8._0_1_ = 7;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("button_text",0xb);
  local_8._0_1_ = 9;
  (**(code **)(*(int *)param_1[8] + 0x38))(local_2c);
  FUN_009e7500();
  local_8._0_1_ = 7;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("ChannelUserSelectionButton",0x1a);
  local_8 = CONCAT31(local_8._1_3_,10);
  iVar3 = (**(code **)(*(int *)param_1[8] + 0x34))(local_48);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 10);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

