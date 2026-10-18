// FUN_00929bf0 @ 00929bf0 body=[[00929bf0, 00929de9] [00929df0, 0092a6f9] [0092a700, 0092a7b2]]


void FUN_00929bf0(int param_1,int param_2)

{
  uint *puVar1;
  void *pvVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  undefined ***pppuVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  bool bVar9;
  bool bVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  int local_88;
  uint *local_84;
  char local_7e;
  char local_7d;
  uint local_7c;
  uint local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68 [4];
  uint local_58;
  uint local_54;
  uint local_50;
  undefined **local_48;
  undefined4 local_44;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined4 local_c;
  
  *(undefined1 *)(param_1 + 0x6c) = 1;
  if (param_2 != 0) {
    local_84 = (uint *)(param_1 + 0x3c);
    FUN_0042b980(local_84,&local_74,*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40))
    ;
    local_6c = (uint *)(param_1 + 0x2c);
    FUN_0042b980(local_6c,&local_74,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30))
    ;
    puVar1 = (uint *)(param_1 + 0x1c);
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != *(void **)(param_1 + 0x20)) {
      FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x20),0);
      *(void **)(param_1 + 0x20) = pvVar2;
    }
    pvVar2 = *(void **)(param_1 + 0xc);
    local_70 = (uint *)(param_1 + 0xc);
    if (pvVar2 != *(void **)(param_1 + 0x10)) {
      FID_conflict__memcpy(pvVar2,*(void **)(param_1 + 0x10),0);
      *(void **)(param_1 + 0x10) = pvVar2;
    }
    puVar22 = *(uint **)(param_2 + 0x2c);
    local_58 = 0x2d2d2d;
    local_54 = 0;
    local_78 = 0;
    local_7c = 0x2d2d2d;
    uVar19 = *(uint *)(*(int *)(param_1 + 0x5c) + 4);
    uVar14 = puVar22[1];
    bVar9 = false;
    bVar10 = false;
    if ((uVar19 == uVar14) || (uVar19 == *(uint *)(*(int *)(param_2 + 0x3c) + 4))) {
      bVar9 = true;
      if (uVar19 == uVar14) {
        local_7c = *puVar22;
        local_78 = uVar14;
      }
      else {
        local_7c = **(uint **)(param_2 + 0x3c);
        local_78 = (*(uint **)(param_2 + 0x3c))[1];
      }
    }
    uVar19 = *(uint *)(*(int *)(param_1 + 0x4c) + 4);
    if ((uVar19 == uVar14) || (uVar19 == *(uint *)(*(int *)(param_2 + 0x3c) + 4))) {
      bVar10 = true;
      if (uVar19 == uVar14) {
        local_58 = *puVar22;
        local_54 = puVar22[1];
      }
      else {
        local_58 = **(uint **)(param_2 + 0x3c);
        local_54 = (*(uint **)(param_2 + 0x3c))[1];
      }
    }
    if ((!bVar9) && (!bVar10)) {
      *(undefined1 *)(param_1 + 0x6c) = 0;
      return;
    }
    local_50 = *(uint *)(param_1 + 0x5c);
    local_7e = '\0';
    local_7d = '\0';
    puVar22 = local_84;
