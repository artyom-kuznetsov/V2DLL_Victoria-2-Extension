// FUN_00851bd0 @ 00851bd0  (requested 00851BD0, first bytes: 55 8B EC 6A FF 68 9B FB)


void FUN_00851bd0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  void **ppvVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  int *piVar16;
  undefined8 uVar17;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int *local_68;
  int *local_64;
  int local_60;
  undefined1 local_5c;
  int local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  undefined4 *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  undefined4 *local_24;
  int *local_20;
  undefined4 *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fb9b;
  local_10 = ExceptionList;
  local_58 = param_1[0xd];
  ExceptionList = &local_10;
  if (1 < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0xa10)) {
    local_68 = (int *)0x0;
    local_64 = (int *)0x0;
    local_60 = 0;
    local_5c = 0;
    local_8 = 0;
    piVar12 = (int *)param_1[0x85];
    ExceptionList = &local_10;
    ppvVar5 = &local_10;
    if (piVar12 != (int *)0x0) {
      do {
        piVar16 = (int *)*piVar12;
        piVar12 = (int *)piVar12[2];
        local_54 = piVar12;
        local_30 = piVar16;
        if (piVar16[0x3a] == 0) {
          local_28 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar16[0x37] * 4) + 0xe8);
          local_15 = FUN_0048f070(local_28,1);
          puVar7 = (undefined4 *)(**(code **)(*piVar16 + 0x1a4))();
          local_3c = (int *)*puVar7;
          piVar16 = local_68;
joined_r0x00851c88:
          local_68 = piVar16;
          if (local_3c != (int *)0x0) {
            piVar16 = (int *)local_3c[2];
            local_20 = (int *)*local_3c;
            piVar12 = local_54;
            local_3c = piVar16;
            piVar16 = local_68;
            if (((local_20[0x37] != 0) &&
                (local_34 = *(int **)(local_20[0x37] + 0xe8), local_34 != (int *)0x0)) &&
               (local_34 != local_28)) {
              for (puVar7 = (undefined4 *)local_34[5]; piVar13 = local_68,
                  puVar7 != (undefined4 *)0x0; puVar7 = (undefined4 *)puVar7[2]) {
                if (*(int **)*puVar7 == local_28) goto joined_r0x00851c88;
              }
              for (; piVar13 != (int *)0x0; piVar13 = (int *)piVar13[2]) {
                if ((int *)*piVar13 == local_20) goto joined_r0x00851c88;
              }
              local_38 = (undefined4 *)local_20[0x26];
              if (local_38 != (undefined4 *)0x0) {
                puVar14 = (undefined4 *)param_1[0x85];
                puVar7 = local_38;
                local_1c = local_38;
                while (puVar14 != (undefined4 *)0x0) {
                  if ((int)puVar7 < 1) goto LAB_00852050;
                  local_44 = (int *)*puVar14;
                  puVar14 = (undefined4 *)puVar14[2];
                  local_24 = puVar14;
                  if ((local_44 != local_30) && (local_44[0x3a] == 0)) {
                    piVar12 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_44[0x37] * 4
                                                ) + 0xe8);
                    local_40 = piVar12;
                    puVar8 = (undefined4 *)(**(code **)(*local_44 + 0x1a4))();
                    piVar16 = (int *)*puVar8;
                    piVar13 = local_68;
joined_r0x00851d88:
                    local_68 = piVar13;
                    local_2c = piVar16;
                    if (piVar16 != (int *)0x0) {
                      local_2c = (int *)piVar16[2];
                      iVar11 = *piVar16;
                      puVar14 = local_24;
                      piVar16 = local_2c;
                      puVar7 = local_1c;
                      piVar13 = local_68;
                      if (((*(int *)(iVar11 + 0xdc) != 0) &&
                          (piVar2 = *(int **)(*(int *)(iVar11 + 0xdc) + 0xe8), piVar2 != (int *)0x0)
                          ) && (piVar2 != piVar12)) {
                        puVar3 = (undefined4 *)piVar2[5];
                        for (puVar8 = puVar3; puVar8 != (undefined4 *)0x0;
                            puVar8 = (undefined4 *)puVar8[2]) {
                          if (*(int **)*puVar8 == piVar12) goto joined_r0x00851d88;
                        }
                        if (piVar2 == local_28) {
LAB_00851e05:
                          piVar2 = local_68;
                          if ((local_34 == piVar12) ||
                             (cVar6 = FUN_004e0ac0(), piVar2 = local_68, puVar14 = local_24,
                             piVar16 = local_2c, puVar7 = local_1c, piVar13 = local_68,
                             cVar6 != '\0')) {
                            for (; puVar7 = local_1c, puVar14 = local_24, piVar16 = local_2c,
                                piVar13 = local_68, piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2])
                            {
                              if (*piVar2 == iVar11) goto joined_r0x00851d88;
                            }
                            puVar8 = *(undefined4 **)(iVar11 + 0x98);
                            if ((puVar8 != (undefined4 *)0x0) &&
                               (((((int)puVar8 <= (int)local_1c ||
                                  (bVar15 = (int)puVar8 <= (int)local_1c, puVar8 = local_1c, bVar15)
                                  ) || ((*(int *)(iVar11 + 0x74) == 0 &&
                                        (*(char *)(iVar11 + 0x104) == '\0')))) &&
                                (((int)local_38 <= (int)puVar8 ||
                                 ((local_20[0x1d] == 0 && ((char)local_20[0x41] == '\0')))))))) {
                              FUN_0082e190();
                              FUN_0082e190();
                              piVar2 = local_64;
                              local_1c = (undefined4 *)((int)local_1c - (int)puVar8);
                              local_64 = (int *)FUN_00aae9af(0x10);
                              if (local_64 == (int *)0x0) {
                                local_64 = (int *)0x0;
                              }
                              else {
                                *local_64 = iVar11;
                                local_64[1] = (int)piVar2;
                                local_64[2] = 0;
                                *(undefined1 *)(local_64 + 3) = 0;
                              }
                              iVar11 = local_60 + 1;
                              bVar15 = local_60 != 0;
                              puVar14 = local_24;
                              piVar12 = local_40;
                              piVar16 = local_2c;
                              puVar7 = local_1c;
                              piVar13 = local_64;
                              local_60 = iVar11;
                              if (bVar15) {
                                piVar2[2] = (int)local_64;
                                piVar13 = local_68;
                              }
                            }
                          }
                        }
                        else {
                          for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[2]) {
                            if (*(int **)*puVar3 == local_28) goto LAB_00851e05;
                          }
                        }
                      }
                      goto joined_r0x00851d88;
                    }
                  }
                }
                if ((0 < (int)puVar7) && (local_15 == '\0')) {
                  local_24 = (undefined4 *)param_1[0x85];
                  while ((local_24 != (undefined4 *)0x0 && (0 < (int)puVar7))) {
                    piVar12 = (int *)*local_24;
                    local_24 = (undefined4 *)local_24[2];
                    puVar7 = local_1c;
                    if (piVar12 != local_30) {
                      iVar11 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar12[0x37] * 4);
                      if (*(int **)(iVar11 + 0xe8) == local_34) {
LAB_00851f72:
                        puVar7 = (undefined4 *)(**(code **)(*piVar12 + 0x1a4))();
                        iVar10 = 0;
                        for (piVar12 = (int *)*puVar7; piVar12 != (int *)0x0;
                            piVar12 = (int *)piVar12[2]) {
                          iVar10 = iVar10 + *(int *)(*piVar12 + 0x98);
                        }
                        local_48 = *(undefined4 *)(iVar11 + 0x128);
                        iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                          *(int *)(iVar11 + 300) * 4) + 0xbcc) +
                                        0x2c);
                        iVar11 = *(int *)(*(int *)(iVar11 + 0x9c) + 8) + 1000;
                        uVar17 = __allmul(iVar11,iVar11 >> 0x1f,2000,0);
                        iVar11 = __alldiv(uVar17,1000,0);
                        iVar11 = __alldiv((longlong)iVar11 * (longlong)(iVar9 + 1000),1000,0);
                        puVar7 = (undefined4 *)(iVar11 / 3000 - iVar10);
                        puVar14 = local_1c;
                        if ((int)puVar7 <= (int)local_1c) {
                          puVar14 = puVar7;
                        }
                        puVar7 = local_1c;
                        if (0 < (int)puVar14) {
                          FUN_0082e190();
                          puVar7 = (undefined4 *)((int)local_1c - (int)puVar14);
                          local_1c = puVar7;
                        }
                      }
                      else {
                        for (puVar14 = (undefined4 *)(*(int **)(iVar11 + 0xe8))[5];
                            puVar14 != (undefined4 *)0x0; puVar14 = (undefined4 *)puVar14[2]) {
                          if (*(int **)*puVar14 == local_34) goto LAB_00851f72;
                        }
                      }
                    }
                  }
                }
