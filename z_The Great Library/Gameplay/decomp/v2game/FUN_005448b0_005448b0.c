// FUN_005448b0 @ 005448b0  (requested 005448B0, first bytes: 55 8B EC 83 E4 F8 6A FF)


void FUN_005448b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  void **ppvVar5;
  int *piVar6;
  char cVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  int **ppiVar12;
  int **ppiVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  int **ppiVar17;
  uint *puVar18;
  int iVar19;
  bool bVar20;
  int *local_a8;
  int *local_a4;
  int *local_a0;
  int *local_9c;
  int **local_98;
  int **local_94;
  int **local_90;
  int *local_88;
  int *local_84;
  int local_80;
  undefined1 local_7c;
  int local_78;
  int **local_74;
  int **local_70;
  int **local_6c;
  int **local_64;
  int **local_60;
  int **local_5c;
  undefined4 *local_54;
  int *local_50;
  int local_4c;
  undefined1 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined **local_24;
  undefined4 local_20;
  char local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b4ce6b;
  local_14 = ExceptionList;
  local_78 = DAT_012588e8;
  local_74 = (int **)0x0;
  local_70 = (int **)0x0;
  local_6c = (int **)0x0;
  local_88 = (int *)0x0;
  local_84 = (int *)0x0;
  local_80 = 0;
  local_7c = 0;
  local_c = 1;
  local_a8 = *(int **)(param_1 + 0xe44);
  ExceptionList = &local_14;
  ppvVar5 = &local_14;
  if (local_a8 != (int *)0x0) {
    do {
      piVar14 = local_a8 + 2;
      local_40 = *local_a8;
      piVar10 = *(int **)(local_40 + 0x48);
      local_9c = (int *)0x0;
      local_a8 = (int *)*piVar14;
      local_a4 = piVar10;
      if (0 < (int)(*(int *)(local_40 + 0x4c) - (int)piVar10 & 0xfffffffcU)) {
        do {
          piVar3 = local_84;
          piVar14 = local_9c;
          iVar16 = *(int *)(*(int *)(local_78 + 0xacc) + piVar10[(int)local_9c] * 4);
          piVar6 = local_88;
          if ((DAT_012586db != '\0') || (0 < *(int *)(iVar16 + 0x2b8))) {
            if (local_88 != (int *)0x0) {
              piVar8 = local_88;
              do {
                if (*piVar8 == piVar10[(int)local_9c]) goto LAB_00544a30;
                piVar8 = (int *)piVar8[2];
              } while (piVar8 != (int *)0x0);
            }
            local_a0 = *(int **)(iVar16 + 0x58);
            iVar16 = *(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) >> 2;
            iVar19 = 0;
            if (0 < iVar16) {
              piVar8 = *(int **)(param_1 + 0x15ac);
              do {
                puVar1 = *(undefined4 **)(*piVar8 + 0xc);
                puVar9 = *(undefined4 **)(*piVar8 + 8);
                if (puVar9 != puVar1) {
                  do {
                    if ((int *)*puVar9 == local_a0) break;
                    puVar9 = puVar9 + 1;
                  } while (puVar9 != puVar1);
                  if (puVar9 != puVar1) goto LAB_00544a30;
                }
                iVar19 = iVar19 + 1;
                piVar8 = piVar8 + 1;
              } while (iVar19 < iVar16);
            }
            local_a4 = piVar10;
            local_84 = (int *)FUN_00aae9af(0x10);
            if (local_84 == (int *)0x0) {
              local_84 = (int *)0x0;
            }
            else {
              *local_84 = piVar10[(int)piVar14];
              local_84[1] = (int)piVar3;
              local_84[2] = 0;
              *(undefined1 *)(local_84 + 3) = 0;
            }
            iVar16 = local_80 + 1;
            bVar20 = local_80 != 0;
            piVar6 = local_84;
            local_80 = iVar16;
            if (bVar20) {
              piVar3[2] = (int)local_84;
              piVar6 = local_88;
            }
          }
LAB_00544a30:
          local_88 = piVar6;
          piVar10 = *(int **)(local_40 + 0x48);
          local_9c = (int *)((int)piVar14 + 1);
          local_a4 = piVar10;
        } while ((int)local_9c < *(int *)(local_40 + 0x4c) - (int)piVar10 >> 2);
      }
      iVar16 = local_80;
    } while (local_a8 != (int *)0x0);
    ppvVar5 = ExceptionList;
    if (local_80 != 0) {
      local_98 = (int **)0x0;
      local_94 = (int **)0x0;
      local_90 = (int **)0x0;
      local_64 = (int **)0x0;
      local_60 = (int **)0x0;
      local_5c = (int **)0x0;
      local_c._0_1_ = 3;
      FUN_004bf300(local_80);
      while (0 < iVar16) {
        piVar14 = (int *)*local_88;
        uVar2 = *(undefined4 *)(*(int *)(local_78 + 0xacc) + (int)piVar14 * 4);
        piVar10 = local_88;
        do {
          local_a8 = piVar14;
          if ((int *)*piVar10 == piVar14) {
            if (piVar10 != (int *)0x0) {
              piVar14 = (int *)piVar10[1];
              piVar3 = (int *)piVar10[2];
              if (piVar14 != (int *)0x0) {
                piVar14[2] = (int)piVar3;
              }
              if (piVar3 != (int *)0x0) {
                piVar3[1] = (int)piVar14;
              }
              if (piVar10 == local_88) {
                local_88 = piVar3;
              }
              if (piVar10 == local_84) {
                local_84 = piVar14;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(piVar10);
            }
            break;
          }
          piVar10 = (int *)piVar10[2];
        } while (piVar10 != (int *)0x0);
        piVar10 = (int *)FUN_00aae9af(0x18);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10[1] = 0x18d;
          *piVar10 = (int)CRailroadChunk::vftable;
          piVar10[2] = 0;
          piVar10[3] = 0;
          piVar10[4] = 0;
        }
        ppiVar17 = (int **)piVar10[3];
        local_a4 = piVar10;
        local_a0 = piVar10;
        local_9c = piVar14;
        if ((&local_9c < ppiVar17) && (ppiVar12 = (int **)piVar10[2], ppiVar12 <= &local_9c)) {
          if (ppiVar17 == (int **)piVar10[4]) {
            uVar11 = (int)ppiVar17 - (int)ppiVar12 >> 2;
            if (0x3ffffffe < uVar11) goto LAB_00545201;
            uVar11 = uVar11 + 1;
            uVar15 = piVar10[4] - (int)ppiVar12 >> 2;
            if (uVar15 < uVar11) {
              if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar15 + (uVar15 >> 1);
              }
              if (uVar15 < uVar11) {
                uVar15 = uVar11;
              }
              FUN_004bf300(uVar15);
            }
          }
          if ((undefined4 *)local_a4[3] != (undefined4 *)0x0) {
            *(undefined4 *)local_a4[3] =
                 *(undefined4 *)(local_a4[2] + ((int)&local_9c - (int)ppiVar12 >> 2) * 4);
          }
          local_a4[3] = local_a4[3] + 4;
        }
        else {
          if (ppiVar17 == (int **)piVar10[4]) {
            uVar11 = piVar10[2];
            uVar15 = (int)((int)ppiVar17 - uVar11) >> 2;
            if (0x3ffffffe < uVar15) goto LAB_00545201;
            uVar15 = uVar15 + 1;
            uVar11 = (int)(piVar10[4] - uVar11) >> 2;
            if (uVar11 < uVar15) {
              if (0x3fffffff - (uVar11 >> 1) < uVar11) {
                uVar11 = 0;
              }
              else {
                uVar11 = uVar11 + (uVar11 >> 1);
              }
              if (uVar11 < uVar15) {
                uVar11 = uVar15;
              }
              FUN_004bf300(uVar11);
              piVar14 = local_a8;
            }
          }
          if ((undefined4 *)piVar10[3] != (undefined4 *)0x0) {
            *(undefined4 *)piVar10[3] = piVar14;
          }
          piVar10[3] = piVar10[3] + 4;
        }
        if ((&local_a8 < local_94) && (local_98 <= &local_a8)) {
          iVar16 = (int)&local_a8 - (int)local_98;
          if (local_94 == local_90) {
            uVar11 = (int)local_94 - (int)local_98 >> 2;
            if (0x3ffffffe < uVar11) goto LAB_00545201;
            uVar11 = uVar11 + 1;
            uVar15 = (int)local_90 - (int)local_98 >> 2;
            if (uVar15 < uVar11) {
              if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar15 + (uVar15 >> 1);
              }
              if (uVar15 < uVar11) {
                uVar15 = uVar11;
              }
              FUN_004bf300(uVar15);
            }
          }
          if (local_94 != (int **)0x0) {
            *local_94 = local_98[iVar16 >> 2];
          }
        }
        else {
          if (local_94 == local_90) {
            uVar11 = (int)local_94 - (int)local_98 >> 2;
            if (0x3ffffffe < uVar11) goto LAB_00545201;
            uVar11 = uVar11 + 1;
            uVar15 = (int)local_90 - (int)local_98 >> 2;
            if (uVar15 < uVar11) {
              if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar15 + (uVar15 >> 1);
              }
              if (uVar15 < uVar11) {
                uVar15 = uVar11;
              }
              FUN_004bf300(uVar15);
            }
          }
          if (local_94 != (int **)0x0) {
            *local_94 = local_a8;
          }
        }
        local_94 = local_94 + 1;
        local_54 = (undefined4 *)0x0;
        local_50 = (int *)0x0;
        local_4c = 0;
        local_48 = 0;
        local_44 = 0;
        local_c._0_1_ = 4;
        cVar7 = FUN_00544780(param_1,&local_88,uVar2,&local_54,&local_98);
        piVar14 = local_a4;
        while (local_a4 = piVar14, cVar7 != '\0') {
          FUN_0080e920();
          ppiVar17 = local_98;
          ppiVar12 = local_94;
          puVar1 = local_54;
joined_r0x00544d6f:
          if (puVar1 != (undefined4 *)0x0) {
            piVar14 = (int *)*puVar1;
            puVar1 = (undefined4 *)puVar1[2];
            for (ppiVar13 = ppiVar17; local_9c = piVar14, ppiVar13 != ppiVar12;
                ppiVar13 = ppiVar13 + 1) {
              if (*ppiVar13 == piVar14) {
                if (ppiVar13 != ppiVar12) goto joined_r0x00544d6f;
                break;
              }
            }
            if ((&local_9c < ppiVar12) && (ppiVar17 <= &local_9c)) {
              iVar16 = (int)&local_9c - (int)ppiVar17;
              if (ppiVar12 == local_90) {
                uVar11 = (int)ppiVar12 - (int)ppiVar17 >> 2;
                if (0x3ffffffe < uVar11) goto LAB_00545201;
                uVar11 = uVar11 + 1;
                uVar15 = (int)local_90 - (int)ppiVar17 >> 2;
                if (uVar15 < uVar11) {
                  if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = uVar15 + (uVar15 >> 1);
                  }
                  if (uVar15 < uVar11) {
                    uVar15 = uVar11;
                  }
                  FUN_004bf300(uVar15);
                  ppiVar12 = local_94;
                  ppiVar17 = local_98;
                }
              }
              ppiVar13 = (int **)0x0;
              if (ppiVar12 != (int **)0x0) {
                *ppiVar12 = ppiVar17[iVar16 >> 2];
                ppiVar13 = local_94;
                ppiVar17 = local_98;
              }
            }
            else {
              if (ppiVar12 == local_90) {
                uVar11 = (int)ppiVar12 - (int)ppiVar17 >> 2;
                if (0x3ffffffe < uVar11) goto LAB_00545201;
                uVar11 = uVar11 + 1;
                uVar15 = (int)local_90 - (int)ppiVar17 >> 2;
                if (uVar15 < uVar11) {
                  if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = uVar15 + (uVar15 >> 1);
                  }
                  if (uVar15 < uVar11) {
                    uVar15 = uVar11;
                  }
                  FUN_004bf300(uVar15);
                  ppiVar12 = local_94;
                  ppiVar17 = local_98;
                }
              }
              ppiVar13 = (int **)0x0;
              if (ppiVar12 != (int **)0x0) {
                *ppiVar12 = piVar14;
                ppiVar13 = local_94;
                ppiVar17 = local_98;
              }
            }
            ppiVar12 = ppiVar13 + 1;
            local_94 = ppiVar12;
            goto joined_r0x00544d6f;
          }
          if (local_88 != (int *)0x0) {
            piVar14 = local_88;
            do {
              if (*piVar14 == *local_50) {
                if (piVar14 != (int *)0x0) {
                  piVar10 = (int *)piVar14[1];
                  piVar3 = (int *)piVar14[2];
                  if (piVar10 != (int *)0x0) {
                    piVar10[2] = (int)piVar3;
                  }
                  if (piVar3 != (int *)0x0) {
                    piVar3[1] = (int)piVar10;
                  }
                  if (piVar14 == local_88) {
                    local_88 = piVar3;
                  }
                  if (piVar14 == local_84) {
                    local_84 = piVar10;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(piVar14);
                }
                break;
              }
              piVar14 = (int *)piVar14[2];
            } while (piVar14 != (int *)0x0);
          }
          cVar7 = FUN_00544780(param_1,&local_88,
                               *(undefined4 *)(*(int *)(local_78 + 0xacc) + *local_50 * 4),&local_54
                               ,&local_98);
          piVar14 = local_a4;
        }
        if ((int)(piVar14[3] - piVar14[2] & 0xfffffffcU) < 5) {
          if (piVar14 != (int *)0x0) {
            (**(code **)*piVar14)(1);
          }
          if ((&local_a8 < local_60) && (local_64 <= &local_a8)) {
            iVar16 = (int)&local_a8 - (int)local_64;
            if (local_60 == local_5c) {
              uVar11 = (int)local_60 - (int)local_64 >> 2;
              if (0x3ffffffe < uVar11) goto LAB_00545201;
              uVar11 = uVar11 + 1;
              uVar15 = (int)local_5c - (int)local_64 >> 2;
              if (uVar15 < uVar11) {
                if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = uVar15 + (uVar15 >> 1);
                }
                if (uVar15 < uVar11) {
                  uVar15 = uVar11;
                }
                FUN_004bf300(uVar15);
              }
            }
            if (local_60 != (int **)0x0) {
              *local_60 = local_64[iVar16 >> 2];
            }
          }
          else {
            if (local_60 == local_5c) {
              uVar11 = (int)local_60 - (int)local_64 >> 2;
              if (0x3ffffffe < uVar11) goto LAB_00545201;
              uVar11 = uVar11 + 1;
              uVar15 = (int)local_5c - (int)local_64 >> 2;
              if (uVar15 < uVar11) {
                if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = uVar15 + (uVar15 >> 1);
                }
                if (uVar15 < uVar11) {
                  uVar15 = uVar11;
                }
                FUN_004bf300(uVar15);
              }
            }
            if (local_60 != (int **)0x0) {
              *local_60 = local_a8;
            }
          }
          local_60 = local_60 + 1;
          if ((((int)local_94 - (int)local_98 & 0xfffffffcU) != 0) && (local_98 != local_94)) {
            local_94 = local_94 + -1;
          }
        }
        else if ((&local_a0 < local_70) && (local_74 <= &local_a0)) {
          iVar16 = (int)&local_a0 - (int)local_74;
          if (local_70 == local_6c) {
            uVar11 = (int)local_70 - (int)local_74 >> 2;
            if (0x3ffffffe < uVar11) goto LAB_00545201;
            uVar11 = uVar11 + 1;
            uVar15 = (int)local_6c - (int)local_74 >> 2;
            if (uVar15 < uVar11) {
              if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar15 + (uVar15 >> 1);
              }
              if (uVar15 < uVar11) {
                uVar15 = uVar11;
              }
              FUN_004bf300(uVar15);
            }
          }
          if (local_70 != (int **)0x0) {
            *local_70 = local_74[iVar16 >> 2];
          }
          local_70 = local_70 + 1;
        }
        else {
          if (local_70 == local_6c) {
            uVar11 = (int)local_70 - (int)local_74 >> 2;
            if (0x3ffffffe < uVar11) goto LAB_00545201;
            uVar11 = uVar11 + 1;
            uVar15 = (int)local_6c - (int)local_74 >> 2;
            if (uVar15 < uVar11) {
              if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                uVar15 = 0;
              }
              else {
                uVar15 = uVar15 + (uVar15 >> 1);
              }
              if (uVar15 < uVar11) {
                uVar15 = uVar11;
              }
              FUN_004bf300(uVar15);
            }
          }
          if (local_70 != (int **)0x0) {
            *local_70 = piVar14;
          }
          local_70 = local_70 + 1;
        }
        local_c._0_1_ = 3;
        if (local_54 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54);
        }
        local_54 = (undefined4 *)0x0;
        iVar16 = local_80;
      }
      local_a0 = (int *)((int)local_70 - (int)local_74 >> 2);
      if (((local_a0 != (int *)0x0) &&
          ((*(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) & 0xfffffffcU) != 0)) &&
         (iVar16 = 0, 0 < (int)local_a0)) {
        do {
          piVar14 = local_74[iVar16];
          iVar19 = 0;
          if (0 < (int)(*(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) & 0xfffffffcU)) {
            do {
              cVar7 = FUN_005456e0(param_1,piVar14,
                                   *(undefined4 *)(*(int *)(param_1 + 0x15ac) + iVar19 * 4));
              if (cVar7 != '\0') break;
              iVar19 = iVar19 + 1;
            } while (iVar19 < *(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) >> 2);
          }
          iVar16 = iVar16 + 1;
        } while (iVar16 < (int)local_a0);
      }
      if ((*(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) & 0xfffffffcU) == 0) {
        FUN_009beeb0(&local_74);
      }
      else {
        FUN_00413a70(*(int *)(param_1 + 0x15b0),local_74,local_70,local_3c);
      }
      local_3c = (int)local_60 - (int)local_64 >> 2;
      if (0 < local_3c) {
        local_9c = (int *)0x0;
        do {
          local_54 = (undefined4 *)0x0;
          local_50 = (int *)0x0;
          local_4c = 0;
          local_48 = 0;
          local_44 = 0;
          local_24 = CRailroadPathFind::vftable;
          local_20 = 0;
          local_1c = DAT_012586db;
          local_40 = *(int *)(*(int *)(local_78 + 0xacc) + (int)local_64[(int)local_9c] * 4);
          local_a8 = (int *)0x7fffffff;
          local_a4 = (int *)0x0;
          if (0 < (int)(*(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) & 0xfffffffcU)) {
            do {
              iVar16 = *(int *)(*(int *)(param_1 + 0x15ac) + (int)local_a4 * 4);
              iVar19 = *(int *)(iVar16 + 8);
              local_a0 = (int *)0x0;
              if (0 < (int)(*(int *)(iVar16 + 0xc) - iVar19 & 0xfffffffcU)) {
                do {
                  local_38 = 0;
                  local_34 = 0;
                  local_30 = (int *)0x0;
                  local_2c = 0;
                  local_28 = 0;
                  local_c = CONCAT31(local_c._1_3_,6);
                  cVar7 = FUN_005b8cc0(&local_24,param_1 + 0x1c,
                                       *(undefined4 *)
                                        (*(int *)(local_78 + 0xacc) +
                                        *(int *)(iVar19 + (int)local_a0 * 4) * 4),&local_38,0);
                  piVar14 = local_a8;
                  uVar2 = local_44;
                  if ((cVar7 != '\0') && ((int)local_30 < (int)local_a8)) {
                    if (local_54 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00aae91b(local_54);
                    }
                    local_4c = 0;
                    local_54 = (undefined4 *)0x0;
                    local_50 = (int *)0x0;
                    local_48 = 0;
                    iVar19 = local_38;
                    while (piVar14 = local_30, uVar2 = local_28, iVar19 != 0) {
                      iVar4 = *(int *)(iVar19 + 8);
                      FUN_0057aab0(iVar19);
                      iVar19 = iVar4;
                    }
                  }
                  local_44 = uVar2;
                  local_a8 = piVar14;
                  local_c._0_1_ = 5;
                  if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_38);
                  }
                  iVar19 = *(int *)(iVar16 + 8);
                  local_a0 = (int *)((int)local_a0 + 1);
                } while ((int)local_a0 < *(int *)(iVar16 + 0xc) - iVar19 >> 2);
              }
              local_c._0_1_ = 5;
              local_a4 = (int *)((int)local_a4 + 1);
            } while ((int)local_a4 < *(int *)(param_1 + 0x15b0) - *(int *)(param_1 + 0x15ac) >> 2);
            if (0 < local_4c) {
              local_a8 = (int *)FUN_00aae9af(0x18);
              if (local_a8 == (int *)0x0) {
                local_a8 = (int *)0x0;
              }
              else {
                local_a8[1] = 0x18d;
                *local_a8 = (int)CRailroadChunk::vftable;
                local_a8[2] = 0;
                local_a8[3] = 0;
                local_a8[4] = 0;
              }
              piVar14 = local_a8;
              local_a4 = local_64[(int)local_9c];
              ppiVar17 = (int **)local_a8[3];
              local_a0 = local_a8;
              puVar18 = (uint *)(local_a8 + 2);
              if ((&local_a4 < ppiVar17) && (ppiVar12 = (int **)*puVar18, ppiVar12 <= &local_a4)) {
                if (ppiVar17 == (int **)local_a8[4]) {
                  uVar11 = (int)ppiVar17 - (int)ppiVar12 >> 2;
                  if (0x3ffffffe < uVar11) goto LAB_00545201;
                  uVar11 = uVar11 + 1;
                  uVar15 = local_a8[4] - (int)ppiVar12 >> 2;
                  if (uVar15 < uVar11) {
                    if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uVar15 + (uVar15 >> 1);
                    }
                    if (uVar15 < uVar11) {
                      uVar15 = uVar11;
                    }
                    FUN_004bf300(uVar15);
                  }
                }
                if ((undefined4 *)piVar14[3] != (undefined4 *)0x0) {
                  *(undefined4 *)piVar14[3] =
                       *(undefined4 *)(*puVar18 + ((int)&local_a4 - (int)ppiVar12 >> 2) * 4);
                }
              }
              else {
                if (ppiVar17 == (int **)local_a8[4]) {
                  uVar11 = (int)((int)ppiVar17 - *puVar18) >> 2;
                  if (0x3ffffffe < uVar11) {
LAB_00545201:
                    /* WARNING: Subroutine does not return */
                    FUN_00aad3ad("vector<T> too long");
                  }
                  uVar11 = uVar11 + 1;
                  uVar15 = (int)(local_a8[4] - *puVar18) >> 2;
                  if (uVar15 < uVar11) {
                    if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uVar15 + (uVar15 >> 1);
                    }
                    if (uVar15 < uVar11) {
                      uVar15 = uVar11;
                    }
                    FUN_004bf300(uVar15);
                  }
                }
                if ((undefined4 *)piVar14[3] != (undefined4 *)0x0) {
                  *(undefined4 *)piVar14[3] = local_a4;
                }
              }
              piVar14[3] = piVar14[3] + 4;
              FUN_0080e920();
              ppiVar17 = *(int ***)(param_1 + 0x15b0);
              puVar18 = (uint *)(param_1 + 0x15ac);
              if ((&local_a0 < ppiVar17) && (ppiVar12 = (int **)*puVar18, ppiVar12 <= &local_a0)) {
                if (ppiVar17 == *(int ***)(param_1 + 0x15b4)) {
                  uVar11 = (int)ppiVar17 - (int)ppiVar12 >> 2;
                  if (0x3ffffffe < uVar11) goto LAB_00545201;
                  uVar11 = uVar11 + 1;
                  uVar15 = (int)*(int ***)(param_1 + 0x15b4) - (int)ppiVar12 >> 2;
                  if (uVar15 < uVar11) {
                    if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uVar15 + (uVar15 >> 1);
                    }
                    if (uVar15 < uVar11) {
                      uVar15 = uVar11;
                    }
                    FUN_004bf300(uVar15);
                  }
                }
                if (*(undefined4 **)(param_1 + 0x15b0) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x15b0) =
                       *(undefined4 *)(*puVar18 + ((int)&local_a0 - (int)ppiVar12 >> 2) * 4);
                }
              }
              else {
                if (ppiVar17 == *(int ***)(param_1 + 0x15b4)) {
                  uVar11 = (int)((int)ppiVar17 - *puVar18) >> 2;
                  if (0x3ffffffe < uVar11) goto LAB_00545201;
                  uVar11 = uVar11 + 1;
                  uVar15 = (int)((int)*(int ***)(param_1 + 0x15b4) - *puVar18) >> 2;
                  if (uVar15 < uVar11) {
                    if (0x3fffffff - (uVar15 >> 1) < uVar15) {
                      uVar15 = 0;
                    }
                    else {
                      uVar15 = uVar15 + (uVar15 >> 1);
                    }
                    if (uVar15 < uVar11) {
                      uVar15 = uVar11;
                    }
                    FUN_004bf300(uVar15);
                  }
                }
                if (*(undefined4 **)(param_1 + 0x15b0) != (undefined4 *)0x0) {
                  **(undefined4 **)(param_1 + 0x15b0) = local_a8;
                }
              }
              *(int *)(param_1 + 0x15b0) = *(int *)(param_1 + 0x15b0) + 4;
            }
          }
          local_c._0_1_ = 3;
          if (local_54 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_54);
          }
          local_9c = (int *)((int)local_9c + 1);
        } while ((int)local_9c < local_3c);
      }
      if (local_64 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64);
      }
      if (local_98 != (int **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_98);
      }
      local_98 = (int **)0x0;
      local_94 = (int **)0x0;
      local_90 = (int **)0x0;
      if (local_88 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_88);
      }
      if (local_74 == (int **)0x0) {
        ExceptionList = local_14;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_74);
    }
  }
  ExceptionList = ppvVar5;
  if (local_88 == (int *)0x0) {
    ExceptionList = local_14;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_88);
}