LAB_00929d95:
    if ((*(uint *)(param_1 + 0x5c) <= local_50) && (local_50 < *(uint *)(param_1 + 0x60))) {
      local_68[0] = *(uint **)(local_50 + 4);
      local_50 = local_50 + 8;
      piVar12 = (int *)FUN_0093d080(local_68);
      local_68[0] = (uint *)(*piVar12 + 0x10);
      puVar13 = *(uint **)(*piVar12 + 0x10);
LAB_00929df0:
      local_68[2] = puVar13;
      puVar11 = local_68[2];
      if ((local_68[2] < (uint *)*local_68[0]) || ((uint *)local_68[0][1] <= local_68[2]))
      goto LAB_00929d95;
      puVar13 = local_68[2] + 0x10;
      for (piVar12 = *(int **)(local_68[2][3] + 0x120); piVar12 != (int *)0x0;
          piVar12 = (int *)piVar12[2]) {
        if (*piVar12 == 0x8a1) {
          local_7e = '\x01';
          if (!bVar10) goto LAB_00929e4b;
          if ((!bVar9) && (local_68[2][9] == local_54)) goto LAB_00929df0;
          break;
        }
      }
      if (!bVar10) {
LAB_00929e4b:
        if (local_68[2][9] != *(uint *)(*(int *)(param_1 + 0x4c) + 4)) goto LAB_00929df0;
      }
      puVar3 = (uint *)puVar22[1];
      if ((local_68[2] < puVar3) && (puVar4 = (uint *)*puVar22, puVar4 <= local_68[2])) {
        uVar19 = (int)local_68[2] - (int)puVar4;
        local_68[2] = puVar13;
        if (puVar3 == (uint *)puVar22[2]) {
          uVar14 = (int)puVar3 - (int)puVar4 >> 6;
          if (0x3fffffe < uVar14) goto LAB_0092a0be;
          uVar14 = uVar14 + 1;
          uVar16 = (int)puVar22[2] - (int)puVar4 >> 6;
          if (uVar16 < uVar14) {
            if (0x3ffffff - (uVar16 >> 1) < uVar16) {
              uVar16 = 0;
            }
            else {
              uVar16 = uVar16 + (uVar16 >> 1);
            }
            if (uVar16 < uVar14) {
              uVar16 = uVar14;
            }
            FUN_0042c600(uVar16);
          }
        }
        puVar15 = (undefined4 *)puVar22[1];
        iVar20 = (uVar19 & 0xffffffc0) + *puVar22;
        if (puVar15 != (undefined4 *)0x0) {
          puVar15[1] = 0x18d;
          *puVar15 = CWarGoal::vftable;
          puVar15[2] = *(undefined4 *)(iVar20 + 8);
          puVar15[3] = *(undefined4 *)(iVar20 + 0xc);
          puVar15[4] = *(undefined4 *)(iVar20 + 0x10);
          puVar15[5] = *(undefined4 *)(iVar20 + 0x14);
          puVar15[6] = *(undefined4 *)(iVar20 + 0x18);
          puVar15[7] = *(undefined4 *)(iVar20 + 0x1c);
          puVar15[8] = *(undefined4 *)(iVar20 + 0x20);
          puVar15[9] = *(undefined4 *)(iVar20 + 0x24);
          puVar15[10] = *(undefined4 *)(iVar20 + 0x28);
          puVar15[0xb] = *(undefined4 *)(iVar20 + 0x2c);
          puVar15[0xc] = *(undefined4 *)(iVar20 + 0x30);
          puVar15[0xd] = *(undefined4 *)(iVar20 + 0x34);
          *(undefined1 *)(puVar15 + 0xe) = *(undefined1 *)(iVar20 + 0x38);
          uVar19 = *(uint *)(iVar20 + 0x3c);
LAB_00929fda:
          puVar15[0xf] = uVar19;
        }
      }
      else {
        local_68[2] = puVar13;
        if (puVar3 == (uint *)puVar22[2]) {
          uVar19 = (int)((int)puVar3 - *puVar22) >> 6;
          if (0x3fffffe < uVar19) goto LAB_0092a0be;
          uVar19 = uVar19 + 1;
          uVar14 = (int)((int)puVar22[2] - *puVar22) >> 6;
          if (uVar14 < uVar19) {
            if (0x3ffffff - (uVar14 >> 1) < uVar14) {
              uVar14 = 0;
            }
            else {
              uVar14 = uVar14 + (uVar14 >> 1);
            }
            if (uVar14 < uVar19) {
              uVar14 = uVar19;
            }
            FUN_0042c600(uVar14);
          }
        }
        puVar15 = (undefined4 *)puVar22[1];
        if (puVar15 != (undefined4 *)0x0) {
          puVar15[1] = 0x18d;
          *puVar15 = CWarGoal::vftable;
          puVar15[2] = puVar11[2];
          puVar15[3] = puVar11[3];
          puVar15[4] = puVar11[4];
          puVar15[5] = puVar11[5];
          puVar15[6] = puVar11[6];
          puVar15[7] = puVar11[7];
          puVar15[8] = puVar11[8];
          puVar15[9] = puVar11[9];
          puVar15[10] = puVar11[10];
          puVar15[0xb] = puVar11[0xb];
          puVar15[0xc] = puVar11[0xc];
          puVar15[0xd] = puVar11[0xd];
          *(char *)(puVar15 + 0xe) = (char)puVar11[0xe];
          uVar19 = puVar11[0xf];
          goto LAB_00929fda;
        }
      }
      puVar22[1] = puVar22[1] + 0x40;
      piVar12 = *(int **)(param_1 + 0x20);
      local_88 = 0;
      if (&local_88 < piVar12) {
        piVar5 = (int *)*puVar1;
        if (piVar5 <= &local_88) {
          if (piVar12 == *(int **)(param_1 + 0x24)) {
            uVar19 = (int)piVar12 - (int)piVar5 >> 2;
            if (0x3ffffffe < uVar19) goto LAB_0092a0be;
            uVar19 = uVar19 + 1;
            uVar14 = (int)*(int **)(param_1 + 0x24) - (int)piVar5 >> 2;
            if (uVar14 < uVar19) {
              if (0x3fffffff - (uVar14 >> 1) < uVar14) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar14 + (uVar14 >> 1);
              }
              if (uVar14 < uVar19) {
                uVar14 = uVar19;
              }
              FUN_004bf300(uVar14);
            }
          }
          if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
            **(undefined4 **)(param_1 + 0x20) =
                 *(undefined4 *)(*puVar1 + ((int)&local_88 - (int)piVar5 >> 2) * 4);
          }
          *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
          puVar22 = local_84;
          puVar13 = local_68[2];
          goto LAB_00929df0;
        }
      }
      if (piVar12 == *(int **)(param_1 + 0x24)) {
        uVar19 = (int)((int)piVar12 - *puVar1) >> 2;
        if (0x3ffffffe < uVar19) goto LAB_0092a0be;
        uVar19 = uVar19 + 1;
        uVar14 = (int)((int)*(int **)(param_1 + 0x24) - *puVar1) >> 2;
        if (uVar14 < uVar19) {
          if (0x3fffffff - (uVar14 >> 1) < uVar14) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar14 + (uVar14 >> 1);
          }
          if (uVar14 < uVar19) {
            uVar14 = uVar19;
          }
          FUN_004bf300(uVar14);
        }
      }
      if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x20) = 0;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
      puVar13 = local_68[2];
      goto LAB_00929df0;
    }
    local_68[2] = *(uint **)(param_1 + 0x4c);
