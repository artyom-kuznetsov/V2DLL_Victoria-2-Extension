// FUN_0075ac50 @ 0075ac50 body=[[0075ac50, 0075b2bd] [0075b2c1, 0075b317] [0075b31b, 0075b36c] [0075b370, 0075b3c1] [0075b3c5, 0075b416] [0075b41a, 0075b46b] [0075b46f, 0075b4b4] [0075b4b8, 0075b506] [0075b50a, 0075b558] [0075b55c, 0075b5aa] [0075b5ae, 0075b5ff] [0075b603, 0075b654] [0075b658, 0075b6a9] [0075b6ad, 0075b723] [0075b727, 0075b742] [0075b746, 0075b7bc] [0075b7c0, 0075b7db] [0075b7df, 0075b855] [0075b859, 0075b874] [0075b878, 0075b8ee] [0075b8f2, 0075b90d] [0075b911, 0075b987] [0075b98b, 0075b9a6] [0075b9aa, 0075ba20] [0075ba24, 0075ba3f] [0075ba43, 0075baa7]]


undefined4 * FUN_0075ac50(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b97c60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_1 = CSettingsScreen::vftable;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[3] = param_1;
  param_1[4] = FUN_0075f060;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0xe] = param_1;
  param_1[0xf] = FUN_0075f560;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x19] = param_1;
  param_1[0x1a] = FUN_0075fa60;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x24] = param_1;
  param_1[0x25] = FUN_007600d0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x2f] = param_1;
  param_1[0x30] = FUN_00760740;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x3a] = param_1;
  param_1[0x3b] = FUN_00760950;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x45] = param_1;
  param_1[0x46] = FUN_00760b60;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x50] = param_1;
  param_1[0x51] = FUN_00760d20;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  local_8 = 7;
  uStack_7 = 0;
  param_1[0x5b] = 0;
  param_1[0x5f] = param_2;
  uVar1 = (**(code **)(*param_2 + 0x40))();
  param_1[0x60] = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x34))();
  param_1[0x61] = uVar1;
  param_1[0x62] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[99] = param_1;
  param_1[100] = FUN_0075c650;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x6e] = param_1;
  param_1[0x6f] = &LAB_00761f00;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x79] = param_1;
  param_1[0x7a] = FUN_0075d7e0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x84] = param_1;
  param_1[0x85] = FUN_00761030;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x8f] = param_1;
  param_1[0x90] = FUN_007610e0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0x9a] = param_1;
  param_1[0x9b] = FUN_00761190;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0xa5] = param_1;
  param_1[0xa6] = FUN_00761240;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = CCheckBoxObserverGlue<CSettingsScreen>::vftable;
  param_1[0xb0] = param_1;
  param_1[0xb1] = 0;
  param_1[0xb2] = &LAB_00760ef0;
  param_1[0xb3] = &LAB_00760ef0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb8] = CScrollbarObserverGlue<CSettingsScreen>::vftable;
  param_1[0xb9] = param_1;
  param_1[0xba] = FUN_00760f10;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = CCheckBoxObserverGlue<CSettingsScreen>::vftable;
  param_1[0xbf] = param_1;
  param_1[0xc0] = 0;
  param_1[0xc1] = &LAB_00760ed0;
  param_1[0xc2] = &LAB_00760ed0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 2;
  param_1[0xd6] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0xd7] = param_1;
  param_1[0xd8] = FUN_00761500;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0xe2] = param_1;
  param_1[0xe3] = FUN_007612f0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0xed] = param_1;
  param_1[0xee] = FUN_007617f0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = CButtonObserverGlue<CSettingsScreen>::vftable;
  param_1[0xf8] = param_1;
  param_1[0xf9] = FUN_00761a00;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  local_8 = 0x15;
  uVar1 = (**(code **)(*param_2 + 0x3c))();
  uVar1 = (**(code **)(*(int *)param_1[0x61] + 0x2c))(param_3,uVar1);
  param_1[0xd3] = uVar1;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("BackButton",10);
  local_8 = 0x16;
  iVar2 = (**(code **)(*(int *)param_1[0xd3] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x6d);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("ApplyButton",0xb);
  local_8 = 0x17;
  iVar2 = (**(code **)(*(int *)param_1[0xd3] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x62);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("settings_tab_1",0xe);
  local_8 = 0x18;
  iVar2 = (**(code **)(*(int *)param_1[0xd3] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x83);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("settings_tab_2",0xe);
  local_8 = 0x19;
  iVar2 = (**(code **)(*(int *)param_1[0xd3] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x8e);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("settings_tab_3",0xe);
  local_8 = 0x1a;
  iVar2 = (**(code **)(*(int *)param_1[0xd3] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x99);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("settings_tab_4",0xe);
  local_8 = 0x1b;
  iVar2 = (**(code **)(*(int *)param_1[0xd3] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xa4);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = 0x1c;
  uVar1 = (**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  local_8 = 0x15;
  param_1[0xce] = uVar1;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("decrease_resolution_button",0x1a);
  local_8 = 0x1d;
  iVar2 = (**(code **)(*(int *)param_1[0xce] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 2);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("increase_resolution_button",0x1a);
  local_8 = 0x1e;
  iVar2 = (**(code **)(*(int *)param_1[0xce] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xd);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("decrease_window_button",0x16);
  local_8 = 0x1f;
  iVar2 = (**(code **)(*(int *)param_1[0xce] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x18);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("increase_window_button",0x16);
  local_8 = 0x20;
  iVar2 = (**(code **)(*(int *)param_1[0xce] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x23);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("decrease_refreshrate_button",0x1b);
  local_8 = 0x21;
  iVar2 = (**(code **)(*(int *)param_1[0xce] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x2e);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("increase_refreshrate_button",0x1b);
  local_8 = 0x22;
  iVar2 = (**(code **)(*(int *)param_1[0xce] + 0x34))(local_2c);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x39);
  local_8 = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("decrease_autosave_button",0x18);
  local_8 = 0x23;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_GAME",0x12);
  local_8 = 0x24;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar3 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xd6);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0x15;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("increase_autosave_button",0x18);
  local_8 = 0x25;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_GAME",0x12);
  local_8 = 0x26;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar3 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xe1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0x15;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("decrease_difficulty_button",0x1a);
  local_8 = 0x27;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_GAME",0x12);
  local_8 = 0x28;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar3 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xec);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0x15;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("increase_difficulty_button",0x1a);
  local_8 = 0x29;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_GAME",0x12);
  local_8 = 0x2a;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar3 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0xf7);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0x15;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("decrease_multisample_button",0x1b);
  local_8 = 0x2b;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = 0x2c;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar3 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x44);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_8 = 0x15;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("increase_multisample_button",0x1b);
  local_8 = 0x2d;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("menu_settings_VIDEO",0x13);
  local_8 = 0x2e;
  piVar3 = (int *)(**(code **)(*(int *)param_1[0xd3] + 0x6c))(local_2c);
  iVar2 = (**(code **)(*piVar3 + 0x34))(local_48);
  (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x4f);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  _local_8 = CONCAT31(uStack_7,0x15);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  (**(code **)(*(int *)(param_1[0xd3] + 0x18) + 0x34))();
  (**(code **)(*(int *)param_1[0xd3] + 0x70))();
  (**(code **)(*(int *)(param_1[0xce] + 0x18) + 0x34))();
  FUN_0075bbd0(param_1);
  FUN_0075c420();
  FUN_0075c0d0();
  FUN_0075c2c0();
  FUN_0075d8d0(param_1);
  ExceptionList = local_10;
  return param_1;
}

