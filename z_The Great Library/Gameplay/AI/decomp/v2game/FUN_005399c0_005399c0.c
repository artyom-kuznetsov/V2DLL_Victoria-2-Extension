// FUN_005399c0 @ 005399c0 body=[[005399c0, 00539ab5] [00539ab9, 00539b8c] [00539b90, 00539cde] [00539ce2, 0053a0cc] [0053a0d0, 0053a638] [0053a653, 0053a69d]]


void FUN_005399c0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  char cVar9;
  undefined4 *puVar10;
  char cVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *local_128;
  int *local_124;
  int *local_120;
  undefined4 *local_11c;
  char *local_118 [2];
  undefined1 local_110 [4];
  undefined4 *local_10c;
  undefined4 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined **local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  undefined4 uStack_c8;
  undefined **ppuStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 uStack_a4;
  undefined4 uStack_a0;
  undefined **ppuStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined **local_6c [3];
  undefined1 local_60 [8];
  undefined4 local_58;
  int local_54;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba6b26;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  local_108 = 0;
  local_10c = (undefined4 *)FUN_00aae9af(0x14);
  if (local_10c == (undefined4 *)0x0) {
    local_118[0] = (char *)0x0;
    std::exception::exception((exception *)local_6c,local_118);
    local_6c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_6c,&DAT_00e6fb20);
  }
  *local_10c = local_10c;
  local_10c[1] = local_10c;
  local_10c[2] = local_10c;
  *(undefined1 *)(local_10c + 4) = 1;
  *(undefined1 *)((int)local_10c + 0x11) = 1;
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  piVar5 = DAT_01258734;
  if (DAT_01258734 == (int *)0x0) {
    piVar5 = (int *)FUN_00aae9af(0x170);
    local_124 = piVar5;
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = 0;
      piVar5[1] = 0;
      piVar5[2] = 0;
      local_c._0_1_ = 2;
      local_d8 = 0xf;
      local_dc = 0;
      local_ec = (undefined **)((uint)local_ec & 0xffffff00);
      FUN_00409350(&DAT_00dfbe80,4);
      local_c._0_1_ = 3;
      FUN_004dd0a0(piVar5 + 4,&local_ec);
      if (0xf < local_d8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_ec);
      }
    }
  }
  DAT_01258734 = piVar5;
  local_c._0_1_ = 0;
  local_f8 = CONCAT44(local_f8._4_4_,DAT_01258734);
  iVar14 = (DAT_01258734[1] - *DAT_01258734) / 0x160;
  if (0 < iVar14) {
    local_128 = (undefined4 *)0x0;
    local_120 = (int *)iVar14;
    do {
      iVar14 = *(int *)local_f8 + (int)local_128;
      if ((*(int *)(iVar14 + 0x138) == 1) &&
         (iVar6 = *(int *)(iVar14 + 0x10c) - *(int *)(iVar14 + 0x108) >> 5, 0 < iVar6)) {
        iVar12 = 0;
        local_11c = (undefined4 *)iVar6;
        do {
          local_124 = *(int **)(*(int *)(*(int *)(iVar14 + 0x108) + 8 + iVar12) + 0x28);
          uVar7 = FUN_00a78530(&local_124);
          FUN_004a34d0(local_110,uVar7);
          iVar12 = iVar12 + 0x20;
          local_11c = (undefined4 *)((int)local_11c + -1);
        } while (local_11c != (undefined4 *)0x0);
      }
      local_128 = (undefined4 *)((int)local_128 + 0x160);
      local_120 = (int *)((int)local_120 + -1);
    } while (local_120 != (int *)0x0);
  }
  local_128 = *(undefined4 **)(param_1 + 0xe44);
  if (local_128 != (undefined4 *)0x0) {
    cVar3 = *(char *)(param_1 + 0x26);
    do {
      local_124 = (int *)*local_128;
      local_128 = (undefined4 *)local_128[2];
      if (local_124[0x18] != 0) {
        cVar11 = *(char *)(param_1 + 0x24);
        cVar9 = *(char *)(param_1 + 0x25);
        iVar14 = local_124[0x18];
        do {
          iVar6 = *(int *)(iVar14 + 0x224);
          if ((cVar11 == '\0') && (*(int *)(iVar14 + 0x17c) == 0)) {
            cVar11 = '\0';
          }
          else {
            cVar11 = '\x01';
          }
          *(char *)(param_1 + 0x24) = cVar11;
          if ((cVar9 == '\0') && (*(int *)(iVar14 + 0x184) < 0xb)) {
            cVar9 = '\0';
          }
          else {
            cVar9 = '\x01';
          }
          *(char *)(param_1 + 0x25) = cVar9;
          iVar14 = iVar6;
        } while (iVar6 != 0);
      }
      if (cVar3 == '\0') {
        puVar13 = (undefined4 *)*local_10c;
        while (puVar13 != local_10c) {
          puVar10 = puVar13;
          if (*(char *)((int)puVar13 + 0x11) == '\0') {
            puVar10 = (undefined4 *)puVar13[2];
            if (*(char *)((int)puVar10 + 0x11) == '\0') {
              cVar11 = *(char *)((int)*puVar10 + 0x11);
              puVar1 = (undefined4 *)*puVar10;
              while (cVar11 == '\0') {
                cVar11 = *(char *)((int)*puVar1 + 0x11);
                puVar10 = puVar1;
                puVar1 = (undefined4 *)*puVar1;
              }
            }
            else {
              cVar11 = *(char *)((int)puVar13[1] + 0x11);
              puVar2 = (undefined4 *)puVar13[1];
              puVar1 = puVar13;
              while ((puVar10 = puVar2, cVar11 == '\0' && (puVar1 == (undefined4 *)puVar10[2]))) {
                cVar11 = *(char *)((int)puVar10[1] + 0x11);
                puVar2 = (undefined4 *)puVar10[1];
                puVar1 = puVar10;
              }
            }
          }
          if ((cVar3 == '\0') &&
             (*(int *)(local_124[0x46] + puVar13[3] * 4) ==
              *(int *)(local_124[0x48] + puVar13[3] * 4))) {
            cVar3 = '\0';
          }
          else {
            cVar3 = '\x01';
          }
          *(char *)(param_1 + 0x26) = cVar3;
          puVar13 = puVar10;
        }
      }
    } while (local_128 != (undefined4 *)0x0);
  }
  if (DAT_01319730 == 0) {
    local_124 = (int *)FUN_00aae9af(0x38);
    local_c._0_1_ = 4;
    if (local_124 == (int *)0x0) {
      iVar14 = 0;
    }
    else {
      iVar14 = FUN_008750a0(local_124);
    }
    iVar6 = DAT_01319730;
    local_c = CONCAT31(local_c._1_3_,5);
    local_124 = (int *)0x0;
    if ((iVar14 != DAT_01319730) && (DAT_01319730 != 0)) {
      FUN_00875160(DAT_01319730);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar6);
    }
    local_c._0_1_ = 0;
    DAT_01319730 = iVar14;
  }
  iVar14 = DAT_01319730;
  FUN_008a8650(0);
  local_58 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_54 = *(int *)(DAT_012588e8 + 0xb60);
  local_128 = (undefined4 *)0x0;
  puVar13 = (undefined4 *)(*(int *)(iVar14 + 0x2c) - *(int *)(iVar14 + 0x28) >> 2);
  local_11c = puVar13;
  if (0 < (int)puVar13) {
    do {
      iVar6 = (int)local_128 * 4;
      cVar3 = (**(code **)(**(int **)(iVar6 + *(int *)(iVar14 + 0x28)) + 0x18))();
      if (cVar3 != '\0') {
        piVar5 = *(int **)(*(int *)(iVar14 + 0x28) + iVar6);
        cVar3 = (**(code **)(*piVar5 + 0x18))();
        puVar13 = local_11c;
        if ((((cVar3 != '\0') &&
             (cVar3 = (**(code **)(piVar5[9] + 0x18))(local_60), puVar13 = local_11c, cVar3 != '\0')
             ) && (cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar14 + 0x28) + iVar6) + 0x40) +
                                       0x18))(local_60), puVar13 = local_11c, cVar3 != '\0')) &&
           (iVar6 = *(int *)(*(int *)(iVar14 + 0x28) + iVar6),
           iVar12 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_54 * 4) + 0x188),
           iVar8 = FUN_0045c080(iVar12,iVar6 + 8), puVar13 = local_11c,
           (iVar8 != iVar12) != (bool)*(char *)(iVar6 + 0x7c))) {
          *(undefined1 *)(param_1 + 0x28) = 1;
          break;
        }
      }
      local_128 = (undefined4 *)((int)local_128 + 1);
    } while ((int)local_128 < (int)puVar13);
  }
  if (*(char *)(param_1 + 0x28) == '\x01') {
    local_128 = (undefined4 *)0x0;
    local_124 = (int *)(*(int *)(iVar14 + 0x10) - *(int *)(iVar14 + 0xc) >> 2);
    if (0 < (int)local_124) {
      do {
        iVar6 = (int)local_128 * 4;
        cVar3 = (**(code **)(**(int **)(iVar6 + *(int *)(iVar14 + 0xc)) + 0x18))();
        if (cVar3 != '\0') {
          piVar5 = *(int **)(*(int *)(iVar14 + 0xc) + iVar6);
          cVar3 = (**(code **)(*piVar5 + 0x18))();
          if (((cVar3 != '\0') && (cVar3 = (**(code **)(piVar5[9] + 0x18))(local_60), cVar3 != '\0')
              ) && (cVar3 = (**(code **)(*(int *)(*(int *)(*(int *)(iVar14 + 0xc) + iVar6) + 0x40) +
                                        0x18))(local_60), cVar3 != '\0')) {
            *(undefined1 *)(param_1 + 0x28) = 1;
            break;
          }
        }
        local_128 = (undefined4 *)((int)local_128 + 1);
      } while ((int)local_128 < (int)local_124);
    }
  }
  iVar14 = DAT_01258a48;
  iVar6 = 0;
  if (*(char *)(param_1 + 0x12d0) == '\0') {
    iVar12 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
    if (0 < iVar12) {
      do {
        iVar8 = *(int *)(iVar14 + 0x18);
        if ((*(int *)(*(int *)(*(int *)(iVar8 + iVar6 * 4) + 0x54) + 0x5c) == 4) &&
           (cVar3 = FUN_005262c0(*(undefined4 *)(*(int *)(iVar8 + iVar6 * 4) + 0x54)), cVar3 != '\0'
           )) {
          *(undefined1 *)(param_1 + 0x27) = 1;
          break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar12);
    }
    iVar14 = DAT_01258a48;
    if (*(char *)(param_1 + 0x27) == '\0') {
      iVar6 = 0;
      iVar12 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
      if (0 < iVar12) {
        do {
          if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar14 + 0x18) + iVar6 * 4) + 0x54) + 0x5c) == 5)
             && (cVar3 = FUN_00525d90(*(undefined4 *)
                                       (*(int *)(*(int *)(iVar14 + 0x18) + iVar6 * 4) + 0x54)),
                cVar3 != '\0')) {
            *(undefined1 *)(param_1 + 0x27) = 1;
            break;
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar12);
      }
    }
  }
  else {
    piVar5 = (int *)(*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2);
    local_124 = piVar5;
    if (0 < (int)piVar5) {
      do {
        if (*(int *)(*(int *)(*(int *)(*(int *)(iVar14 + 0x18) + iVar6 * 4) + 0x54) + 0x5c) == 3) {
          local_f8 = 0;
          cVar3 = FUN_00525a20();
          piVar5 = local_124;
          if (cVar3 != '\0') {
            *(undefined1 *)(param_1 + 0x27) = 1;
            break;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)piVar5);
    }
    if (*(char *)(param_1 + 0x27) == '\0') {
      piVar5 = (int *)(DAT_01258a48 + 0x18);
      iVar6 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
      iVar14 = 0;
      local_124 = piVar5;
      if (0 < iVar6) {
        do {
          if (*(int *)(*(int *)(*(int *)(*piVar5 + iVar14 * 4) + 0x54) + 0x5c) == 2) {
            local_f8 = 0;
            cVar3 = FUN_00525be0();
            piVar5 = local_124;
            if (cVar3 != '\0') {
              *(undefined1 *)(param_1 + 0x27) = 1;
              break;
            }
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar6);
      }
    }
  }
  iVar14 = DAT_012588e8;
  if ((*(char *)(*(int *)(param_1 + 0xbd0) + 0x5c) == '\0') ||
     ((int)((double)((*(int *)(param_1 + 0x664) + -43800000) / 0x18) / 365.0) < 6)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  local_100 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x29) = uVar4;
  puVar13 = (undefined4 *)(param_1 + 0x1c);
  *(bool *)(param_1 + 0x2a) =
       *(int *)(*(int *)(iVar14 + 0xb98) + 8 + *(int *)(param_1 + 0x20) * 0x10) != 0;
  local_11c = puVar13;
  if (*(char *)(param_1 + 0x31) != '\0') {
    local_124 = (int *)(iVar14 + 0xadc);
    iVar6 = *(int *)(iVar14 + 0xae0) - *(int *)(iVar14 + 0xadc) >> 2;
    local_120 = (int *)0x0;
    if (0 < iVar6) {
      do {
        iVar12 = *(int *)(*local_124 + (int)local_120 * 4);
        if (((0 < (int)(*(int *)(iVar12 + 0x9dc) - *(int *)(iVar12 + 0x9d8) & 0xfffffffcU)) &&
            (*(int *)(iVar12 + 0x20) != 0)) &&
           ((*(char *)(iVar12 + 0x1c) != 'R' ||
            ((*(char *)(iVar12 + 0x1d) != 'E' || (*(char *)(iVar12 + 0x1e) != 'B')))))) {
          if (DAT_01258a08 == 0) {
            iVar8 = *(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(iVar12 + 0x20) * 4) +
                            0x48);
          }
          else {
            iVar8 = 100000;
          }
          if (0 < iVar8) {
            uStack_d4 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
            uStack_e4 = *puVar13;
            uStack_e0 = *(undefined4 *)(param_1 + 0x20);
            local_dc = *(undefined4 *)(iVar12 + 0x1c);
            local_d8 = *(uint *)(iVar12 + 0x20);
            uStack_e8 = 0x18d;
            uStack_cc = 0;
            uStack_c8 = 0;
            local_ec = CIncreaseOpinionAction::vftable;
            local_c._0_1_ = 6;
            uStack_d0 = uStack_d4;
            cVar3 = FUN_00911760(0);
            if (cVar3 == '\0') {
              uStack_ac = *(undefined4 *)(DAT_012588e8 + 0xb0c);
              uStack_bc = *puVar13;
              uStack_b8 = *(undefined4 *)(param_1 + 0x20);
              uStack_b4 = *(undefined4 *)(iVar12 + 0x1c);
              uStack_b0 = *(undefined4 *)(iVar12 + 0x20);
              uStack_c0 = 0x18d;
              uStack_a4 = 0;
              uStack_a0 = 0;
              ppuStack_c4 = CAddToSphereAction::vftable;
              local_c._0_1_ = 7;
              uStack_a8 = uStack_ac;
              cVar3 = FUN_00911760(0);
              if (cVar3 == '\0') {
                uStack_84 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
                uStack_94 = *puVar13;
                uStack_90 = *(undefined4 *)(param_1 + 0x20);
                uStack_8c = *(undefined4 *)(iVar12 + 0x1c);
                uStack_88 = *(undefined4 *)(iVar12 + 0x20);
                local_118[0] = (char *)0x2d2d2d;
                uStack_98 = 0x18d;
                uStack_7c = 0;
                uStack_78 = 0;
                ppuStack_9c = CRemoveFromSphereAction::vftable;
                uStack_74 = 0x2d2d2d;
                uStack_70 = 0;
                local_c._0_1_ = 8;
                local_100 = *(undefined4 *)(iVar12 + 0x1428);
                uStack_80 = uStack_84;
                if ((*(int *)(iVar12 + 0x142c) == *(int *)(param_1 + 0x20)) ||
                   (cVar3 = FUN_00911760(0), cVar3 == '\0')) {
                  ppuStack_9c = CDiplomaticAction::vftable;
                  ppuStack_c4 = CDiplomaticAction::vftable;
                  local_ec = CDiplomaticAction::vftable;
                  iVar14 = DAT_012588e8;
                  goto LAB_0053a2ef;
                }
                *(undefined1 *)(param_1 + 0x2b) = 1;
                ppuStack_9c = CDiplomaticAction::vftable;
              }
              else {
                *(undefined1 *)(param_1 + 0x2b) = 1;
              }
              local_ec = CDiplomaticAction::vftable;
              ppuStack_c4 = CDiplomaticAction::vftable;
            }
            else {
              *(undefined1 *)(param_1 + 0x2b) = 1;
              local_ec = CDiplomaticAction::vftable;
            }
            break;
          }
LAB_0053a2ef:
          local_100 = *(undefined4 *)(iVar12 + 0x1428);
          if (*(int *)(iVar12 + 0x142c) == *(int *)(iVar14 + 0xb60)) {
            local_100 = *(undefined4 *)(iVar12 + 0x1c);
            piVar5 = *(int **)(*(int *)(iVar12 + 0x20) * 0x10 + *(int *)(iVar14 + 0xb98));
            do {
              if (piVar5 == (int *)0x0) goto LAB_0053a33c;
              iVar12 = *piVar5;
              piVar5 = (int *)piVar5[2];
            } while (*(int *)(iVar12 + 0x88) < 1);
            *(undefined1 *)(param_1 + 0x30) = 1;
          }
        }
LAB_0053a33c:
        local_120 = (int *)((int)local_120 + 1);
      } while ((int)local_120 < iVar6);
    }
    iVar14 = DAT_012588e8;
    if ((*(int *)(DAT_012588e8 + 0xb0c) == *(int *)(param_1 + 0x1400) + 0x18) ||
       (*(int *)(DAT_012588e8 + 0xb0c) == *(int *)(param_1 + 0x1400))) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
    *(undefined1 *)(param_1 + 0x2c) = uVar4;
  }
  iVar14 = *(int *)(*(int *)(iVar14 + 0xcf8) + 8);
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(bool *)(param_1 + 0x2f) = iVar14 != 0;
  local_120 = *(int **)(param_1 + 0x149c);
  do {
    if (local_120 == (int *)0x0) break;
    iVar14 = *local_120;
    local_120 = (int *)local_120[2];
    cVar3 = FUN_004cd4c0();
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x2e) = 1;
      break;
    }
    iVar6 = *(int *)(iVar14 + 0x80);
    if ((iVar6 == 2) || (iVar6 == 1)) {
      for (piVar5 = *(int **)(iVar14 + 8); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[2]) {
        cVar3 = FUN_004bbd60(*(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar5 * 4));
        if (cVar3 != '\0') {
          local_100 = *puVar13;
          iVar14 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x20) * 4);
          iVar6 = *(int *)(iVar14 + 0x15c4);
          iVar14 = *(int *)(iVar14 + 0x15c0);
          iVar12 = FUN_004cd300(puVar13);
          if (iVar12 <= iVar6 - iVar14) {
            *(undefined1 *)(param_1 + 0x2e) = 1;
            goto LAB_0053a496;
          }
          break;
        }
      }
    }
  } while( true );
