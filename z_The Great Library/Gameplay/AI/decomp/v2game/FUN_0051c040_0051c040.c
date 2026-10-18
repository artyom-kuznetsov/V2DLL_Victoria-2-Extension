// FUN_0051c040 @ 0051c040 body=[[0051c040, 0051c0aa] [0051c0b0, 0051c0dc] [0051c0e0, 0051c25f] [0051c263, 0051c28f] [0051c293, 0051c43b] [0051c43f, 0051c469] [0051c46d, 0051c49c] [0051c4a0, 0051c882]]


void FUN_0051c040(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  uint *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_178 [112];
  undefined4 uStack_108;
  uint *puStack_104;
  uint *puStack_100;
  uint *local_fc;
  int local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_6c [16];
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_50 [60];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b9c9fc;
  local_14 = ExceptionList;
  if ((*(int *)(param_1 + 0x20) != 0) &&
     (((*(char *)(param_1 + 0x1c) != 'R' || (*(char *)(param_1 + 0x1d) != 'E')) ||
      (*(char *)(param_1 + 0x1e) != 'B')))) {
    iVar12 = *(int *)(DAT_012588e8 + 0xb0c);
    piVar1 = *(int **)(param_1 + 0x83c);
    local_c4 = 0;
    ExceptionList = &local_14;
    while (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if (*(int *)(iVar2 + 0x6c) < iVar12) {
        for (local_fc = *(uint **)(param_1 + 0x83c);
            (local_fc != (uint *)0x0 && (*local_fc != iVar2)); local_fc = (uint *)local_fc[2]) {
        }
        puStack_100 = (uint *)0x51c0f8;
        FUN_005f2ae0();
        if (*(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) {
          puStack_100 = (uint *)0x51c113;
          local_fc = (uint *)param_1;
          puVar6 = (undefined4 *)FUN_005061e0();
          local_fc = (uint *)0x5;
          puStack_100 = (uint *)0xdfd250;
          local_ac = 0xf;
          local_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
          puStack_104 = (uint *)0x51c135;
          FUN_00409350();
          local_fc = local_a4;
          local_c = 0;
          puStack_104 = (uint *)0x51c14b;
          puStack_100 = (uint *)iVar2;
          puVar7 = (undefined1 *)FUN_009790b0();
          local_fc = (uint *)0xffffffff;
          puStack_100 = (uint *)0x0;
          puStack_104 = local_c0;
          local_c._0_1_ = 1;
          local_74 = 0xf;
          local_78 = 0;
          local_88[0] = 0;
          uStack_108 = 0x51c17c;
          FUN_00408ed0();
          local_fc = (uint *)0xffffffff;
          local_c._0_1_ = 2;
          puStack_100 = (uint *)0x0;
          local_58 = 0xf;
          local_5c = 0;
          local_6c[0] = 0;
          uStack_108 = 0x51c1ad;
          puStack_104 = (uint *)puVar7;
          FUN_00408ed0();
          local_c._0_1_ = 3;
          iVar8 = puVar6[1];
          local_fc = (uint *)0x44;
          puStack_100 = (uint *)0x51c1c3;
          puVar7 = (undefined1 *)FUN_00aae9af();
          local_c._0_1_ = 4;
          uVar5 = (undefined1)local_c;
          local_c._0_1_ = 4;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = (undefined1 *)0x0;
            local_c._0_1_ = uVar5;
          }
          else {
            local_fc = (uint *)0xffffffff;
            puStack_100 = (uint *)0x0;
            puStack_104 = (uint *)local_88;
            *(undefined4 *)(puVar7 + 0x14) = 0xf;
            *(undefined4 *)(puVar7 + 0x10) = 0;
            *puVar7 = 0;
            uStack_108 = 0x51c1f3;
            FUN_00408ed0();
            local_fc = (uint *)0xffffffff;
            local_c._0_1_ = 5;
            puStack_100 = (uint *)0x0;
            puStack_104 = (uint *)local_6c;
            *(undefined4 *)(puVar7 + 0x30) = 0xf;
            *(undefined4 *)(puVar7 + 0x2c) = 0;
            puVar7[0x1c] = 0;
            uStack_108 = 0x51c21a;
            FUN_00408ed0();
            *(int *)(puVar7 + 0x38) = iVar8;
            *(undefined4 *)(puVar7 + 0x3c) = 0;
            puVar7[0x40] = 0;
          }
          iVar3 = puVar6[2];
          puVar6[1] = puVar7;
          puVar6[2] = iVar3 + 1;
          if (iVar3 == 0) {
            *puVar6 = puVar7;
          }
          else {
            *(undefined1 **)(iVar8 + 0x3c) = puVar7;
          }
          local_fc = (uint *)0x51c24f;
          FUN_00a39a80();
          if (0xf < local_90) {
            local_fc = (uint *)local_a4[0];
                    /* WARNING: Subroutine does not return */
            puStack_100 = (uint *)&UNK_0051c260;
            FUN_00aae91b();
          }
          local_c = 0xffffffff;
          local_90 = 0xf;
          local_94 = 0;
          uVar4 = local_a4[0] >> 8;
          local_a4[0] = uVar4 << 8;
          if (0xf < local_ac) {
            local_fc = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
            puStack_100 = (uint *)&UNK_0051c290;
            FUN_00aae91b();
          }
          local_fc = (uint *)0x0;
          puStack_100 = (uint *)&DAT_00ded94d;
          local_90 = 0xf;
          local_94 = 0;
          local_a4[0] = uVar4 << 8;
          puStack_104 = (uint *)0x51c2ae;
          FUN_00409350();
          local_c = 6;
          local_fc = (uint *)0xd;
          puStack_100 = (uint *)0xdfe964;
          local_ac = 0xf;
          local_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
          puStack_104 = (uint *)0x51c2d5;
          FUN_00409350();
          local_c._0_1_ = 7;
          if (DAT_01262ef4 == 0) {
            iVar8 = FUN_00aae9af(0x44);
            local_c._0_1_ = 8;
            if (iVar8 == 0) {
              uVar9 = 0;
            }
            else {
              uVar9 = FUN_006a4e30();
            }
            local_c._0_1_ = 7;
            FUN_006a59b0(uVar9);
          }
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar18 = 0;
          uVar17 = 0x2d2d2d;
          uVar16 = *(undefined4 *)(param_1 + 0x1c);
          uVar15 = 0;
          puVar14 = local_a4;
          uVar13 = 0;
          uVar10 = FUN_006a55b0(puVar6,0,puVar14,0,uVar16,uVar9,0x2d2d2d,0);
          FUN_006a7ed0(auStack_178,uVar10,puVar6,uVar13,puVar14,uVar15,uVar16,uVar9,uVar17,uVar18);
          local_c._0_1_ = 9;
          uVar5 = (undefined1)local_c;
          local_c._0_1_ = 9;
          if (DAT_01262ef4 == 0) {
            iVar8 = FUN_00aae9af();
            local_c._0_1_ = 10;
            if (iVar8 != 0) {
              FUN_006a4e30();
            }
            local_c._0_1_ = 9;
            FUN_006a59b0();
            uVar5 = (undefined1)local_c;
          }
          local_c._0_1_ = uVar5;
          if (DAT_01262ef4 == 0) {
            iVar8 = FUN_00aae9af();
            local_c._0_1_ = 0xb;
            if (iVar8 != 0) {
              FUN_006a4e30();
            }
            local_c._0_1_ = 9;
            FUN_006a59b0();
          }
          local_c = CONCAT31(local_c._1_3_,7);
          FUN_004e9540(DAT_01262ef4);
          if (0xf < local_ac) {
            local_fc = (uint *)local_c0[0];
                    /* WARNING: Subroutine does not return */
            puStack_100 = (uint *)&UNK_0051c43c;
            FUN_00aae91b();
          }
          local_c = 0xffffffff;
          local_ac = 0xf;
          local_b0 = 0;
          local_c0[0] = local_c0[0] & 0xffffff00;
          if (0xf < local_90) {
            local_fc = (uint *)local_a4[0];
                    /* WARNING: Subroutine does not return */
            puStack_100 = (uint *)&UNK_0051c46a;
            FUN_00aae91b();
          }
        }
        if (*(int *)(param_1 + 0x84c) == iVar2) {
          local_c4 = *(int *)(iVar2 + 0x54);
        }
      }
    }
    piVar1 = *(int **)(param_1 + 0x82c);
joined_r0x0051c495:
    if (piVar1 != (int *)0x0) {
      iVar2 = *piVar1;
      piVar1 = (int *)piVar1[2];
      if (((*(int *)(iVar2 + 0x68) <= iVar12) &&
          (((int)((double)((*(int *)(*(int *)(iVar2 + 0x54) + 0x1d0) + -43800000) / 0x18) / 365.0) <
            2 || (1 < (int)((double)((*(int *)(*(int *)(iVar2 + 0x54) + 0x1d4) + -43800000) / 0x18)
                           / 365.0))))) && (iVar12 <= *(int *)(iVar2 + 0x6c))) {
        for (piVar11 = *(int **)(param_1 + 0x83c); piVar11 != (int *)0x0;
            piVar11 = (int *)piVar11[2]) {
          if (*piVar11 == iVar2) goto joined_r0x0051c495;
        }
        iVar8 = *(int *)(param_1 + 0x840);
        local_fc = (uint *)0x10;
        puStack_100 = (uint *)0x51c57c;
        piVar11 = (int *)FUN_00aae9af();
        if (piVar11 == (int *)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          *piVar11 = iVar2;
          piVar11[1] = iVar8;
          piVar11[2] = 0;
          *(undefined1 *)(piVar11 + 3) = 0;
        }
        iVar3 = *(int *)(param_1 + 0x844);
        *(int **)(param_1 + 0x840) = piVar11;
        *(int *)(param_1 + 0x844) = iVar3 + 1;
        if (iVar3 == 0) {
          *(int **)(param_1 + 0x83c) = piVar11;
        }
        else {
          *(int **)(iVar8 + 8) = piVar11;
        }
        if ((((*(char *)(DAT_012588e8 + 0xd1c) != '\0') &&
             (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU))) &&
            (*(int *)(iVar2 + 0x50) != 0)) &&
           (iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0x50) * 4),
           0 < (int)(*(int *)(iVar8 + 0x9dc) - *(int *)(iVar8 + 0x9d8) & 0xfffffffcU))) {
          uVar9 = *(undefined4 *)(DAT_012588e8 + 0xcf4);
          puStack_100 = (uint *)0x51c61d;
          local_fc = (uint *)iVar2;
          local_fc = (uint *)FUN_00469ee0();
          puStack_104 = (uint *)0x51c624;
          puStack_100 = (uint *)uVar9;
          FUN_00457b00();
        }
        if (*(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60)) {
          local_fc = (uint *)param_1;
          puStack_100 = (uint *)0x51c642;
          puVar6 = (undefined4 *)FUN_005061e0();
          local_fc = (uint *)0x51c652;
          FUN_009885d0();
          local_fc = local_c0;
          local_c = 0xc;
          puStack_104 = (uint *)0x51c66c;
          puStack_100 = (uint *)iVar2;
          local_fc = (uint *)FUN_009790b0();
          puStack_104 = (uint *)local_88;
          local_c._0_1_ = 0xd;
          uStack_108 = 0x51c682;
          puStack_100 = local_a4;
          iVar8 = FUN_00424aa0();
          local_c._0_1_ = 0xe;
          iVar2 = puVar6[1];
          local_fc = (uint *)0x44;
          puStack_100 = (uint *)0x51c69c;
          puVar7 = (undefined1 *)FUN_00aae9af();
          local_c._0_1_ = 0xf;
          uVar5 = (undefined1)local_c;
          local_c._0_1_ = 0xf;
          if (puVar7 == (undefined1 *)0x0) {
            puVar7 = (undefined1 *)0x0;
            local_c._0_1_ = uVar5;
          }
          else {
            local_fc = (uint *)0xffffffff;
            puStack_100 = (uint *)0x0;
            *(undefined4 *)(puVar7 + 0x14) = 0xf;
            *(undefined4 *)(puVar7 + 0x10) = 0;
            *puVar7 = 0;
            uStack_108 = 0x51c6cc;
            puStack_104 = (uint *)iVar8;
            FUN_00408ed0();
            local_fc = (uint *)0xffffffff;
            local_c._0_1_ = 0x10;
            puStack_100 = (uint *)0x0;
            puStack_104 = (uint *)(iVar8 + 0x1c);
            *(undefined4 *)(puVar7 + 0x30) = 0xf;
            *(undefined4 *)(puVar7 + 0x2c) = 0;
            puVar7[0x1c] = 0;
            uStack_108 = 0x51c6f3;
            FUN_00408ed0();
            *(int *)(puVar7 + 0x38) = iVar2;
            *(undefined4 *)(puVar7 + 0x3c) = 0;
            puVar7[0x40] = 0;
          }
          iVar8 = puVar6[2];
          puVar6[1] = puVar7;
          puVar6[2] = iVar8 + 1;
          if (iVar8 == 0) {
            *puVar6 = puVar7;
          }
          else {
            *(undefined1 **)(iVar2 + 0x3c) = puVar7;
          }
          local_fc = (uint *)0x51c728;
          FUN_00a39a80();
          local_fc = (uint *)0x51c731;
          FUN_00408ad0();
          local_c = 0xffffffff;
          local_fc = (uint *)0x51c745;
          FUN_00408ad0();
          local_fc = (uint *)0x51c756;
          FUN_009885d0();
          local_c = 0x11;
          local_fc = (uint *)0x51c772;
          FUN_009885d0();
          local_c._0_1_ = 0x12;
          uVar18 = 0;
          uVar17 = 0x2d2d2d;
          uVar9 = *(undefined4 *)(param_1 + 0x20);
          uVar16 = *(undefined4 *)(param_1 + 0x1c);
          uVar15 = 0;
          puVar7 = local_50;
          uVar13 = 0;
          FUN_006a4f40(puVar6,0,puVar7,0,uVar16,uVar9,0x2d2d2d,0);
          uVar10 = FUN_006a55b0();
          FUN_006a7ed0(auStack_178,uVar10,puVar6,uVar13,puVar7,uVar15,uVar16,uVar9,uVar17,uVar18);
          local_c._0_1_ = 0x13;
          FUN_006a4f40();
          uVar9 = FUN_006a4f40();
          local_c = CONCAT31(local_c._1_3_,0x12);
          FUN_004e9540(uVar9);
          local_fc = (uint *)0x51c80c;
          FUN_00408ad0();
          local_c = 0xffffffff;
          local_fc = (uint *)0x51c823;
          FUN_00408ad0();
        }
      }
      goto joined_r0x0051c495;
    }
    if (local_c4 != 0) {
      piVar1 = *(int **)(param_1 + 0x83c);
      piVar11 = piVar1;
      do {
        if (piVar11 == (int *)0x0) {
          if (piVar1 == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
          iVar12 = *piVar1;
          break;
        }
        iVar12 = *piVar11;
        piVar11 = (int *)piVar11[2];
      } while (*(int *)(iVar12 + 0x54) != local_c4);
      *(int *)(param_1 + 0x84c) = iVar12;
      puStack_100 = (uint *)0x51c866;
      local_fc = (uint *)param_1;
      FUN_0051c890();
      puStack_100 = (uint *)0x51c86c;
      local_fc = (uint *)param_1;
      FUN_0050ea30();
    }
  }
  ExceptionList = local_14;
  return;
}

