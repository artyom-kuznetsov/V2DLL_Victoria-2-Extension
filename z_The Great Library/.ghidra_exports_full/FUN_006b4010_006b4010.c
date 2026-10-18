// FUN_006b4010 @ 006b4010 body=[[006b4010, 006b4211] [006b4215, 006b42a6] [006b42aa, 006b4301] [006b4305, 006b431c] [006b4320, 006b441e] [006b4422, 006b4470] [006b4474, 006b44bf] [006b44c3, 006b455f] [006b4563, 006b45b1] [006b45b5, 006b4600] [006b4604, 006b4649] [006b464d, 006b474e] [006b4752, 006b477e] [006b4782, 006b47a7] [006b47ab, 006b47fe] [006b4802, 006b4860] [006b4864, 006b494a] [006b494e, 006b49d0] [006b49d4, 006b4a1d] [006b4a21, 006b4a9e] [006b4aa2, 006b4ac3] [006b4ac7, 006b4b0f] [006b4b13, 006b4b88] [006b4b8c, 006b4bd1] [006b4bd5, 006b4c4a] [006b4c4e, 006b4c93] [006b4c97, 006b4d09] [006b4d0d, 006b4d52] [006b4d56, 006b4dba] [006b4dbe, 006b4e39] [006b4e3d, 006b4f0e] [006b4f12, 006b4f3e] [006b4f42, 006b4f63] [006b4f67, 006b4f83] [006b4f87, 006b5004] [006b5008, 006b5032] [006b5036, 006b50c2] [006b50c6, 006b5125] [006b5129, 006b51a6] [006b51aa, 006b51ca] [006b51ce, 006b524a] [006b524e, 006b5278] [006b527c, 006b52c4] [006b52c8, 006b52e5] [006b52e9, 006b530f] [006b5313, 006b5340] [006b5344, 006b539d]]


