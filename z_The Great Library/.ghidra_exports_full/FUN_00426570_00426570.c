// FUN_00426570 @ 00426570 body=[[00426570, 00426b21] [00426b25, 00426b6b] [00426b6f, 00426ba7] [00426bab, 00426be3] [00426be7, 00426c1f] [00426c23, 00426c5b] [00426c5f, 00426c97] [00426c9b, 00426cd3] [00426cd7, 00426d14] [00426d18, 00426e62] [00426e6b, 004277f1]]


undefined4 FUN_00426570(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  int **ppiVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 *puVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_360 [104];
  undefined4 uStack_2f8;
  undefined1 *puStack_2f4;
  uint *puStack_2f0;
  undefined4 local_2d0;
  int local_2cc;
  int *local_2c0 [5];
  uint local_2ac;
  uint *local_2a4;
  int *local_29c;
  int *piStack_298;
  uint local_294;
  undefined4 uStack_284;
  uint uStack_280;
  undefined1 local_278 [48];
  undefined1 local_248;
  int **local_244;
  int **local_240;
  int **local_23c;
  int **local_234;
  int **local_230;
  int **local_22c;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_214;
  uint local_210;
  uint local_20c;
  int local_204;
  int local_1f4;
  undefined1 local_1e4;
  undefined1 local_1e0;
  uint *local_1d4;
  uint local_1cc;
  undefined4 uStack_1bc;
  uint uStack_1b8;
  uint uStack_1b0;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint uStack_194;
  undefined4 uStack_184;
  uint uStack_180;
  uint uStack_178;
  undefined4 uStack_168;
  uint uStack_164;
  uint uStack_15c;
  undefined4 uStack_14c;
  uint uStack_148;
  uint uStack_140;
  undefined4 uStack_130;
  uint uStack_12c;
  uint local_124 [4];
  undefined4 uStack_114;
  uint uStack_110;
  uint uStack_ec;
  undefined4 uStack_dc;
  uint uStack_d8;
  uint local_d0 [4];
  undefined4 uStack_c0;
  uint uStack_bc;
  undefined1 local_7c [36];
  uint uStack_58;
  uint uStack_54;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar3 = DAT_012586dc;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb860e;
  local_14 = ExceptionList;
  local_2ac = 0;
  local_2c0[0] = *(int **)(*(int *)(DAT_012586dc + 0x30) + 0x4d8);
  iVar17 = (*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) >> 3) +
           (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 3);
  ExceptionList = &local_14;
  iVar6 = FUN_00425a40();
  iVar7 = *(int *)(param_1 + 0x30);
  iVar11 = *(int *)(param_1 + 0x2c);
  if (iVar11 == iVar7) {
LAB_004265f0:
    iVar17 = iVar17 + 1;
  }
  else {
    do {
      if (*(int *)(iVar11 + 4) == *(int *)(iVar6 + 4)) break;
      iVar11 = iVar11 + 8;
    } while (iVar11 != iVar7);
    if (iVar11 == iVar7) goto LAB_004265f0;
  }
  iVar6 = FUN_00425ac0();
  iVar7 = *(int *)(param_1 + 0x40);
  iVar11 = *(int *)(param_1 + 0x3c);
  if (iVar11 == iVar7) {
LAB_00426620:
    iVar17 = iVar17 + 1;
  }
  else {
    do {
      if (*(int *)(iVar11 + 4) == *(int *)(iVar6 + 4)) break;
      iVar11 = iVar11 + 8;
    } while (iVar11 != iVar7);
    if (iVar11 == iVar7) goto LAB_00426620;
  }
  local_2a4 = *(uint **)(*(int *)(iVar3 + 0x30) + 0x4fc);
  iVar7 = iVar17 * 1000;
  iVar11 = (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 3) * 1000 + iVar7;
  if (iVar11 == 0) {
    iVar11 = -1;
  }
  else if (iVar7 + 0x189373U < 0x39580e) {
    iVar11 = (iVar17 * 1000000) / iVar11;
  }
  else {
    _puStack_2f0 = (longlong)iVar7;
    puStack_2f4 = (undefined1 *)0x426683;
    _puStack_2f0 = __allmul();
    puStack_2f4 = (undefined1 *)0x426690;
    iVar11 = __alldiv();
    local_2cc = iVar11 >> 0x1f;
  }
  _puStack_2f0 = (longlong)iVar11 * (longlong)(int)local_2a4;
  puStack_2f4 = (undefined1 *)0x4266ab;
  iVar7 = __alldiv();
  _puStack_2f0 = (longlong)iVar7 * (longlong)(int)local_2c0[0];
  puStack_2f4 = (undefined1 *)0x4266bc;
  iVar7 = __alldiv();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar7;
  if (*(int *)(param_1 + 0x10) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else if (100000 < *(int *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0x10) = 100000;
  }
  cVar5 = FUN_00429b30();
  if (cVar5 != '\0') {
    if (*(char *)(param_1 + 0xb0) == '\0') {
      if (*(char *)(DAT_012588e8 + 0xd1c) != '\0') {
        FUN_0046a320();
        _puStack_2f0 = CONCAT44(0x426721,puStack_2f0);
        FUN_00457b00();
      }
      iVar7 = *(int *)(DAT_012588e8 + 0xacc);
      local_29c = *(int **)(*(int *)(iVar7 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                              *(int *)(param_1 + 0x18) * 4) + 0xbe4)
                                             * 4) + 0x16c);
      local_2c0[0] = *(int **)(*(int *)(iVar7 + *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                                 *(int *)(param_1 + 0x20) * 4) +
                                                        0xbe4) * 4) + 0x16c);
      piVar12 = *(int **)(*(int *)(iVar7 + *(int *)(param_1 + 8) * 4) + 0x188);
      local_2c0[2] = (int *)0x0;
      if ((piVar12 != (int *)0x0) && (cVar5 = (**(code **)(*piVar12 + 0x24))(), cVar5 != '\0')) {
        if ((piVar12[0x13] - piVar12[0x12] & 0xfffffffcU) == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)piVar12[0x12];
        }
        local_2c0[2] = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar7 * 4) + 0x16c);
      }
      piVar12 = *(int **)(DAT_012588e8 + 0xbe0);
      local_1d4 = (uint *)(DAT_012588e8 + 0xbe0);
      uVar20 = local_2ac;
      while (((int *)*local_1d4 <= piVar12 && (piVar12 < (int *)local_1d4[1]))) {
        local_2c0[3] = (int *)*piVar12;
        local_2a4 = (uint *)((int)local_2c0[3] + 0x1c);
        piVar18 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                    *(int *)((int)local_2c0[3] + 0xbe4) * 4) + 0x16c);
        local_2ac = *local_2a4;
        piVar12 = piVar12 + 1;
        piStack_298 = piVar18;
        if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)((int)local_2c0[3] + 0x20) * 4)
                     + 3000) == '\0') {
          pbVar8 = (byte *)(**(code **)(*piVar18 + 0x2c))();
          local_c = 0;
          uVar14 = uVar20 | 1;
          if (0xf < *(uint *)(pbVar8 + 0x14)) {
            pbVar8 = *(byte **)pbVar8;
          }
          pcVar13 = "europe";
          do {
            bVar1 = *pbVar8;
            bVar21 = bVar1 < (byte)*pcVar13;
            if (bVar1 != *pcVar13) {
LAB_004268b0:
              iVar7 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_004268b5;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar21 = bVar1 < (byte)pcVar13[1];
            if (bVar1 != pcVar13[1]) goto LAB_004268b0;
            pbVar8 = pbVar8 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_004268b5:
          piVar19 = local_2c0[2];
          local_2ac = uVar14;
          if (iVar7 == 0) goto LAB_00426af8;
          pbVar8 = (byte *)(**(code **)(*piVar18 + 0x2c))();
          local_c = 1;
          local_2ac = uVar20 | 3;
          if (0xf < *(uint *)(pbVar8 + 0x14)) {
            pbVar8 = *(byte **)pbVar8;
          }
          pcVar13 = "south_america";
          do {
            bVar1 = *pbVar8;
            bVar21 = bVar1 < (byte)*pcVar13;
            if (bVar1 != *pcVar13) {
LAB_00426910:
              iVar7 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_00426915;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar21 = bVar1 < (byte)pcVar13[1];
            if (bVar1 != pcVar13[1]) goto LAB_00426910;
            pbVar8 = pbVar8 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00426915:
          uVar15 = local_2ac;
          piVar18 = local_2c0[0];
          piVar19 = local_2c0[2];
          if (iVar7 != 0) goto LAB_004269fd;
          pbVar8 = (byte *)(**(code **)(*local_29c + 0x2c))();
          piVar18 = local_2c0[0];
          local_c = 2;
          uVar14 = uVar20 | 7;
          if (0xf < *(uint *)(pbVar8 + 0x14)) {
            pbVar8 = *(byte **)pbVar8;
          }
          pcVar13 = "north_america";
          do {
            bVar1 = *pbVar8;
            bVar21 = bVar1 < (byte)*pcVar13;
            if (bVar1 != *pcVar13) {
LAB_00426970:
              iVar7 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
              goto LAB_00426975;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar8[1];
            bVar21 = bVar1 < (byte)pcVar13[1];
            if (bVar1 != pcVar13[1]) goto LAB_00426970;
            pbVar8 = pbVar8 + 2;
            pcVar13 = pcVar13 + 2;
          } while (bVar1 != 0);
          iVar7 = 0;
LAB_00426975:
          piVar19 = local_2c0[2];
          local_2ac = uVar14;
          if (iVar7 == 0) {
LAB_00426af8:
            bVar21 = true;
          }
          else {
            (**(code **)(*local_2c0[0] + 0x2c))();
            local_c = 3;
            uVar14 = uVar20 | 0xf;
            local_2ac = uVar14;
            cVar5 = FUN_0040b360();
            piVar19 = local_2c0[2];
            if (cVar5 != '\0') goto LAB_00426af8;
            uVar15 = uVar14;
            if (local_2c0[2] != (int *)0x0) {
              (**(code **)(*local_2c0[2] + 0x2c))();
              local_c = 4;
              uVar14 = uVar20 | 0x1f;
              local_2ac = uVar14;
              cVar5 = FUN_0040b360();
              uVar15 = uVar14;
              if (cVar5 != '\0') goto LAB_00426af8;
            }
LAB_004269fd:
            pbVar8 = (byte *)(**(code **)(*piStack_298 + 0x2c))();
            local_c = 5;
            uVar14 = uVar15 | 0x20;
            if (0xf < *(uint *)(pbVar8 + 0x14)) {
              pbVar8 = *(byte **)pbVar8;
            }
            pcVar13 = "north_america";
            do {
              bVar1 = *pbVar8;
              bVar21 = bVar1 < (byte)*pcVar13;
              if (bVar1 != *pcVar13) {
LAB_00426a50:
                iVar7 = (1 - (uint)bVar21) - (uint)(bVar21 != 0);
                goto LAB_00426a55;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar8[1];
              bVar21 = bVar1 < (byte)pcVar13[1];
              if (bVar1 != pcVar13[1]) goto LAB_00426a50;
              pbVar8 = pbVar8 + 2;
              pcVar13 = pcVar13 + 2;
            } while (bVar1 != 0);
            iVar7 = 0;
LAB_00426a55:
            local_2ac = uVar14;
            if (iVar7 != 0) goto LAB_00426aed;
            (**(code **)(*local_29c + 0x2c))();
            local_c = 6;
            uVar14 = uVar15 | 0x60;
            local_2ac = uVar14;
            cVar5 = FUN_0040b360();
            if (cVar5 != '\0') goto LAB_00426af8;
            (**(code **)(*piVar18 + 0x2c))();
            local_c = 7;
            uVar14 = uVar15 | 0xe0;
            local_2ac = uVar14;
            cVar5 = FUN_0040b360();
            if (cVar5 != '\0') goto LAB_00426af8;
            if (piVar19 != (int *)0x0) {
              (**(code **)(*piVar19 + 0x2c))();
              uVar14 = uVar15 | 0x1e0;
              cVar5 = FUN_0040b360();
              if (cVar5 != '\0') goto LAB_00426af8;
            }
LAB_00426aed:
            bVar21 = false;
          }
          puVar16 = local_2a4;
          if ((uVar14 & 0x100) != 0) {
            uVar14 = uVar14 & 0xfffffeff;
            if (0xf < uStack_180) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_180 = 0xf;
            uStack_184 = 0;
            uStack_194 = uStack_194 & 0xffffff00;
          }
          if ((char)uVar14 < '\0') {
            uVar14 = uVar14 & 0xffffff7f;
            if (0xf < uStack_12c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_12c = 0xf;
            uStack_130 = 0;
            uStack_140 = uStack_140 & 0xffffff00;
          }
          if ((uVar14 & 0x40) != 0) {
            uVar14 = uVar14 & 0xffffffbf;
            if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_164 = 0xf;
            uStack_168 = 0;
            uStack_178 = uStack_178 & 0xffffff00;
          }
          if ((uVar14 & 0x20) != 0) {
            uVar14 = uVar14 & 0xffffffdf;
            if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_d8 = 0xf;
            uStack_dc = 0;
            uStack_ec = uStack_ec & 0xffffff00;
          }
          if ((uVar14 & 0x10) != 0) {
            uVar14 = uVar14 & 0xffffffef;
            if (0xf < uStack_148) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_148 = 0xf;
            uStack_14c = 0;
            uStack_15c = uStack_15c & 0xffffff00;
          }
          if ((uVar14 & 8) != 0) {
            uVar14 = uVar14 & 0xfffffff7;
            if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_bc = 0xf;
            uStack_c0 = 0;
            local_d0[0] = local_d0[0] & 0xffffff00;
          }
          if ((uVar14 & 4) != 0) {
            uVar14 = uVar14 & 0xfffffffb;
            if (0xf < uStack_110) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_110 = 0xf;
            uStack_114 = 0;
            local_124[0] = local_124[0] & 0xffffff00;
          }
          if ((uVar14 & 2) != 0) {
            uVar14 = uVar14 & 0xfffffffd;
            if (0xf < uStack_1b8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_1b8 = 0xf;
            uStack_1bc = 0;
            local_1cc = local_1cc & 0xffffff00;
          }
          local_c = 0xffffffff;
          if ((uVar14 & 1) != 0) {
            uVar14 = uVar14 & 0xfffffffe;
            if (0xf < uStack_280) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            uStack_280 = 0xf;
            uStack_284 = 0;
            local_294 = local_294 & 0xffffff00;
          }
          uVar20 = uVar14;
          if (((((bVar21) || ((local_29c != (int *)0x0 && (piStack_298 == local_29c)))) ||
               ((local_2c0[0] != (int *)0x0 && (piStack_298 == local_2c0[0])))) ||
              ((piVar19 != (int *)0x0 && (piStack_298 == piVar19)))) &&
             ((*(char *)((int)local_2c0[3] + 0x67c) == '\0' &&
              ((*(int *)((int)local_2c0[3] + 0x680) <
                *(int *)(*(int *)(DAT_012586dc + 0x30) + 0x520) &&
               (cVar5 = FUN_00425b40(), cVar5 != '\0')))))) {
            FUN_008a8650();
            uStack_58 = *puVar16;
            uStack_54 = puVar16[1];
            uStack_19c = 0xf;
            uStack_1a0 = 0;
            uStack_1b0 = uStack_1b0 & 0xffffff00;
            _puStack_2f0 = CONCAT44(0x426def,puStack_2f0);
            FUN_00409350();
            local_c = 8;
            FUN_008b26e0();
            iVar7 = FUN_008b3060();
            if (iVar7 != 0) {
              _puStack_2f0 = CONCAT44(0x426e1e,puStack_2f0);
              iVar7 = FUN_008b24f0();
              if (iVar7 != 0) {
                _puStack_2f0 = CONCAT44(0x426e32,puStack_2f0);
                FUN_008a6620();
                _puStack_2f0 = CONCAT44(0x426e3d,puStack_2f0);
                FUN_008a8120();
              }
            }
            local_c = 0xffffffff;
            if (0xf < uStack_19c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
        }
      }
      *(undefined1 *)(param_1 + 0xb0) = 1;
    }
    FUN_00401000();
    iVar7 = FUN_00b31c00();
    if (*(int *)(param_1 + 0x10) <= iVar7) {
      ExceptionList = local_14;
      return 1;
    }
    FUN_00427fd0();
    ExceptionList = local_14;
    return 0;
  }
  cVar5 = FUN_004278c0();
  if (cVar5 != '\0') {
    ExceptionList = local_14;
    return 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    ExceptionList = local_14;
    return 1;
  }
  if (((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) & 0xfffffff8U) != 0) &&
     ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) & 0xfffffff8U) == 0)) {
    FUN_00425a40();
    _puStack_2f0 = CONCAT44(local_2cc,local_2d0);
    puStack_2f4 = local_278;
    uStack_2f8 = 0x426f1c;
    FUN_00919e50();
    local_c = 0xe;
    _puStack_2f0 = CONCAT44(local_2cc,local_2d0);
    local_1e0 = 1;
    local_248 = 1;
    puStack_2f4 = (undefined1 *)0x426f4f;
    FUN_0092a7c0();
    _puStack_2f0 = CONCAT44(local_2c0 + 3,&local_214);
    local_1e4 = 1;
    puStack_2f4 = (undefined1 *)0x426f79;
    FUN_0042b980();
    _puStack_2f0 = CONCAT44(local_2c0 + 3,&local_224);
    puStack_2f4 = (undefined1 *)0x426f9b;
    FUN_0042b980();
    ppiVar4 = local_234;
    if (local_234 != local_230) {
      _puStack_2f0 = CONCAT44(local_234,0x426fbf);
      FID_conflict__memcpy(local_234,local_230,0);
      local_230 = ppiVar4;
    }
    ppiVar4 = local_244;
    if (local_244 != local_240) {
      _puStack_2f0 = CONCAT44(local_244,0x426fe6);
      FID_conflict__memcpy(local_244,local_240,0);
      local_240 = ppiVar4;
    }
    bVar21 = false;
    iVar7 = FUN_00425a40();
    if ((*(int *)(local_1f4 + 4) == *(int *)(iVar7 + 4)) ||
       (iVar7 = FUN_00425ac0(), *(int *)(local_1f4 + 4) == *(int *)(iVar7 + 4))) {
      bVar21 = true;
    }
    iVar7 = FUN_00425a40();
    if ((*(int *)(local_204 + 4) == *(int *)(iVar7 + 4)) ||
       (iVar7 = FUN_00425ac0(), *(int *)(local_204 + 4) == *(int *)(iVar7 + 4))) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((bVar21) || (bVar2)) {
      iVar7 = FUN_00425a40();
      bVar21 = *(int *)(local_1f4 + 4) != *(int *)(iVar7 + 4);
      if (bVar21) {
        uVar20 = *(uint *)(param_1 + 0x98);
        puVar16 = (uint *)(param_1 + 0x98);
      }
      else {
        uVar20 = *(uint *)(param_1 + 0x88);
        puVar16 = (uint *)(param_1 + 0x88);
      }
      while ((*puVar16 <= uVar20 && (uVar20 < puVar16[1]))) {
        if ((uVar20 < local_210) && (local_214 <= uVar20)) {
          if (local_210 == local_20c) {
            FUN_0042c4b0();
          }
        }
        else if (local_210 == local_20c) {
          FUN_0042c4b0();
        }
        if (local_210 != 0) {
          FUN_0094be20();
        }
        local_210 = local_210 + 0x40;
        local_2c0[0] = (int *)0x0;
        if ((local_2c0 < local_230) && (local_234 <= local_2c0)) {
          iVar7 = (int)local_2c0 - (int)local_234;
          if (local_230 == local_22c) {
            FUN_007b94a0();
          }
          if (local_230 != (int **)0x0) {
            *local_230 = local_234[iVar7 >> 2];
          }
          local_230 = local_230 + 1;
          uVar20 = uVar20 + 0x40;
        }
        else {
          if (local_230 == local_22c) {
            FUN_007b94a0();
          }
          if (local_230 != (int **)0x0) {
            *local_230 = (int *)0x0;
          }
          local_230 = local_230 + 1;
          uVar20 = uVar20 + 0x40;
        }
      }
      if (bVar21) {
        uVar20 = *(uint *)(param_1 + 0x88);
        puVar16 = (uint *)(param_1 + 0x88);
      }
      else {
        uVar20 = *(uint *)(param_1 + 0x98);
        puVar16 = (uint *)(param_1 + 0x98);
      }
      while ((*puVar16 <= uVar20 && (uVar20 < puVar16[1]))) {
        if ((uVar20 < local_220) && (local_224 <= uVar20)) {
          if (local_220 == local_21c) {
            FUN_0042c4b0();
          }
        }
        else if (local_220 == local_21c) {
          FUN_0042c4b0();
        }
        if (local_220 != 0) {
          FUN_0094be20();
        }
        local_220 = local_220 + 0x40;
        local_2c0[0] = (int *)0x0;
        if ((local_2c0 < local_240) && (local_244 <= local_2c0)) {
          iVar7 = (int)local_2c0 - (int)local_244;
          if (local_240 == local_23c) {
            FUN_007b94a0();
          }
          if (local_240 != (int **)0x0) {
            *local_240 = local_244[iVar7 >> 2];
          }
          local_240 = local_240 + 1;
          uVar20 = uVar20 + 0x40;
        }
        else {
          if (local_240 == local_23c) {
            FUN_007b94a0();
          }
          if (local_240 != (int **)0x0) {
            *local_240 = (int *)0x0;
          }
          local_240 = local_240 + 1;
          uVar20 = uVar20 + 0x40;
        }
      }
    }
    else {
      local_1e4 = 0;
    }
    iVar7 = (int)(local_210 - local_214) >> 6;
    if (0 < iVar7) {
      do {
        FUN_00928d40();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    piVar12 = *(int **)(DAT_012588e8 + 0xb24);
    FUN_009115b0();
    iVar7 = (**(code **)(*piVar12 + 0x44))();
    (**(code **)(**(int **)(iVar7 + 0x38) + 0x18))();
    local_c = 0xf;
    FUN_00427800();
    ExceptionList = local_14;
    return 1;
  }
  if ((*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x3c) & 0xfffffff8U) != 0) {
    iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(param_1 + 0x3c) + 4) * 4);
    _puStack_2f0 = (longlong)*(int *)(*(int *)(DAT_012586dc + 0x30) + 0x568) *
                   (longlong)(*(int *)(iVar7 + 0xea0) + *(int *)(*(int *)(iVar7 + 0xbcc) + 0x28c));
    puStack_2f4 = (undefined1 *)0x427455;
    __alldiv();
    local_2c0[3] = (int *)&stack0xfffffd1c;
    FUN_005341a0();
  }
  local_2c0[1] = *(int **)(DAT_012588e8 + 0xb60);
  local_2c0[0] = *(int **)(DAT_012588e8 + 0xb5c);
  puVar9 = (undefined4 *)FUN_005061e0();
  FUN_009885d0();
  local_c = 0x10;
  FUN_009885d0();
  local_c._0_1_ = 0x11;
  FUN_006a4f40();
  _puStack_2f0 = CONCAT44(0x4274dc,puStack_2f0);
  FUN_00424ce0();
  local_c._0_1_ = 0x12;
  _puStack_2f0 = CONCAT44(local_d0,0x4274f5);
  FUN_00424aa0();
  local_c._0_1_ = 0x13;
  local_2a4 = (uint *)puVar9[1];
  local_2c0[3] = (int *)FUN_00aae9af();
  local_c = CONCAT31(local_c._1_3_,0x14);
  if (local_2c0[3] == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    _puStack_2f0 = CONCAT44(0x42752d,puStack_2f0);
    uVar10 = FUN_0042b900();
  }
  iVar7 = puVar9[2];
  puVar9[1] = uVar10;
  puVar9[2] = iVar7 + 1;
  if (iVar7 == 0) {
    *puVar9 = uVar10;
  }
  else {
    *(undefined4 *)((int)local_2a4 + 0x3c) = uVar10;
  }
  FUN_00a39a80();
  FUN_00408ad0();
  FUN_00408ad0();
  local_c = 0xffffffff;
  FUN_00408ad0();
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_004276e9;
    FUN_009885d0();
    local_c = 0x19;
    FUN_0055dd40();
    local_c._0_1_ = 0x1a;
    _puStack_2f0 = CONCAT44(local_124,0x427672);
    FUN_00424aa0();
    local_c._0_1_ = 0x1b;
    iVar7 = puVar9[1];
    local_2c0[3] = (int *)FUN_00aae9af();
    local_c = CONCAT31(local_c._1_3_,0x1c);
  }
  else {
    piVar12 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 8) * 4) + 0x188
                       );
    if ((piVar12 == (int *)0x0) || (cVar5 = (**(code **)(*piVar12 + 0x24))(), cVar5 == '\0'))
    goto LAB_004276e9;
    FUN_009885d0();
    local_c = 0x15;
    (**(code **)(*piVar12 + 0x20))();
    local_c._0_1_ = 0x16;
    _puStack_2f0 = CONCAT44(local_124,0x427600);
    FUN_00424aa0();
    local_c._0_1_ = 0x17;
    iVar7 = puVar9[1];
    local_2c0[3] = (int *)FUN_00aae9af();
    local_c = CONCAT31(local_c._1_3_,0x18);
  }
  if (local_2c0[3] == (int *)0x0) {
    uVar10 = 0;
  }
  else {
    _puStack_2f0 = CONCAT44(0x4276a2,puStack_2f0);
    uVar10 = FUN_0042b900();
  }
  iVar11 = puVar9[2];
  puVar9[1] = uVar10;
  puVar9[2] = iVar11 + 1;
  if (iVar11 == 0) {
    *puVar9 = uVar10;
  }
  else {
    *(undefined4 *)(iVar7 + 0x3c) = uVar10;
  }
  FUN_00a39a80();
  FUN_00408ad0();
  local_c = 0xffffffff;
  FUN_00408ad0();
LAB_004276e9:
  FUN_009885d0();
  local_c = 0x1d;
  FUN_009885d0();
  local_1d4 = (uint *)auStack_360;
  local_2c0[3] = (int *)auStack_360;
  local_c._0_1_ = 0x1e;
  uVar26 = 0;
  uVar25 = 0x2d2d2d;
  uVar24 = 0;
  puVar23 = local_7c;
  uVar22 = 0;
  piVar12 = local_2c0[0];
  piVar18 = local_2c0[1];
  FUN_006a4f40(puVar9,0,puVar23,0,local_2c0[0],local_2c0[1],0x2d2d2d,0);
  uVar10 = FUN_006a55b0();
  FUN_006a7ed0(local_2c0[3],uVar10,puVar9,uVar22,puVar23,uVar24,piVar12,piVar18,uVar25,uVar26);
  local_c._0_1_ = 0x1f;
  uVar10 = FUN_006a4f40();
  local_c = CONCAT31(local_c._1_3_,0x1e);
  FUN_0042bb30(uVar10);
  FUN_00408ad0();
  FUN_00408ad0();
  ExceptionList = local_14;
  return 0;
}

