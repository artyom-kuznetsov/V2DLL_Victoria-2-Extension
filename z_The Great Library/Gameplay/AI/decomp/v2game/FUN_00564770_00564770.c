// FUN_00564770 @ 00564770 body=[[00564770, 0056481c] [00564820, 00564bc7] [00564bcb, 00564bf6] [00564bfa, 00564c2a] [00564c2e, 00564cd7] [00564cdb, 005652ec] [005652f0, 00565852] [00565856, 00565881] [00565885, 005658b5] [005658b9, 00565906]]


/* WARNING: Removing unreachable block (ram,0x005650a8) */

void FUN_00564770(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *unaff_EDI;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined **local_2c8 [48];
  undefined **local_208 [18];
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [8];
  uint local_198 [4];
  undefined4 local_188;
  uint local_184;
  uint local_17c;
  undefined4 local_16c;
  uint local_168;
  uint local_160 [4];
  undefined4 local_150;
  uint local_14c;
  uint local_144 [4];
  undefined4 local_134;
  uint local_130;
  undefined4 local_124;
  int local_11c;
  int local_114;
  int local_10c;
  int local_104;
  uint local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  uint local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  uint local_94;
  int local_8c;
  longlong local_88;
  float local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  float local_4c;
  int local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined1 local_35;
  int local_34;
  int local_30;
  float local_2c;
  float local_24;
  uint local_20;
  float *local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8ee1c;
  local_10 = ExceptionList;
  local_18 = 0;
  if ((unaff_EDI[0x6a] == 0) && (param_1[0x17] < 1)) {
LAB_00564844:
    *param_2 = -100000;
    ExceptionList = local_10;
    return;
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_8 = 0;
  cVar1 = FUN_00416db0();
  local_35 = cVar1 == '\0';
  local_8 = 0xffffffff;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4);
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  if ((bool)local_35) goto LAB_00564844;
  local_3c = DAT_012588e8;
  local_44 = DAT_012586dc;
  uVar15 = *(uint *)(*(int *)(DAT_012586dc + 0x60) + 8);
  local_88 = __alldiv(uVar15 << 0x1e,
                      (((int)uVar15 >> 0x1f) << 0xf | uVar15 >> 0x11) << 0xf |
                      (uVar15 & 0x1ffff) >> 2,0x1f40000,0);
  local_a0 = *param_3;
  plVar2 = (longlong *)FUN_0096a200(local_1a8);
  local_1c = (float *)(((float)((float10)*plVar2 * (float10)3.0517578125e-05) + 0.0005) * 1000.0);
  FUN_00401000(local_1c);
  local_48 = FUN_00b31c00();
  local_48 = 1000 - local_48;
  if (0 < param_1[0x15]) {
    local_40 = unaff_EDI[0x62];
    iVar4 = -100000;
    if (*(int *)(local_40 + 0x84) < 1) {
      iVar4 = local_18;
    }
    local_18 = iVar4;
    if ((local_40 != 0) && (*(int *)(local_40 + 0x68) == 0)) {
      local_18 = local_18 + -100000;
    }
    if (local_18 < 0) goto LAB_005658f0;
    local_18 = (*(int *)(local_40 + 0x68) / 2) * 1000 + 2000;
    local_60 = *(int **)(local_40 + 0x48);
    local_34 = 0;
    for (; (*(int **)(local_40 + 0x48) <= local_60 && (local_60 < *(int **)(local_40 + 0x4c)));
        local_60 = local_60 + 1) {
      local_1c = *(float **)(*(int *)(local_3c + 0xacc) + *local_60 * 4);
      if (DAT_0125ce80 == 0) {
        local_7c = (float)FUN_00aae9af(0x3c);
        local_8 = 1;
        if (local_7c == 0.0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004dada0();
        }
        local_8 = 0xffffffff;
        FUN_004dc340(uVar3);
      }
      if (*(char *)(*(int *)(DAT_0125ce80 + 0x34) + 0x131) == '\0') {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)((int)local_1c + 0x118) +
                        *(int *)(*(int *)(DAT_0125ce80 + 0x34) + 0x134) * 4);
      }
      local_a0 = *param_3;
      iVar13 = *(int *)(iVar4 + 0x18);
      iVar14 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4) + 0xbcc);
      local_24 = (float)(*(int *)(iVar4 + 0x20) / 1000 + 1);
      if (((*(char *)(*(int *)(iVar13 + 0x58) + *(int *)(iVar14 + 0x2fc)) != '\0') ||
          (*(char *)(iVar13 + 0x130) != '\0')) &&
         (((*(char *)(iVar13 + 0x130) != '\0' && (local_24 == 1.4013e-45)) ||
          ((int)local_24 <= *(int *)(*(int *)(iVar14 + 8) + *(int *)(iVar13 + 0x58) * 4))))) {
        local_34 = local_34 + 1;
      }
    }
    if (local_34 == 0) {
      local_18 = -100000;
    }
    if (DAT_012586d7 != '\0') {
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = local_fc[0] & 0xffffff00;
      FUN_00409350("national_focus.cpp",0x12);
      local_8 = 2;
      local_1c = (float *)(**(code **)(*unaff_EDI + 0x1c))(local_160);
      local_8._0_1_ = 3;
      puVar5 = (undefined4 *)FUN_0055dd40();
      local_8._0_1_ = 4;
      FUN_004015b0(local_fc,0x285,0x10002);
      local_8._0_1_ = 5;
      local_24 = (float)local_18 / 1000.0;
      uVar3 = FUN_00987d20();
      if (0xf < (uint)puVar5[5]) {
        puVar5 = (undefined4 *)*puVar5;
      }
      uVar6 = FUN_00418e30();
      uVar3 = FUN_00418e30(uVar6,&DAT_00df12c8,uVar3,puVar5);
      uVar6 = FUN_00418e30();
      FUN_00418e30(uVar6,&DAT_00df9638,uVar3,local_24);
      uVar3 = FUN_0048b410();
      FUN_00401280(uVar3);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00987ac0(local_208);
      local_208[0] = std::ios_base::vftable;
      FUN_00aad52d(local_208);
      if (0xf < local_168) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_17c);
      }
      local_168 = 0xf;
      local_16c = 0;
      local_17c = local_17c & 0xffffff00;
      if (0xf < local_14c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_160[0]);
      }
      local_8 = 0xffffffff;
      local_14c = 0xf;
      local_150 = 0;
      local_160[0] = local_160[0] & 0xffffff00;
      if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_fc[0]);
      }
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = local_fc[0] & 0xffffff00;
    }
  }
  local_34 = 0;
  if (0 < (int)(param_1[0x20] - param_1[0x1f] & 0xfffffffcU)) {
    do {
      local_1c = (float *)(local_34 * 4);
      if (0 < *(int *)(param_1[0x1f] + (int)local_1c)) {
        if (DAT_0131bb34 == 0) {
          local_2c = (float)FUN_00aae9af(0x188);
          local_8 = 6;
          if (local_2c == 0.0) {
            iVar4 = 0;
          }
          else {
            iVar4 = FUN_0041a160();
          }
          iVar13 = DAT_0131bb34;
          local_8 = 7;
          local_2c = 0.0;
          if ((iVar4 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(iVar13);
          }
          local_8 = 0xffffffff;
          DAT_0131bb34 = iVar4;
        }
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < local_34) {
          local_24 = (float)FUN_0096bb70();
        }
        else {
          local_24 = *(float *)((int)local_1c + *(int *)(DAT_0131bb34 + 0xc));
        }
        if (*(char *)((int)local_24 + 0x42) == '\0') {
          if (*(char *)((int)local_24 + 0x3db) == '\0') {
            if (*(char *)((int)local_24 + 0x41) != '\0') {
              uVar15 = unaff_EDI[0x6a];
              uVar7 = unaff_EDI[0x6f];
              local_78._4_4_ = uVar7 >> 0x11;
              local_78._0_4_ = uVar7 << 0xf;
              if ((uVar15 >> 0x11 != 0) || ((uVar15 & 0x1ffff) != 0)) {
                local_78 = __alldiv(uVar7 << 0x1e,local_78._4_4_ << 0xf | (uVar7 & 0x1ffff) >> 2,
                                    uVar15 << 0xf,uVar15 >> 0x11);
              }
              uVar15 = *(uint *)(*(int *)(local_44 + 0x50) + 8);
              iVar4 = *(int *)(*(int *)(local_44 + 0x50) + 0xc);
              local_1c = *(float **)(*(int *)(local_44 + 0x60) + 0xc);
              lVar16 = __allmul(uVar15,iVar4,0x1f40000,0);
              local_20 = (uint)(lVar16 >> 0xf) >> 0xf |
                         (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11;
              lVar16 = __allmul(uVar15 - (uint)local_78,
                                (iVar4 - local_78._4_4_) - (uint)(uVar15 < (uint)local_78),0x1f40000
                                ,0);
              uVar15 = local_20;
              uVar7 = (uint)(lVar16 >> 0xf) >> 0xf |
                      (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11;
              if (local_20 == 0) {
                iVar4 = -1;
              }
              else {
                if (0x39580d < uVar7 + 0x189373) {
                  local_11c = (int)local_20 >> 0x1f;
                  uVar18 = __allmul(uVar7,(int)uVar7 >> 0x1f,1000,0);
                  iVar4 = local_11c;
                  goto LAB_005651ff;
                }
                iVar4 = (int)(uVar7 * 1000) / (int)local_20;
              }
              goto LAB_0056520c;
            }
            if (*(char *)((int)local_24 + 0x50) == '\0') {
              if (*(char *)((int)local_24 + 0x3da) != '\0') {
                iVar4 = *(int *)(DAT_012587e4 + 4);
                uVar15 = *(uint *)(*(int *)(*(int *)(iVar4 + unaff_EDI[0x4b] * 4) + 0x1338) +
                                  *(int *)((int)local_24 + 0x28) * 4);
                local_58 = unaff_EDI[0x4a];
                uVar7 = *(uint *)(*(int *)(iVar4 + unaff_EDI[0x4b] * 4) + 0x12e8);
                local_68._4_4_ = uVar15 >> 0x11;
                local_68._0_4_ = uVar15 << 0xf;
                if ((uVar7 >> 0x11 != 0) || ((uVar7 & 0x1ffff) != 0)) {
                  local_58 = unaff_EDI[0x4a];
                  uVar7 = *(uint *)(*(int *)(iVar4 + unaff_EDI[0x4b] * 4) + 0x12e8);
                  local_68 = __alldiv(uVar15 << 0x1e,local_68._4_4_ << 0xf | (uVar15 & 0x1ffff) >> 2
                                      ,uVar7 << 0xf,uVar7 >> 0x11);
                }
                uVar15 = *(uint *)(*(int *)(local_44 + 0x60) + 0x18);
                lVar16 = __alldiv(uVar15 << 0x1e,
                                  (((int)uVar15 >> 0x1f) << 0xf | uVar15 >> 0x11) << 0xf |
                                  (uVar15 & 0x1ffff) >> 2,0x1f40000,0);
                local_2c = (float)((float10)local_88 * (float10)3.0517578125e-05);
                lVar17 = __allmul(lVar16,0x1f40000,0);
                local_24 = (float)((uint)(lVar17 >> 0xf) >> 0xf |
                                  (int)((ulonglong)(lVar17 >> 0xf) >> 0x20) << 0x11);
                lVar16 = __allmul(lVar16 - local_68,0x1f40000,0);
                fVar9 = local_24;
                uVar15 = (uint)(lVar16 >> 0xf) >> 0xf |
                         (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11;
                if (local_24 == 0.0) {
                  iVar4 = -1;
                }
                else if (uVar15 + 0x189373 < 0x39580e) {
                  iVar4 = (int)(uVar15 * 1000) / (int)local_24;
                }
                else {
                  local_9c = (int)local_24 >> 0x1f;
                  uVar18 = __allmul(uVar15,(int)uVar15 >> 0x1f,1000,0);
                  iVar4 = __alldiv(uVar18,fVar9,local_9c);
                  local_54 = iVar4 >> 0x1f;
                }
                FUN_00401000((local_2c + 0.0005) * 1000.0);
                iVar13 = FUN_00b31c00();
                iVar4 = __alldiv((longlong)iVar13 * (longlong)iVar4,1000,0);
                local_18 = __alldiv((longlong)iVar4 * (longlong)local_48,1000,0);
                iVar4 = DAT_012587e4;
                local_58 = *param_3;
                if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_3[1] * 4) + 0x12d0) ==
                    '\0') {
                  local_18 = local_18 + -100000;
                }
                puVar8 = (uint *)FUN_00408d50(0x3e99999a);
                puVar12 = (uint *)FUN_0096ba50(local_1a0);
                if (((int)puVar12[1] <= (int)puVar8[1]) &&
                   (((int)puVar12[1] < (int)puVar8[1] || (*puVar12 < *puVar8)))) {
                  local_18 = local_18 + -100000;
                }
                if (0 < *(int *)(unaff_EDI[0x62] + 0x84)) {
                  local_18 = local_18 + -100000;
                }
                local_58 = unaff_EDI[0x4a];
                if ((*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                               *(int *)(*(int *)(*(int *)(iVar4 + 4) +
                                                                unaff_EDI[0x4b] * 4) + 0xbe4) * 4) +
                                      0x188) + 0x68) < 1) &&
                   (local_58 = unaff_EDI[0x4a],
                   *(int *)(*(int *)(*(int *)(iVar4 + 4) + unaff_EDI[0x4b] * 4) + 0xbe4) !=
                   unaff_EDI[0x16])) {
                  local_18 = local_18 + -100000;
                }
              }
            }
            else if (*(int *)(unaff_EDI[0x62] + 0x68) != 0) {
              local_3c = 0;
              local_40 = *(uint *)(unaff_EDI[0x62] + 0x60);
              while (uVar15 = local_40, uVar15 != 0) {
                local_40 = *(uint *)(uVar15 + 0x224);
                local_20 = uVar15;
                if (((0 < *(int *)(uVar15 + 0x20)) && (*(int *)(uVar15 + 0x184) < 0xb)) &&
                   (*(char *)(uVar15 + 0x188) == '\0')) {
                  iVar4 = *(int *)(uVar15 + 0x18);
                  iVar13 = *(int *)(*(int *)(iVar4 + 300) + 0x108);
                  fVar9 = (float)(*(int *)(*(int *)(iVar4 + 300) + 0x10c) - iVar13 >> 5);
                  iVar14 = 0;
                  local_8c = iVar4;
                  local_2c = fVar9;
                  if (0 < (int)fVar9) {
                    local_1c = (float *)(iVar13 + 8);
                    do {
                      if (*local_1c == local_24) {
                        local_4c = *(float *)(iVar4 + 300);
                        piVar10 = (int *)(*(int *)(uVar15 + 0x128) * 1000);
                        iVar4 = *(int *)(*(int *)(uVar15 + 0x13c) + iVar14 * 4);
                        iVar13 = iVar4 * 1000;
                        if (piVar10 == (int *)0x0) {
                          iVar4 = -1;
                        }
                        else if (iVar13 + 0x189373U < 0x39580e) {
                          iVar4 = (iVar4 * 1000000) / (int)piVar10;
                        }
                        else {
                          local_10c = iVar13 >> 0x1f;
                          local_5c = (int)piVar10 >> 0x1f;
                          local_60 = piVar10;
                          uVar18 = __allmul(iVar13,local_10c,1000,0);
                          iVar4 = __alldiv(uVar18,local_60,local_5c);
                          local_54 = iVar4 >> 0x1f;
                        }
                        iVar13 = *(int *)(*(int *)((int)local_4c + 0x118) + 4 + iVar14 * 8);
                        local_4c = (float)((float10)local_88 * (float10)3.0517578125e-05);
                        FUN_00401000((local_4c + 0.0005) * 1000.0);
                        iVar11 = FUN_00b31c00();
                        iVar4 = __alldiv((longlong)iVar11 * (longlong)(iVar13 - iVar4),1000,0);
                        local_3c = local_3c + iVar4;
                        fVar9 = local_2c;
                        iVar4 = local_8c;
                        uVar15 = local_20;
                      }
                      iVar14 = iVar14 + 1;
                      local_1c = local_1c + 8;
                    } while (iVar14 < (int)fVar9);
                  }
                }
              }
              local_40 = uVar15;
              local_18 = __alldiv((longlong)(local_3c + local_18) * (longlong)local_48,1000,0);
              if (0 < *(int *)(unaff_EDI[0x62] + 0x84)) {
                local_18 = local_18 + -100000;
              }
            }
          }
          else {
            iVar4 = unaff_EDI[0x7e];
            local_94 = (uint)unaff_EDI[0x6a] >> 0x11;
            local_98 = unaff_EDI[0x6a] << 0xf;
            if (DAT_0131bb34 == 0) {
              local_2c = (float)FUN_00aae9af(0x188);
              local_8 = 8;
              if (local_2c == 0.0) {
                uVar3 = 0;
              }
              else {
                uVar3 = FUN_0041a160();
              }
              local_8 = 0xffffffff;
              FUN_00423700(uVar3);
            }
            uVar7 = *(uint *)(iVar4 + *(int *)(DAT_0131bb34 + 0x17c) * 4);
            local_20 = *(uint *)(DAT_012587e4 + 4);
            local_30 = unaff_EDI[0x4a];
            uVar15 = *(int *)(*(int *)(*(int *)(local_20 + unaff_EDI[0x4b] * 4) + 0xbcc) + 0x60) +
                     1000 + *(int *)(*(int *)(*(int *)(local_20 + unaff_EDI[0x4b] * 4) + 0xa60) +
                                    0x380);
            uVar18 = __alldiv(uVar15 * 0x40000000,
                              (((int)uVar15 >> 0x1f) << 0xf | uVar15 >> 0x11) << 0xf |
                              (uVar15 & 0x1ffff) >> 2,0x1f40000,0);
            local_124 = (undefined4)((ulonglong)uVar18 >> 0x20);
            uVar19 = __alldiv(uVar7 << 0x1e,uVar7 >> 2,local_98,local_94);
            lVar16 = __allmul(uVar19,(int)uVar18,local_124);
            local_30 = unaff_EDI[0x4a];
            local_a8 = (uint)(lVar16 >> 0xf);
            iVar13 = (int)((ulonglong)(lVar16 >> 0xf) >> 0x20);
            puVar8 = (uint *)FUN_00532ea0(*(undefined4 *)(local_20 + unaff_EDI[0x4b] * 4),local_1c0)
            ;
            uVar15 = *puVar8 - local_a8;
            local_104 = (puVar8[1] - iVar13) - (uint)(*puVar8 < local_a8);
            local_30 = unaff_EDI[0x4a];
            puVar5 = (undefined4 *)
                     FUN_00532ea0(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + unaff_EDI[0x4b] * 4),
                                  local_1b8);
            uVar18 = __alldiv(uVar15 * 0x8000,local_104 << 0xf | uVar15 >> 0x11,*puVar5,puVar5[1]);
            iVar4 = *(int *)(*(int *)(local_44 + 0x60) + 4);
            lVar16 = __allmul(uVar18,0x1f40000,0);
            local_18 = __alldiv((longlong)
                                (int)((uint)(lVar16 >> 0xf) >> 0xf |
                                     (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11) *
                                (longlong)iVar4,1000,0);
            lVar16 = FUN_00b31c36();
            if ((CONCAT44(iVar13,local_a8) < lVar16) &&
               (local_30 = unaff_EDI[0x4a],
               *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + unaff_EDI[0x4b] * 4) + 0xbe4) ==
               unaff_EDI[0x16])) {
              uVar18 = __allmul(local_18,local_18 >> 0x1f,10000,0);
              local_18 = __alldiv(uVar18,1000,0);
            }
          }
        }
        else {
          local_20 = *(int *)(DAT_012587e4 + 4);
          uVar15 = *(uint *)(*(int *)(*(int *)(local_20 + unaff_EDI[0x4b] * 4) + 0x1338) +
                            *(int *)((int)local_24 + 0x28) * 4);
          local_30 = unaff_EDI[0x4a];
          uVar7 = *(uint *)(*(int *)(local_20 + unaff_EDI[0x4b] * 4) + 0x12e8);
          local_70._4_4_ = uVar15 >> 0x11;
          local_70._0_4_ = uVar15 << 0xf;
          if ((uVar7 >> 0x11 != 0) || ((uVar7 & 0x1ffff) != 0)) {
            local_30 = unaff_EDI[0x4a];
            uVar7 = *(uint *)(*(int *)(local_20 + unaff_EDI[0x4b] * 4) + 0x12e8);
            local_70 = __alldiv(uVar15 << 0x1e,local_70._4_4_ << 0xf | (uVar15 & 0x1ffff) >> 2,
                                uVar7 << 0xf,uVar7 >> 0x11);
          }
          local_1c = *(float **)(local_44 + 0x60);
          uVar15 = *(uint *)((int)local_1c + 0x14);
          lVar16 = __alldiv(uVar15 << 0x1e,
                            (((int)uVar15 >> 0x1f) << 0xf | uVar15 >> 0x11) << 0xf |
                            (uVar15 & 0x1ffff) >> 2,0x1f40000,0);
          local_30 = *param_3;
          iVar4 = *(int *)(*(int *)(local_20 + param_3[1] * 4) + 0xe40);
          if (iVar4 == 2) {
            lVar17 = FUN_00b31c36();
            lVar16 = lVar16 + lVar17;
          }
          else if (iVar4 == 5) {
            lVar17 = FUN_00b31c36();
            lVar16 = lVar16 - lVar17;
          }
          local_1c = *(float **)((int)local_1c + 0x10);
          lVar17 = __allmul(lVar16,0x1f40000,0);
          local_20 = (uint)(lVar17 >> 0xf) >> 0xf |
                     (int)((ulonglong)(lVar17 >> 0xf) >> 0x20) << 0x11;
          lVar16 = __allmul(lVar16 - local_70,0x1f40000,0);
          uVar15 = local_20;
          uVar7 = (uint)(lVar16 >> 0xf) >> 0xf | (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11;
          if (local_20 == 0) {
            iVar4 = -1;
          }
          else if (uVar7 + 0x189373 < 0x39580e) {
            iVar4 = (int)(uVar7 * 1000) / (int)local_20;
          }
          else {
            local_114 = (int)local_20 >> 0x1f;
            uVar18 = __allmul(uVar7,(int)uVar7 >> 0x1f,1000,0);
            iVar4 = local_114;
LAB_005651ff:
            iVar4 = __alldiv(uVar18,uVar15,iVar4);
            local_2c = (float)(iVar4 >> 0x1f);
          }
LAB_0056520c:
          iVar4 = __alldiv((longlong)iVar4 * (longlong)(int)local_1c,1000,0);
          local_18 = __alldiv((longlong)local_48 * (longlong)iVar4,1000,0);
          if (0 < *(int *)(unaff_EDI[0x62] + 0x84)) {
            local_18 = local_18 + -100000;
          }
        }
        if (DAT_012586d7 != '\0') {
          local_cc = 0xf;
          local_d0 = 0;
          local_e0[0] = local_e0[0] & 0xffffff00;
          FUN_00409350("national_focus.cpp",0x12);
          local_8 = 9;
          local_2c = (float)(**(code **)(*unaff_EDI + 0x1c))(local_144);
          local_8._0_1_ = 10;
          (**(code **)(*param_1 + 0x18))(local_198);
          local_8._0_1_ = 0xb;
          FUN_004015b0(local_e0,0x2f6);
          local_8._0_1_ = 0xc;
          local_7c = (float)local_18 / 1000.0;
          uVar3 = FUN_00987d20();
          uVar3 = FUN_00418e30(uVar3);
          uVar3 = FUN_00418e30(uVar3,&DAT_00df12c8);
          uVar3 = FUN_00418e30(uVar3);
          FUN_00418e30(uVar3,&DAT_00df9638);
          uVar3 = FUN_0048b410();
          FUN_00401280(uVar3);
          local_8 = CONCAT31(local_8._1_3_,0xb);
          FUN_00987ac0(local_2c8);
          local_2c8[0] = std::ios_base::vftable;
          FUN_00aad52d(local_2c8);
          if (0xf < local_184) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_198[0]);
          }
          local_184 = 0xf;
          local_188 = 0;
          local_198[0] = local_198[0] & 0xffffff00;
          if (0xf < local_130) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_144[0]);
          }
          local_8 = 0xffffffff;
          local_130 = 0xf;
          local_134 = 0;
          local_144[0] = local_144[0] & 0xffffff00;
          if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_e0[0]);
          }
          local_cc = 0xf;
          local_d0 = 0;
          local_e0[0] = local_e0[0] & 0xffffff00;
        }
      }
      local_34 = local_34 + 1;
    } while (local_34 < param_1[0x20] - param_1[0x1f] >> 2);
  }
LAB_005658f0:
  *param_2 = local_18;
  ExceptionList = local_10;
  return;
}

