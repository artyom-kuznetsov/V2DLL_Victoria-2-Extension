// FUN_007627b0 @ 007627b0 body=[[007627b0, 0076282f] [00762833, 0076287e] [00762882, 007628d0] [007628d4, 00762922] [00762926, 00762974] [00762978, 007629c5] [007629c9, 00762a17] [00762a1b, 00762a59] [00762a5d, 00762aae] [00762ab2, 00762b00] [00762b04, 00762b51] [00762b55, 00762ba2] [00762ba6, 00762bef] [00762bf3, 00762c51]]


void FUN_007627b0(undefined4 *param_1)

{
  int iVar1;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b4407d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CFrontEndState::vftable;
  local_8 = 0xd;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("settings_button",0xf);
  local_8._0_1_ = 0xe;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0xe);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("single_player_button",0x14);
  local_8._0_1_ = 0xf;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x19);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("multi_player_button",0x13);
  local_8._0_1_ = 0x10;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x24);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("nudge_button",0xc);
  local_8._0_1_ = 0x11;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x2f);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("credits_button",0xe);
  local_8._0_1_ = 0x12;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x45);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("tutorial_button",0xf);
  local_8._0_1_ = 0x13;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x50);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("exit_button",0xb);
  local_8._0_1_ = 0x14;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x3a);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("gg_micro_button",0xf);
  local_8._0_1_ = 0x15;
  local_14 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  if (local_14 != 0) {
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("gg_micro_button",0xf);
    local_8._0_1_ = 0x16;
    iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
    (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x5b);
    local_8._0_1_ = 0xd;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
  }
  local_8._0_1_ = 0xd;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("twitter_button",0xe);
  local_8._0_1_ = 0x17;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x71);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("facebook_button",0xf);
  local_8._0_1_ = 0x18;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x66);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("homepage_button",0xf);
  local_8._0_1_ = 0x19;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x87);
  local_8._0_1_ = 0xd;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("forum_button",0xc);
  local_8 = CONCAT31(local_8._1_3_,0x1a);
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_30);
  (**(code **)(*(int *)(iVar1 + 0x54) + 8))(param_1 + 0x7c);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[0x87] = CButtonObserver::vftable;
  param_1[0x7c] = CButtonObserver::vftable;
  param_1[0x71] = CButtonObserver::vftable;
  param_1[0x66] = CButtonObserver::vftable;
  param_1[0x5b] = CButtonObserver::vftable;
  param_1[0x50] = CButtonObserver::vftable;
  param_1[0x45] = CButtonObserver::vftable;
  param_1[0x3a] = CButtonObserver::vftable;
  param_1[0x2f] = CButtonObserver::vftable;
  param_1[0x24] = CButtonObserver::vftable;
  param_1[0x19] = CButtonObserver::vftable;
  param_1[0xe] = CButtonObserver::vftable;
  param_1[3] = CButtonObserver::vftable;
  *param_1 = CFrontEndView::vftable;
  ExceptionList = local_10;
  return;
}

