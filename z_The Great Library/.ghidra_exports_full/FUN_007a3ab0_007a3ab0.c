// FUN_007a3ab0 @ 007a3ab0 body=[[007a3ab0, 007a3b4f] [007a3b53, 007a3bf1] [007a3bf5, 007a3d3a] [007a3d3e, 007a3d62] [007a3d66, 007a3dad] [007a3db1, 007a3e6a] [007a3e6e, 007a3e91] [007a3e95, 007a3ee4] [007a3ee8, 007a3efc]]


undefined4 * FUN_007a3ab0(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
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
  puStack_c = &LAB_00b43559;
  local_10 = ExceptionList;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("ChannelSelectionItem",0x14);
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
  uVar3 = (**(code **)(*param_3 + 0x2c))(local_48,param_4);
  param_1[8] = uVar3;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  param_1[10] = param_2;
  *param_1 = CGameSelectionOption::vftable;
  param_1[7] = CGameSelectionOption::vftable;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = FUN_007a05b0;
  param_1[0xc] = CCheckBoxObserverGlue<CGameSelectionOption>::vftable;
  param_1[0xd] = param_1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  local_8._0_1_ = 7;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 8;
  cVar2 = FUN_00416db0();
  local_8._0_1_ = 7;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 7;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  if (cVar2 == '\0') {
    FUN_00409350("ChannelSelectionButton",0x16);
    local_8 = CONCAT31(local_8._1_3_,9);
    iVar4 = (**(code **)(*(int *)param_1[8] + 0x48))(local_48);
    iVar5 = *(int *)(iVar4 + 300);
    FUN_00408ed0(param_2 + 0x2c,0,0xffffffff);
    if (iVar5 != 0) {
      (**(code **)(**(int **)(iVar4 + 0x70) + 0xec))
                (*(undefined4 *)(iVar4 + 0x74),param_2 + 0x2c,iVar5,2);
      (**(code **)(**(int **)(iVar4 + 0x70) + 0xf8))();
    }
  }
  else {
    local_8._0_1_ = uVar1;
    FUN_00409350(&DAT_00dfce2c,3);
    local_8._0_1_ = 10;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("ChannelSelectionButton",0x16);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    iVar4 = (**(code **)(*(int *)param_1[8] + 0x48))(local_2c);
    iVar5 = *(int *)(iVar4 + 300);
    FUN_00408ed0(local_48,0,0xffffffff);
    if (iVar5 != 0) {
      (**(code **)(**(int **)(iVar4 + 0x70) + 0xec))(*(undefined4 *)(iVar4 + 0x74),local_48,iVar5,2)
      ;
      (**(code **)(**(int **)(iVar4 + 0x70) + 0xf8))();
    }
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
  }
  if (0xf < local_34) {
    local_8._0_1_ = 7;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_8._0_1_ = 7;
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0xc;
  cVar2 = FUN_00416db0();
  local_8._0_1_ = 7;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 7;
  if (local_34 < 0x10) {
    local_34 = 0xf;
    local_48[0] = local_48[0] & 0xffffff00;
    if (cVar2 == '\0') {
      local_38 = 0;
      FUN_00409350("button_text",0xb);
      local_8._0_1_ = 0xd;
      (**(code **)(*(int *)param_1[8] + 0x38))(local_48);
      FUN_009e7500();
    }
    else {
      local_38 = 0;
      local_8._0_1_ = uVar1;
      FUN_00409350(&DAT_00dfce2c,3);
      local_8._0_1_ = 0xe;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("button_text",0xb);
      local_8._0_1_ = 0xf;
      (**(code **)(*(int *)param_1[8] + 0x38))(local_2c);
      FUN_009e7500();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
    }
    if (0xf < local_34) {
      local_8._0_1_ = 7;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8._0_1_ = 7;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("ChannelSelectionButton",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    iVar5 = (**(code **)(*(int *)param_1[8] + 0x48))(local_2c);
    (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0xc);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_48[0]);
}

