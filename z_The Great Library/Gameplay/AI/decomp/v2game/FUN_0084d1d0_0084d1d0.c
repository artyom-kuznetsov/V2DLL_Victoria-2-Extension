// FUN_0084d1d0 @ 0084d1d0  (requested 0084D1D0, first bytes: 55 8B EC 6A FF 68 22 2C)


void FUN_0084d1d0(int param_1)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *extraout_ECX;
  int *extraout_ECX_00;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  float fVar19;
  undefined8 uVar20;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int *local_44;
  int local_40;
  int local_3c;
  int *local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int local_28;
  int *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b52c22;
  local_10 = ExceptionList;
  local_68 = *(int *)(param_1 + 0x34);
  local_28 = DAT_012588e8;
  piVar12 = (int *)(param_1 + 0x34);
  if (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000 <
      *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x1404)) {
    return;
  }
  local_30 = 0;
  iVar10 = *(int *)(DAT_0125870c + 0x2a8c) - *(int *)(DAT_0125870c + 0x2a88) >> 2;
  ExceptionList = &local_10;
  if (0 < iVar10) {
    local_58 = *piVar12;
    local_54 = *(int *)(param_1 + 0x38);
    local_24 = *(int **)(DAT_0125870c + 0x2a88);
    ExceptionList = &local_10;
    do {
      iVar4 = *local_24;
      cVar2 = FUN_004cd4c0();
      if (cVar2 != '\0') {
        iVar7 = FUN_00aae9af(0x48);
        local_8 = 0;
        if (iVar7 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_0058a0b0(iVar7,*(undefined4 *)(iVar4 + 0x6c),*piVar12,
                               *(undefined4 *)(param_1 + 0x38));
        }
        local_8 = 0xffffffff;
        iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
        (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))(uVar6);
        ExceptionList = local_10;
        return;
      }
      local_24 = local_24 + 1;
      local_30 = local_30 + 1;
    } while (local_30 < iVar10);
  }
  local_68 = *piVar12;
  local_18 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0xe44);
  iVar10 = DAT_0125870c;
joined_r0x0084d2b0:
  while (DAT_0125870c = iVar10, local_18 != (int *)0x0) {
    iVar4 = *local_18;
    iVar14 = *(int *)(iVar4 + 0x84);
    local_18 = (int *)local_18[2];
    if (0 < iVar14) {
      cVar2 = FUN_004d1e40();
      if (cVar2 != '\0') goto code_r0x0084d409;
      if ((DAT_012586f1 != '\0') || (iVar10 = DAT_0125870c, iVar14 == 1)) {
        local_68 = *piVar12;
        iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
        iVar14 = *(int *)(iVar10 + 0x15c4);
        iVar5 = *(int *)(iVar10 + 0x15c0);
        local_48 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x140);
        FUN_00401000(((float)(*(int *)(iVar4 + 0x4c) - *(int *)(iVar4 + 0x48) >> 2) + 0.0005) *
                     1000.0);
        iVar10 = FUN_00b31c00();
        iVar3 = __alldiv((longlong)iVar10 * (longlong)local_48,1000,0);
        iVar10 = DAT_0125870c;
        if (iVar3 / 1000 <= iVar14 - iVar5) {
          iVar7 = FUN_00aae9af(0x6c);
          local_8 = 2;
          if (iVar7 == 0) goto LAB_0084df86;
          uVar6 = FUN_005853e0(iVar7,iVar4,*piVar12,*(undefined4 *)(param_1 + 0x38));
          goto LAB_0084df88;
        }
      }
    }
  }
  iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  local_18 = (int *)(*(int *)(iVar4 + 0x15c4) - *(int *)(iVar4 + 0x15c0));
  local_68 = *piVar12;
  local_24 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x14a4)
  ;
  local_48 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x124) / 1000;
  local_2c = (int *)(*(int *)(*(int *)(DAT_012586dc + 0x40) + 300) / 1000);
  local_1c = 0;
  if ((int)local_18 < local_48) {
    uVar13 = *(uint *)(iVar10 + 0x2a88);
    while ((*(uint *)(iVar10 + 0x2a88) <= uVar13 && (uVar13 < *(uint *)(iVar10 + 0x2a8c)))) {
      local_58 = *piVar12;
      local_54 = *(int *)(param_1 + 0x38);
      uVar13 = uVar13 + 4;
      cVar2 = FUN_004cb370(&local_58);
      if (cVar2 != '\0') {
        local_1c = local_1c + 1;
      }
    }
  }
  local_68 = *piVar12;
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x31) != '\0')
  {
    if (local_1c < 4) {
      if (((int)local_24 < 2) || ((int)local_2c <= (int)local_18)) goto LAB_0084d5cf;
      iVar10 = (int)local_2c * 2 - (int)local_18;
    }
    else if (((int)local_24 < 1) || ((int)local_2c <= (int)local_18)) {
      if (local_48 <= (int)local_18) goto LAB_0084d5cf;
      iVar10 = (local_48 - (int)local_18) / 2;
    }
    else {
      iVar10 = (int)local_2c - (int)local_18;
    }
    cVar2 = FUN_0084c470(param_1,iVar10);
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      return;
    }
  }
