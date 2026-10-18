// FUN_008500a0 @ 008500a0  (requested 008500A0, first bytes: 55 8B EC 6A FF 68 D3 2B)


void FUN_008500a0(int param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  undefined1 local_a4 [4];
  undefined4 local_a0;
  undefined1 local_9c [4];
  int local_98;
  float local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  float local_84;
  undefined4 local_80;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int *local_68;
  int *local_64;
  int local_60;
  undefined1 local_5c;
  float local_58;
  undefined4 local_54;
  int local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int local_40;
  undefined1 local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  undefined1 local_2c;
  float local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b52bd3;
  local_68 = (int *)0x0;
  local_64 = (int *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_8 = 0;
  local_a0 = *(undefined4 *)(param_1 + 0x34);
  piVar11 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x7b4);
  local_10 = ExceptionList;
  ExceptionList = &local_10;
joined_r0x008500f8:
  do {
    do {
      if (piVar11 == (int *)0x0) {
        if (local_68 != (int *)0x0) {
          local_4c = piVar11;
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_68);
        }
        ExceptionList = local_10;
        return;
      }
      local_4c = (int *)piVar11[2];
      local_1c = (int *)*piVar11;
      piVar11 = local_4c;
    } while ((((local_1c[0x1d] == 0) ||
              (cVar5 = (**(code **)(*local_1c + 0x38))(), piVar11 = local_4c, cVar5 == '\0')) ||
             (local_1c[0x37] == 0)) ||
            (iVar6 = (**(code **)(*local_1c + 0x2c))(), piVar12 = local_1c, piVar11 = local_4c,
            piVar9 = local_68, *(int *)(iVar6 + 0x1b4) != 0));
    for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[2]) {
      if ((int *)*piVar9 == local_1c) goto joined_r0x008500f8;
    }
    local_38 = (int *)0x0;
    local_34 = (int *)0x0;
    local_30 = 0;
    local_2c = 0;
    iVar6 = *(int *)(*(int *)(local_1c[0x1d] + 0x10) + 0x20);
    while (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 8);
      FUN_0057aab0(iVar6);
      iVar6 = iVar7;
    }
    local_8._1_3_ = (undefined3)(local_8 >> 8);
    local_8._0_1_ = 1;
    local_48 = (int *)0x0;
    local_44 = (int *)0x0;
    local_40 = 0;
    local_3c = 0;
    iVar6 = *(int *)(*(int *)(piVar12[0x1d] + 0x14) + 0x20);
    while (iVar6 != 0) {
      iVar7 = *(int *)(iVar6 + 8);
      FUN_0057aab0(iVar6);
      iVar6 = iVar7;
    }
    local_8 = CONCAT31(local_8._1_3_,2);
    iVar6 = *(int *)(*(int *)(piVar12[0x1d] + 0x10) + 0x30);
    iVar7 = FUN_005946a0();
    local_78 = (float)(iVar7 + iVar6);
    iVar6 = *(int *)(*(int *)(piVar12[0x1d] + 0x14) + 0x30);
    iVar7 = FUN_005946a0();
    local_54 = *(undefined4 *)(param_1 + 0x34);
    local_58 = (float)(iVar7 + iVar6);
    iVar6 = *(int *)(piVar12[0x1d] + 0x14);
    iVar7 = *(int *)(iVar6 + 0x38);
    iVar6 = *(int *)(iVar6 + 0x34);
    if (iVar6 != iVar7) {
      do {
        if (*(int *)(iVar6 + 4) == *(int *)(param_1 + 0x38)) break;
        iVar6 = iVar6 + 8;
      } while (iVar6 != iVar7);
      if (iVar6 != iVar7) {
        FUN_004e94a0(*(int *)(piVar12[0x1d] + 0x14) + 0x20);
        FUN_004e94a0(*(int *)(piVar12[0x1d] + 0x10) + 0x20);
        iVar6 = *(int *)(*(int *)(piVar12[0x1d] + 0x14) + 0x30);
        iVar7 = FUN_005946a0();
        local_78 = (float)(iVar7 + iVar6);
        iVar6 = *(int *)(*(int *)(piVar12[0x1d] + 0x10) + 0x30);
        iVar7 = FUN_005946a0();
        local_58 = (float)(iVar7 + iVar6);
      }
    }
    iVar6 = piVar12[0x37];
    local_18 = (int *)0x0;
    if (0 < (*(int *)(*(int *)(iVar6 + 0x5c) + 0xcc) - *(int *)(*(int *)(iVar6 + 0x5c) + 200)) /
            0x24) {
      local_20 = 0;
      do {
        iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 200);
        if ((*(int *)(local_20 + iVar6) != 4) &&
           (iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 4 + local_20) * 4),
           *(char *)(*(int *)(iVar6 + 0x5c) + 0x2a) != '\0')) {
          piVar11 = *(int **)(iVar6 + 0xec);
          piVar9 = local_48;
          piVar8 = local_38;
joined_r0x00850321:
          piVar4 = local_34;
          local_38 = piVar8;
          piVar3 = local_44;
          local_48 = piVar9;
          local_44 = piVar3;
          local_34 = piVar4;
          local_24 = piVar11;
          if (piVar11 != (int *)0x0) {
            local_24 = (int *)piVar11[2];
            iVar6 = *piVar11;
            if (*(int *)(iVar6 + 0xa0) == 0) {
              if (*(int *)(iVar6 + 0xec) < 1) {
                iVar7 = 0;
              }
              else {
                iVar7 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar6 + 0xe8) * 4);
              }
            }
            else {
              iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 0xa0) * 4);
            }
            piVar11 = local_24;
            piVar12 = local_1c;
            piVar9 = local_48;
            piVar8 = local_38;
            if (iVar7 == local_1c[0x37]) {
              local_54 = *(undefined4 *)(param_1 + 0x34);
              iVar7 = *(int *)(iVar6 + 0xc4);
              if (*(int *)(param_1 + 0x38) != iVar7) {
                local_54 = *(undefined4 *)(param_1 + 0x34);
                if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                       *(int *)(param_1 + 0x38) * 4) + 0xbe8) +
                                     iVar7 * 4) + 0x20) == 0) {
                  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
                  local_54 = *(undefined4 *)(param_1 + 0x34);
                  if ((iVar7 != *(int *)(iVar1 + 0x20)) &&
                     (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + iVar7 * 4) + 0x34) != 0 ||
                       (((*(char *)(iVar6 + 0xc0) == 'R' && (*(char *)(iVar6 + 0xc1) == 'E')) &&
                        (*(char *)(iVar6 + 0xc2) == 'B')))) ||
                      (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
                       (*(char *)(iVar1 + 0x1e) == 'B')))))) {
                    local_44 = (int *)FUN_00aae9af(0x10);
                    if (local_44 == (int *)0x0) {
                      local_44 = (int *)0x0;
                    }
                    else {
                      *local_44 = iVar6;
                      local_44[1] = (int)piVar3;
                      local_44[2] = 0;
                      *(undefined1 *)(local_44 + 3) = 0;
                    }
                    iVar6 = local_40 + 1;
                    bVar13 = local_40 != 0;
                    piVar11 = local_24;
                    piVar12 = local_1c;
                    piVar9 = local_44;
                    local_40 = iVar6;
                    piVar8 = local_38;
                    if (bVar13) {
                      piVar3[2] = (int)local_44;
                      piVar9 = local_48;
                    }
                  }
                  goto joined_r0x00850321;
                }
              }
              local_34 = (int *)FUN_00aae9af(0x10);
              if (local_34 == (int *)0x0) {
                local_34 = (int *)0x0;
              }
              else {
                *local_34 = iVar6;
                local_34[1] = (int)piVar4;
                local_34[2] = 0;
                *(undefined1 *)(local_34 + 3) = 0;
              }
              iVar6 = local_30 + 1;
              bVar13 = local_30 != 0;
              piVar11 = local_24;
              piVar12 = local_1c;
              piVar9 = local_48;
              piVar8 = local_34;
              local_30 = iVar6;
              if (bVar13) {
                piVar4[2] = (int)local_34;
                piVar8 = local_38;
              }
            }
            goto joined_r0x00850321;
          }
        }
        iVar6 = piVar12[0x37];
        local_18 = (int *)((int)local_18 + 1);
        local_20 = local_20 + 0x24;
      } while ((int)local_18 <
               (*(int *)(*(int *)(iVar6 + 0x5c) + 0xcc) - *(int *)(*(int *)(iVar6 + 0x5c) + 200)) /
               0x24);
    }
    iVar6 = FUN_005db9b0();
    if (iVar6 < 2) {
      iVar6 = 1;
    }
    local_84 = (float)iVar6;
    iVar6 = FUN_005db9b0();
    local_94 = (float)iVar6 / local_84;
    if (DAT_00f1783c <= local_94) {
      local_28 = 0.0;
      piVar9 = local_68;
      piVar11 = local_38;
      while (local_68 = piVar9, piVar11 != (int *)0x0) {
        piVar9 = (int *)*piVar11;
        piVar11 = (int *)piVar11[2];
        piVar8 = (int *)(**(code **)(*piVar9 + 0x5c))(local_a4);
        piVar12 = local_64;
        local_28 = (float)*piVar8 / 1000.0 + local_28;
        local_64 = (int *)FUN_00aae9af(0x10);
        if (local_64 == (int *)0x0) {
          local_64 = (int *)0x0;
        }
        else {
          *local_64 = (int)piVar9;
          local_64[1] = (int)piVar12;
          local_64[2] = 0;
          *(undefined1 *)(local_64 + 3) = 0;
        }
        iVar6 = local_60 + 1;
        bVar13 = local_60 != 0;
        piVar9 = local_64;
        local_60 = iVar6;
        if (bVar13) {
          piVar12[2] = (int)local_64;
          piVar9 = local_68;
        }
      }
      local_70 = 0.0;
      bVar13 = false;
      piVar11 = local_48;
      while (piVar11 != (int *)0x0) {
        piVar9 = (int *)*piVar11;
        piVar11 = (int *)piVar11[2];
        if ((((char)piVar9[0x30] == 'R') && (*(char *)((int)piVar9 + 0xc1) == 'E')) &&
           (*(char *)((int)piVar9 + 0xc2) == 'B')) {
          bVar13 = true;
        }
        piVar9 = (int *)(**(code **)(*piVar9 + 0x5c))(local_9c);
        local_70 = (float)*piVar9 / 1000.0 + local_70;
      }
      fVar19 = local_28;
      if (local_28 == 0.0) {
        fVar19 = 0.01;
      }
      fVar2 = local_58 - local_78;
      if (fVar2 <= 0.0) {
        fVar20 = local_70;
        if (fVar2 < 0.0) {
          fVar19 = (1.0 - fVar2 / 4.5) * fVar19;
        }
      }
      else {
        fVar20 = (fVar2 / 18.0 + 1.0) * local_70;
      }
      if (bVar13) {
        fVar20 = fVar20 * 0.7;
      }
      if (DAT_00f177e0 < (fVar20 / fVar19) * local_94) {
        local_50 = local_1c[0x37];
        local_20 = 0;
        local_18 = (int *)0x0;
        local_74 = DAT_00f092dc;
        if (0 < (*(int *)(*(int *)(local_50 + 0x5c) + 0xcc) -
                *(int *)(*(int *)(local_50 + 0x5c) + 200)) / 0x24) {
          local_6c = 0;
          do {
            iVar6 = *(int *)(*(int *)(local_50 + 0x5c) + 200);
            if ((*(int *)(local_6c + iVar6) != 4) &&
               (iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar6 + 4 + local_6c) * 4
                                ), local_98 = iVar6,
               *(char *)(*(int *)(iVar6 + 0x5c) + 0x2a) != '\0')) {
              local_90 = *(undefined4 *)(param_1 + 0x34);
              cVar5 = FUN_0051b040(*(undefined4 *)
                                    (*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4));
              if (cVar5 != '\0') {
                piVar11 = *(int **)(iVar6 + 0xec);
                auVar15 = ZEXT816(0);
                if (piVar11 != (int *)0x0) {
                  local_90 = *(undefined4 *)(param_1 + 0x34);
                  local_8c = *(int *)(DAT_012587e4 + 4);
                  local_24 = *(int **)(local_8c + *(int *)(param_1 + 0x38) * 4);
                  local_88 = local_24[8];
                  do {
                    iVar6 = *piVar11;
                    piVar11 = (int *)piVar11[2];
                    auVar14._8_8_ = auVar15._8_8_;
                    if ((*(int *)(iVar6 + 0xc4) == local_88) ||
                       (((*(int *)(*(int *)(local_24[0x2fa] + *(int *)(iVar6 + 0xc4) * 4) + 0x34) ==
                          0 && (((*(char *)(iVar6 + 0xc0) != 'R' || (*(char *)(iVar6 + 0xc1) != 'E')
                                 ) || (*(char *)(iVar6 + 0xc2) != 'B')))) &&
                        ((((char)local_24[7] != 'R' || (*(char *)((int)local_24 + 0x1d) != 'E')) ||
                         (*(char *)((int)local_24 + 0x1e) != 'B')))))) {
                      if (*(int *)(iVar6 + 0xc4) == *(int *)(param_1 + 0x38)) {
                        fVar19 = (float)*(int *)(iVar6 + 0x40);
                      }
                      else {
                        if (*(int *)(*(int *)(*(int *)(*(int *)(local_8c +
                                                               *(int *)(param_1 + 0x38) * 4) + 0xbe8
                                                      ) + *(int *)(iVar6 + 0xc4) * 4) + 0x20) == 0)
                        goto LAB_00850911;
                        fVar19 = (float)*(int *)(iVar6 + 0x40) * 0.5;
                      }
                      auVar15 = ZEXT416((uint)(fVar19 + auVar15._0_4_));
                    }
                    else {
                      auVar14._0_8_ = (double)auVar15._0_4_ - (double)*(int *)(iVar6 + 0x40);
                      auVar15._4_12_ = auVar14._4_12_;
                      auVar15._0_4_ = (float)auVar14._0_8_;
                    }
LAB_00850911:
                    iVar6 = local_98;
                  } while (piVar11 != (int *)0x0);
                }
                if (*(int *)(iVar6 + 300) == *(int *)(param_1 + 0x38)) {
                  auVar16._8_8_ = auVar15._8_8_;
                  auVar16._0_8_ = (double)auVar15._0_4_ + 2.0;
                  auVar15._4_12_ = auVar16._4_12_;
                  auVar15._0_4_ = (float)auVar16._0_8_;
                }
                local_80 = *(undefined4 *)(param_1 + 0x34);
                if (*(int *)(iVar6 + 0x134) == *(int *)(param_1 + 0x38)) {
                  auVar17._8_8_ = auVar15._8_8_;
                  auVar17._0_8_ = (double)auVar15._0_4_ + 2.0;
                  auVar15._4_12_ = auVar17._4_12_;
                  auVar15._0_4_ = (float)auVar17._0_8_;
                }
                if (*(int *)(iVar6 + 300) == 0) {
                  auVar18._8_8_ = auVar15._8_8_;
                  auVar18._0_8_ = (double)auVar15._0_4_ * 0.5;
                  auVar15._4_12_ = auVar18._4_12_;
                  auVar15._0_4_ = (float)auVar18._0_8_;
                }
                if (local_74 < auVar15._0_4_) {
                  local_74 = auVar15._0_4_;
                  local_20 = iVar6;
                }
              }
            }
            local_18 = (int *)((int)local_18 + 1);
            local_6c = local_6c + 0x24;
          } while ((int)local_18 <
                   (*(int *)(*(int *)(local_50 + 0x5c) + 0xcc) -
                   *(int *)(*(int *)(local_50 + 0x5c) + 200)) / 0x24);
          piVar11 = local_38;
          if (local_20 != 0) {
            while (piVar11 != (int *)0x0) {
              iVar6 = *piVar11;
              piVar11 = (int *)piVar11[2];
              local_80 = *(undefined4 *)(param_1 + 0x34);
              local_18 = piVar11;
              if ((*(int *)(iVar6 + 0xc4) == *(int *)(param_1 + 0x38)) &&
                 (cVar5 = FUN_005cc3e0(), cVar5 == '\0')) {
                if (*(int *)(iVar6 + 0xdc) == local_1c[0x37]) {
                  FUN_00852a00(param_1,iVar6);
                  piVar11 = local_18;
                }
                else if (*(char *)(iVar6 + 0x104) == '\0') {
                  *(undefined4 *)(iVar6 + 0xa0) = 0;
                  local_50 = FUN_00aae9af(0x68);
                  local_8._0_1_ = 3;
                  if (local_50 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = FUN_005df690(local_50,iVar6,0);
                  }
                  local_8 = CONCAT31(local_8._1_3_,2);
                  iVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
                  (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar10);
                }
              }
            }
          }
        }
      }
      if (local_48 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_48);
      }
      local_8 = local_8 & 0xffffff00;
      local_48 = (int *)0x0;
      local_44 = (int *)0x0;
      local_40 = 0;
      if (local_38 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_38);
      }
      local_38 = (int *)0x0;
      local_34 = (int *)0x0;
      local_30 = 0;
      piVar11 = local_4c;
    }
    else {
      FUN_009a63f0();
      local_8 = local_8 & 0xffffff00;
      FUN_009a63f0();
      piVar11 = local_4c;
    }
  } while( true );
}

