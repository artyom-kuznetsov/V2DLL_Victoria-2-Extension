// FUN_007a0660 @ 007a0660 body=[[007a0660, 007a06f9] [007a06fd, 007a07fd] [007a0801, 007a0826] [007a082a, 007a0915] [007a0919, 007a093e] [007a0942, 007a09b0] [007a09b4, 007a09d7] [007a09db, 007a0a2a] [007a0a2e, 007a0a42]]


undefined4 * FUN_007a0660(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b436f9;
  local_10 = ExceptionList;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
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
  uVar4 = (**(code **)(*in_ECX + 0x2c))(local_50,param_3);
  param_1[8] = uVar4;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  *param_1 = CChannelSelectionOption::vftable;
  param_1[7] = CChannelSelectionOption::vftable;
  param_1[10] = param_2;
  local_14 = (int *)0x0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = FUN_007a05b0;
  param_1[0xc] = CCheckBoxObserverGlue<CChannelSelectionOption>::vftable;
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
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 7;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  if (param_2 == 0) {
    local_3c = 0xf;
    local_8._0_1_ = uVar3;
    FUN_00409350("TestChannel",0xb);
    local_8._0_1_ = 10;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("ChannelSelectionButton",0x16);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    iVar6 = (**(code **)(*(int *)param_1[8] + 0x48))(local_34);
    iVar5 = *(int *)(iVar6 + 300);
    FUN_00408ed0(local_50,0,0xffffffff);
    if (iVar5 != 0) {
      (**(code **)(**(int **)(iVar6 + 0x70) + 0xec))(*(undefined4 *)(iVar6 + 0x74),local_50,iVar5,2)
      ;
      (**(code **)(**(int **)(iVar6 + 0x70) + 0xf8))();
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8._0_1_ = 7;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfce2c,3);
    local_8._0_1_ = 0xe;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    FUN_00409350("button_text",0xb);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    (**(code **)(*(int *)param_1[8] + 0x38))(local_34);
  }
  else {
    local_3c = 0xf;
    FUN_00409350("ChannelSelectionButton",0x16);
    local_8._0_1_ = 8;
    local_14 = (int *)param_1[8];
    uVar4 = FUN_00a17000(param_2);
    local_8 = CONCAT31(local_8._1_3_,9);
    iVar5 = (**(code **)(*local_14 + 0x48))(local_50);
    local_14 = *(int **)(iVar5 + 300);
    FUN_00408ed0(uVar4,0,0xffffffff);
    if (local_14 != (int *)0x0) {
      (**(code **)(**(int **)(iVar5 + 0x70) + 0xec))(*(undefined4 *)(iVar5 + 0x74),uVar4,local_14,2)
      ;
      (**(code **)(**(int **)(iVar5 + 0x70) + 0xf8))();
    }
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_8._0_1_ = 7;
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("button_text",0xb);
    local_8._0_1_ = 0xc;
    piVar1 = (int *)param_1[8];
    FUN_00a17000(param_2);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    (**(code **)(*piVar1 + 0x38))(local_50);
  }
  FUN_009e7500();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_8._0_1_ = 7;
  uVar2 = local_34[0] >> 8;
  local_34[0] = uVar2 << 8;
  local_24 = 0;
  local_20 = 0xf;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = uVar2 << 8;
  FUN_00409350("ChannelSelectionButton",0x16);
  local_8 = CONCAT31(local_8._1_3_,0x10);
  iVar5 = (**(code **)(*(int *)param_1[8] + 0x48))(local_34);
  (**(code **)(*(int *)(iVar5 + 0x54) + 4))(param_1 + 0xc);
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  ExceptionList = local_10;
  return param_1;
}

