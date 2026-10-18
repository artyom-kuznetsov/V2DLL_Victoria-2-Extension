// FUN_00796fe0 @ 00796fe0 body=[[00796fe0, 00797230] [00797234, 0079727e] [00797282, 007972d0] [007972d4, 00797321] [00797325, 00797372] [00797376, 007973c3] [007973c7, 00797413] [00797417, 00797461] [00797465, 00797525] [00797529, 00797593] [00797597, 00797612] [00797616, 00797636] [0079763a, 007976b0] [007976b4, 007976d4] [007976d8, 0079773d] [00797741, 00797842] [00797846, 0079786f] [00797873, 007978a0] [007978a4, 007978fa] [00797900, 0079793b] [0079793f, 007979f8] [007979fc, 00797a9e] [00797aa2, 00797ac6] [00797aca, 00797b48] [00797b4c, 00797b70] [00797b74, 00797b8b] [00797b8f, 00797ba9] [00797bad, 00797bd1] [00797bd5, 00797c81] [00797c85, 00797cac]]


int * FUN_00796fe0(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_12c [5];
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  undefined4 local_ac;
  uint local_a8;
  undefined1 local_a0 [4];
  int local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  undefined4 local_5c;
  undefined4 *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  undefined4 local_38;
  int *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b9ee93;
  local_10 = ExceptionList;
  local_7c = 0;
  ExceptionList = &local_10;
  param_1[2] = (int)CButtonObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[3] = (int)param_1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = (int)&LAB_007980b0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (int)CButtonObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[0xe] = (int)param_1;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = (int)FUN_007980c0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = (int)CCheckBoxObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[0x19] = (int)param_1;
  param_1[0x1a] = 0;
  param_1[0x1b] = (int)FUN_00797cb0;
  param_1[0x1c] = (int)FUN_00797cb0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = (int)CButtonObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[0x21] = (int)param_1;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = (int)&LAB_00798030;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = (int)CButtonObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[0x2c] = (int)param_1;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = (int)&LAB_00798050;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = (int)CButtonObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[0x37] = (int)param_1;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = (int)&LAB_00798070;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = (int)CButtonObserverGlue<CLeaderAssignmentPanel>::vftable;
  param_1[0x42] = (int)param_1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = (int)&LAB_00798090;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  local_8._0_1_ = 6;
  local_8._1_3_ = 0;
  param_1[0x4e] = (int)param_3;
  param_1[0x4c] = 0;
  param_1[1] = param_2;
  param_1[0x4d] = *(int *)(param_2 + 0xd8);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("leader_selection_panel",0x16);
  local_8._0_1_ = 7;
  local_34 = (int *)(**(code **)(*param_3 + 0x34))();
  local_58 = (undefined4 *)(*local_34 + 0x2c);
  uVar5 = (**(code **)(*param_3 + 0x3c))();
  iVar6 = (*(code *)*local_58)(local_30,uVar5);
  local_8._0_1_ = 6;
  *param_1 = iVar6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("back_button",0xb);
  local_8._0_1_ = 8;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 2);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("noleader_button",0xf);
  local_8._0_1_ = 9;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0xd);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("sort_prestige",0xd);
  local_8._0_1_ = 10;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x2b);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("sort_name",9);
  local_8._0_1_ = 0xb;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x20);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("sort_personality",0x10);
  local_8._0_1_ = 0xc;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x36);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("sort_background",0xf);
  local_8._0_1_ = 0xd;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x34))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x41);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("auto_assign",0xb);
  local_8._0_1_ = 0xe;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x48))(local_30);
  (**(code **)(*(int *)(iVar6 + 0x54) + 4))(param_1 + 0x18);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  piVar1 = *(int **)(param_2 + 0xd8);
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350("current_leader_prestige_bar",0x1b);
  local_8._0_1_ = 0xf;
  iVar6 = (**(code **)(*(int *)*param_1 + 0x44))(local_30);
  piVar2 = *(int **)(iVar6 + 0x94);
  FUN_00401000(0x47c35040);
  iVar6 = FUN_00b31c00();
  local_34 = (int *)__alldiv((longlong)piVar1[0x36] * (longlong)iVar6,1000,0);
  FUN_00401000(0x43fa4001);
  iVar6 = FUN_00b31c00();
  (**(code **)(*piVar2 + 0x5c))(((int)local_34 + iVar6) / 1000);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x10;
  local_34 = (int *)(**(code **)(*(int *)*param_1 + 0x3c))(local_30);
  FUN_00408ed0(piVar1 + 0x25,0,0xffffffff);
  FUN_00a5ecc0(piVar1 + 0x25,0);
  local_8._0_1_ = 6;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0x11;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350("unitleader_personality",0x16);
  local_8._0_1_ = 0x12;
  (**(code **)(*(int *)*param_1 + 0x3c))();
  FUN_00408ed0(local_54,0,0xffffffff);
  FUN_00a5ecc0(local_54,0);
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  local_8._0_1_ = 6;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 0x13;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  FUN_00409350("unitleader_background",0x15);
  local_8._0_1_ = 0x14;
  (**(code **)(*(int *)*param_1 + 0x3c))(local_78);
  FUN_00408ed0(local_54,0,0xffffffff);
  FUN_00a5ecc0(local_54,0);
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_78[0]);
  }
  local_8._0_1_ = 6;
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  cVar4 = (**(code **)(*piVar1 + 0x20))();
  if (cVar4 != '\0') {
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00409350("selected_photo",0xe);
    local_8._0_1_ = 0x15;
    local_34 = (int *)(**(code **)(*(int *)*param_1 + 0x44))(local_d8);
    local_8._0_1_ = 6;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_d8[0]);
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    FUN_00436780();
    local_8._0_1_ = 0x16;
    FUN_004367c0();
    local_8._0_1_ = 0x17;
    local_58 = *(undefined4 **)(DAT_012586e0 + 0x4c);
    if (local_58 == (undefined4 *)0x1) {
      FUN_00408ed0(local_30,0,0xffffffff);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350(&DAT_00df2c9c,4);
    local_8._0_1_ = 0x18;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    FUN_00409350("/interface/leaders/",0x13);
    local_8._0_1_ = 0x19;
    FUN_00988f20(piVar1 + 0x2d);
    local_8._0_1_ = 0x1a;
    FUN_00988f20(local_f4);
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_110);
    }
    local_fc = 0xf;
    local_100 = 0;
    local_110 = local_110 & 0xffffff00;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_bc);
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc = local_bc & 0xffffff00;
    local_8._0_1_ = 0x1e;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 0x1e;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f4[0]);
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (local_58 == (undefined4 *)0x2) {
      local_8._0_1_ = uVar3;
      uVar5 = FUN_00436de0(local_98,local_30,local_12c);
      local_8._0_1_ = 0x20;
      FUN_00408ed0(uVar5,0,0xffffffff);
      local_8._0_1_ = 0x1e;
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98[0]);
      }
    }
    else {
      uVar5 = FUN_00988f20(local_78);
      local_8._0_1_ = 0x1f;
      FUN_00408ed0(uVar5,0,0xffffffff);
      local_8._0_1_ = 0x1e;
      if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98[0]);
      }
    }
    local_8._0_1_ = 0x1e;
    iVar6 = (**(code **)(*param_3 + 0x40))();
    local_9c = FUN_00aae9af(0x1ac);
    local_8._0_1_ = 0x21;
    if (local_9c == 0) {
      uVar5 = 0;
    }
    else {
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      FUN_00409350("GFX_leader_generic0",0x13);
      local_8 = CONCAT31(local_8._1_3_,0x22);
      local_7c = 1;
      uVar5 = FUN_005c2ad0(local_54);
      local_5c = *(undefined4 *)(iVar6 + 0x6b9bc);
      local_58 = (undefined4 *)
                 CONCAT22((short)*(undefined4 *)(iVar6 + 0x6b9c0),
                          (short)*(undefined4 *)(iVar6 + 0x6b9bc));
      uVar5 = FUN_009c4b50(local_9c,local_58,local_78,uVar5,iVar6);
    }
    local_8 = 0x1e;
    if ((local_7c & 1) != 0) {
      if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_54[0]);
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
    }
    (**(code **)(*local_34 + 0xe0))(uVar5);
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("unitleader_background",0x15);
    local_8._0_1_ = 0x24;
    uVar5 = (**(code **)(*(int *)piVar1[0x20] + 0x18))(local_98);
    local_8._0_1_ = 0x25;
    local_9c = (**(code **)(*(int *)*param_1 + 0x3c))(local_54);
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98[0]);
    }
    local_8._0_1_ = 0x1e;
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("unitleader_personality",0x16);
    local_8._0_1_ = 0x26;
    uVar5 = (**(code **)(*(int *)piVar1[0x1f] + 0x18))(local_98);
    local_8._0_1_ = 0x27;
    (**(code **)(*(int *)*param_1 + 0x3c))(local_54);
    FUN_00408ed0(uVar5,0,0xffffffff);
    FUN_00a5ecc0(uVar5,0);
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_98[0]);
    }
    local_8._0_1_ = 0x1e;
    local_84 = 0xf;
    local_88 = 0;
    local_98[0] = local_98[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    (**(code **)(*local_34 + 0x34))();
    if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_78[0]);
    }
    local_64 = 0xf;
    local_68 = 0;
    local_78[0] = local_78[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_8._0_1_ = 6;
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_12c[0]);
    }
  }
  puVar7 = (undefined4 *)(**(code **)(*param_3 + 0x58))(local_a0);
  local_38 = *puVar7;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + puVar7[1] * 4) + 0x658) == '\0') {
    FUN_00409350("auto_assign",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x29);
    iVar6 = (**(code **)(*(int *)*param_1 + 0x48))(local_30);
    if ((*(char *)(iVar6 + 0xe4) == '\0') || (*(char *)(iVar6 + 0x142) != '\0')) {
      *(undefined4 *)(iVar6 + 0x6c) = 0;
      *(undefined4 *)(iVar6 + 0x10c) = 0;
    }
  }
  else {
    FUN_00409350("auto_assign",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x28);
    iVar6 = (**(code **)(*(int *)*param_1 + 0x48))(local_30);
    *(undefined4 *)(iVar6 + 0x6c) = 1;
    *(undefined4 *)(iVar6 + 0x10c) = 1;
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  if (local_1c < 0x10) {
    FUN_00797d40(param_1);
    (**(code **)(*(int *)(*param_1 + 0x18) + 0x34))();
    ExceptionList = local_10;
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_30[0]);
}