LAB_00852050:
                piVar13 = local_64;
                piVar12 = local_54;
                piVar16 = local_68;
                if (puVar7 != local_38) {
                  local_64 = (int *)FUN_00aae9af(0x10);
                  if (local_64 == (int *)0x0) {
                    local_64 = (int *)0x0;
                  }
                  else {
                    *local_64 = (int)local_20;
                    local_64[1] = (int)piVar13;
                    local_64[2] = 0;
                    *(undefined1 *)(local_64 + 3) = 0;
                  }
                  iVar11 = local_60 + 1;
                  bVar15 = local_60 != 0;
                  piVar12 = local_54;
                  piVar16 = local_64;
                  local_60 = iVar11;
                  if (bVar15) {
                    piVar13[2] = (int)local_64;
                    piVar16 = local_68;
                  }
                }
              }
            }
            goto joined_r0x00851c88;
          }
        }
      } while (piVar12 != (int *)0x0);
      ppvVar5 = ExceptionList;
      if (0 < local_60) {
        FUN_009a63f0();
        ExceptionList = local_10;
        return;
      }
    }
    ExceptionList = ppvVar5;
    local_8 = 0xffffffff;
    FUN_009a63f0();
  }
  if (0 < param_1[0x79]) {
    local_38 = (undefined4 *)param_1[0x77];
joined_r0x008520f5:
    do {
      if (local_38 == (undefined4 *)0x0) break;
      local_24 = (undefined4 *)*local_38;
      local_38 = (undefined4 *)local_38[2];
      if (*(char *)(*(int *)(local_24[0x37] + 0x5c) + 0x2a) != '\0') {
        piVar12 = (int *)local_24[0x24];
        local_44 = *(int **)(local_24[0x37] + 0xe8);
        local_78 = 0;
        local_70 = 0;
        while (piVar12 != (int *)0x0) {
          iVar11 = *piVar12;
          piVar12 = (int *)piVar12[2];
          piVar16 = (int *)((int)&local_78 + *(int *)(*(int *)(iVar11 + 0x38) + 0x34) * 4);
          *piVar16 = *piVar16 + 1;
        }
        local_40 = (int *)0x49742400;
        local_30 = (int *)0x0;
        local_34 = (int *)0x0;
        local_3c = (int *)param_1[0x85];
        if ((int *)param_1[0x85] != (int *)0x0) {
          do {
            local_28 = (int *)*local_3c;
            local_3c = (int *)local_3c[2];
            if (local_28[0x3a] == 0) {
              puVar7 = (undefined4 *)(**(code **)(*local_28 + 0x1a4))();
              piVar12 = (int *)*puVar7;
              iVar11 = 0;
              while (piVar12 != (int *)0x0) {
                piVar16 = (int *)*piVar12;
                piVar12 = (int *)piVar12[2];
                cVar6 = (**(code **)(*piVar16 + 0x38))();
                if (cVar6 != '\0') {
                  iVar11 = iVar11 + piVar16[0x26];
                }
              }
              iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_28[0x37] * 4);
              local_58 = *(int *)(iVar10 + 0x128);
              iVar9 = *(int *)(*(int *)(iVar10 + 0x9c) + 8) + 1000;
              local_54 = (int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                           *(int *)(iVar10 + 300) * 4) + 0xbcc) +
                                         0x2c) + 1000);
              uVar17 = __allmul(iVar9,iVar9 >> 0x1f,2000,0);
              iVar9 = __alldiv(uVar17,1000,0);
              iVar9 = __alldiv((longlong)iVar9 * (longlong)(int)local_54,1000,0);
              if ((iVar11 * 3 < iVar9 / 1000) &&
                 (piVar12 = (int *)((iVar9 / 1000 + iVar11 * -3) / 3), 0 < (int)piVar12)) {
                if (local_44 == (int *)0x0) {
LAB_008522b7:
                  FUN_004a0e80(DAT_0125870c,&local_1c);
                  piVar16 = (int *)(((float)(int)local_1c / 1000.0) * 10.0 + 10.0);
                  piVar13 = local_28;
                }
                else {
                  if (local_44 != *(int **)(iVar10 + 0xe8)) {
                    for (puVar7 = (undefined4 *)local_44[5]; puVar7 != (undefined4 *)0x0;
                        puVar7 = (undefined4 *)puVar7[2]) {
                      if (*(int **)*puVar7 == *(int **)(iVar10 + 0xe8)) goto LAB_00852381;
                    }
                    goto LAB_008522b7;
                  }
LAB_00852381:
                  FUN_004a0e80(DAT_0125870c,&local_2c);
                  piVar13 = local_28;
                  local_20 = (int *)(((float)(int)local_2c / 1000.0) * 0.0001);
                  iVar11 = 0;
                  local_88 = 0;
                  local_80 = 0;
                  puVar7 = (undefined4 *)(**(code **)(*local_28 + 0x1a4))();
                  piVar16 = (int *)*puVar7;
                  uVar4 = local_80;
                  while (local_80 = uVar4, piVar16 != (int *)0x0) {
                    piVar2 = *(int **)(*piVar16 + 0x90);
                    piVar16 = (int *)piVar16[2];
                    while (uVar4 = local_80, piVar2 != (int *)0x0) {
                      iVar10 = *piVar2;
                      piVar2 = (int *)piVar2[2];
                      piVar1 = (int *)((int)&local_88 + *(int *)(*(int *)(iVar10 + 0x38) + 0x34) * 4
                                      );
                      *piVar1 = *piVar1 + 1;
                      iVar11 = iVar11 + 1;
                    }
                  }
                  piVar16 = (int *)((float)iVar11 * 0.05 + (float)local_20);
                  if (0 < (int)local_78) {
                    piVar16 = (int *)((float)(int)local_88 + (float)piVar16);
                  }
                  local_78._4_4_ = (int)((ulonglong)local_78 >> 0x20);
                  if (0 < local_78._4_4_) {
                    local_88._4_4_ = (int)((ulonglong)local_88 >> 0x20);
                    piVar16 = (int *)((float)local_88._4_4_ + (float)piVar16);
                  }
                  if (0 < (int)local_70) {
                    local_80._0_4_ = (int)uVar4;
                    piVar16 = (int *)((float)(int)local_80 + (float)piVar16);
                  }
                  local_70._4_4_ = (int)((ulonglong)local_70 >> 0x20);
                  bVar15 = 0 < local_70._4_4_;
                  if (bVar15) {
                    local_80._4_4_ = (int)(uVar4 >> 0x20);
                    piVar16 = (int *)((float)local_80._4_4_ + (float)piVar16);
                  }
                }
                if ((float)piVar16 < (float)local_40) {
                  local_34 = piVar13;
                  local_40 = piVar16;
                  local_30 = piVar12;
                }
              }
            }
          } while (local_3c != (int *)0x0);
          if (local_34 != (int *)0x0) {
            local_68 = (int *)0x0;
            local_64 = (int *)0x0;
            local_60 = 0;
            local_5c = 0;
            local_8 = 1;
            puVar7 = (undefined4 *)FUN_00aae9af(0x10);
            if (puVar7 == (undefined4 *)0x0) {
              puVar7 = (undefined4 *)0x0;
            }
            else {
              *puVar7 = local_24;
              puVar7[1] = 0;
              puVar7[2] = 0;
              *(undefined1 *)(puVar7 + 3) = 0;
            }
            local_60 = 1;
            local_68 = puVar7;
            local_64 = puVar7;
            FUN_0082dc50();
            local_8 = 0xffffffff;
            if (puVar7 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(puVar7);
            }
            local_68 = (int *)0x0;
            local_64 = (int *)0x0;
            local_60 = 0;
            goto joined_r0x008520f5;
          }
        }
        *(undefined1 *)((int)param_1 + 0x1bd) = 1;
      }
    } while( true );
  }
  local_50 = (int *)0x0;
  local_4c = (int *)0x0;
  local_48 = 0;
  local_44 = (int *)((uint)local_44 & 0xffffff00);
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  piVar12 = (int *)param_1[0x85];
  if (piVar12 != (int *)0x0) {
    do {
      piVar16 = local_4c;
      iVar11 = *piVar12;
      piVar12 = (int *)piVar12[2];
      piVar13 = local_68;
      if (((0 < *(int *)(iVar11 + 0xb4)) &&
          (iVar11 = *(int *)(**(int **)(iVar11 + 0xac) + 0xdc), iVar11 != 0)) &&
         (iVar11 = *(int *)(iVar11 + 0xe8), piVar2 = local_50, iVar11 != 0)) {
        for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
          if (*piVar2 == iVar11) goto LAB_00852649;
        }
        local_4c = (int *)FUN_00aae9af(0x10);
        if (local_4c == (int *)0x0) {
          local_4c = (int *)0x0;
        }
        else {
          *local_4c = iVar11;
          local_4c[1] = (int)piVar16;
          local_4c[2] = 0;
          *(undefined1 *)(local_4c + 3) = 0;
        }
        piVar13 = local_4c;
        if (local_48 != 0) {
          piVar16[2] = (int)local_4c;
          piVar13 = local_50;
        }
        local_50 = piVar13;
        local_48 = local_48 + 1;
        cVar6 = FUN_0048f070(iVar11,1);
        piVar16 = local_64;
        piVar13 = local_68;
        if (cVar6 != '\0') {
          local_64 = (int *)FUN_00aae9af(0x10);
          if (local_64 == (int *)0x0) {
            local_64 = (int *)0x0;
          }
          else {
            *local_64 = iVar11;
            local_64[1] = (int)piVar16;
            local_64[2] = 0;
            *(undefined1 *)(local_64 + 3) = 0;
          }
          iVar11 = local_60 + 1;
          bVar15 = local_60 != 0;
          piVar13 = local_64;
          local_60 = iVar11;
          if (bVar15) {
            piVar16[2] = (int)local_64;
            piVar13 = local_68;
          }
        }
      }
LAB_00852649:
      local_68 = piVar13;
    } while (piVar12 != (int *)0x0);
    if (0 < local_60) {
      if (local_68 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68);
      }
      if (local_50 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
  }
  local_88 = 0;
  local_80 = local_80 & 0xffffff0000000000;
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar12 = (int *)param_1[0x85];
  while( true ) {
    do {
      do {
        do {
          if ((piVar12 == (int *)0x0) || (param_1[0x87] < 2)) goto LAB_008529a4;
          local_20 = (int *)*piVar12;
          piVar12 = (int *)piVar12[2];
        } while ((local_20[0x2d] < 1) || (iVar11 = *(int *)local_20[0x2b], iVar11 == 0));
        if (*(int *)(iVar11 + 0xa0) == 0) {
          if (*(int *)(iVar11 + 0xec) < 1) {
            iVar10 = 0;
          }
          else {
            iVar10 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar11 + 0xe8) * 4);
          }
        }
        else {
          iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar11 + 0xa0) * 4);
        }
        if (iVar10 == 0) {
          iVar10 = *(int *)(iVar11 + 0xdc);
        }
      } while (*(int *)(iVar10 + 0x58) != local_20[0x37]);
      local_58 = *(int *)(iVar10 + 0x128);
      iVar11 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 300) * 4) +
                                0xbcc) + 0x2c);
      iVar10 = *(int *)(*(int *)(iVar10 + 0x9c) + 8) + 1000;
      uVar17 = __allmul(iVar10,iVar10 >> 0x1f,2000,0);
      iVar10 = __alldiv(uVar17,1000,0);
      iVar10 = __alldiv((longlong)iVar10 * (longlong)(iVar11 + 1000),1000,0);
      puVar7 = (undefined4 *)(**(code **)(*local_20 + 0x1a4))();
      iVar11 = 0;
      for (piVar16 = (int *)*puVar7; piVar16 != (int *)0x0; piVar16 = (int *)piVar16[2]) {
        iVar11 = iVar11 + *(int *)(*piVar16 + 0x98);
      }
      iVar11 = iVar11 * 3 - iVar10 / 1000;
    } while (iVar11 < 1);
    iVar11 = iVar11 / 3;
    if (iVar11 < 1) break;
    if (0 < iVar11) {
LAB_00852832:
      piVar12 = (int *)param_1[0x85];
      while ((piVar12 != (int *)0x0 && (0 < iVar11))) {
        piVar16 = (int *)*piVar12;
        local_40 = (int *)piVar12[2];
        piVar12 = local_40;
        if (piVar16 != local_20) {
          iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar16[0x37] * 4);
          local_58 = *(int *)(iVar10 + 0x128);
          iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar10 + 300) * 4
                                            ) + 0xbcc) + 0x2c);
          iVar10 = *(int *)(*(int *)(iVar10 + 0x9c) + 8) + 1000;
          uVar17 = __allmul(iVar10,iVar10 >> 0x1f,2000,0);
          iVar10 = __alldiv(uVar17,1000,0);
          iVar9 = __alldiv((longlong)iVar10 * (longlong)(iVar9 + 1000),1000,0);
          puVar7 = (undefined4 *)(**(code **)(*piVar16 + 0x1a4))();
          iVar10 = 0;
          for (piVar12 = (int *)*puVar7; piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]) {
            iVar10 = iVar10 + *(int *)(*piVar12 + 0x98);
          }
          iVar10 = (iVar9 / 1000 + iVar10 * -3) / 3;
          piVar12 = local_40;
          if (0 < iVar10) {
            if (iVar11 < iVar10) {
              iVar10 = iVar11;
            }
            (**(code **)(*local_20 + 0x1a4))(iVar10);
            iVar10 = FUN_0082dc50();
            iVar11 = iVar11 - iVar10;
            piVar12 = local_40;
          }
        }
      }
      iVar10 = (**(code **)(*local_20 + 0x1a4))();
      piVar12 = *(int **)(iVar10 + 4);
      for (; (local_3c = piVar12, piVar12 != (int *)0x0 && (0 < iVar11));
          iVar11 = iVar11 - *(int *)(iVar10 + 0x98)) {
        local_3c = (int *)piVar12[1];
        iVar10 = *piVar12;
        if (iVar11 < *(int *)(iVar10 + 0x98)) {
          FUN_00828f90(iVar10,*(int *)(iVar10 + 0x98) - iVar11);
        }
        (**(code **)(*param_1 + 0x1a8))(iVar10);
        piVar12 = local_3c;
      }
LAB_008529a4:
      if (local_68 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68);
      }
      if (local_50 == (int *)0x0) {
        ExceptionList = local_10;
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
  }
  iVar11 = 1;
  goto LAB_00852832;
}

