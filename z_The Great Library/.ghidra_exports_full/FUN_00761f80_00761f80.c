// FUN_00761f80 @ 00761f80 body=[[00761f80, 00762374] [00762378, 007623c9] [007623cd, 0076241e] [00762422, 00762473] [00762477, 007624c8] [007624cc, 0076251d] [00762521, 00762572] [00762576, 007625c7] [007625cb, 0076261c] [00762620, 00762671] [00762675, 007626c6] [007626ca, 0076270d] [00762711, 00762763] [00762767, 0076277b]]


undefined4 * FUN_00761f80(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b7bfdd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[1] = param_2;
  *param_1 = CFrontEndState::vftable;
  param_1[2] = param_3;
  param_1[3] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[4] = param_1;
  param_1[5] = &LAB_00762cf0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0xf] = param_1;
  param_1[0x10] = &LAB_00762d90;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x1a] = param_1;
  param_1[0x1b] = &LAB_00762e10;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x25] = param_1;
  param_1[0x26] = &LAB_00762e70;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x30] = param_1;
  param_1[0x31] = &LAB_00762f00;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x3b] = param_1;
  param_1[0x3c] = &LAB_00762f10;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x46] = param_1;
  param_1[0x47] = &LAB_00762f20;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x51] = param_1;
  param_1[0x52] = &LAB_00762fa0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x5c] = param_1;
  param_1[0x5d] = &LAB_007630a0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x67] = param_1;
  param_1[0x68] = &LAB_00763080;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x72] = param_1;
  param_1[0x73] = &LAB_00763060;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x7d] = param_1;
  param_1[0x7e] = &LAB_00763020;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = CButtonObserverGlue<CFrontEndState>::vftable;
  param_1[0x88] = param_1;
  param_1[0x89] = &LAB_00763040;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  local_8 = 0xd;
  uStack_7 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("settings_button",0xf);
  local_8 = 0xe;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0xe);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("single_player_button",0x14);
  local_8 = 0xf;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x19);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("multi_player_button",0x13);
  local_8 = 0x10;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x24);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("nudge_button",0xc);
  local_8 = 0x11;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x2f);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("credits_button",0xe);
  local_8 = 0x12;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x45);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("twitter_button",0xe);
  local_8 = 0x13;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x71);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("facebook_button",0xf);
  local_8 = 0x14;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x66);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("homepage_button",0xf);
  local_8 = 0x15;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x87);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("forum_button",0xc);
  local_8 = 0x16;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x7c);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("tutorial_button",0xf);
  local_8 = 0x17;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x50);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("exit_button",0xb);
  local_8 = 0x18;
  iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x3a);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("gg_micro_button",0xf);
  local_8 = 0x19;
  iVar1 = (**(code **)(*(int *)param_1[2] + 0x34))(local_2c);
  local_8 = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  if (iVar1 != 0) {
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("gg_micro_button",0xf);
    _local_8 = CONCAT31(uStack_7,0x1a);
    iVar1 = (**(code **)(*param_3 + 0x34))(local_2c);
    (**(code **)(*(int *)(iVar1 + 0x54) + 4))(param_1 + 0x5b);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

