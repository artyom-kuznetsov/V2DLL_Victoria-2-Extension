// FUN_0093ecb0 @ 0093ecb0 body=[[0093ecb0, 0093ed60] [0093ed64, 0093ee4d] [0093ee51, 0093eea1] [0093eea5, 0093ef0c] [0093ef10, 0093ef60] [0093ef64, 0093efba] [0093efbe, 0093f00a] [0093f00e, 0093f022]]


undefined4 * FUN_0093ecb0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b78ff9;
  local_10 = ExceptionList;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("wargoal_item",0xc);
  local_8 = 0;
  local_14 = (**(code **)(*param_2 + 0x3c))();
  piVar3 = (int *)(**(code **)(*param_2 + 0x34))();
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
  uVar4 = (**(code **)(*piVar3 + 0x2c))(local_34,local_14);
  param_1[8] = uVar4;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  *param_1 = CGoalEntry::vftable;
  param_1[7] = CGoalEntry::vftable;
  param_1[10] = *in_ECX;
  param_1[0xb] = in_ECX[1];
  param_1[0xd] = param_4;
  param_1[0xc] = param_3;
  FUN_0094bb20(&LAB_0077a0a0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 7;
  local_18 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  piVar3 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbe8) +
                             param_1[0xb] * 4) + 0x50);
  do {
    if (piVar3 == (int *)0x0) {
      cVar2 = FUN_0092eff0();
      if (cVar2 == '\0') {
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("select_goal_invalid",0x13);
        local_8._0_1_ = 0xb;
        piVar3 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_34);
        local_8._0_1_ = 7;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        (**(code **)(piVar3[0x15] + 4))(param_1 + 0xe);
        uVar4 = FUN_0090a830(param_1[0xc],local_50);
        local_8._0_1_ = 0xc;
        (**(code **)(*piVar3 + 0xcc))(uVar4,0);
        local_8._0_1_ = 7;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("select_goal",0xb);
        local_8._0_1_ = 0xd;
        goto LAB_0093ef84;
      }
      break;
    }
    iVar1 = *piVar3;
    piVar3 = (int *)piVar3[2];
  } while (*(int *)(iVar1 + 0x24) != *(int *)(param_3 + 8));
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("select_goal",0xb);
  local_8._0_1_ = 8;
  piVar3 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_34);
  local_8._0_1_ = 7;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  (**(code **)(piVar3[0x15] + 4))(param_1 + 0xe);
  uVar4 = FUN_0090a830(param_1[0xc],local_50);
  local_8._0_1_ = 9;
  (**(code **)(*piVar3 + 0xcc))(uVar4,0);
  local_8._0_1_ = 7;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  FUN_00409350("select_goal_invalid",0x13);
  local_8._0_1_ = 10;
LAB_0093ef84:
  piVar3 = (int *)(**(code **)(*(int *)param_1[8] + 0x34))(local_34);
  (**(code **)(*piVar3 + 200))(0xf060f060);
  local_8._0_1_ = 7;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("wargoal_icon",0xc);
  local_8 = CONCAT31(local_8._1_3_,0xe);
  piVar3 = (int *)(**(code **)(*(int *)param_1[8] + 0x44))(local_50);
  (**(code **)(*piVar3 + 0x48))(*(undefined4 *)(param_1[0xc] + 0xc));
  if (local_3c < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_50[0]);
}