LAB_0092a0d0:
    if ((*(uint **)(param_1 + 0x4c) <= local_68[2]) && (local_68[2] < *(uint **)(param_1 + 0x50))) {
      local_50 = *local_68[2];
      local_68[0] = (uint *)local_68[2][1];
      local_68[2] = local_68[2] + 2;
      piVar12 = (int *)FUN_0093d080(local_68);
      iVar20 = *piVar12;
      uVar19 = *(uint *)(iVar20 + 0x10);
LAB_0092a120:
      local_58 = uVar19;
      uVar14 = local_58;
      puVar22 = local_6c;
      if ((local_58 < *(uint *)(iVar20 + 0x10)) || (*(uint *)(iVar20 + 0x14) <= local_58))
      goto LAB_0092a0d0;
      uVar19 = local_58 + 0x40;
      for (piVar12 = *(int **)(*(int *)(local_58 + 0xc) + 0x120); piVar12 != (int *)0x0;
          piVar12 = (int *)piVar12[2]) {
        if (*piVar12 == 0x8a1) {
          local_7d = '\x01';
          if (!bVar9) goto LAB_0092a17a;
          if ((!bVar10) && (*(uint *)(local_58 + 0x24) == local_78)) goto LAB_0092a120;
          break;
        }
      }
      if (!bVar9) {
LAB_0092a17a:
        if (*(int *)(local_58 + 0x24) != *(int *)(*(int *)(param_1 + 0x5c) + 4)) goto LAB_0092a120;
      }
      uVar16 = local_6c[1];
      if ((local_58 < uVar16) && (uVar17 = *local_6c, uVar17 <= local_58)) {
        uVar14 = local_58 - uVar17;
        local_58 = uVar19;
        if (uVar16 == local_6c[2]) {
          uVar16 = (int)(uVar16 - uVar17) >> 6;
          if (0x3fffffe < uVar16) goto LAB_0092a0be;
          uVar16 = uVar16 + 1;
          uVar17 = (int)(local_6c[2] - uVar17) >> 6;
          if (uVar17 < uVar16) {
            if (0x3ffffff - (uVar17 >> 1) < uVar17) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar17 + (uVar17 >> 1);
            }
            if (uVar17 < uVar16) {
              uVar17 = uVar16;
            }
            FUN_0042c600(uVar17);
          }
        }
        puVar15 = (undefined4 *)puVar22[1];
        iVar21 = (uVar14 & 0xffffffc0) + *puVar22;
        if (puVar15 != (undefined4 *)0x0) {
          puVar15[1] = 0x18d;
          *puVar15 = CWarGoal::vftable;
          puVar15[2] = *(undefined4 *)(iVar21 + 8);
          puVar15[3] = *(undefined4 *)(iVar21 + 0xc);
          puVar15[4] = *(undefined4 *)(iVar21 + 0x10);
          puVar15[5] = *(undefined4 *)(iVar21 + 0x14);
          puVar15[6] = *(undefined4 *)(iVar21 + 0x18);
          puVar15[7] = *(undefined4 *)(iVar21 + 0x1c);
          puVar15[8] = *(undefined4 *)(iVar21 + 0x20);
          puVar15[9] = *(undefined4 *)(iVar21 + 0x24);
          puVar15[10] = *(undefined4 *)(iVar21 + 0x28);
          puVar15[0xb] = *(undefined4 *)(iVar21 + 0x2c);
          puVar15[0xc] = *(undefined4 *)(iVar21 + 0x30);
          puVar15[0xd] = *(undefined4 *)(iVar21 + 0x34);
          *(undefined1 *)(puVar15 + 0xe) = *(undefined1 *)(iVar21 + 0x38);
          uVar18 = *(undefined4 *)(iVar21 + 0x3c);
          puVar22 = local_6c;
LAB_0092a311:
          puVar15[0xf] = uVar18;
        }
      }
      else {
        local_58 = uVar19;
        if (uVar16 == local_6c[2]) {
          uVar16 = (int)(uVar16 - *local_6c) >> 6;
          if (0x3fffffe < uVar16) {
LAB_0092a0be:
                    /* WARNING: Subroutine does not return */
            FUN_00aad3ad("vector<T> too long");
          }
          uVar16 = uVar16 + 1;
          uVar17 = (int)(local_6c[2] - *local_6c) >> 6;
          if (uVar17 < uVar16) {
            if (0x3ffffff - (uVar17 >> 1) < uVar17) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar17 + (uVar17 >> 1);
            }
            if (uVar17 < uVar16) {
              uVar17 = uVar16;
            }
            FUN_0042c600(uVar17);
          }
        }
        puVar15 = (undefined4 *)puVar22[1];
        if (puVar15 != (undefined4 *)0x0) {
          puVar15[1] = 0x18d;
          *puVar15 = CWarGoal::vftable;
          puVar15[2] = *(undefined4 *)(uVar14 + 8);
          puVar15[3] = *(undefined4 *)(uVar14 + 0xc);
          puVar15[4] = *(undefined4 *)(uVar14 + 0x10);
          puVar15[5] = *(undefined4 *)(uVar14 + 0x14);
          puVar15[6] = *(undefined4 *)(uVar14 + 0x18);
          puVar15[7] = *(undefined4 *)(uVar14 + 0x1c);
          puVar15[8] = *(undefined4 *)(uVar14 + 0x20);
          puVar15[9] = *(undefined4 *)(uVar14 + 0x24);
          puVar15[10] = *(undefined4 *)(uVar14 + 0x28);
          puVar15[0xb] = *(undefined4 *)(uVar14 + 0x2c);
          puVar15[0xc] = *(undefined4 *)(uVar14 + 0x30);
          puVar15[0xd] = *(undefined4 *)(uVar14 + 0x34);
          *(undefined1 *)(puVar15 + 0xe) = *(undefined1 *)(uVar14 + 0x38);
          uVar18 = *(undefined4 *)(uVar14 + 0x3c);
          goto LAB_0092a311;
        }
      }
      puVar13 = local_70;
      puVar22[1] = puVar22[1] + 0x40;
      piVar12 = (int *)local_70[1];
      local_88 = 0;
      if (&local_88 < piVar12) {
        piVar5 = (int *)*local_70;
        if (piVar5 <= &local_88) {
          if (piVar12 == (int *)local_70[2]) {
            uVar19 = (int)piVar12 - (int)piVar5 >> 2;
            if (0x3ffffffe < uVar19) goto LAB_0092a0be;
            uVar19 = uVar19 + 1;
            uVar14 = (int)local_70[2] - (int)piVar5 >> 2;
            if (uVar14 < uVar19) {
              if (0x3fffffff - (uVar14 >> 1) < uVar14) {
                uVar14 = 0;
              }
              else {
                uVar14 = uVar14 + (uVar14 >> 1);
              }
              if (uVar14 < uVar19) {
                uVar14 = uVar19;
              }
              FUN_004bf300(uVar14);
            }
          }
          if ((undefined4 *)puVar13[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar13[1] =
                 *(undefined4 *)(*puVar13 + ((int)&local_88 - (int)piVar5 >> 2) * 4);
          }
          puVar13[1] = puVar13[1] + 4;
          uVar19 = local_58;
          goto LAB_0092a120;
        }
      }
      if (piVar12 == (int *)local_70[2]) {
        uVar19 = (int)((int)piVar12 - *local_70) >> 2;
        if (0x3ffffffe < uVar19) goto LAB_0092a0be;
        uVar19 = uVar19 + 1;
        uVar14 = (int)((int)local_70[2] - *local_70) >> 2;
        if (uVar14 < uVar19) {
          if (0x3fffffff - (uVar14 >> 1) < uVar14) {
            uVar14 = 0;
          }
          else {
            uVar14 = uVar14 + (uVar14 >> 1);
          }
          if (uVar14 < uVar19) {
            uVar14 = uVar19;
          }
          FUN_004bf300(uVar14);
        }
      }
      if ((undefined4 *)puVar13[1] != (undefined4 *)0x0) {
        *(undefined4 *)puVar13[1] = 0;
      }
      puVar13[1] = puVar13[1] + 4;
      uVar19 = local_58;
      goto LAB_0092a120;
    }
    local_88 = 0;
    if (*(char *)(param_2 + 0xfc) != '\0') {
      iVar20 = FUN_0090cc40();
      local_74 = (uint *)(iVar20 + 0xc);
      local_68[2] = (uint *)*local_74;
LAB_0092a420:
      do {
        if ((local_68[2] < (uint *)*local_74) || ((uint *)local_74[1] <= local_68[2])) break;
        uVar19 = *local_68[2];
        local_68[2] = local_68[2] + 1;
        if (*(char *)(uVar19 + 0x1d4) != '\0') {
          if (bVar10) {
            puVar15 = *(undefined4 **)(param_1 + 0x4c);
LAB_0092a4a0:
            do {
              puVar22 = local_84;
              if ((puVar15 < *(undefined4 **)(param_1 + 0x4c)) ||
                 (*(undefined4 **)(param_1 + 0x50) <= puVar15)) goto LAB_0092a420;
              local_34 = 0;
              local_30 = **(undefined4 **)(param_1 + 0x5c);
              local_2c = (*(undefined4 **)(param_1 + 0x5c))[1];
              local_28 = *puVar15;
              local_24 = puVar15[1];
              local_7c = 0x2d2d2d;
              local_38 = 0x2d2d2d;
              pppuVar6 = (undefined ***)local_84[1];
              local_14 = DAT_0131b788;
              puVar15 = puVar15 + 2;
              local_44 = 0x18d;
              local_48 = CWarGoal::vftable;
              local_20 = 0;
              local_1c = 0;
              local_18 = 0;
              local_10 = 0;
              local_c = 0;
              local_3c = uVar19;
              if ((&local_48 < pppuVar6) && ((undefined ***)*local_84 <= &local_48)) {
                if (pppuVar6 == (undefined ***)local_84[2]) {
                  FUN_0042c4b0();
                }
                if (local_84[1] != 0) {
                  FUN_0094be20();
                }
                local_84[1] = local_84[1] + 0x40;
              }
              else {
                if (pppuVar6 == (undefined ***)local_84[2]) {
                  FUN_0042c4b0();
                }
                if (puVar22[1] != 0) {
                  FUN_0094be20();
                }
                puVar22 = puVar22 + 1;
                *puVar22 = *puVar22 + 0x40;
              }
              ppuVar7 = *(uint ***)(param_1 + 0x20);
              local_68[0] = (uint *)0x0;
              if (local_68 < ppuVar7) {
                ppuVar8 = (uint **)*puVar1;
                if (local_68 < ppuVar8) goto LAB_0092a5fe;
                if (ppuVar7 == *(uint ***)(param_1 + 0x24)) {
                  FUN_007b94a0();
                }
                if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x20) =
                       *(undefined4 *)(*puVar1 + ((int)local_68 - (int)ppuVar8 >> 2) * 4);
                  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
                  local_88 = local_88 + 1;
                  goto LAB_0092a4a0;
                }
              }
              else {
LAB_0092a5fe:
                if (ppuVar7 == *(uint ***)(param_1 + 0x24)) {
                  FUN_007b94a0();
                }
                if (*(undefined4 **)(param_1 + 0x20) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x20) = 0;
                }
              }
              *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
              local_88 = local_88 + 1;
            } while( true );
          }
          FUN_0094bdb0(**(undefined4 **)(param_1 + 0x5c),(*(undefined4 **)(param_1 + 0x5c))[1],
                       **(undefined4 **)(param_1 + 0x4c),(*(undefined4 **)(param_1 + 0x4c))[1]);
          FUN_0042c2f0();
          local_68[0] = (uint *)0x0;
          FUN_004e9b90();
          local_88 = local_88 + 1;
        }
      } while( true );
    }
    puVar11 = local_6c;
    puVar13 = local_70;
    puVar22 = local_84;
    if (((!bVar10) || (!bVar9)) &&
       (iVar20 = FUN_0093bcc0(),
       (((int)(puVar22[1] - *puVar22) >> 6) + ((int)(puVar11[1] - *puVar11) >> 6)) - local_88 ==
       iVar20)) {
      if (local_7e == '\0') {
        if (local_7d == '\0') {
          *(undefined1 *)(param_1 + 0x6c) = 0;
          FUN_0042b980(puVar22,&local_74,*puVar22,puVar22[1]);
          FUN_0042b980(puVar11,&local_74,*puVar11,puVar11[1]);
          FUN_00549980(puVar1);
          FUN_00549980(puVar13);
          return;
        }
        FUN_0042b980(puVar22,&local_74,*puVar22,puVar22[1]);
        FUN_00549980(puVar1);
        iVar20 = 0;
        if (0 < (int)(puVar11[1] - *puVar11 & 0xffffffc0)) {
          iVar21 = 0;
          do {
            for (piVar12 = *(int **)(*(int *)(*puVar11 + 0xc + iVar21) + 0x120);
                piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
              if (*piVar12 == 0x8a1) {
                *(undefined4 *)(*puVar13 + iVar20 * 4) = 2;
                break;
              }
            }
            iVar20 = iVar20 + 1;
            iVar21 = iVar21 + 0x40;
          } while (iVar20 < (int)(puVar11[1] - *puVar11) >> 6);
        }
      }
      else {
        FUN_0042b980(puVar11,&local_74,*puVar11,puVar11[1]);
        FUN_00549980(puVar13);
        iVar20 = 0;
        if (0 < (int)(puVar22[1] - *puVar22 & 0xffffffc0)) {
          iVar21 = 0;
          do {
            for (piVar12 = *(int **)(*(int *)(*puVar22 + 0xc + iVar21) + 0x120);
                piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
              if (*piVar12 == 0x8a1) {
                *(undefined4 *)(*puVar1 + iVar20 * 4) = 2;
                break;
              }
            }
            iVar20 = iVar20 + 1;
            iVar21 = iVar21 + 0x40;
            if ((int)(puVar22[1] - *puVar22) >> 6 <= iVar20) {
              return;
            }
          } while( true );
        }
      }
    }
  }
  return;
}