LAB_0084d5cf:
  local_30 = 0;
  if ((int)local_24 < 1) {
LAB_0084d9b2:
    iVar10 = (int)local_18 / (local_48 + (int)local_2c * 5);
    if (iVar10 < 1) {
      iVar10 = 1;
    }
    iVar4 = 3;
    if (4 < iVar10) {
      iVar4 = 4;
    }
    if (iVar10 < local_30) {
      ExceptionList = local_10;
      return;
    }
    if (iVar4 <= (int)local_24) {
      ExceptionList = local_10;
      return;
    }
    local_34 = *(int *)(DAT_0125870c + 0x2a8c) - *(int *)(DAT_0125870c + 0x2a88) >> 2;
    local_38 = (int *)0x0;
    local_3c = 0;
    local_24 = (int *)0x0;
    if (local_34 < 1) {
      ExceptionList = local_10;
      return;
    }
    do {
      local_18 = *(int **)(*(int *)(DAT_0125870c + 0x2a88) + (int)local_24 * 4);
      if (local_18[4] != 0) {
        local_68 = *piVar12;
        local_64 = *(undefined4 *)(iVar7 + 0x38);
        cVar2 = FUN_004cb370(&local_68);
        if (cVar2 != '\0') {
          local_60 = *piVar12;
          local_5c = *(int *)(iVar7 + 0x38);
          iVar10 = *(int *)(DAT_012587e4 + 4);
          iVar4 = *(int *)(iVar10 + local_5c * 4);
          iVar14 = *(int *)(iVar4 + 0x15c4);
          iVar4 = *(int *)(iVar4 + 0x15c0);
          local_50 = local_60;
          iVar5 = FUN_004cd300(&local_60);
          if (iVar5 <= iVar14 - iVar4) {
            iVar4 = 0;
            param_1 = 0;
            cVar2 = local_18[0x26] != 0;
            if (local_18[0x2d] != 0) {
              cVar2 = cVar2 + '\x01';
            }
            if (local_18[0x34] != 0) {
              cVar2 = cVar2 + '\x01';
            }
            if (local_18[0x3b] != 0) {
              cVar2 = cVar2 + '\x01';
            }
            if (cVar2 == '\0') {
              param_1 = 30000;
              piVar8 = local_18;
            }
            else {
              local_50 = *piVar12;
              local_48 = *(int *)(iVar10 + *(int *)(iVar7 + 0x38) * 4);
              iVar10 = FUN_004cb450();
              piVar8 = extraout_ECX;
              if (0 < iVar10) {
                piVar11 = extraout_ECX + 0x25;
                do {
                  local_58 = *piVar11;
                  local_54 = piVar11[1];
                  if ((local_54 != 0) && (local_50 = *piVar12, local_54 != *(int *)(iVar7 + 0x38)))
                  {
                    cVar2 = FUN_0085fbc0();
                    iVar10 = param_1 + -30000;
                    if (cVar2 != '\0') {
                      iVar10 = param_1 + -35000;
                    }
                    param_1 = iVar10;
                    cVar2 = FUN_0085fbc0();
                    if (cVar2 != '\0') {
                      param_1 = param_1 + 5000;
                    }
                  }
                  iVar4 = iVar4 + 1;
                  piVar11 = piVar11 + 7;
                  iVar10 = FUN_004cb450();
                  piVar8 = extraout_ECX_00;
                } while (iVar4 < iVar10);
              }
            }
            piVar8 = (int *)piVar8[2];
            local_2c = piVar8;
            if (piVar8 != (int *)0x0) {
LAB_0084db70:
              iVar10 = *(int *)(*(int *)(local_28 + 0xacc) + *piVar8 * 4);
              local_2c = piVar8;
              local_30 = iVar10;
              if (*(int *)(iVar10 + 300) == 0) {
                local_20 = *piVar12;
                local_1c = *(int *)(iVar7 + 0x38);
                cVar2 = FUN_004bbd60(iVar10);
                if (cVar2 == '\0') {
                  param_1 = -1000000;
                  local_2c = piVar8;
                }
                else {
                  piVar8 = *(int **)(iVar10 + 0x148);
                  do {
                    if ((piVar8 < *(int **)(iVar10 + 0x148)) ||
                       (*(int **)(iVar10 + 0x14c) <= piVar8)) {
LAB_0084dc19:
                      local_44 = *(int **)(iVar10 + 0x5c);
                      iVar10 = (local_44[0x33] - local_44[0x32]) / 0x24;
                      iVar4 = 0;
                      if (iVar10 < 1) goto LAB_0084dc7c;
                      local_50 = *piVar12;
                      local_4c = *(int *)(local_28 + 0xacc);
                      piVar8 = (int *)(local_44[0x32] + 4);
                      goto LAB_0084dc58;
                    }
                    local_50 = *piVar12;
                    if (piVar8[1] == *(int *)(iVar7 + 0x38)) {
                      param_1 = param_1 + 50000;
                      goto LAB_0084dc19;
                    }
                    local_50 = *piVar8;
                    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + piVar8[1] * 4);
                    piVar8 = piVar8 + 2;
                  } while ((int)(*(int *)(iVar4 + 0x9dc) - *(int *)(iVar4 + 0x9d8) & 0xfffffffcU) <
                           1);
                  param_1 = -1000000;
                }
              }
              goto LAB_0084de61;
            }
LAB_0084de6f:
            if (5000 < param_1) {
              FUN_00401000(0x43fa4001);
              iVar10 = FUN_00b31c00();
              iVar4 = FUN_00ab047b();
              param_1 = param_1 + (iVar4 % ((iVar10 + param_1) / 2000 + 1)) * 1000;
            }
            if ((local_3c < param_1) && (-0xf3e58 < param_1)) {
              local_38 = local_18;
              local_3c = param_1;
            }
          }
        }
      }
      piVar8 = local_38;
      local_24 = (int *)((int)local_24 + 1);
    } while ((int)local_24 < local_34);
    if (local_38 == (int *)0x0) {
      ExceptionList = local_10;
      return;
    }
    local_68 = *piVar12;
    local_64 = *(undefined4 *)(iVar7 + 0x38);
    cVar2 = FUN_004cb370(&local_68);
    if (cVar2 == '\0') {
      ExceptionList = local_10;
      return;
    }
    local_68 = *piVar12;
    local_64 = *(int *)(iVar7 + 0x38);
    iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_64 * 4);
    iVar4 = *(int *)(iVar10 + 0x15c4);
    iVar10 = *(int *)(iVar10 + 0x15c0);
    local_60 = local_68;
    iVar14 = FUN_004cd300(&local_68);
    if (iVar4 - iVar10 < iVar14) {
      ExceptionList = local_10;
      return;
    }
    iVar10 = FUN_00aae9af(0x4c);
    local_8 = 5;
    if (iVar10 != 0) {
      uVar6 = FUN_00589840(iVar10,piVar8[0x1b],*piVar12,*(undefined4 *)(iVar7 + 0x38));
      goto LAB_0084df88;
    }
    goto LAB_0084df86;
  }
  local_68 = *piVar12;
  piVar8 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x149c);
  do {
    do {
      if (piVar8 == (int *)0x0) goto LAB_0084d9b2;
      iVar10 = *piVar8;
      local_44 = (int *)piVar8[2];
      dVar18 = 2.0;
      piVar8 = (int *)(iVar10 + 0x98);
      bVar15 = *piVar8 != 0;
      if (*(int *)(iVar10 + 0xb4) != 0) {
        bVar15 = bVar15 + 1;
      }
      if (*(int *)(iVar10 + 0xd0) != 0) {
        bVar15 = bVar15 + 1;
      }
      if (*(int *)(iVar10 + 0xec) != 0) {
        bVar15 = bVar15 + 1;
      }
      local_1c = iVar10;
      if (1 < bVar15) {
        iVar4 = 0;
        do {
          if (*piVar8 == *(int *)(param_1 + 0x38)) {
            local_3c = *(int *)(iVar10 + 0xa0 + iVar4 * 0x1c);
            goto LAB_0084d66b;
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 7;
        } while (iVar4 < 4);
        local_3c = 0;
LAB_0084d66b:
        iVar4 = 0;
        piVar8 = (int *)(iVar10 + 0x98);
        do {
          if (*piVar8 == *(int *)(param_1 + 0x38)) {
            local_34 = *(int *)(iVar10 + 0x9c + iVar4 * 0x1c);
            goto LAB_0084d687;
          }
          iVar4 = iVar4 + 1;
          piVar8 = piVar8 + 7;
        } while (iVar4 < 4);
        local_34 = 0;
LAB_0084d687:
        local_30 = local_30 + 1;
        if (0 < (int)local_18) {
          local_4c = FUN_004cd300(piVar12);
          fVar19 = (float)*(int *)(iVar10 + 0x88) / 1000.0;
          FUN_004cd1d0();
          if (local_54 != 0) {
            iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_54 * 4);
            iVar14 = *(int *)(iVar4 + 0x15c4) - *(int *)(iVar4 + 0x15c0);
            fVar16 = (float)iVar14 / (float)(int)local_18;
            piVar8 = (int *)(iVar10 + 0x98);
            iVar10 = 0;
            do {
              if (*piVar8 == local_54) {
                local_38 = *(int **)(local_1c + 0xa0 + iVar10 * 0x1c);
                goto LAB_0084d730;
              }
              iVar10 = iVar10 + 1;
              piVar8 = piVar8 + 7;
            } while (iVar10 < 4);
            local_38 = (int *)0x0;
LAB_0084d730:
            iVar10 = 0;
            piVar8 = (int *)(local_1c + 0x98);
            do {
              if (*piVar8 == local_54) {
                iVar10 = *(int *)(local_1c + 0x9c + iVar10 * 0x1c);
                goto LAB_0084d756;
              }
              iVar10 = iVar10 + 1;
              piVar8 = piVar8 + 7;
            } while (iVar10 < 4);
            iVar10 = 0;
LAB_0084d756:
            if ((((DAT_00f17b54 < fVar16) && (15.0 < fVar19)) || (5 < iVar10 - local_34)) ||
               (dVar18 < (double)((int)local_38 + iVar14) / (double)(local_3c + (int)local_18)))
            goto LAB_0084d9b2;
            local_40 = *piVar12;
            iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
            fVar16 = (float)(((double)fVar16 * dVar18 - dVar18) +
                            ((double)((int)((*(uint *)(iVar4 + 0x1a0) >> 0xf |
                                            *(int *)(iVar4 + 0x1a4) << 0x11) + 1) /
                                     (int)((*(uint *)(iVar10 + 0x1a0) >> 0xf |
                                           *(int *)(iVar10 + 0x1a4) << 0x11) + 1)) - 1.0));
            if ((int)local_18 < local_4c) {
              fVar16 = fVar16 * 5.0;
            }
            iVar10 = local_1c;
            if (0.0 < fVar16) {
              auVar17 = ZEXT416((uint)(fVar16 * fVar19));
              iVar4 = FUN_009b7610();
              if ((float)(iVar4 % 1000) < auVar17._0_4_) goto LAB_0084d9b2;
            }
          }
          goto LAB_0084d87b;
        }
        iVar7 = FUN_00aae9af(0x48);
        local_8 = 3;
        if (iVar7 != 0) {
          uVar6 = FUN_00589d40(iVar7,*(undefined4 *)(iVar10 + 0x6c),*piVar12,
                               *(undefined4 *)(param_1 + 0x38));
          goto LAB_0084df88;
        }
        goto LAB_0084df86;
      }
LAB_0084d87b:
      local_5c = *(int *)(param_1 + 0x38);
      local_60 = *piVar12;
      cVar2 = FUN_004cb370(&local_60);
      piVar8 = local_44;
    } while (cVar2 == '\0');
    local_68 = *piVar12;
    local_64 = *(int *)(param_1 + 0x38);
    iVar4 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_64 * 4);
    iVar14 = *(int *)(iVar4 + 0x15c4);
    iVar4 = *(int *)(iVar4 + 0x15c0);
    local_50 = local_68;
    iVar5 = FUN_004cd300(&local_68);
    piVar8 = local_44;
  } while (iVar14 - iVar4 < iVar5);
  iVar7 = FUN_00aae9af(0x4c);
  local_8 = 4;
  if (iVar7 != 0) {
    uVar6 = FUN_00589840(iVar7,*(undefined4 *)(iVar10 + 0x6c),*piVar12,
                         *(undefined4 *)(param_1 + 0x38));
    goto LAB_0084df88;
  }
