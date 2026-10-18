// FUN_0076a2f0 @ 0076a2f0 body=[[0076a2f0, 0076a434] [0076a438, 0076a9c9] [0076a9cd, 0076ab05] [0076ab09, 0076ab9b] [0076ab9f, 0076abf1] [0076abf5, 0076ac6d] [0076ac71, 0076ac8d] [0076ac91, 0076ad09] [0076ad0d, 0076ad29] [0076ad2d, 0076ada5] [0076ada9, 0076adc5] [0076adc9, 0076ae41] [0076ae45, 0076ae61] [0076ae65, 0076aeb6] [0076aeba, 0076af1f] [0076af23, 0076afdc] [0076afe0, 0076affc] [0076b000, 0076b027]]


/* WARNING: Removing unreachable block (ram,0x0076a9c1) */

undefined4 * FUN_0076a2f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00bba4f6;
  local_10 = ExceptionList;
  local_18 = 0;
  ExceptionList = &local_10;
  *param_1 = CFrontEndView::vftable;
  param_1[1] = param_2;
  param_1[2] = CSessionInfoObserver::vftable;
  param_1[3] = &PTR_FUN_00e3a544;
  param_1[4] = 0x18d;
  param_1[5] = DAT_01268fec;
  param_1[6] = DAT_01268ff0;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[0xd] = 0xf;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[3] = CLobbyInterface::vftable;
  param_1[0x10] = 0x18d;
  param_1[0xf] = &PTR_FUN_00e3a544;
  param_1[0x11] = DAT_00f0d848;
  param_1[0x12] = DAT_00f0d84c;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x19] = 0xf;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  FUN_009c1390();
  param_1[0xf] = CLargefileHandlerInterface::vftable;
  local_8._0_1_ = 4;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 5;
  piVar2 = (int *)(**(code **)(*(int *)param_1[1] + 0x34))();
  (**(code **)(*piVar2 + 0x48))();
  param_1[0x1b] = &PTR___purecall_00e38700;
  local_1c = param_1 + 0x1c;
  param_1[0x21] = 0xf;
  param_1[0x20] = 0;
  *(undefined1 *)local_1c = 0;
  FUN_00408ed0();
  local_8._0_1_ = 6;
  FUN_009a4bd0();
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *param_1 = CGameSetup::vftable;
  param_1[2] = CGameSetup::vftable;
  param_1[3] = CGameSetup::vftable;
  param_1[0xf] = CGameSetup::vftable;
  param_1[0x1b] = CGameSetup::vftable;
  FUN_00779650(0,0,0,0,0,0,0,0,0);
  FUN_00779650(0,0,0,0,0,0,0,0,0);
  FUN_00779650(FUN_007720a0,0,0,0,0,0,0,0,0);
  param_1[0x60] = 0;
  FUN_00779650(FUN_007710d0,0,0,0,0,0,0,0,0);
  FUN_00779650(FUN_00772300,0,0,0,0,0,0,0,0);
  FUN_00779650(0,0,0,0,0,0,0,0,0);
  param_1[0x9e] = param_3;
  param_1[0x9f] = 0;
  param_1[0xa4] = FUN_004010c0;
  param_1[0xa0] = CTextBufferObserverGlue<CGameSetup>::vftable;
  param_1[0xa1] = param_1;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = CChatMessageObserverGlue<CGameSetup>::vftable;
  param_1[0xa9] = param_1;
  param_1[0xaa] = FUN_00771510;
  param_1[0xab] = 0;
  param_1[0xac] = CTextBufferObserverGlue<CGameSetup>::vftable;
  param_1[0xad] = param_1;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = FUN_00771da0;
  param_1[0xb3] = 0;
  local_8._0_1_ = 0x11;
  FUN_0067d7a0();
  param_1[0xc2] = 43800000;
  param_1[0xc2] = DAT_01259abc;
  param_1[0xc3] = 43800000;
  param_1[0xc3] = DAT_01259abc;
  param_1[0xc4] = 43800000;
  param_1[0xc4] = DAT_01259abc;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  *(undefined1 *)(param_1 + 0xd0) = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  *(undefined1 *)(param_1 + 0xd8) = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  *(undefined1 *)(param_1 + 0xdd) = 0;
  FUN_00779650(FUN_00777cc0,0,0,0,0,0,0,0,0);
  FUN_00779650(FUN_00778080,0,0,0,0,0,0,0,0);
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = FUN_00777db0;
  param_1[0x106] = CCheckBoxObserverGlue<CGameSetup>::vftable;
  param_1[0x107] = param_1;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  FUN_00779650(&LAB_0076d2c0,0,0,0,0,0,0,0,0);
  FUN_00779650(&LAB_0076d2e0,0,0,0,0,0,0,0,0);
  FUN_00779650(&LAB_0076d300,0,0,0,0,0,0,0,0);
  FUN_00779650(&LAB_0076d320,0,0,0,0,0,0,0,0);
  local_8._0_1_ = 0x1f;
  param_1[0x169] = 0xf;
  param_1[0x168] = 0;
  *(undefined1 *)(param_1 + 0x164) = 0;
  FUN_00409350();
  local_8._0_1_ = 0x20;
  param_1[0x16b] = 0xffffffff;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined2 *)(param_1 + 0x16f) = 0x100;
  *(undefined8 *)(param_1 + 0x172) = 0;
  param_1[0x174] = 0;
  param_1[0x17a] = 0xf;
  param_1[0x179] = 0;
  *(undefined1 *)(param_1 + 0x175) = 0;
  FUN_00409350();
  local_8._0_1_ = 0x21;
  local_20 = 0x2d2d2d;
  param_1[0x17d] = 0x2d2d2d;
  piVar2 = DAT_00f20c18;
  param_1[0x17c] = 1;
  param_1[0x17e] = 0;
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)FUN_00aae9af();
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
      DAT_00f20c18 = piVar2;
    }
    else {
      *piVar2 = (int)&PTR_FUN_00e38b28;
      DAT_00f20c18 = piVar2;
    }
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 4))();
  param_1[0x171] = piVar2;
  (**(code **)(*piVar2 + 8))();
  iVar3 = (**(code **)(*(int *)param_1[1] + 0x44))();
  uVar1 = *(uint *)(iVar3 + 0x6c);
  FUN_00408ed0();
  local_20 = 0x2d2d2d;
  local_54 = 0x2d2d2d;
  local_50 = 0;
  local_4c = 0x100;
  local_48 = 0;
  local_44 = local_44 & 0xffffff00;
  local_40 = DAT_01259abc;
  local_8._0_1_ = 0x22;
  local_58 = uVar1;
  FUN_00408ed0();
  param_1[0xbb] = local_58;
  param_1[0xbc] = local_54;
  *(undefined1 *)(param_1 + 0xbe) = (undefined1)local_4c;
  param_1[0xbd] = local_50;
  *(undefined1 *)((int)param_1 + 0x2f9) = local_4c._1_1_;
  local_8._0_1_ = 0x21;
  param_1[0xbf] = local_48;
  *(undefined1 *)(param_1 + 0xc0) = (undefined1)local_44;
  param_1[0xc1] = local_40;
  local_1c = (undefined4 *)FUN_00aae9af();
  local_8._0_1_ = 0x23;
  if (local_1c == (undefined4 *)0x0) {
    uVar4 = 0;
  }
  else {
    iVar3 = FUN_00aae9af();
    local_8._0_1_ = 0x24;
    if (iVar3 != 0) {
      local_28 = 0xf;
      local_2c = 0;
      local_3c[0] = local_3c[0] & 0xffffff00;
      FUN_00409350();
      local_8 = CONCAT31(local_8._1_3_,0x25);
      local_18 = 1;
      (**(code **)(*(int *)param_1[0x9e] + 0x40))();
      (**(code **)(*(int *)param_1[1] + 0x40))();
      iVar3 = FUN_00973bd0();
      if (iVar3 == 0) {
        FUN_00973bd0();
      }
      (**(code **)(*(int *)param_1[1] + 0x34))();
      FUN_009f4bc0();
    }
    local_8 = 0x26;
    FUN_00409350(&DAT_00ded94d,0);
    uVar4 = FUN_009f3c60(local_1c);
  }
  local_8 = 0x21;
  param_1[0x9f] = uVar4;
  if (((local_18 & 1) != 0) && (0xf < local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (*(int *)(param_1[0x9f] + 0x48) != 0) {
    (**(code **)(**(int **)(param_1[0x9f] + 0x48) + 4))();
  }
  FUN_00679bf0();
  *(undefined2 *)(param_1[0x9f] + 0x4c) = 100;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x28;
  iVar3 = (**(code **)(*(int *)param_1[0x9e] + 0x34))();
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  local_8._0_1_ = 0x21;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x29;
  iVar3 = (**(code **)(*(int *)param_1[0x9e] + 0x34))();
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  local_8._0_1_ = 0x21;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x2a;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x2b;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x9e] + 0x6c))();
  iVar3 = (**(code **)(*piVar2 + 0x34))();
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))();
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x21;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x2c;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x2d;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x9e] + 0x6c))();
  iVar3 = (**(code **)(*piVar2 + 0x34))();
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x128);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8._0_1_ = 0x21;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350("lobby_sort_military",0x13);
  local_8._0_1_ = 0x2e;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("playable_countries_window",0x19);
  local_8._0_1_ = 0x2f;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x9e] + 0x6c))(local_3c);
  iVar3 = (**(code **)(*piVar2 + 0x34))(&local_58);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x13c);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8._0_1_ = 0x21;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350("lobby_sort_industry",0x13);
  local_8._0_1_ = 0x30;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("playable_countries_window",0x19);
  local_8._0_1_ = 0x31;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x9e] + 0x6c))(local_3c);
  iVar3 = (**(code **)(*piVar2 + 0x34))(&local_58);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x150);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8._0_1_ = 0x21;
  local_28 = 0xf;
  local_2c = 0;
  uVar1 = local_3c[0] >> 8;
  local_3c[0] = uVar1 << 8;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = uVar1 << 8;
  FUN_00409350("lobby_chat_edit",0xf);
  local_8._0_1_ = 0x32;
  iVar3 = (**(code **)(*(int *)param_1[0x9e] + 0x40))(local_3c);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0xac);
  iVar3 = DAT_012586dc;
  local_8._0_1_ = 0x21;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  param_1[0xc3] = *(undefined4 *)(DAT_012586dc + 8);
  param_1[0xc4] = *(undefined4 *)(iVar3 + 0xc);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("gamesetup",9);
  local_8._0_1_ = 0x33;
  (**(code **)(*(int *)(param_1[0x9e] + 0x18) + 0x78))(local_3c);
  local_8._0_1_ = 0x21;
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (DAT_00f20c18 == (int *)0x0) {
    DAT_00f20c18 = (int *)FUN_00aae9af(4);
    if (DAT_00f20c18 == (int *)0x0) {
      DAT_00f20c18 = (int *)0x0;
    }
    else {
      *DAT_00f20c18 = (int)&PTR_FUN_00e38b28;
    }
  }
  uVar4 = (**(code **)(*DAT_00f20c18 + 4))();
  param_1[0x16e] = uVar4;
  local_44 = 0xf;
  local_48 = 0;
  local_58 = local_58 & 0xffffff00;
  FUN_00409350("player_shield",0xd);
  local_8._0_1_ = 0x34;
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  FUN_00409350("singleplayer",0xc);
  local_8._0_1_ = 0x35;
  piVar2 = (int *)(**(code **)(*(int *)param_1[0x9e] + 0x6c))(local_3c);
  iVar3 = (**(code **)(*piVar2 + 0x34))(&local_58);
  (**(code **)(*(int *)(iVar3 + 0x54) + 4))(param_1 + 0x4c);
  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  local_8 = CONCAT31(local_8._1_3_,0x21);
  local_28 = 0xf;
  local_2c = 0;
  local_3c[0] = local_3c[0] & 0xffffff00;
  if (0xf < local_44) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_58);
  }
  if (*(char *)(param_1 + 7) == '\0') {
    FUN_009c1390(&DAT_00f0d870);
  }
  ExceptionList = local_10;
  return param_1;
}

