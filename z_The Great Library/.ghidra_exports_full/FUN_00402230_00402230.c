// FUN_00402230 @ 00402230 body=[[00402230, 0040235c] [00402360, 004023b7] [004023bb, 004023cf] [004023d3, 004023e2] [004023e6, 004025b8] [004025c4, 00402758] [00402760, 00402788] [00402792, 004027aa] [004027b4, 004027ca] [004027d4, 00402858] [00402860, 004029a5] [004029a9, 00402be9] [00402bf3, 00402c08] [00402c12, 00402c2a] [00402c34, 00402c4a] [00402c54, 00402cc5] [00402ccc, 00402de7] [00402deb, 0040304b] [00403055, 00403068] [00403072, 00403088] [00403092, 004030a8] [004030b2, 0040318c] [00403190, 004032d8] [004032e2, 004034a8] [004034b2, 004034e7]]


/* WARNING: Removing unreachable block (ram,0x004023dd) */

void FUN_00402230(int param_1,int param_2)

{
  uint *puVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  float *pfVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  float fVar15;
  int iVar16;
  int *piVar17;
  uint *puVar18;
  uint *puVar19;
  uint local_b8;
  uint local_a4 [5];
  uint local_90;
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  int *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  int *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  int *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  uint *local_40;
  uint *local_3c;
  uint *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  int *local_28;
  undefined4 local_24;
  float local_20 [2];
  uint *local_18;
  uint *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52388;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_009a1440(param_2);
  if (*(int *)(param_2 + 0x20) == 0x3e2) {
    pcVar7 = (char *)(param_2 + 0x22c);
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    FUN_00409350((char *)(param_2 + 0x22c),(int)pcVar7 - (param_2 + 0x22d));
  }
  FUN_009a1440(param_2);
  if (*(int *)(param_2 + 0x20) == 0x2f0) {
    puVar8 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_20,param_2 + 0x22c);
    *(undefined4 *)(param_1 + 0x214) = *puVar8;
    *(undefined4 *)(param_1 + 0x218) = puVar8[1];
  }
  FUN_009a1440(param_2);
  if (*(int *)(param_2 + 0x20) == 0x500) {
    FUN_009a1bb0(param_1 + 0x1cc);
    FUN_009a1440(param_2);
  }
  if ((*(int *)(param_2 + 0x20) == 0xa1e) &&
     (local_18 = (uint *)FUN_00aaf0c5(param_2 + 0x22c), 0 < (int)local_18)) {
    if (*(int *)(param_1 + 0x220) != *(int *)(param_1 + 0x224)) {
      uVar9 = FUN_0040a4e0(*(int *)(param_1 + 0x224),param_2);
      FUN_0040a110(*(undefined4 *)(param_1 + 0x224),param_2);
      *(undefined4 *)(param_1 + 0x224) = uVar9;
    }
    puVar19 = local_18;
    FUN_00409040(local_18);
    if (0 < (int)puVar19) {
      local_14 = puVar19;
      do {
        local_a4[0] = 0xf;
        local_b8 = local_b8 & 0xffffff00;
        local_7c = 0xf;
        local_80 = 0;
        local_90 = local_90 & 0xffffff00;
        local_8 = 0;
        FUN_00409e00(param_1 + 0x220);
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_90);
        }
        if (0xf < local_a4[0]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b8);
        }
        local_14 = (uint *)((int)local_14 + -1);
      } while (local_14 != (uint *)0x0);
    }
    local_3c = (uint *)0x0;
    if (0 < (int)puVar19) {
      local_14 = (uint *)0x0;
      do {
        local_38 = (uint *)0x0;
        local_34 = 0;
        local_30 = 0;
        local_2c = 0;
        local_8 = 1;
        FUN_009a1440(param_2);
        puVar19 = (uint *)0x0;
        if (*(int *)(param_2 + 0x20) == 0xa17) {
          FUN_00409810(param_2,&local_38);
          puVar19 = local_38;
        }
        puVar14 = (uint *)0x0;
        while (puVar19 != (uint *)0x0) {
          puVar14 = puVar19 + 2;
          uVar10 = *puVar19;
          puVar19 = (uint *)((int *)*puVar14)[2];
          puVar18 = (uint *)(*(int *)(param_1 + 0x220) + (int)local_14);
          pfVar11 = (float *)puVar18[1];
          local_20[1] = (float)*(int *)*puVar14 / 1000.0;
          local_20[0] = (float)(int)uVar10 / 1000.0;
          local_40 = puVar19;
          if (local_20 < pfVar11) {
            pfVar3 = (float *)*puVar18;
            if (local_20 < pfVar3) goto LAB_004024ff;
            if (pfVar11 == (float *)puVar18[2]) {
              uVar10 = (int)pfVar11 - (int)pfVar3 >> 3;
              if (0x1ffffffe < uVar10) goto LAB_0040291a;
              uVar10 = uVar10 + 1;
              uVar13 = (int)puVar18[2] - (int)pfVar3 >> 3;
              if (uVar13 < uVar10) {
                if (0x1fffffff - (uVar13 >> 1) < uVar13) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = uVar13 + (uVar13 >> 1);
                }
                if (uVar13 < uVar10) {
                  uVar13 = uVar10;
                }
                FUN_004237e0(uVar13);
              }
            }
            pfVar11 = (float *)puVar18[1];
            pfVar3 = (float *)(*puVar18 + ((int)local_20 - (int)pfVar3 >> 3) * 8);
            puVar19 = local_40;
            if (pfVar11 != (float *)0x0) {
              *pfVar11 = *pfVar3;
              fVar15 = pfVar3[1];
              goto LAB_00402553;
            }
          }
          else {
LAB_004024ff:
            if (pfVar11 == (float *)puVar18[2]) {
              uVar10 = (int)((int)pfVar11 - *puVar18) >> 3;
              if (0x1ffffffe < uVar10) {
LAB_0040291a:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar10 = uVar10 + 1;
              uVar13 = (int)((int)puVar18[2] - *puVar18) >> 3;
              if (uVar13 < uVar10) {
                if (0x1fffffff - (uVar13 >> 1) < uVar13) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = uVar13 + (uVar13 >> 1);
                }
                if (uVar13 < uVar10) {
                  uVar13 = uVar10;
                }
                FUN_004237e0(uVar13);
              }
            }
            pfVar11 = (float *)puVar18[1];
            if (pfVar11 != (float *)0x0) {
              *pfVar11 = local_20[0];
              fVar15 = local_20[1];
LAB_00402553:
              pfVar11[1] = fVar15;
            }
          }
          puVar18[1] = puVar18[1] + 8;
          puVar14 = local_38;
        }
        FUN_009a1440(param_2);
        if (*(int *)(param_2 + 0x20) == 0x8c) {
          pcVar7 = (char *)(param_2 + 0x22c);
          do {
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          FUN_00409350(param_2 + 0x22c,(int)pcVar7 - (param_2 + 0x22d));
        }
        if (puVar14 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar14);
        }
        local_14 = local_14 + 0x16;
        local_3c = (uint *)((int)local_3c + 1);
        local_38 = (uint *)0x0;
        local_34 = 0;
        local_30 = 0;
      } while ((int)local_3c < (int)local_18);
    }
    local_60 = (int *)0x0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = (int *)0x0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_8 = 3;
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0xa18) {
      FUN_00409810(param_2,&local_60);
      piVar17 = local_60;
    }
    FUN_009a1440(param_2);
    if (*(int *)(param_2 + 0x20) == 0xa19) {
      FUN_00409810(param_2,&local_50);
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      do {
        iVar4 = *piVar17;
        piVar12 = piVar17 + 2;
        piVar17 = (int *)((int *)*piVar12)[2];
        iVar5 = *(int *)(param_1 + 0x220);
        local_20[1] = (float)*(int *)*piVar12 / 1000.0;
        *(float *)(iVar5 + 0x30 + iVar16) = (float)iVar4 / 1000.0;
        *(float *)(iVar5 + 0x34 + iVar16) = local_20[1];
        iVar16 = iVar16 + 0x58;
      } while (piVar17 != (int *)0x0);
    }
    if (local_50 != (int *)0x0) {
      iVar16 = 0;
      piVar17 = local_50;
      do {
        iVar4 = *piVar17;
        piVar17 = (int *)piVar17[2];
        *(int *)(*(int *)(param_1 + 0x220) + 0x54 + iVar16) = iVar4;
        iVar16 = iVar16 + 0x58;
      } while (piVar17 != (int *)0x0);
    }
    local_28 = (int *)0x0;
    local_24 = 0;
    local_20[0] = 0.0;
    local_20[1] = (float)((uint)local_20[1] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,4);
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0xd9) {
      FUN_00409910(param_2,&local_28);
      piVar17 = local_28;
    }
    while (piVar17 != (int *)0x0) {
      piVar12 = (int *)piVar17[8];
      FUN_00408ed0(piVar17,0,0xffffffff);
      piVar17 = piVar12;
    }
    local_38 = (uint *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_009a1440(param_2);
    puVar19 = (uint *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x55) {
      FUN_00409810(param_2,&local_38);
      puVar19 = local_38;
    }
    puVar14 = (uint *)0x0;
    if (puVar19 != (uint *)0x0) {
      iVar16 = 0;
      do {
        uVar10 = *puVar19;
        puVar19 = (uint *)puVar19[2];
        *(uint *)(*(int *)(param_1 + 0x220) + 0x2c + iVar16) = uVar10;
        iVar16 = iVar16 + 0x58;
        puVar14 = local_38;
      } while (puVar19 != (uint *)0x0);
    }
    if (puVar14 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar14);
    }
    FUN_004097a0(&local_28);
    if (local_50 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_8 = 0xffffffff;
    if (local_60 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
  }
  FUN_009a1440(param_2);
  if ((*(int *)(param_2 + 0x20) == 0xa1a) &&
     (local_40 = (uint *)FUN_00aaf0c5(param_2 + 0x22c), 0 < (int)local_40)) {
    puVar19 = (uint *)(param_1 + 0x240);
    if (*(int *)(param_1 + 0x240) != *(int *)(param_1 + 0x244)) {
      uVar9 = FUN_0040a550(*(int *)(param_1 + 0x244),param_2);
      FUN_0040a190(param_2);
      *(undefined4 *)(param_1 + 0x244) = uVar9;
    }
    puVar14 = local_40;
    FUN_00409130(local_40);
    if (0 < (int)puVar14) {
      do {
        local_18 = puVar14;
        local_88 = 0xf;
        local_8c = 0;
        local_a4[2] = local_a4[2] & 0xffffff00;
        local_8 = 6;
        puVar14 = *(uint **)(param_1 + 0x244);
        if ((local_a4 < puVar14) && (puVar18 = (uint *)*puVar19, puVar18 <= local_a4)) {
          if (puVar14 == *(uint **)(param_1 + 0x248)) {
            FUN_0040a010();
          }
          puVar14 = *(uint **)(param_1 + 0x244);
          puVar18 = (uint *)((((int)local_a4 - (int)puVar18) / 0x34) * 0x34 + *puVar19);
          local_40 = puVar14;
          local_3c = puVar14;
          if (puVar14 != (uint *)0x0) {
            puVar14[7] = 0xf;
            puVar14[6] = 0;
            *(char *)(puVar14 + 2) = '\0';
            local_8 = CONCAT31(local_8._1_3_,8);
            *puVar14 = *puVar18;
            puVar14[1] = puVar18[1];
            FUN_00408ed0(puVar18 + 2,0,0xffffffff);
            puVar14[9] = puVar18[9];
            puVar14[0xb] = puVar18[0xb];
            puVar14[0xc] = puVar18[0xc];
            puVar14[10] = puVar18[10];
          }
        }
        else {
          if (puVar14 == *(uint **)(param_1 + 0x248)) {
            FUN_0040a010();
          }
          puVar14 = *(uint **)(param_1 + 0x244);
          local_40 = puVar14;
          local_3c = puVar14;
          if (puVar14 != (uint *)0x0) {
            puVar14[7] = 0xf;
            puVar14[6] = 0;
            *(char *)(puVar14 + 2) = '\0';
            local_8 = CONCAT31(local_8._1_3_,10);
            *puVar14 = local_a4[0];
            puVar14[1] = local_a4[1];
            FUN_00408ed0(local_a4 + 2,0,0xffffffff);
            puVar14[9] = local_80;
            puVar14[0xb] = local_78;
            puVar14[0xc] = local_74;
            puVar14[10] = local_7c;
          }
        }
        *(int *)(param_1 + 0x244) = *(int *)(param_1 + 0x244) + 0x34;
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a4[2]);
        }
        local_18 = (uint *)((int)local_18 + -1);
        puVar14 = local_18;
      } while (local_18 != (uint *)0x0);
    }
    local_70 = (int *)0x0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8 = 0xb;
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x341) {
      FUN_00409810(param_2,&local_70);
      piVar17 = local_70;
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      do {
        iVar4 = *piVar17;
        piVar12 = piVar17 + 2;
        piVar17 = (int *)((int *)*piVar12)[2];
        uVar10 = *puVar19;
        local_20[0] = (float)iVar4 / 1000.0;
        local_20[1] = (float)*(int *)*piVar12 / 1000.0;
        *(float *)(uVar10 + iVar16) = local_20[0];
        *(float *)(uVar10 + 4 + iVar16) = local_20[1];
        iVar16 = iVar16 + 0x34;
      } while (piVar17 != (int *)0x0);
    }
    local_38 = (uint *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_009a1440(param_2);
    puVar14 = (uint *)0x0;
    if (*(int *)(param_2 + 0x20) == 0xa18) {
      FUN_00409810(param_2,&local_38);
      puVar14 = local_38;
    }
    if (puVar14 != (uint *)0x0) {
      iVar16 = 0;
      do {
        uVar10 = *puVar14;
        puVar18 = puVar14 + 2;
        puVar14 = (uint *)((int *)*puVar18)[2];
        uVar13 = *puVar19;
        local_20[0] = (float)(int)uVar10 / 1000.0;
        local_20[1] = (float)*(int *)*puVar18 / 1000.0;
        *(float *)(uVar13 + 0x2c + iVar16) = local_20[0];
        *(float *)(uVar13 + 0x30 + iVar16) = local_20[1];
        iVar16 = iVar16 + 0x34;
      } while (puVar14 != (uint *)0x0);
    }
    local_50 = (int *)0x0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0xd9) {
      FUN_00409910(param_2,&local_50);
      piVar17 = local_50;
    }
    while (piVar17 != (int *)0x0) {
      piVar12 = (int *)piVar17[8];
      FUN_00408ed0(piVar17,0,0xffffffff);
      piVar17 = piVar12;
    }
    local_60 = (int *)0x0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
    local_8 = CONCAT31(local_8._1_3_,0xe);
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x55) {
      FUN_00409810(param_2,&local_60);
      piVar17 = local_60;
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      do {
        iVar4 = *piVar17;
        piVar17 = (int *)piVar17[2];
        *(int *)(*puVar19 + 0x24 + iVar16) = iVar4;
        iVar16 = iVar16 + 0x34;
      } while (piVar17 != (int *)0x0);
    }
    local_28 = (int *)0x0;
    local_24 = 0;
    local_20[0] = 0.0;
    local_20[1] = (float)((uint)local_20[1] & 0xffffff00);
    local_8 = CONCAT31(local_8._1_3_,0xf);
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x17e) {
      FUN_00409810(param_2,&local_28);
      piVar17 = local_28;
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      piVar12 = piVar17;
      do {
        iVar4 = *piVar12;
        piVar12 = (int *)piVar12[2];
        *(float *)(iVar16 + 0x28 + *puVar19) = (float)iVar4 / 1000.0;
        iVar16 = iVar16 + 0x34;
      } while (piVar12 != (int *)0x0);
    }
    if (piVar17 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar17);
    }
    if (local_60 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
    FUN_004097a0(&local_50);
    if (local_38 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38);
    }
    local_8 = 0xffffffff;
    if (local_70 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
  }
  FUN_009a1440(param_2);
  if ((*(int *)(param_2 + 0x20) == 0xa1b) &&
     (local_3c = (uint *)FUN_00aaf0c5(param_2 + 0x22c), 0 < (int)local_3c)) {
    puVar19 = (uint *)(param_1 + 0x250);
    if (*(int *)(param_1 + 0x250) != *(int *)(param_1 + 0x254)) {
      local_40 = (uint *)FUN_0040a5b0(*(int *)(param_1 + 0x254),param_2);
      puVar14 = *(uint **)(param_1 + 0x254);
      if (local_40 != puVar14) {
        puVar18 = local_40 + 7;
        do {
          if (0xf < *puVar18) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(puVar18[-5]);
          }
          *puVar18 = 0xf;
          puVar18[-1] = 0;
          *(char *)(puVar18 + -5) = '\0';
          puVar1 = puVar18 + 6;
          puVar18 = puVar18 + 0xd;
        } while (puVar1 != puVar14);
      }
      *(uint **)(param_1 + 0x254) = local_40;
    }
    puVar14 = local_3c;
    FUN_00409220(local_3c);
    if (0 < (int)puVar14) {
      local_18 = puVar14;
      do {
        local_88 = 0xf;
        local_8c = 0;
        local_a4[2] = local_a4[2] & 0xffffff00;
        local_8 = 0x10;
        puVar14 = *(uint **)(param_1 + 0x254);
        if ((local_a4 < puVar14) && (puVar18 = (uint *)*puVar19, puVar18 <= local_a4)) {
          if (puVar14 == *(uint **)(param_1 + 600)) {
            FUN_0040a090();
          }
          puVar14 = *(uint **)(param_1 + 0x254);
          puVar18 = (uint *)((((int)local_a4 - (int)puVar18) / 0x34) * 0x34 + *puVar19);
          local_40 = puVar14;
          local_14 = puVar14;
          if (puVar14 != (uint *)0x0) {
            puVar14[7] = 0xf;
            puVar14[6] = 0;
            *(char *)(puVar14 + 2) = '\0';
            local_8 = CONCAT31(local_8._1_3_,0x12);
            *puVar14 = *puVar18;
            puVar14[1] = puVar18[1];
            FUN_00408ed0(puVar18 + 2,0,0xffffffff);
            puVar14[9] = puVar18[9];
            puVar14[10] = puVar18[10];
            puVar14[0xb] = puVar18[0xb];
            puVar14[0xc] = puVar18[0xc];
          }
        }
        else {
          if (puVar14 == *(uint **)(param_1 + 600)) {
            FUN_0040a090();
          }
          FUN_0040a690();
        }
        *(int *)(param_1 + 0x254) = *(int *)(param_1 + 0x254) + 0x34;
        if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a4[2]);
        }
        local_18 = (uint *)((int)local_18 + -1);
      } while (local_18 != (uint *)0x0);
    }
    local_50 = (int *)0x0;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_8 = 0x13;
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x341) {
      FUN_00409810(param_2,&local_50);
      piVar17 = local_50;
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      do {
        iVar4 = *piVar17;
        piVar12 = piVar17 + 2;
        piVar17 = (int *)((int *)*piVar12)[2];
        uVar10 = *puVar19;
        local_20[0] = (float)iVar4 / 1000.0;
        local_20[1] = (float)*(int *)*piVar12 / 1000.0;
        *(float *)(uVar10 + iVar16) = local_20[0];
        *(float *)(uVar10 + 4 + iVar16) = local_20[1];
        iVar16 = iVar16 + 0x34;
      } while (piVar17 != (int *)0x0);
    }
    local_60 = (int *)0x0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_8 = CONCAT31(local_8._1_3_,0x14);
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0xa18) {
      FUN_00409810(param_2,&local_60);
      piVar17 = local_60;
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      do {
        iVar4 = *piVar17;
        piVar12 = piVar17 + 2;
        piVar17 = (int *)((int *)*piVar12)[2];
        uVar10 = *puVar19;
        local_20[0] = (float)iVar4 / 1000.0;
        local_20[1] = (float)*(int *)*piVar12 / 1000.0;
        *(float *)(uVar10 + 0x2c + iVar16) = local_20[0];
        *(float *)(uVar10 + 0x30 + iVar16) = local_20[1];
        iVar16 = iVar16 + 0x34;
      } while (piVar17 != (int *)0x0);
    }
    if (0 < (int)local_3c) {
      local_14 = (uint *)0x0;
      local_18 = local_3c;
      do {
        FUN_009a1440(param_2);
        if (*(int *)(param_2 + 0x20) == 0x8c) {
          pcVar7 = (char *)(param_2 + 0x22c);
          do {
            cVar2 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 != '\0');
          FUN_00409350(param_2 + 0x22c,(int)pcVar7 - (param_2 + 0x22d));
        }
        local_14 = local_14 + 0xd;
        local_18 = (uint *)((int)local_18 + -1);
      } while (local_18 != (uint *)0x0);
      local_18 = (uint *)0x0;
    }
    local_70 = (int *)0x0;
    local_6c = 0;
    local_68 = 0;
    local_64 = 0;
    local_8 = CONCAT31(local_8._1_3_,0x15);
    FUN_009a1440(param_2);
    piVar17 = (int *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x5c) {
      FUN_00409810(param_2,&local_70);
      piVar17 = local_70;
    }
    if (piVar17 != (int *)0x0) {
      iVar16 = 0;
      do {
        iVar4 = *piVar17;
        piVar17 = (int *)piVar17[2];
        *(float *)(iVar16 + 0x24 + *puVar19) = (float)iVar4 / 1000.0;
        iVar16 = iVar16 + 0x34;
      } while (piVar17 != (int *)0x0);
    }
    local_38 = (uint *)0x0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = CONCAT31(local_8._1_3_,0x16);
    FUN_009a1440(param_2);
    puVar14 = (uint *)0x0;
    if (*(int *)(param_2 + 0x20) == 0x17e) {
      FUN_00409810(param_2,&local_38);
      puVar14 = local_38;
    }
    if (puVar14 != (uint *)0x0) {
      iVar16 = 0;
      puVar18 = puVar14;
      do {
        uVar10 = *puVar18;
        puVar18 = (uint *)puVar18[2];
        *(float *)(iVar16 + 0x28 + *puVar19) = (float)(int)uVar10 / 1000.0;
        iVar16 = iVar16 + 0x34;
      } while (puVar18 != (uint *)0x0);
    }
    if (puVar14 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(puVar14);
    }
    if (local_70 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70);
    }
    if (local_60 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_60);
    }
    local_8 = 0xffffffff;
    if (local_50 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
  }
  FUN_009a1440(param_2);
  if (*(int *)(param_2 + 0x20) == 0xa1c) {
    iVar16 = __stricmp("yes",(char *)(param_2 + 0x22c));
    if (iVar16 == 0) {
      *(undefined1 *)(param_1 + 0x21d) = 1;
    }
    else {
      iVar16 = __stricmp("no",(char *)(param_2 + 0x22c));
      if (iVar16 == 0) {
        *(undefined1 *)(param_1 + 0x21d) = 0;
      }
      else {
        FUN_009a1140();
      }
    }
  }
  FUN_009a1440(param_2);
  if (*(int *)(param_2 + 0x20) == 0xa1d) {
    local_40 = (uint *)(param_2 + 0x22c);
    puVar19 = (uint *)FUN_00aaf0c5(local_40);
    local_3c = puVar19;
    if (0 < (int)puVar19) {
      piVar17 = (int *)(param_1 + 0x230);
      if (*(int *)(param_1 + 0x230) != *(int *)(param_1 + 0x234)) {
        uVar9 = FUN_0040a4e0(*(int *)(param_1 + 0x234),param_2);
        FUN_0040a110(*(undefined4 *)(param_1 + 0x234),param_2);
        *(undefined4 *)(param_1 + 0x234) = uVar9;
      }
      FUN_00409040(puVar19);
      if (0 < (int)puVar19) {
        local_18 = local_3c;
        do {
          local_a4[0] = 0xf;
          local_7c = 0xf;
          local_80 = 0;
          local_90 = local_90 & 0xffffff00;
          local_8 = 0x17;
          FUN_00409e00(piVar17);
          FUN_004034f0();
          local_18 = (uint *)((int)local_18 + -1);
        } while (local_18 != (uint *)0x0);
      }
      if (0 < (int)local_3c) {
        local_14 = (uint *)0x0;
        local_18 = local_3c;
        do {
          local_38 = (uint *)0x0;
          local_34 = 0;
          local_30 = 0;
          local_2c = 0;
          local_8 = 0x18;
          FUN_009a1440(param_2);
          puVar19 = (uint *)0x0;
          if (*(int *)(param_2 + 0x20) == 0xa17) {
            FUN_00409810(param_2,&local_38);
            puVar19 = local_38;
          }
          while (puVar19 != (uint *)0x0) {
            puVar14 = (uint *)((int *)puVar19[2])[2];
            local_20[1] = (float)*(int *)puVar19[2] / 1000.0;
            local_20[0] = (float)(int)*puVar19 / 1000.0;
            FUN_00423920();
            puVar19 = puVar14;
          }
          FUN_009a1440(param_2);
          if (*(int *)(param_2 + 0x20) == 0x8c) {
            puVar19 = local_40;
            do {
              uVar10 = *puVar19;
              puVar19 = (uint *)((int)puVar19 + 1);
            } while ((char)uVar10 != '\0');
            FUN_00409350(local_40,(int)puVar19 - (int)((int)local_40 + 1));
          }
          if (local_38 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_38);
          }
          local_14 = local_14 + 0x16;
          local_18 = (uint *)((int)local_18 + -1);
        } while (local_18 != (uint *)0x0);
      }
      local_38 = (uint *)0x0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_50 = (int *)0x0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_8 = 0x1a;
      FUN_009a1440(param_2);
      puVar19 = (uint *)0x0;
      if (*(int *)(param_2 + 0x20) == 0xa18) {
        FUN_00409810(param_2,&local_38);
        puVar19 = local_38;
      }
      FUN_009a1440(param_2);
      if (*(int *)(param_2 + 0x20) == 0xa19) {
        FUN_00409810(param_2,&local_50);
      }
      if (puVar19 != (uint *)0x0) {
        iVar16 = 0;
        do {
          uVar10 = *puVar19;
          puVar14 = puVar19 + 2;
          puVar19 = (uint *)((int *)*puVar14)[2];
          iVar4 = *piVar17;
          local_20[0] = (float)(int)uVar10 / 1000.0;
          local_20[1] = (float)*(int *)*puVar14 / 1000.0;
          *(float *)(iVar4 + 0x30 + iVar16) = local_20[0];
          *(float *)(iVar4 + 0x34 + iVar16) = local_20[1];
          iVar16 = iVar16 + 0x58;
        } while (puVar19 != (uint *)0x0);
      }
      if (local_50 != (int *)0x0) {
        iVar16 = 0;
        piVar12 = local_50;
        do {
          iVar4 = *piVar12;
          piVar12 = (int *)piVar12[2];
          *(int *)(*piVar17 + 0x54 + iVar16) = iVar4;
          iVar16 = iVar16 + 0x58;
        } while (piVar12 != (int *)0x0);
      }
      local_60 = (int *)0x0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_8 = CONCAT31(local_8._1_3_,0x1b);
      FUN_009a1440(param_2);
      piVar12 = (int *)0x0;
      if (*(int *)(param_2 + 0x20) == 0xd9) {
        FUN_00409910(param_2,&local_60);
        piVar12 = local_60;
      }
      while (piVar12 != (int *)0x0) {
        piVar6 = (int *)piVar12[8];
        FUN_00408ed0(piVar12,0,0xffffffff);
        piVar12 = piVar6;
      }
      local_70 = (int *)0x0;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      FUN_009a1440(param_2);
      piVar12 = (int *)0x0;
      if (*(int *)(param_2 + 0x20) == 0x55) {
        FUN_00409810(param_2,&local_70);
        piVar12 = local_70;
      }
      if (piVar12 != (int *)0x0) {
        iVar16 = 0;
        do {
          iVar4 = *piVar12;
          piVar12 = (int *)piVar12[2];
          *(int *)(*piVar17 + 0x2c + iVar16) = iVar4;
          iVar16 = iVar16 + 0x58;
        } while (piVar12 != (int *)0x0);
      }
      FUN_00849e90();
      FUN_004097a0(&local_60);
      FUN_00849e90();
      local_8 = 0xffffffff;
      if (local_38 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x21c) = 1;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = local_10;
  return;
}

