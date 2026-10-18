// FUN_00792490 @ 00792490 body=[[00792490, 007925b3] [007925b7, 0079267d] [00792681, 007927a5] [007927a9, 007927c9] [007927cd, 007927e9] [007927ed, 00792812] [00792816, 0079283b] [0079283f, 0079285e] [00792862, 007928ac] [007928b0, 0079297d] [00792981, 007929b0] [007929b4, 007929d9] [007929dd, 007929fc] [00792a00, 00792a16] [00792a1a, 00792a30] [00792a34, 00792a50] [00792a54, 00792d4f] [00792d53, 00792d82] [00792d86, 00792dab] [00792daf, 00792dd4] [00792dd8, 00792dfd] [00792e01, 00792e26] [00792e2a, 00792e4f] [00792e53, 00792e78] [00792e7c, 00792ea1] [00792ea5, 00792ec4] [00792ec8, 00792ede] [00792ee2, 00792fca] [00792fce, 00792ffd] [00793001, 00793026] [0079302a, 0079304f] [00793053, 00793078] [0079307c, 007930a1] [007930a5, 007930c4] [007930c8, 007930de] [007930e2, 007930f6] [007930fa, 007931e9] [007931ed, 00793286]]


undefined4 FUN_00792490(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  uint local_1a0 [4];
  undefined4 local_190;
  uint local_18c;
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  uint local_168;
  undefined4 local_158;
  uint local_154;
  uint local_14c [4];
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  uint local_114;
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc;
  undefined4 local_cc;
  uint local_c8;
  char local_c0 [4];
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int local_a0;
  int *local_9c;
  uint local_98;
  undefined4 local_88;
  uint local_84;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  undefined1 *local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  undefined4 local_28;
  uint local_24;
  undefined1 *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = param_1;
  puStack_c = &LAB_00b7aaf2;
  local_10 = ExceptionList;
  local_5c = (undefined1 *)0x0;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  ExceptionList = &local_10;
  pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar4 + 0x14)) {
    pbVar4 = *(byte **)pbVar4;
  }
  pcVar10 = "unit_icon";
  do {
    bVar1 = *pbVar4;
    bVar11 = bVar1 < (byte)*pcVar10;
    if (bVar1 != *pcVar10) {
LAB_00792540:
      iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      goto LAB_00792545;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar11 = bVar1 < (byte)pcVar10[1];
    if (bVar1 != pcVar10[1]) goto LAB_00792540;
    pbVar4 = pbVar4 + 2;
    pcVar10 = pcVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00792545:
  if (iVar5 == 0) {
    piVar6 = (int *)(**(code **)(*param_3 + 0x4c))();
    local_9c = (int *)((int)piVar6 + -1);
    if (2 < (int)piVar6 + -1) {
      local_9c = piVar6;
    }
    local_18 = (int *)0x3;
    if (local_9c != (int *)0x2) {
      local_18 = local_9c;
    }
    FUN_005bdd50();
    local_8._0_1_ = 1;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 0;
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    param_3 = (int *)0x0;
    if (DAT_0125fdd8 == 0) {
      local_5c = (undefined1 *)FUN_00aae9af();
      local_8._0_1_ = 2;
      if (local_5c != (undefined1 *)0x0) {
        FUN_008b0060();
      }
      local_8._0_1_ = 0;
      FUN_005c2810();
      uVar2 = (undefined1)local_8;
    }
    local_8._0_1_ = uVar2;
    local_5c = (undefined1 *)(*(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2);
    if (0 < (int)local_5c) {
      do {
        if (DAT_0125fdd8 == 0) {
          local_1c = (undefined1 *)FUN_00aae9af();
          local_8._0_1_ = 3;
          if (local_1c == (undefined1 *)0x0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_008b0060();
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          local_1c = (undefined1 *)0x0;
          if ((iVar7 != DAT_0125fdd8) && (DAT_0125fdd8 != 0)) {
            FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0;
          DAT_0125fdd8 = iVar7;
        }
        piVar6 = *(int **)(*(int *)(DAT_0125fdd8 + 0xc) + (int)param_3 * 4);
        if ((((int *)piVar6[0xd] == local_9c) || ((int *)piVar6[0xd] == local_18)) &&
           (FUN_005cd620(), 0 < local_a0)) {
          local_88 = 0;
          local_98 = local_98 & 0xffffff00;
          if (*(char *)((int)piVar6 + 0x39) == '\0') {
            local_84 = 0xf;
            FUN_00409350();
            local_8._0_1_ = 0xc;
            local_24 = 0xf;
            local_28 = 0;
            local_38 = local_38 & 0xffffff00;
            FUN_00409350();
            piVar8 = *(int **)(*(int *)(param_1 + 8) + 0x38);
            iVar7 = 0;
            if (piVar8 != (int *)0x0) {
              do {
                iVar5 = *piVar8;
                piVar8 = (int *)piVar8[2];
                if (*(int *)(*(int *)(iVar5 + 0x38) + 0x24) == piVar6[9]) {
                  iVar7 = iVar7 + 1;
                }
              } while (piVar8 != (int *)0x0);
            }
            local_40 = 0xf;
            local_44 = 0;
            local_54 = local_54 & 0xffffff00;
            local_8._0_1_ = 0xe;
            pcVar10 = __itoa(iVar7,local_c0,10);
            do {
              cVar3 = *pcVar10;
              pcVar10 = pcVar10 + 1;
            } while (cVar3 != '\0');
            FUN_00409350();
            local_8._0_1_ = 0xf;
            (**(code **)(*piVar6 + 0x18))();
            local_8._0_1_ = 0x10;
            FUN_00988f20();
            local_8._0_1_ = 0x11;
            FUN_00988f20();
            local_8._0_1_ = 0x12;
            FUN_00988f20();
            local_8 = CONCAT31(local_8._1_3_,0x13);
            FUN_00448aa0();
            if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_100 = 0xf;
            local_104 = 0;
            local_114 = local_114 & 0xffffff00;
            if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_e4 = 0xf;
            local_e8 = 0;
            local_f8 = local_f8 & 0xffffff00;
            if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c8 = 0xf;
            local_cc = 0;
            local_dc = local_dc & 0xffffff00;
            if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_68 = 0xf;
            local_6c = 0;
            local_7c = local_7c & 0xffffff00;
            if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_40 = 0xf;
            local_44 = 0;
            local_54 = local_54 & 0xffffff00;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_38 = local_38 & 0xffffff00;
          }
          else {
            local_84 = 0xf;
            FUN_00409350();
            local_8._0_1_ = 5;
            local_40 = 0xf;
            local_44 = 0;
            local_54 = local_54 & 0xffffff00;
            FUN_00409350();
            local_1c = &stack0xfffffdec;
            local_8._0_1_ = 6;
            local_1c = (undefined1 *)FUN_005c0800();
            local_8._0_1_ = 7;
            (**(code **)(*piVar6 + 0x18))();
            local_8._0_1_ = 8;
            FUN_00988f20();
            local_8._0_1_ = 9;
            FUN_00988f20();
            local_8._0_1_ = 10;
            FUN_00988f20();
            local_8 = CONCAT31(local_8._1_3_,0xb);
            FUN_00448aa0();
            if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_68 = 0xf;
            local_6c = 0;
            local_7c = local_7c & 0xffffff00;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_24 = 0xf;
            local_28 = 0;
            local_38 = local_38 & 0xffffff00;
            if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c8 = 0xf;
            local_cc = 0;
            local_dc = local_dc & 0xffffff00;
            if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_e4 = 0xf;
            local_e8 = 0;
            local_f8 = local_f8 & 0xffffff00;
            if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_100 = 0xf;
            local_104 = 0;
            local_114 = local_114 & 0xffffff00;
            if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_54 = local_54 & 0xffffff00;
          }
          local_24 = 0xf;
          local_28 = 0;
          local_40 = 0xf;
          local_44 = 0;
          local_68 = 0xf;
          local_6c = 0;
          local_c8 = 0xf;
          local_cc = 0;
          local_e4 = 0xf;
          local_e8 = 0;
          local_100 = 0xf;
          local_104 = 0;
          local_8._0_1_ = 0;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
        param_3 = (int *)((int)param_3 + 1);
      } while ((int)param_3 < (int)local_5c);
    }
  }
  else {
    pbVar4 = (byte *)(**(code **)(*param_3 + 0x44))();
    if (0xf < *(uint *)(pbVar4 + 0x14)) {
      pbVar4 = *(byte **)pbVar4;
    }
    pcVar10 = "unit_amount";
    do {
      bVar1 = *pbVar4;
      bVar11 = bVar1 < (byte)*pcVar10;
      if (bVar1 != *pcVar10) {
LAB_00792aa0:
        iVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        goto LAB_00792aa5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar11 = bVar1 < (byte)pcVar10[1];
      if (bVar1 != pcVar10[1]) goto LAB_00792aa0;
      pbVar4 = pbVar4 + 2;
      pcVar10 = pcVar10 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_00792aa5:
    if (iVar5 == 0) {
      piVar6 = (int *)(param_1 + 0x14);
      piVar8 = (int *)(param_1 + 0x10);
      iVar5 = 0;
      param_1 = 7;
      if (0 < (int)(*piVar6 - *piVar8 & 0xfffffffcU)) {
        do {
          cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + iVar5 * 4) + 0x18) + 0x94)
                  )();
          if (cVar3 != '\0') {
            param_1 = iVar5;
            if (iVar5 == 2) {
              param_3 = (int *)0x3;
              goto LAB_00792af3;
            }
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2);
      }
      param_3 = (int *)param_1;
LAB_00792af3:
      if (*(int *)(iVar7 + 8) == 0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)(*(int *)(iVar7 + 8) + 0x38);
      }
      piVar6 = (int *)*puVar9;
      while (piVar6 != (int *)0x0) {
        piVar8 = (int *)*piVar6;
        local_18 = (int *)piVar6[2];
        if ((*(int *)(piVar8[0xe] + 0x34) == param_1) ||
           (piVar6 = local_18, (int *)*(int *)(piVar8[0xe] + 0x34) == param_3)) {
          local_84 = 0xf;
          local_88 = 0;
          local_98 = local_98 & 0xffffff00;
          FUN_00409350();
          local_8 = CONCAT31(local_8._1_3_,0x14);
          piVar6 = (int *)(**(code **)(*piVar8 + 0x30))();
          iVar7 = *piVar6;
          if ((iVar7 < -0x189373) || (0x20c49a < iVar7)) {
            uVar12 = __allmul(iVar7,iVar7 >> 0x1f,1000);
            iVar7 = __alldiv(uVar12,2000);
            local_5c = (undefined1 *)(iVar7 >> 0x1f);
          }
          else {
            iVar7 = (iVar7 * 1000) / 2000;
          }
          iVar5 = piVar8[0xf];
          if (iVar5 < iVar7) {
            puVar13 = &DAT_00df8510;
LAB_00792be8:
            FUN_00409350(puVar13);
          }
          else {
            piVar6 = (int *)(**(code **)(*piVar8 + 0x30))(&local_a0);
            if (iVar5 < *piVar6) {
              puVar13 = &DAT_00df963c;
              goto LAB_00792be8;
            }
          }
          cVar3 = (**(code **)(*piVar8 + 0x24))();
          local_6c = 0;
          local_7c = local_7c & 0xffffff00;
          local_68 = 0xf;
          if (cVar3 == '\0') {
            FUN_00409350(&DAT_00dfc7b4);
            local_8._0_1_ = 0x21;
            local_24 = 0xf;
            local_28 = 0;
            local_38 = local_38 & 0xffffff00;
            FUN_00409350(&DAT_00dfcafc);
            local_8._0_1_ = 0x22;
            (**(code **)(*piVar8 + 0x38))();
            local_8._0_1_ = 0x23;
            (**(code **)(*piVar8 + 0x20))(local_184);
            local_8._0_1_ = 0x24;
            FUN_00988f20();
            local_8._0_1_ = 0x25;
            FUN_00988f20();
            local_8._0_1_ = 0x26;
            FUN_00988f20();
            local_8._0_1_ = 0x27;
            FUN_00988f20();
            local_8 = CONCAT31(local_8._1_3_,0x28);
            FUN_00448aa0();
            if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_a8 = 0xf;
            local_ac = 0;
            local_bc[0] = local_bc[0] & 0xffffff00;
            if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_138 = 0xf;
            local_13c = 0;
            local_14c[0] = local_14c[0] & 0xffffff00;
            if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_18c = 0xf;
            local_190 = 0;
            local_1a0[0] = local_1a0[0] & 0xffffff00;
            if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_11c = 0xf;
            local_120 = 0;
            local_130 = local_130 & 0xffffff00;
            if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_170 = 0xf;
            local_174 = 0;
            local_184[0] = local_184[0] & 0xffffff00;
            if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_154 = 0xf;
            local_158 = 0;
            local_168 = local_168 & 0xffffff00;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_38 = local_38 & 0xffffff00;
          }
          else {
            FUN_00409350(&DAT_00dee2cc);
            local_8._0_1_ = 0x15;
            local_40 = 0xf;
            local_44 = 0;
            local_54 = local_54 & 0xffffff00;
            FUN_00409350(&DAT_00dfc948);
            local_8._0_1_ = 0x16;
            local_24 = 0xf;
            local_28 = 0;
            local_38 = local_38 & 0xffffff00;
            FUN_00409350(&DAT_00dfcafc);
            local_5c = &stack0xfffffde4;
            local_8._0_1_ = 0x17;
            (**(code **)(*piVar8 + 0x30))(&stack0xfffffde4,0);
            FUN_005c0800(local_bc);
            local_8._0_1_ = 0x18;
            local_5c = (undefined1 *)(**(code **)(*piVar8 + 0x38))(local_14c);
            local_8._0_1_ = 0x19;
            (**(code **)(*piVar8 + 0x20))(local_1a0);
            local_8._0_1_ = 0x1a;
            FUN_00988f20();
            local_8._0_1_ = 0x1b;
            FUN_00988f20();
            local_8._0_1_ = 0x1c;
            FUN_00988f20();
            local_8._0_1_ = 0x1d;
            FUN_00988f20();
            local_8._0_1_ = 0x1e;
            FUN_00988f20();
            local_8._0_1_ = 0x1f;
            FUN_00988f20();
            local_8 = CONCAT31(local_8._1_3_,0x20);
            FUN_00448aa0();
            if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_100 = 0xf;
            local_104 = 0;
            local_114 = local_114 & 0xffffff00;
            if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_e4 = 0xf;
            local_e8 = 0;
            local_f8 = local_f8 & 0xffffff00;
            if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_c8 = 0xf;
            local_cc = 0;
            local_dc = local_dc & 0xffffff00;
            if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_154 = 0xf;
            local_158 = 0;
            local_168 = local_168 & 0xffffff00;
            if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_170 = 0xf;
            local_174 = 0;
            local_184[0] = local_184[0] & 0xffffff00;
            if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_11c = 0xf;
            local_120 = 0;
            local_130 = local_130 & 0xffffff00;
            if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_18c = 0xf;
            local_190 = 0;
            local_1a0[0] = local_1a0[0] & 0xffffff00;
            if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_138 = 0xf;
            local_13c = 0;
            local_14c[0] = local_14c[0] & 0xffffff00;
            if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_a8 = 0xf;
            local_ac = 0;
            local_bc[0] = local_bc[0] & 0xffffff00;
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_24 = 0xf;
            local_28 = 0;
            local_38 = local_38 & 0xffffff00;
            if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_40 = 0xf;
            local_44 = 0;
            local_54 = local_54 & 0xffffff00;
          }
          if (0xf < local_68) {
            local_24 = 0xf;
            local_28 = 0;
            local_a8 = 0xf;
            local_ac = 0;
            local_11c = 0xf;
            local_120 = 0;
            local_138 = 0xf;
            local_13c = 0;
            local_154 = 0xf;
            local_158 = 0;
            local_170 = 0xf;
            local_174 = 0;
            local_18c = 0xf;
            local_190 = 0;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_24 = 0xf;
          local_28 = 0;
          local_a8 = 0xf;
          local_ac = 0;
          local_11c = 0xf;
          local_120 = 0;
          local_138 = 0xf;
          local_13c = 0;
          local_154 = 0xf;
          local_158 = 0;
          local_170 = 0xf;
          local_174 = 0;
          local_18c = 0xf;
          local_190 = 0;
          local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
          local_8._0_1_ = 0;
          piVar6 = local_18;
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
        }
      }
    }
    else {
      (**(code **)(*param_3 + 0x44))();
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        FUN_009885d0();
        local_8._0_1_ = 0x2a;
        piVar6 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
        local_8._0_1_ = 0;
        FUN_00408ad0();
        puVar9 = (undefined4 *)(**(code **)(*piVar6 + 0x2c))();
        piVar6 = (int *)*puVar9;
        do {
          if (piVar6 == (int *)0x0) goto LAB_00792601;
          piVar8 = (int *)*piVar6;
          piVar6 = (int *)piVar6[2];
          cVar3 = (**(code **)(piVar8[7] + 0x58))();
        } while (cVar3 == '\0');
        (**(code **)(*piVar8 + 0x30))();
        goto LAB_00792610;
      }
      piVar6 = (int *)(param_1 + 0x14);
      piVar8 = (int *)(param_1 + 0x10);
      iVar5 = 0;
      param_1 = 7;
      if (0 < (int)(*piVar6 - *piVar8 & 0xfffffffcU)) {
        do {
          cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar7 + 0x10) + iVar5 * 4) + 0x18) + 0x94)
                  )();
          if (cVar3 != '\0') {
            param_1 = iVar5;
            if (iVar5 == 2) {
              param_3 = (int *)0x3;
              goto LAB_00793170;
            }
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(iVar7 + 0x14) - *(int *)(iVar7 + 0x10) >> 2);
      }
      param_3 = (int *)param_1;
LAB_00793170:
      if (*(int *)(iVar7 + 8) == 0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)(*(int *)(iVar7 + 8) + 0x38);
      }
      piVar6 = (int *)*puVar9;
      while (piVar6 != (int *)0x0) {
        piVar8 = (int *)*piVar6;
        iVar7 = piVar8[0xe];
        piVar6 = (int *)piVar6[2];
        if ((*(int *)(iVar7 + 0x34) == param_1) || ((int *)*(int *)(iVar7 + 0x34) == param_3)) {
          (**(code **)(*piVar8 + 0x20))();
          local_8._0_1_ = 0x29;
          FUN_00448aa0();
          local_8._0_1_ = 0;
          if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          FUN_00448740();
        }
      }
    }
  }
LAB_00792601:
  FUN_0040c830();
LAB_00792610:
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