LAB_0084df86:
  uVar6 = 0;
LAB_0084df88:
  local_8 = 0xffffffff;
  iVar7 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
  (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))(uVar6);
  ExceptionList = local_10;
  return;
  while( true ) {
    iVar4 = iVar4 + 1;
    piVar8 = piVar8 + 9;
    if (iVar10 <= iVar4) break;
LAB_0084dc58:
    if (*(int *)(*(int *)(local_4c + *piVar8 * 4) + 300) == *(int *)(iVar7 + 0x38)) {
      param_1 = param_1 + 10000;
      break;
    }
  }
LAB_0084dc7c:
  local_48 = 0;
  if (0 < iVar10) {
    piVar8 = (int *)(local_44[0x32] + 4);
    do {
      if ((*(int *)(*(int *)(*(int *)(local_28 + 0xacc) + *piVar8 * 4) + 300) != 0) &&
         (local_50 = *piVar12,
         *(int *)(*(int *)(*(int *)(local_28 + 0xacc) + *piVar8 * 4) + 300) !=
         *(int *)(iVar7 + 0x38))) {
        param_1 = param_1 + 10000;
        break;
      }
      local_48 = local_48 + 1;
      piVar8 = piVar8 + 9;
    } while (local_48 < iVar10);
  }
  if (local_44[0x37] != 0) {
    param_1 = param_1 + 10000;
  }
  iVar10 = *(int *)(local_28 + 0xbcc);
  iVar4 = *(int *)(local_30 + 0x58);
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af(0x14);
    if (DAT_01258728 == (int *)0x0) {
      DAT_01258728 = (int *)0x0;
    }
    else {
      *DAT_01258728 = 0;
      DAT_01258728[1] = 0;
      DAT_01258728[2] = 0;
      *(undefined1 *)(DAT_01258728 + 4) = 0;
    }
  }
  iVar14 = *(int *)(iVar7 + 0x38) * 0x58 + *(int *)(iVar10 + 0x3f4);
  iVar4 = *(int *)(*(int *)(iVar4 * 0xb0 + 0xc + *DAT_01258728) + 8);
  uVar9 = (uint)*(byte *)(iVar4 + 8 + iVar14);
  iVar14 = *(int *)(iVar14 + 0x48);
  iVar5 = *(int *)(iVar14 + uVar9 * 8 + 4);
  local_50 = *piVar12;
  iVar10 = *(int *)(iVar7 + 0x38) * 0x58 + *(int *)(iVar10 + 0x424);
  puVar1 = (uint *)(*(int *)(iVar10 + 0x48) + (uint)*(byte *)(iVar4 + 8 + iVar10) * 8);
  uVar13 = puVar1[1];
  if ((iVar5 <= (int)uVar13) && ((iVar5 < (int)uVar13 || (*(uint *)(iVar14 + uVar9 * 8) < *puVar1)))
     ) {
    param_1 = param_1 + 5000;
  }
  iVar10 = *(int *)(local_30 + 0x1a4);
  if (iVar10 < 0x14) {
    FUN_00401000(0x43fa4001);
    iVar4 = FUN_00b31c00();
    param_1 = __alldiv((longlong)iVar4 * (longlong)param_1,1000,0);
  }
  if (0x24 < iVar10) {
    FUN_00401000(0x44899000);
    iVar10 = FUN_00b31c00();
    param_1 = __alldiv((longlong)param_1 * (longlong)iVar10,1000,0);
  }
  iVar10 = *(int *)(local_30 + 0x1a8) * 1000;
  if (iVar10 + 0x189373U < 0x39580e) {
    iVar10 = (*(int *)(local_30 + 0x1a8) * 1000000) / 1000000;
  }
  else {
    uVar20 = __allmul(iVar10,iVar10 >> 0x1f,1000,0);
    iVar10 = __alldiv(uVar20,1000000,0);
    local_4c = iVar10 >> 0x1f;
  }
  param_1 = param_1 + iVar10;
LAB_0084de61:
  piVar8 = (int *)local_2c[2];
  local_2c = piVar8;
  if (piVar8 == (int *)0x0) goto LAB_0084de6f;
  goto LAB_0084db70;
code_r0x0084d409:
  local_68 = *piVar12;
  iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  iVar14 = *(int *)(iVar10 + 0x15c4);
  iVar5 = *(int *)(iVar10 + 0x15c0);
  iVar3 = FUN_004d5d10();
  iVar10 = DAT_0125870c;
  if (iVar3 <= iVar14 - iVar5) goto code_r0x0084d438;
  goto joined_r0x0084d2b0;
code_r0x0084d438:
  iVar7 = FUN_00aae9af(0x6c);
  local_8 = 1;
  if (iVar7 != 0) {
    uVar6 = FUN_00584e90(iVar7,iVar4,*piVar12,*(undefined4 *)(param_1 + 0x38));
    goto LAB_0084df88;
  }
  goto LAB_0084df86;
}

