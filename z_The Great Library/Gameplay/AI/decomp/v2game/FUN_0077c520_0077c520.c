// FUN_0077c520 @ 0077c520 body=[[0077c520, 0077c5d5] [0077c5d9, 0077c664] [0077c668, 0077c6b8] [0077c6bc, 0077c768] [0077c76c, 0077c7aa] [0077c7ae, 0077c7ec] [0077c7f0, 0077c82e] [0077c832, 0077c870] [0077c874, 0077c8e3] [0077c8e7, 0077c922] [0077c926, 0077c964] [0077c968, 0077c9a3] [0077c9a7, 0077c9f1]]


undefined4 * FUN_0077c520(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  short *psVar6;
  int *piVar7;
  int *in_ECX;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  char *local_30 [4];
  uint local_20;
  char *local_1c;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b43b7b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = in_ECX;
  param_1[8] = CButtonObserverGlue<CNavyOption::CIconSlot>::vftable;
  param_1[9] = param_1;
  param_1[10] = &LAB_0077ca00;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  local_8 = 0;
  param_1[0x1f] = param_3;
  *(bool *)(param_1 + 0x20) = param_3 != (int *)0x0;
  uVar3 = (**(code **)(*in_ECX + 0x6c))(param_2);
  param_1[1] = uVar3;
  local_20 = 0xf;
  local_30[3] = (char *)0x0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 1;
  (**(code **)(*(int *)(param_1[1] + 0x18) + 0x78))(&local_34);
  local_8._0_1_ = 0;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  param_3 = param_1 + 2;
  local_30[0] = "attacker_icon_normal";
  local_30[1] = "attacker_icon_attacking";
  local_30[2] = "attacker_icon_sunk";
  local_30[3] = "attacker_icon_retreat";
  local_20 = 0xe1552c;
  local_1c = "seeking_target";
  param_2 = 0;
  do {
    pcVar2 = local_30[param_2];
    local_14 = pcVar2 + 1;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(pcVar2,(int)pcVar4 - (int)local_14);
    local_8._0_1_ = 2;
    iVar5 = (**(code **)(*(int *)param_1[1] + 0x34))(local_50);
    local_8._0_1_ = 0;
    *param_3 = iVar5;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    (**(code **)(*(int *)*param_3 + 0x104))();
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("combat_view",0xb);
    local_8._0_1_ = 3;
    (**(code **)(*(int *)*param_3 + 0x78))(local_50);
    local_8._0_1_ = 0;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    (**(code **)(*(int *)(*param_3 + 0x54) + 4))(param_1 + 8);
    param_3 = param_3 + 1;
    param_2 = param_2 + 1;
  } while (param_2 < 6);
  psVar6 = (short *)(**(code **)(*(int *)param_1[2] + 0x3c))(&param_3);
  param_1[0x18] = (int)*psVar6;
  iVar5 = (**(code **)(*(int *)param_1[2] + 0x3c))(&param_3);
  param_1[0x19] = (int)*(short *)(iVar5 + 2);
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("naval_combat_range",0x12);
  local_8._0_1_ = 4;
  piVar7 = (int *)(**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x34))();
  iVar5 = (**(code **)(*piVar7 + 0x48))(local_50);
  local_14 = *(char **)(iVar5 + 0x68);
  local_8._0_1_ = 0;
  param_1[0x1e] = *(undefined4 *)(iVar5 + 100);
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00e1556c,3);
  local_8._0_1_ = 5;
  uVar3 = (**(code **)(*(int *)param_1[1] + 0x44))(local_50);
  local_8._0_1_ = 0;
  param_1[0x13] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350(&DAT_00e15570,3);
  local_8._0_1_ = 6;
  uVar3 = (**(code **)(*(int *)param_1[1] + 0x44))(local_50);
  local_8._0_1_ = 0;
  param_1[0x15] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("mini_frame_str",0xe);
  local_8._0_1_ = 7;
  uVar3 = (**(code **)(*(int *)param_1[1] + 0x44))(local_50);
  local_8._0_1_ = 0;
  param_1[0x14] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("mini_frame_org",0xe);
  local_8._0_1_ = 8;
  uVar3 = (**(code **)(*(int *)param_1[1] + 0x44))(local_50);
  local_8._0_1_ = 0;
  param_1[0x16] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  (**(code **)(*(int *)param_1[0x13] + 0x104))();
  (**(code **)(*(int *)param_1[0x15] + 0x104))();
  (**(code **)(*(int *)param_1[0x14] + 0x104))();
  (**(code **)(*(int *)param_1[0x16] + 0x104))();
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 9;
  (**(code **)(*(int *)param_1[0x14] + 0x78))(local_50);
  local_8._0_1_ = 0;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 10;
  (**(code **)(*(int *)param_1[0x16] + 0x78))(local_50);
  local_8._0_1_ = 0;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("torpedo",7);
  local_8._0_1_ = 0xb;
  uVar3 = (**(code **)(*(int *)param_1[1] + 0x44))(local_50);
  local_8._0_1_ = 0;
  param_1[0x17] = uVar3;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  FUN_00409350("combat_view",0xb);
  local_8._0_1_ = 0xc;
  (**(code **)(*(int *)param_1[0x17] + 0x78))(local_50);
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_50[0]);
  }
  (**(code **)(*(int *)param_1[0x17] + 0x104))();
  psVar6 = (short *)(**(code **)(*(int *)param_1[0x17] + 0x3c))(&param_3);
  param_1[0x1c] = (int)*psVar6;
  iVar5 = (**(code **)(*(int *)param_1[0x17] + 0x3c))(&param_3);
  param_1[0x1d] = (int)*(short *)(iVar5 + 2);
  ExceptionList = local_10;
  return param_1;
}