LAB_0053a496:
  piVar5 = *(int **)(param_1 + 0xe44);
  do {
    local_120 = piVar5;
    if (piVar5 == (int *)0x0) goto LAB_0053a5a2;
    local_120 = (int *)piVar5[2];
    iVar14 = *piVar5;
    if ((DAT_012586f1 != '\0') || ((0 < *(int *)(iVar14 + 0x84) && (*(int *)(iVar14 + 0x84) == 1))))
    {
      local_124 = *(int **)(*(int *)(DAT_012586dc + 0x40) + 0x140);
      iVar6 = *(int *)(param_1 + 0x15c4);
      iVar12 = *(int *)(param_1 + 0x15c0);
      FUN_00401000(((float)(*(int *)(iVar14 + 0x4c) - *(int *)(iVar14 + 0x48) >> 2) + 0.0005) *
                   1000.0);
      iVar14 = FUN_00b31c00();
      iVar14 = __alldiv((longlong)iVar14 * (longlong)(int)local_124,1000,0);
      if (iVar14 / 1000 <= iVar6 - iVar12) break;
    }
    cVar3 = FUN_004d1e40();
    puVar13 = local_11c;
    piVar5 = local_120;
  } while ((cVar3 == '\0') ||
          (iVar14 = *(int *)(param_1 + 0x15c4), iVar6 = *(int *)(param_1 + 0x15c0),
          iVar12 = FUN_004d5d10(), puVar13 = local_11c, piVar5 = local_120, iVar14 - iVar6 < iVar12)
          );
  *(undefined1 *)(param_1 + 0x2e) = 1;
  puVar13 = local_11c;
LAB_0053a5a2:
  piVar5 = *(int **)(param_1 + 0x149c);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  do {
    while( true ) {
      if (piVar5 == (int *)0x0) goto LAB_0053a60f;
      iVar14 = *piVar5;
      iVar6 = *(int *)(iVar14 + 0x80);
      piVar5 = (int *)piVar5[2];
      if (iVar6 != 3) break;
      local_11c = *(undefined4 **)(iVar14 + 0x84);
      FUN_00424810(*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x104) / 1000 + -1);
      if ((int)local_11c < *(int *)(DAT_012588e8 + 0xb0c)) goto LAB_0053a60b;
    }
  } while ((iVar6 != 2) || (cVar3 = FUN_004cbe20(puVar13), cVar3 == '\0'));
LAB_0053a60b:
  *(undefined1 *)(param_1 + 0x2d) = 1;
LAB_0053a60f:
  local_c = 9;
  FUN_004a2b00(*local_10c,local_10c);
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_10c);
}