int * FUN_006b4010(int param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  float10 fVar12;
  undefined8 uVar13;
  uint local_1c8;
  uint local_1b4;
  uint local_1ac [4];
  undefined4 local_19c;
  uint local_198;
  uint local_190;
  undefined4 local_180;
  uint local_17c;
  uint local_174;
  undefined4 local_164;
  uint local_160;
  undefined1 local_158 [4];
  undefined1 local_154 [4];
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  uint local_134 [4];
  undefined4 local_124;
  uint local_120;
  uint local_118 [4];
  undefined4 local_108;
  uint local_104;
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  int local_c4;
  int local_c0;
  int local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  float local_a8;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  int local_88;
  int local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  int *local_60;
  undefined1 local_59;
  undefined4 local_58;
  undefined4 *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  uint local_34;
  int *local_30;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b62235;
  local_10 = ExceptionList;
  local_34 = 0;
  ExceptionList = &local_10;
  piVar5 = (int *)(**(code **)(*param_3 + 0x2c))();
  *param_2 = *piVar5;
  if (param_3[0x41] == 0) {
    local_a8 = DAT_00f092dc;
  }
  else {
    fVar12 = (float10)(**(code **)(*(int *)(param_3[0x41] + 0x54) + 0x10))();
    local_a8 = (float)fVar12;
  }
  (**(code **)(*param_3 + 0x50))();
  local_88 = 0;
  if (0 < param_5) {
    FUN_00401000(0x3f000000);
    local_b8 = FUN_00b31c00();
    FUN_00401000(0x47c35040);
    local_b4 = FUN_00b31c00();
    local_b0 = local_b4 >> 0x1f;
    do {
      piVar5 = (int *)*param_2;
      local_30 = *(int **)(param_4 + local_88 * 4);
      if (piVar5 == (int *)0x0) {
        puVar6 = (undefined4 *)FUN_00aae9af(0x2c);
        local_8 = 0;
        local_60 = puVar6;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          local_104 = 0xf;
          local_108 = 0;
          local_118[0] = local_118[0] & 0xffffff00;
          FUN_00409350("unit_entry",10);
          piVar5 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,1);
          local_34 = local_34 | 1;
          uVar9 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
          puVar6[1] = 0;
          puVar6[2] = 0;
          puVar6[3] = 0;
          *(undefined1 *)(puVar6 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar6 + 5) = 0;
          *(undefined1 *)(puVar6 + 6) = 0;
          puVar6[7] = &PTR_FUN_00e39158;
          local_8 = 5;
          *puVar6 = &PTR_FUN_00e392f0;
          puVar6[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar6 + 9) = 0;
          uVar9 = (**(code **)(*piVar5 + 0x2c))(local_118,uVar9);
          puVar6[8] = uVar9;
          *puVar6 = CUnitListboxItem::vftable;
          puVar6[7] = CUnitListboxItem::vftable;
          puVar6[10] = local_30;
        }
        local_8 = 0xffffffff;
        local_54 = puVar6;
        if ((local_34 & 1) != 0) {
          local_34 = local_34 & 0xfffffffe;
          if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_118[0]);
          }
          local_104 = 0xf;
          local_108 = 0;
          local_118[0] = local_118[0] & 0xffffff00;
        }
        (**(code **)(*param_3 + 0x10))(puVar6,0);
        piVar5 = (int *)puVar6[8];
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        FUN_00409350("military_unit_entry_bg",0x16);
        local_8 = 7;
        iVar11 = (**(code **)(*piVar5 + 0x34))(local_50);
        piVar7 = *(int **)(iVar11 + 0x58);
        local_59 = piVar7 == (int *)0x0;
        if (!(bool)local_59) {
          do {
            if (*piVar7 == param_1 + 0x1ac) break;
            piVar7 = (int *)piVar7[2];
          } while (piVar7 != (int *)0x0);
          local_59 = piVar7 == (int *)0x0;
        }
        local_8 = 0xffffffff;
        if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_50[0]);
        }
        if ((bool)local_59 != false) {
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          FUN_00409350("military_unit_entry_bg",0x16);
          local_8 = 8;
          iVar11 = (**(code **)(*piVar5 + 0x34))(local_50);
          (**(code **)(*(int *)(iVar11 + 0x54) + 4))(param_1 + 0x1ac);
          local_8 = 0xffffffff;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
        }
      }
      else {
        local_54 = (undefined4 *)*piVar5;
        local_54[10] = local_30;
        *param_2 = piVar5[2];
      }
      piVar5 = (int *)local_54[8];
      iVar11 = local_b8;
      for (piVar7 = (int *)local_30[0xe]; piVar7 != (int *)0x0; piVar7 = (int *)piVar7[2]) {
        iVar11 = iVar11 + *(int *)(*piVar7 + 0x3c);
      }
      piVar7 = (int *)(**(code **)(*local_30 + 0x50))(local_154);
      local_54 = (undefined4 *)*piVar7;
      if (local_54 == (undefined4 *)0x0) {
        iVar11 = -1;
      }
      else if (iVar11 + 0x189373U < 0x39580e) {
        iVar11 = (iVar11 * 1000) / (int)local_54;
      }
      else {
        local_c0 = (int)local_54 >> 0x1f;
        local_c4 = (int)local_54;
        uVar13 = __allmul(iVar11,iVar11 >> 0x1f,1000,0);
        iVar11 = __alldiv(uVar13,local_c4,local_c0);
        local_60 = (int *)(iVar11 >> 0x1f);
      }
      uVar13 = __allmul(iVar11,iVar11 >> 0x1f,100000,0);
      iVar11 = __alldiv(uVar13,1000,0);
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("strength_progress",0x11);
      local_8 = 9;
      iVar8 = (**(code **)(*piVar5 + 0x44))(local_50);
      (**(code **)(**(int **)(iVar8 + 0x94) + 0x60))(iVar11 / 1000);
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("strength_progress",0x11);
      local_8 = 10;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x108))();
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("strength_progress",0x11);
      local_8 = 0xb;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      piVar7 = (int *)(**(code **)(*local_30 + 0x58))(local_158);
      uVar13 = __allmul(*piVar7,*piVar7 >> 0x1f,local_b4,local_b0);
      iVar11 = __alldiv(uVar13,1000,0);
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("morale_progress",0xf);
      local_8 = 0xc;
      iVar8 = (**(code **)(*piVar5 + 0x44))(local_50);
      (**(code **)(**(int **)(iVar8 + 0x94) + 0x60))(iVar11 / 1000);
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("morale_progress",0xf);
      local_8 = 0xd;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x108))();
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350("morale_progress",0xf);
      local_8 = 0xe;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_50);
      (**(code **)(*piVar7 + 0x34))();
      local_8 = 0xffffffff;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350("leader",6);
      local_8 = 0xf;
      local_60 = (int *)(**(code **)(*piVar5 + 0x44))(local_80);
      local_8 = 0xffffffff;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_54 = (undefined4 *)local_30[0x36];
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00436780();
      local_8 = 0x10;
      FUN_004367c0();
      local_8._0_1_ = 0x11;
      local_84 = *(int *)(DAT_012586e0 + 0x4c);
      if (local_84 == 1) {
        FUN_00408ed0(local_150,0,0xffffffff);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      FUN_00409350(&DAT_00df2c9c,4);
      local_8._0_1_ = 0x12;
      local_e8 = 0xf;
      local_ec = 0;
      local_fc = local_fc & 0xffffff00;
      FUN_00409350("/interface/leaders/",0x13);
      local_8._0_1_ = 0x13;
      FUN_00988f20((int)local_54 + 0xb4);
      local_8._0_1_ = 0x14;
      FUN_00988f20(local_50);
      if (0xf < local_1b4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_1c8);
      }
      local_1b4 = 0xf;
      local_1c8 = local_1c8 & 0xffffff00;
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_fc);
      }
      local_e8 = 0xf;
      local_ec = 0;
      local_fc = local_fc & 0xffffff00;
      local_8._0_1_ = 0x18;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 0x18;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_50[0]);
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50[0] = local_50[0] & 0xffffff00;
      if (local_84 == 2) {
        local_8._0_1_ = uVar3;
        uVar9 = FUN_00436de0(local_1ac,local_150,local_134);
        local_8._0_1_ = 0x1a;
        FUN_00408ed0(uVar9,0,0xffffffff);
        local_8._0_1_ = 0x18;
        if (0xf < local_198) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_1ac[0]);
        }
        local_198 = 0xf;
        local_19c = 0;
        local_1ac[0] = local_1ac[0] & 0xffffff00;
      }
      else {
        uVar9 = FUN_00988f20(local_e0);
        local_8._0_1_ = 0x19;
        FUN_00408ed0(uVar9,0,0xffffffff);
        local_8._0_1_ = 0x18;
        if (0xf < local_160) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_174);
        }
        local_160 = 0xf;
        local_164 = 0;
        local_174 = local_174 & 0xffffff00;
      }
      local_8._0_1_ = 0x18;
      iVar11 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x40))();
      local_84 = FUN_00aae9af(0x1ac);
      local_8._0_1_ = 0x1b;
      if (local_84 == 0) {
        local_54 = (undefined4 *)0x0;
      }
      else {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("GFX_leader_generic0",0x13);
        local_8 = CONCAT31(local_8._1_3_,0x1c);
        local_34 = local_34 | 2;
        uVar9 = FUN_005c2ad0(local_2c);
        local_58 = *(undefined4 *)(iVar11 + 0x6b9bc);
        local_54 = *(undefined4 **)(iVar11 + 0x6b9c0);
        local_ac = CONCAT22((short)local_54,(short)*(undefined4 *)(iVar11 + 0x6b9bc));
        local_54 = (undefined4 *)FUN_009c4b50(local_84,local_ac,local_e0,uVar9,iVar11);
      }
      piVar7 = local_60;
      local_8 = 0x18;
      if ((local_34 & 2) != 0) {
        local_34 = local_34 & 0xfffffffd;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
      }
      (**(code **)(*local_60 + 0xe0))(local_54);
      (**(code **)(*piVar7 + 0x108))();
      (**(code **)(*piVar7 + 0x34))();
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("unit_progress",0xd);
      local_8._0_1_ = 0x1e;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
      (**(code **)(*piVar7 + 0x104))();
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("unit_eta",8);
      local_8._0_1_ = 0x1f;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x3c))(local_2c);
      (**(code **)(*piVar7 + 0x38))();
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350(&DAT_00ded94d,0);
      local_8._0_1_ = 0x20;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("unit_eta",8);
      local_8._0_1_ = 0x21;
      (**(code **)(*piVar5 + 0x3c))(local_2c);
      FUN_00408ed0(local_80,0,0xffffffff);
      FUN_00a5ecc0(local_80,0);
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_8._0_1_ = 0x18;
      local_18 = 0xf;
      local_1c = 0;
      uVar1 = local_2c[0] >> 8;
      local_2c[0] = uVar1 << 8;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = uVar1 << 8;
      FUN_00409350("unit_strip",10);
      local_8._0_1_ = 0x22;
      piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
      (**(code **)(*piVar7 + 0x104))();
      local_8._0_1_ = 0x18;
      uVar3 = (undefined1)local_8;
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (local_30[0x3b] < 1) {
        FUN_00409350("moving",6);
        local_8 = CONCAT31(local_8._1_3_,0x23);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x104);
      }
      else {
        local_8._0_1_ = uVar3;
        FUN_00409350("moving",6);
        local_8._0_1_ = 0x24;
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        (**(code **)(*piVar7 + 0x108))();
        local_8._0_1_ = 0x18;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("moving",6);
        local_8 = CONCAT31(local_8._1_3_,0x25);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x34);
      }
      (*pcVar10)();
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (local_30[0x61] == 0) {
        FUN_00409350("digin",5);
        local_8 = CONCAT31(local_8._1_3_,0x26);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x104);
      }
      else {
        FUN_00409350("digin",5);
        local_8._0_1_ = 0x27;
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        (**(code **)(*piVar7 + 0x108))();
        local_8._0_1_ = 0x18;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("digin",5);
        local_8 = CONCAT31(local_8._1_3_,0x28);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x34);
      }
      (*pcVar10)();
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (local_30[0x1d] == 0) {
        FUN_00409350("combat",6);
        local_8 = CONCAT31(local_8._1_3_,0x29);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x104);
      }
      else {
        FUN_00409350("combat",6);
        local_8._0_1_ = 0x2a;
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        (**(code **)(*piVar7 + 0x108))();
        local_8._0_1_ = 0x18;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("combat",6);
        local_8 = CONCAT31(local_8._1_3_,0x2b);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x34);
      }
      (*pcVar10)();
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      if (((int *)local_30[0x36] == (int *)0x0) ||
         (cVar4 = (**(code **)(*(int *)local_30[0x36] + 0x20))(), cVar4 == '\0')) {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("leader",6);
        local_8 = CONCAT31(local_8._1_3_,0x2c);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x104);
      }
      else {
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("leader",6);
        local_8._0_1_ = 0x2d;
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        (**(code **)(*piVar7 + 0x108))();
        local_8._0_1_ = 0x18;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350("leader",6);
        local_8 = CONCAT31(local_8._1_3_,0x2e);
        piVar7 = (int *)(**(code **)(*piVar5 + 0x44))(local_2c);
        pcVar10 = *(code **)(*piVar7 + 0x34);
      }
      (*pcVar10)();
      local_8._0_1_ = 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_6c = 0xf;
      local_70 = 0;
      local_80[0] = local_80[0] & 0xffffff00;
      FUN_00409350(&DAT_00dedc20,2);
      local_8._0_1_ = 0x2f;
      FUN_005cc390();
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350(&DAT_00df09f4,4);
      local_8._0_1_ = 0x30;
      uVar9 = (**(code **)(*local_30 + 0x20))();
      FUN_00988fa0(uVar9);
      local_8._0_1_ = 0x31;
      uVar9 = FUN_00988f20(local_80);
      local_8._0_1_ = 0x32;
      local_60 = (int *)(**(code **)(*piVar5 + 0x3c))(local_2c);
      FUN_00408ed0(uVar9,0,0xffffffff);
      FUN_00a5ecc0(uVar9,0);
      if (0xf < local_17c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_190);
      }
      local_17c = 0xf;
      local_180 = 0;
      local_190 = local_190 & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_8._0_1_ = 0x18;
      local_18 = 0xf;
      local_1c = 0;
      uVar1 = local_2c[0] >> 8;
      local_2c[0] = uVar1 << 8;
      if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_80[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = uVar1 << 8;
      FUN_00409350("location",8);
      local_8._0_1_ = 0x33;
      uVar9 = (**(code **)(*(int *)local_30[0x37] + 0x1c))(local_a4);
      local_8._0_1_ = 0x34;
      local_60 = (int *)(**(code **)(*piVar5 + 0x3c))(local_2c);
      FUN_00408ed0(uVar9,0,0xffffffff);
      FUN_00a5ecc0(uVar9,0);
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_8._0_1_ = 0x18;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      cVar4 = (**(code **)(*local_30 + 0x38))();
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (cVar4 == '\0') {
        FUN_00409350(&DAT_00e0c2ec,3);
        local_8._0_1_ = 0x37;
        piVar7 = (int *)(**(code **)(*piVar5 + 0x3c))(local_2c);
        (**(code **)(*piVar7 + 0x38))();
        local_8._0_1_ = 0x18;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_6c = 0xf;
        local_70 = 0;
        local_80[0] = local_80[0] & 0xffffff00;
        FUN_00409350(&DAT_00ded94d,0);
        local_8._0_1_ = 0x38;
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        FUN_00409350(&DAT_00e0c2ec,3);
        local_8._0_1_ = 0x39;
        (**(code **)(*piVar5 + 0x3c))(local_2c);
        FUN_00408ed0(local_80,0,0xffffffff);
        FUN_00a5ecc0(local_80,0);
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_2c[0]);
        }
        local_18 = 0xf;
        local_1c = 0;
        local_2c[0] = local_2c[0] & 0xffffff00;
        uVar1 = local_80[0];
        uVar2 = local_6c;
      }
      else {
        FUN_00409350(&DAT_00e0c2ec,3);
        local_8._0_1_ = 0x35;
        uVar9 = (**(code **)(*local_30 + 0x90))(local_a4);
        local_8._0_1_ = 0x36;
        local_60 = (int *)(**(code **)(*piVar5 + 0x3c))(local_2c);
        FUN_00408ed0(uVar9,0,0xffffffff);
        FUN_00a5ecc0(uVar9,0);
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a4[0]);
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        uVar1 = local_2c[0];
        uVar2 = local_18;
      }
      if (0xf < uVar2) {
        local_8._0_1_ = 0x18;
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(uVar1);
      }
      local_8._0_1_ = 0x18;
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("regiments",9);
      local_8._0_1_ = 0x3a;
      uVar9 = FUN_009888f0(local_a4);
      local_8._0_1_ = 0x3b;
      local_60 = (int *)(**(code **)(*piVar5 + 0x3c))(local_2c);
      FUN_00408ed0(uVar9,0,0xffffffff);
      FUN_00a5ecc0(uVar9,0);
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_8._0_1_ = 0x18;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      FUN_00409350("military_cancel_unit",0x14);
      local_8 = CONCAT31(local_8._1_3_,0x3c);
      piVar5 = (int *)(**(code **)(*piVar5 + 0x34))(local_2c);
      (**(code **)(*piVar5 + 0x104))();
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_2c[0]);
      }
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = local_2c[0] & 0xffffff00;
      if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_e0[0]);
      }
      local_cc = 0xf;
      local_d0 = 0;
      local_e0[0] = local_e0[0] & 0xffffff00;
      if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_150[0]);
      }
      local_8 = 0xffffffff;
      local_13c = 0xf;
      local_140 = 0;
      local_150[0] = local_150[0] & 0xffffff00;
      if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_134[0]);
      }
      local_88 = local_88 + 1;
      local_120 = 0xf;
      local_124 = 0;
      local_134[0] = local_134[0] & 0xffffff00;
    } while (local_88 < param_5);
  }
  FUN_00452c70();
  (**(code **)(*param_3 + 0x6c))();
  ExceptionList = local_10;
  return param_2;
}

