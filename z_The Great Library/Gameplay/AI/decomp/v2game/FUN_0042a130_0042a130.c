// FUN_0042a130 @ 0042a130 body=[[0042a130, 0042a19c] [0042a1a0, 0042a4ac] [0042a4b0, 0042a5ee] [0042a5f2, 0042a620] [0042a624, 0042a652] [0042a656, 0042a67e] [0042a682, 0042a6ac] [0042a6b0, 0042a810] [0042a814, 0042a844] [0042a848, 0042a873] [0042a877, 0042a8a7] [0042a8ab, 0042a997] [0042a9a2, 0042aa67] [0042aa6b, 0042aaa5] [0042aaa9, 0042aad2] [0042aad6, 0042ab3b] [0042ab40, 0042acfa] [0042acfe, 0042ae0c] [0042ae10, 0042ae3d] [0042ae41, 0042ae6b] [0042ae6f, 0042af9b] [0042af9f, 0042afd4] [0042afd8, 0042b16d] [0042b171, 0042b1ab] [0042b1af, 0042b218]]


void FUN_0042a130(int param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int *piVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined *puStack_1b0;
  int iStack_1ac;
  undefined1 auStack_1a8 [108];
  undefined4 uStack_13c;
  undefined8 uStack_138;
  uint *puStack_130;
  undefined1 **ppuStack_12c;
  int local_114;
  undefined1 *local_110;
  int local_10c [3];
  undefined1 *local_100;
  int *local_f8;
  int local_f4;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  undefined1 *local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined1 *puStack_70;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar11 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb95e7;
  local_14 = ExceptionList;
  ppuStack_12c = *(undefined1 ***)(param_1 + 8);
  if (ppuStack_12c == (undefined1 **)0x0) {
    piVar12 = *(int **)(DAT_012588e8 + 0xb3c);
    do {
      ExceptionList = &local_14;
      if (piVar12 == (int *)0x0) goto LAB_0042a1bc;
      iVar8 = *piVar12;
      piVar12 = (int *)piVar12[2];
    } while (*(char *)(iVar8 + 0xfd) == '\0');
    ExceptionList = &local_14;
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
LAB_0042a1bc:
    iVar8 = *(int *)(param_1 + 0xc);
    ppuStack_12c = (undefined1 **)(*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4d0) / 1000);
    puStack_130 = (uint *)0x42a1ed;
    FUN_00424810();
    if (iVar8 < *(int *)(iVar11 + 0xb0c)) {
      piVar12 = *(int **)(iVar11 + 0xadc);
      local_10c[0] = 0;
      local_10c[1] = 0;
      local_10c[2] = 0;
      piVar15 = piVar12;
      while ((piVar12 <= piVar15 && (piVar15 < *(int **)(iVar11 + 0xae0)))) {
        piVar1 = *(int **)(*piVar15 + 0xe44);
        local_f8 = piVar15 + 1;
        piVar15 = piVar15 + 1;
        while (piVar1 != (int *)0x0) {
          iVar8 = *piVar1;
          piVar1 = (int *)piVar1[2];
          piVar15 = local_f8;
          iVar11 = DAT_012588e8;
          if ((*(char *)(iVar8 + 0x27c) != '\0') && (50000 < *(int *)(iVar8 + 0x280))) {
            local_114 = -1;
            iVar7 = 0;
            do {
              if ((local_10c[iVar7] == 0) ||
                 (*(int *)(local_10c[iVar7] + 0x280) < *(int *)(iVar8 + 0x280))) {
                local_114 = iVar7;
                if ((-1 < iVar7) && (iVar14 = 2, iVar7 < 2)) {
                  do {
                    local_10c[iVar14] = local_10c[iVar14 + -1];
                    iVar14 = iVar14 + -1;
                  } while (iVar7 < iVar14);
                }
                break;
              }
              iVar7 = iVar7 + 1;
            } while (iVar7 < 3);
            local_10c[local_114] = iVar8;
          }
        }
      }
      if (local_10c[0] != 0) {
        local_114 = 0;
        do {
          iVar11 = local_10c[local_114];
          if (iVar11 != 0) {
            ppuStack_12c = (undefined1 **)0x0;
            puStack_130 = (uint *)0x0;
            uStack_138 = CONCAT44(0x42a2e7,(undefined4)uStack_138);
            iVar14 = FUN_009b7950();
            iVar8 = *(int *)(iVar11 + 0x280);
            iVar7 = *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x4d4);
            if (iVar8 + 0x189373U < 0x39580e) {
              iVar8 = (iVar8 * 1000) / 100000;
            }
            else {
              ppuStack_12c = (undefined1 **)0x0;
              puStack_130 = (uint *)0x3e8;
              uStack_138 = (longlong)iVar8;
              uStack_13c = 0x42a341;
              uStack_138 = __allmul();
              ppuStack_12c = (undefined1 **)0x0;
              puStack_130 = (uint *)0x186a0;
              uStack_13c = 0x42a34e;
              iVar8 = __alldiv();
              local_f4 = iVar8 >> 0x1f;
            }
            uStack_138 = (longlong)iVar8 * (longlong)iVar7;
            ppuStack_12c = (undefined1 **)0x0;
            puStack_130 = (uint *)0x3e8;
            uStack_13c = 0x42a364;
            iVar8 = __alldiv();
            if (iVar14 % 1000 < iVar8 / 1000) {
              local_f8 = *(int **)(iVar11 + 0x58);
              if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 0x5c) * 4) +
                            0x67c) == '\0') &&
                 (local_f8 = *(int **)(iVar11 + 0x284),
                 *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar11 + 0x288) * 4) +
                          0x67c) == '\0')) {
                local_cc = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                local_c8 = *(int *)(DAT_012588e8 + 0xb60);
                local_f8 = *(int **)(DAT_012588e8 + 0xb5c);
                ppuStack_12c = *(undefined1 ***)
                                (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
                puStack_130 = (uint *)0x42a400;
                puVar9 = (undefined4 *)FUN_005061e0();
                ppuStack_12c = (undefined1 **)0x10;
                puStack_130 = (uint *)0xdf2714;
                local_dc = 0xf;
                local_e0 = 0;
                local_f0[0] = local_f0[0] & 0xffffff00;
                uStack_138 = CONCAT44(0x42a423,(undefined4)uStack_138);
                FUN_00409350();
                local_c = 0;
                ppuStack_12c = (undefined1 **)0x9;
                puStack_130 = (uint *)0xdf2728;
                local_b0 = 0xf;
                local_b4 = 0;
                local_c4[0] = local_c4[0] & 0xffffff00;
                uStack_138 = CONCAT44(0x42a449,(undefined4)uStack_138);
                FUN_00409350();
                local_c._0_1_ = 1;
                iVar11 = DAT_01262ef4;
                if (DAT_01262ef4 == 0) {
                  ppuStack_12c = (undefined1 **)0x44;
                  puStack_130 = (uint *)0x42a460;
                  iVar11 = FUN_00aae9af();
                  local_c._0_1_ = 2;
                  if (iVar11 == 0) {
                    iVar11 = 0;
                  }
                  else {
                    ppuStack_12c = (undefined1 **)0x42a47a;
                    iVar11 = FUN_006a4e30();
                  }
                  iVar8 = DAT_01262ef4;
                  local_c = CONCAT31(local_c._1_3_,3);
                  if ((iVar11 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
                    ppuStack_12c = (undefined1 **)DAT_01262ef4;
                    puStack_130 = (uint *)0x42a4a3;
                    FUN_006a4ea0();
                    ppuStack_12c = (undefined1 **)iVar8;
                    /* WARNING: Subroutine does not return */
                    puStack_130 = (uint *)&UNK_0042a4ad;
                    FUN_00aae91b();
                  }
                }
                DAT_01262ef4 = iVar11;
                local_c._0_1_ = 1;
                ppuStack_12c = (undefined1 **)local_f0;
                puStack_130 = local_6c;
                uStack_138 = CONCAT44(0x42a4d0,(undefined4)uStack_138);
                uVar13 = FUN_00424ce0();
                ppuStack_12c = (undefined1 **)0xffffffff;
                local_c._0_1_ = 4;
                puStack_130 = (uint *)0x0;
                local_94 = 0xf;
                local_98 = 0;
                local_a8[0] = local_a8[0] & 0xffffff00;
                uStack_138 = CONCAT44(local_c4,0x42a507);
                FUN_00408ed0();
                ppuStack_12c = (undefined1 **)0xffffffff;
                local_c._0_1_ = 5;
                puStack_130 = (uint *)0x0;
                local_78 = 0xf;
                local_7c = 0;
                local_8c[0] = local_8c[0] & 0xffffff00;
                uStack_138 = CONCAT44(uVar13,0x42a538);
                FUN_00408ed0();
                local_c._0_1_ = 6;
                iVar11 = puVar9[1];
                ppuStack_12c = (undefined1 **)0x44;
                puStack_130 = (uint *)0x42a54e;
                puVar10 = (undefined1 *)FUN_00aae9af();
                local_c._0_1_ = 7;
                uVar3 = (undefined1)local_c;
                local_c._0_1_ = 7;
                if (puVar10 == (undefined1 *)0x0) {
                  puVar10 = (undefined1 *)0x0;
                  local_c._0_1_ = uVar3;
                }
                else {
                  ppuStack_12c = (undefined1 **)0xffffffff;
                  puStack_130 = (uint *)0x0;
                  *(undefined4 *)(puVar10 + 0x14) = 0xf;
                  *(undefined4 *)(puVar10 + 0x10) = 0;
                  *puVar10 = 0;
                  uStack_138 = CONCAT44(local_a8,0x42a581);
                  FUN_00408ed0();
                  ppuStack_12c = (undefined1 **)0xffffffff;
                  local_c._0_1_ = 8;
                  puStack_130 = (uint *)0x0;
                  *(undefined4 *)(puVar10 + 0x30) = 0xf;
                  *(undefined4 *)(puVar10 + 0x2c) = 0;
                  puVar10[0x1c] = 0;
                  uStack_138 = CONCAT44(local_8c,0x42a5a8);
                  FUN_00408ed0();
                  *(int *)(puVar10 + 0x38) = iVar11;
                  *(undefined4 *)(puVar10 + 0x3c) = 0;
                  puVar10[0x40] = 0;
                }
                iVar8 = puVar9[2];
                puVar9[1] = puVar10;
                puVar9[2] = iVar8 + 1;
                if (iVar8 == 0) {
                  *puVar9 = puVar10;
                }
                else {
                  *(undefined1 **)(iVar11 + 0x3c) = puVar10;
                }
                if (0xf < local_78) {
                  ppuStack_12c = (undefined1 **)local_8c[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a5ef;
                  FUN_00aae91b();
                }
                local_78 = 0xf;
                local_7c = 0;
                local_8c[0] = local_8c[0] & 0xffffff00;
                if (0xf < local_94) {
                  ppuStack_12c = (undefined1 **)local_a8[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a621;
                  FUN_00aae91b();
                }
                local_94 = 0xf;
                local_98 = 0;
                local_a8[0] = local_a8[0] & 0xffffff00;
                if (0xf < local_58) {
                  ppuStack_12c = (undefined1 **)local_6c[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a653;
                  FUN_00aae91b();
                }
                local_58 = 0xf;
                local_5c = 0;
                local_6c[0] = local_6c[0] & 0xffffff00;
                if (0xf < local_b0) {
                  ppuStack_12c = (undefined1 **)local_c4[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a67f;
                  FUN_00aae91b();
                }
                local_c = 0xffffffff;
                local_b0 = 0xf;
                local_b4 = 0;
                local_c4[0] = local_c4[0] & 0xffffff00;
                if (0xf < local_dc) {
                  ppuStack_12c = (undefined1 **)local_f0[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a6ad;
                  FUN_00aae91b();
                }
                ppuStack_12c = (undefined1 **)0xc;
                puStack_130 = (uint *)0xdf2734;
                local_dc = 0xf;
                local_e0 = 0;
                local_f0[0] = local_f0[0] & 0xffffff00;
                uStack_138 = CONCAT44(0x42a6d0,(undefined4)uStack_138);
                FUN_00409350();
                local_c = 9;
                piVar12 = (int *)local_10c[local_114];
                ppuStack_12c = (undefined1 **)local_6c;
                puStack_130 = (uint *)0x42a6f6;
                uVar13 = (**(code **)(*piVar12 + 0x20))();
                ppuStack_12c = (undefined1 **)0xffffffff;
                local_c._0_1_ = 10;
                puStack_130 = (uint *)0x0;
                local_94 = 0xf;
                local_98 = 0;
                local_a8[0] = local_a8[0] & 0xffffff00;
                uStack_138 = CONCAT44(local_f0,0x42a72d);
                FUN_00408ed0();
                ppuStack_12c = (undefined1 **)0xffffffff;
                local_c._0_1_ = 0xb;
                puStack_130 = (uint *)0x0;
                local_78 = 0xf;
                local_7c = 0;
                local_8c[0] = local_8c[0] & 0xffffff00;
                uStack_138 = CONCAT44(uVar13,0x42a75e);
                FUN_00408ed0();
                local_c._0_1_ = 0xc;
                iVar11 = puVar9[1];
                ppuStack_12c = (undefined1 **)0x44;
                puStack_130 = (uint *)0x42a774;
                puVar10 = (undefined1 *)FUN_00aae9af();
                local_c._0_1_ = 0xd;
                uVar3 = (undefined1)local_c;
                local_c._0_1_ = 0xd;
                local_d4 = puVar10;
                if (puVar10 == (undefined1 *)0x0) {
                  puVar10 = (undefined1 *)0x0;
                  local_c._0_1_ = uVar3;
                }
                else {
                  ppuStack_12c = (undefined1 **)0xffffffff;
                  puStack_130 = (uint *)0x0;
                  *(undefined4 *)(puVar10 + 0x14) = 0xf;
                  *(undefined4 *)(puVar10 + 0x10) = 0;
                  *puVar10 = 0;
                  uStack_138 = CONCAT44(local_a8,0x42a7a7);
                  FUN_00408ed0();
                  ppuStack_12c = (undefined1 **)0xffffffff;
                  local_c._0_1_ = 0xe;
                  puStack_130 = (uint *)0x0;
                  *(undefined4 *)(puVar10 + 0x30) = 0xf;
                  *(undefined4 *)(puVar10 + 0x2c) = 0;
                  puVar10[0x1c] = 0;
                  uStack_138 = CONCAT44(local_8c,0x42a7ce);
                  FUN_00408ed0();
                  *(int *)(puVar10 + 0x38) = iVar11;
                  *(undefined4 *)(puVar10 + 0x3c) = 0;
                  puVar10[0x40] = 0;
                }
                iVar8 = puVar9[2];
                puVar9[1] = puVar10;
                puVar9[2] = iVar8 + 1;
                if (iVar8 == 0) {
                  *puVar9 = puVar10;
                }
                else {
                  *(undefined1 **)(iVar11 + 0x3c) = puVar10;
                }
                if (0xf < local_78) {
                  ppuStack_12c = (undefined1 **)local_8c[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a811;
                  FUN_00aae91b();
                }
                local_78 = 0xf;
                local_7c = 0;
                local_8c[0] = local_8c[0] & 0xffffff00;
                if (0xf < local_94) {
                  ppuStack_12c = (undefined1 **)local_a8[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a845;
                  FUN_00aae91b();
                }
                local_94 = 0xf;
                local_98 = 0;
                local_a8[0] = local_a8[0] & 0xffffff00;
                if (0xf < local_58) {
                  ppuStack_12c = (undefined1 **)local_6c[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a874;
                  FUN_00aae91b();
                }
                local_c = 0xffffffff;
                local_58 = 0xf;
                local_5c = 0;
                local_6c[0] = local_6c[0] & 0xffffff00;
                if (0xf < local_dc) {
                  ppuStack_12c = (undefined1 **)local_f0[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042a8a8;
                  FUN_00aae91b();
                }
                ppuStack_12c = (undefined1 **)0x0;
                puStack_130 = (uint *)&DAT_00ded94d;
                local_dc = 0xf;
                local_e0 = 0;
                local_f0[0] = local_f0[0] & 0xffffff00;
                uStack_138 = CONCAT44(0x42a8c6,(undefined4)uStack_138);
                FUN_00409350();
                local_c = 0xf;
                ppuStack_12c = (undefined1 **)0xe;
                puStack_130 = (uint *)0xdf2834;
                local_b0 = 0xf;
                local_b4 = 0;
                local_c4[0] = local_c4[0] & 0xffffff00;
                uStack_138 = CONCAT44(0x42a8ec,(undefined4)uStack_138);
                FUN_00409350();
                local_c._0_1_ = 0x10;
                local_d4 = auStack_1a8;
                puStack_70 = auStack_1a8;
                puStack_1b0 = (undefined *)0x0;
                iStack_1ac = 0;
                local_10c[0] = 0x2d2d2d;
                iVar11 = DAT_01262ef4;
                puVar10 = auStack_1a8;
                puVar5 = auStack_1a8;
                if (DAT_01262ef4 == 0) {
                  iVar11 = FUN_00aae9af(0x44);
                  local_c._0_1_ = 0x11;
                  if (iVar11 == 0) {
                    iVar11 = 0;
                  }
                  else {
                    iVar11 = FUN_006a4e30();
                  }
                  iVar8 = DAT_01262ef4;
                  local_c = CONCAT31(local_c._1_3_,0x12);
                  local_100 = (undefined1 *)0x0;
                  puVar10 = local_d4;
                  puVar5 = puStack_70;
                  if ((iVar11 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
                    FUN_006a4ea0(DAT_01262ef4);
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(iVar8);
                  }
                }
                puStack_70 = puVar5;
                local_d4 = puVar10;
                DAT_01262ef4 = iVar11;
                iVar11 = local_c8;
                local_c._0_1_ = 0x10;
                uVar19 = 0;
                uVar20 = 0;
                puVar17 = local_f0;
                uVar18 = 0;
                uVar13 = local_cc;
                iVar8 = local_c8;
                iVar7 = local_10c[0];
                uVar16 = FUN_006a55b0(puVar9,0,puVar17,0,local_cc,local_c8,local_10c[0],0);
                FUN_006a7ed0(local_d4,uVar16,puVar9,uVar18,puVar17,uVar20,uVar13,iVar8,iVar7,uVar19)
                ;
                local_c._0_1_ = 0x13;
                local_d4 = *(undefined1 **)(*(int *)(DAT_012587e4 + 4) + iVar11 * 4);
                iVar11 = DAT_01262ef4;
                if (DAT_01262ef4 == 0) {
                  iStack_1ac = 0x44;
                  puStack_1b0 = (undefined *)0x42aa1b;
                  local_100 = (undefined1 *)FUN_00aae9af();
                  local_c._0_1_ = 0x14;
                  if (local_100 == (undefined1 *)0x0) {
                    iVar11 = 0;
                  }
                  else {
                    iStack_1ac = 0x42aa38;
                    iVar11 = FUN_006a4e30();
                  }
                  iVar8 = DAT_01262ef4;
                  local_c = CONCAT31(local_c._1_3_,0x15);
                  local_100 = (undefined1 *)0x0;
                  if ((iVar11 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
                    iStack_1ac = DAT_01262ef4;
                    puStack_1b0 = (undefined *)0x42aa62;
                    FUN_006a4ea0();
                    iStack_1ac = iVar8;
                    /* WARNING: Subroutine does not return */
                    puStack_1b0 = &UNK_0042aa68;
                    FUN_00aae91b();
                  }
                }
                DAT_01262ef4 = iVar11;
                iStack_1ac = 0;
                puStack_1b0 = local_d4;
                local_c = CONCAT31(local_c._1_3_,0x10);
                FUN_0042bb30(DAT_01262ef4);
                if (0xf < local_b0) {
                  ppuStack_12c = (undefined1 **)local_c4[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042aaa6;
                  FUN_00aae91b();
                }
                local_c = 0xffffffff;
                local_b0 = 0xf;
                local_b4 = 0;
                local_c4[0] = local_c4[0] & 0xffffff00;
                if (0xf < local_dc) {
                  ppuStack_12c = (undefined1 **)local_f0[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042aad3;
                  FUN_00aae91b();
                }
                ppuStack_12c = (undefined1 **)0xb4;
                puStack_130 = (uint *)0x42aae0;
                local_100 = (undefined1 *)FUN_00aae9af();
                local_c = 0x16;
                if (local_100 == (undefined1 *)0x0) {
                  uVar13 = 0;
                }
                else {
                  ppuStack_12c = (undefined1 **)(piVar12 + 0xa1);
                  uStack_138 = CONCAT44(local_100,0x42ab0b);
                  puStack_130 = (uint *)piVar12;
                  uVar13 = FUN_00424f90();
                }
                local_c = 0xffffffff;
                *(undefined4 *)(param_1 + 8) = uVar13;
                break;
              }
            }
          }
          local_114 = local_114 + 1;
        } while (local_114 < 3);
      }
      if (*(int *)(param_1 + 8) == 0) {
        piVar12 = *(int **)(DAT_0125870c + 0x2a88);
        local_f8 = piVar12;
        do {
          if (local_f8 < piVar12) {
            ExceptionList = local_14;
            return;
          }
          if (*(int **)(DAT_0125870c + 0x2a8c) <= local_f8) {
            ExceptionList = local_14;
            return;
          }
          piVar1 = (int *)*local_f8;
          local_f8 = local_f8 + 1;
          iVar11 = 0;
          piVar15 = piVar1 + 0x26;
          do {
            if (*piVar15 != 0) {
              if ((piVar1[0x20] == 2) && (99999 < piVar1[0x22])) {
                local_100 = (undefined1 *)0x2d2d2d;
                local_10c[0] = 0x2d2d2d;
                local_cc = 0x2d2d2d;
                local_d4 = (undefined1 *)0x2d2d2d;
                local_d0 = 0;
                local_c8 = 0;
                ppuStack_12c = (undefined1 **)0x42abd6;
                FUN_004cd2a0();
                if ((local_d0 != 0) &&
                   (((local_c8 != 0 &&
                     (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_d0 * 4) + 0x67c) == '\0'
                     )) && (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_c8 * 4) + 0x67c)
                            == '\0')))) {
                  local_f8 = *(int **)(DAT_012588e8 + 0xb5c);
                  local_f4 = *(int *)(DAT_012588e8 + 0xb60);
                  local_10c[0] = *(int *)(DAT_012588e8 + 0xb5c);
                  ppuStack_12c = *(undefined1 ***)
                                  (*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
                  puStack_130 = (uint *)0x42ac4a;
                  piVar12 = (int *)FUN_005061e0();
                  ppuStack_12c = (undefined1 **)0x10;
                  puStack_130 = (uint *)0xdf2714;
                  local_dc = 0xf;
                  local_e0 = 0;
                  local_f0[0] = local_f0[0] & 0xffffff00;
                  uStack_138 = CONCAT44(0x42ac6d,(undefined4)uStack_138);
                  FUN_00409350();
                  local_c = 0x17;
                  ppuStack_12c = (undefined1 **)0x9;
                  puStack_130 = (uint *)0xdf2728;
                  local_b0 = 0xf;
                  local_b4 = 0;
                  local_c4[0] = local_c4[0] & 0xffffff00;
                  uStack_138 = CONCAT44(0x42ac97,(undefined4)uStack_138);
                  FUN_00409350();
                  local_c._0_1_ = 0x18;
                  iVar11 = DAT_01262ef4;
                  if (DAT_01262ef4 == 0) {
                    ppuStack_12c = (undefined1 **)0x44;
                    puStack_130 = (uint *)0x42acae;
                    local_100 = (undefined1 *)FUN_00aae9af();
                    local_c._0_1_ = 0x19;
                    if (local_100 == (undefined1 *)0x0) {
                      iVar11 = 0;
                    }
                    else {
                      ppuStack_12c = (undefined1 **)0x42acc8;
                      iVar11 = FUN_006a4e30();
                    }
                    iVar8 = DAT_01262ef4;
                    local_c = CONCAT31(local_c._1_3_,0x1a);
                    local_100 = (undefined1 *)0x0;
                    if ((iVar11 != DAT_01262ef4) && (DAT_01262ef4 != 0)) {
                      ppuStack_12c = (undefined1 **)DAT_01262ef4;
                      puStack_130 = (uint *)0x42acf1;
                      FUN_006a4ea0();
                      ppuStack_12c = (undefined1 **)iVar8;
                    /* WARNING: Subroutine does not return */
                      puStack_130 = (uint *)&UNK_0042acfb;
                      FUN_00aae91b();
                    }
                  }
                  DAT_01262ef4 = iVar11;
                  local_c._0_1_ = 0x18;
                  ppuStack_12c = (undefined1 **)local_f0;
                  puStack_130 = local_6c;
                  uStack_138 = CONCAT44(0x42ad1e,(undefined4)uStack_138);
                  uVar13 = FUN_00424ce0();
                  ppuStack_12c = (undefined1 **)0xffffffff;
                  local_c._0_1_ = 0x1b;
                  puStack_130 = (uint *)0x0;
                  local_94 = 0xf;
                  local_98 = 0;
                  local_a8[0] = local_a8[0] & 0xffffff00;
                  uStack_138 = CONCAT44(local_c4,0x42ad55);
                  FUN_00408ed0();
                  ppuStack_12c = (undefined1 **)0xffffffff;
                  local_c._0_1_ = 0x1c;
                  puStack_130 = (uint *)0x0;
                  local_78 = 0xf;
                  local_7c = 0;
                  local_8c[0] = local_8c[0] & 0xffffff00;
                  uStack_138 = CONCAT44(uVar13,0x42ad86);
                  FUN_00408ed0();
                  local_c._0_1_ = 0x1d;
                  iVar11 = piVar12[1];
                  ppuStack_12c = (undefined1 **)0x44;
                  puStack_130 = (uint *)0x42ad9c;
                  iVar8 = FUN_00aae9af();
                  local_c = CONCAT31(local_c._1_3_,0x1e);
                  local_100 = (undefined1 *)iVar8;
                  if (iVar8 == 0) {
                    iVar8 = 0;
                  }
                  else {
                    puStack_130 = (uint *)0x42adbe;
                    ppuStack_12c = (undefined1 **)iVar8;
                    FUN_00a3ab70();
                    *(int *)(iVar8 + 0x38) = iVar11;
                    *(undefined4 *)(iVar8 + 0x3c) = 0;
                    *(undefined1 *)(iVar8 + 0x40) = 0;
                  }
                  iVar7 = piVar12[2];
                  piVar12[1] = iVar8;
                  piVar12[2] = iVar7 + 1;
                  if (iVar7 == 0) {
                    *piVar12 = iVar8;
                  }
                  else {
                    *(int *)(iVar11 + 0x3c) = iVar8;
                  }
                  ppuStack_12c = (undefined1 **)0x42adf6;
                  FUN_00a39a80();
                  if (0xf < local_58) {
                    ppuStack_12c = (undefined1 **)local_6c[0];
                    /* WARNING: Subroutine does not return */
                    puStack_130 = (uint *)&UNK_0042ae0d;
                    FUN_00aae91b();
                  }
                  local_58 = 0xf;
                  local_5c = 0;
                  local_6c[0] = local_6c[0] & 0xffffff00;
                  if (0xf < local_b0) {
                    ppuStack_12c = (undefined1 **)local_c4[0];
                    /* WARNING: Subroutine does not return */
                    puStack_130 = (uint *)&UNK_0042ae3e;
                    FUN_00aae91b();
                  }
                  local_c = 0xffffffff;
                  local_b0 = 0xf;
                  local_b4 = 0;
                  local_c4[0] = local_c4[0] & 0xffffff00;
                  if (local_dc < 0x10) {
                    ppuStack_12c = (undefined1 **)0xc;
                    puStack_130 = (uint *)0xdf2734;
                    local_dc = 0xf;
                    local_e0 = 0;
                    local_f0[0] = local_f0[0] & 0xffffff00;
                    uStack_138 = CONCAT44(0x42ae8f,(undefined4)uStack_138);
                    FUN_00409350();
                    local_c = 0x1f;
                    ppuStack_12c = (undefined1 **)local_6c;
                    puStack_130 = (uint *)0x42aead;
                    uVar13 = (**(code **)(*piVar1 + 0x18))();
                    ppuStack_12c = (undefined1 **)0xffffffff;
                    puStack_130 = (uint *)0x0;
                    local_c._0_1_ = 0x20;
                    local_94 = 0xf;
                    local_98 = 0;
                    local_a8[0] = local_a8[0] & 0xffffff00;
                    uStack_138 = CONCAT44(local_f0,0x42aee4);
                    FUN_00408ed0();
                    ppuStack_12c = (undefined1 **)0xffffffff;
                    local_c._0_1_ = 0x21;
                    puStack_130 = (uint *)0x0;
                    local_78 = 0xf;
                    local_7c = 0;
                    local_8c[0] = local_8c[0] & 0xffffff00;
                    uStack_138 = CONCAT44(uVar13,0x42af15);
                    FUN_00408ed0();
                    local_c._0_1_ = 0x22;
                    iVar11 = piVar12[1];
                    ppuStack_12c = (undefined1 **)0x44;
                    puStack_130 = (uint *)0x42af2b;
                    iVar8 = FUN_00aae9af();
                    local_c = CONCAT31(local_c._1_3_,0x23);
                    local_100 = (undefined1 *)iVar8;
                    if (iVar8 == 0) {
                      iVar8 = 0;
                    }
                    else {
                      puStack_130 = (uint *)0x42af4d;
                      ppuStack_12c = (undefined1 **)iVar8;
                      FUN_00a3ab70();
                      *(int *)(iVar8 + 0x38) = iVar11;
                      *(undefined4 *)(iVar8 + 0x3c) = 0;
                      *(undefined1 *)(iVar8 + 0x40) = 0;
                    }
                    iVar7 = piVar12[2];
                    piVar12[1] = iVar8;
                    piVar12[2] = iVar7 + 1;
                    if (iVar7 == 0) {
                      *piVar12 = iVar8;
                    }
                    else {
                      *(int *)(iVar11 + 0x3c) = iVar8;
                    }
                    ppuStack_12c = (undefined1 **)0x42af85;
                    FUN_00a39a80();
                    if (0xf < local_58) {
                      ppuStack_12c = (undefined1 **)local_6c[0];
                    /* WARNING: Subroutine does not return */
                      puStack_130 = (uint *)&UNK_0042af9c;
                      FUN_00aae91b();
                    }
                    local_c = 0xffffffff;
                    local_58 = 0xf;
                    local_5c = 0;
                    local_6c[0] = local_6c[0] & 0xffffff00;
                    if (0xf < local_dc) {
                      ppuStack_12c = (undefined1 **)local_f0[0];
                    /* WARNING: Subroutine does not return */
                      puStack_130 = (uint *)&UNK_0042afd5;
                      FUN_00aae91b();
                    }
                    ppuStack_12c = (undefined1 **)0x0;
                    puStack_130 = (uint *)&DAT_00ded94d;
                    uStack_3c = 0xf;
                    uStack_40 = 0;
                    auStack_50[0] = auStack_50[0] & 0xffffff00;
                    uStack_138 = CONCAT44(0x42afff,(undefined4)uStack_138);
                    FUN_00409350();
                    local_c = 0x24;
                    ppuStack_12c = (undefined1 **)0xe;
                    puStack_130 = (uint *)0xdf2834;
                    uStack_20 = 0xf;
                    uStack_24 = 0;
                    uStack_34 = uStack_34 & 0xffffff00;
                    uStack_138 = CONCAT44(0x42b032,(undefined4)uStack_138);
                    FUN_00409350();
                    local_c._0_1_ = 0x25;
                    local_100 = auStack_1a8;
                    puStack_70 = (undefined1 *)&puStack_1b0;
                    puStack_1b0 = (undefined *)0x0;
                    iStack_1ac = 0;
                    local_10c[0] = 0x2d2d2d;
                    puVar10 = auStack_1a8;
                    ppuVar4 = &puStack_1b0;
                    if (DAT_01262ef4 == 0) {
                      puStack_70 = (undefined1 *)FUN_00aae9af(0x44);
                      local_c._0_1_ = 0x26;
                      if (puStack_70 == (undefined1 *)0x0) {
                        uVar13 = 0;
                      }
                      else {
                        uVar13 = FUN_006a4e30();
                      }
                      local_c._0_1_ = 0x25;
                      FUN_006a59b0(uVar13);
                      puVar10 = local_100;
                      ppuVar4 = (undefined **)puStack_70;
                    }
                    puStack_70 = (undefined1 *)ppuVar4;
                    local_100 = puVar10;
                    iVar11 = local_f4;
                    local_110 = auStack_1a8;
                    uVar20 = 0;
                    uVar18 = 0;
                    puVar17 = auStack_50;
                    uVar16 = 0;
                    piVar15 = local_f8;
                    iVar8 = local_f4;
                    iVar7 = local_10c[0];
                    uVar13 = FUN_006a55b0(piVar12,0,puVar17,0,local_f8,local_f4,local_10c[0],0);
                    FUN_006a7ed0(local_110,uVar13,piVar12,uVar16,puVar17,uVar18,piVar15,iVar8,iVar7,
                                 uVar20);
                    local_c._0_1_ = 0x27;
                    puVar2 = *(undefined **)(*(int *)(DAT_012587e4 + 4) + iVar11 * 4);
                    if (DAT_01262ef4 == 0) {
                      iStack_1ac = 0x44;
                      puStack_1b0 = (undefined *)0x42b10e;
                      puStack_70 = (undefined1 *)FUN_00aae9af();
                      local_c._0_1_ = 0x28;
                      if (puStack_70 == (undefined1 *)0x0) {
                        iStack_1ac = 0;
                      }
                      else {
                        iStack_1ac = 0x42b12b;
                        iStack_1ac = FUN_006a4e30();
                      }
                      local_c._0_1_ = 0x27;
                      puStack_1b0 = (undefined *)0x42b13d;
                      FUN_006a59b0();
                    }
                    iStack_1ac = 0;
                    local_c = CONCAT31(local_c._1_3_,0x25);
                    puStack_1b0 = puVar2;
                    FUN_0042bb30(DAT_01262ef4);
                    if (uStack_20 < 0x10) {
                      local_c = 0xffffffff;
                      uStack_20 = 0xf;
                      uStack_24 = 0;
                      uStack_34 = uStack_34 & 0xffffff00;
                      if (uStack_3c < 0x10) {
                        ppuStack_12c = (undefined1 **)0xb4;
                        uStack_3c = 0xf;
                        uStack_40 = 0;
                        auStack_50[0] = auStack_50[0] & 0xffffff00;
                        puStack_130 = (uint *)0x42b1ce;
                        local_100 = (undefined1 *)FUN_00aae9af();
                        local_c = 0x29;
                        if (local_100 == (undefined1 *)0x0) {
                          uVar13 = 0;
                        }
                        else {
                          ppuStack_12c = &local_d4;
                          uStack_138 = CONCAT44(local_100,0x42b1f8);
                          puStack_130 = (uint *)piVar1;
                          uVar13 = FUN_00425270();
                        }
                        *(undefined4 *)(param_1 + 8) = uVar13;
                        ExceptionList = local_14;
                        return;
                      }
                      ppuStack_12c = (undefined1 **)auStack_50[0];
                    /* WARNING: Subroutine does not return */
                      puStack_130 = (uint *)&UNK_0042b1ac;
                      FUN_00aae91b();
                    }
                    ppuStack_12c = (undefined1 **)uStack_34;
                    /* WARNING: Subroutine does not return */
                    puStack_130 = (uint *)&UNK_0042b16e;
                    FUN_00aae91b();
                  }
                  ppuStack_12c = (undefined1 **)local_f0[0];
                    /* WARNING: Subroutine does not return */
                  puStack_130 = (uint *)&UNK_0042ae6c;
                  FUN_00aae91b();
                }
              }
              break;
            }
            iVar11 = iVar11 + 1;
            piVar15 = piVar15 + 7;
          } while (iVar11 < 4);
        } while( true );
      }
    }
  }
  else {
    puStack_130 = (uint *)0x42a166;
    ExceptionList = &local_14;
    cVar6 = FUN_00426570();
    if (cVar6 == '\0') {
      ppuStack_12c = (undefined1 **)param_1;
      puStack_130 = (uint *)0x42a174;
      FUN_0042b270();
      ExceptionList = local_14;
      return;
    }
  }
  ExceptionList = local_14;
  return;
}

