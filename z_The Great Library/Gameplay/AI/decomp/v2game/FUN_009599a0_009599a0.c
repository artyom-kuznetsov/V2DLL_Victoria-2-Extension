// FUN_009599a0 @ 009599a0 body=[[009599a0, 0095a12a] [0095a12e, 0095a1d0] [0095a1d4, 0095a4d8] [0095a4dc, 0095a57d] [0095a581, 0095a590] [0095a594, 0095a5ac]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0095a305) */
/* WARNING: Removing unreachable block (ram,0x0095a319) */
/* WARNING: Removing unreachable block (ram,0x00959a2e) */
/* WARNING: Removing unreachable block (ram,0x00959e20) */
/* WARNING: Removing unreachable block (ram,0x00959ee4) */
/* WARNING: Removing unreachable block (ram,0x00959f60) */
/* WARNING: Removing unreachable block (ram,0x00959f8a) */
/* WARNING: Type propagation algorithm not settling */

void FUN_009599a0(int param_1,int param_2,char param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int extraout_ECX;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  undefined1 *puVar20;
  int iVar21;
  undefined4 *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  size_t asStack_2c8 [4];
  undefined **local_230 [48];
  undefined **local_170 [18];
  undefined **local_128;
  undefined4 local_124;
  undefined1 local_120 [64];
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  uint local_c8;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  int local_9c;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  int *local_70;
  int local_6c;
  int local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  longlong local_48;
  int local_40;
  int local_3c;
  int *local_38;
  int local_34;
  undefined1 *local_30;
  uint local_2c;
  undefined8 local_28;
  int local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  undefined4 *puVar19;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58620;
  local_10 = ExceptionList;
  if (DAT_00f09545 == '\0') {
    return;
  }
  iVar21 = *(int *)(param_1 + 100);
  local_15 = '\0';
  ExceptionList = &local_10;
  local_68 = iVar21;
  if (*(int *)(*(int *)(param_1 + 0x1d4) + 0xb0) != 0) {
    iVar17 = 1;
    local_38 = (int *)(*(int *)(param_2 + ((*(int *)(param_1 + 0xc) + 0x5e1U) % 1000) * 4) % 100);
    asStack_2c8[3] = 0x959a1e;
    ExceptionList = &local_10;
    lVar23 = FUN_00b31c36();
    if (*(longlong *)(param_1 + 0x130) < lVar23) {
      iVar17 = 0x1a;
    }
    if (0 < *(int *)(param_1 + 0x26c)) {
      iVar17 = *(int *)(param_1 + 0x26c) * 5 + iVar17;
    }
    if (*(int *)(iVar21 + 0x164) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = **(int **)(iVar21 + 0x15c);
    }
    asStack_2c8[3] = 0x959a82;
    cVar8 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                            *(int *)(iVar21 + 300) * 0x10) +
                                   *(int *)(iVar10 + 0x6c) * 4) + 0x34))();
    if (cVar8 != '\0') {
      asStack_2c8[3] = 0x959a91;
      cVar8 = FUN_00561fe0();
      if (cVar8 == '\0') {
        iVar17 = iVar17 + *(int *)(*(int *)(DAT_012586dc + 0x10) + 0x2c) / 1000;
      }
    }
    if (iVar17 <= (int)local_38) goto LAB_00959abd;
  }
  local_15 = '\x01';
LAB_00959abd:
  if ((param_3 != '\0') || (local_15 != '\0')) {
    *(undefined4 *)(param_1 + 0x26c) = 0;
    asStack_2c8[3] = 0x959adc;
    piVar9 = (int *)FUN_004de580();
    iVar17 = (piVar9[1] - *piVar9) / 0x160;
    local_1c = 0;
    local_34 = 0;
    local_78 = iVar17;
    asStack_2c8[3] = 0x959b0b;
    iVar21 = iVar17 * -8;
    puVar18 = &stack0xfffffd48 + iVar21;
    asStack_2c8[iVar17 * -2 + 3] = iVar17 * 8;
    asStack_2c8[iVar17 * -2 + 2] = 0;
    asStack_2c8[iVar17 * 0xfffffffeU + 1] = (size_t)(&stack0xfffffd48 + iVar21);
    local_30 = &stack0xfffffd48 + iVar21;
    asStack_2c8[iVar17 * -2] = 0x959b19;
    _memset((void *)asStack_2c8[iVar17 * 0xfffffffeU + 1],asStack_2c8[iVar17 * -2 + 2],
            asStack_2c8[iVar17 * -2 + 3]);
    asStack_2c8[iVar17 * -2 + 3] = 0x959b21;
    local_38 = (int *)FUN_004de580();
    iVar21 = *(int *)(DAT_012588e8 + 0xbcc);
    local_3c = 0;
    if (0 < iVar17) {
      local_40 = 0;
      do {
        iVar17 = *local_38 + local_40;
        local_6c = iVar17;
        if ((((DAT_01258734 != 0) && (iVar17 != DAT_01258734 + 0x10)) && (iVar17 != 0)) &&
           (*(int *)(iVar17 + 0x138) == 2)) {
          *(int *)(puVar18 + -4) = local_68;
          *(undefined4 *)(puVar18 + -8) = 0x959b81;
          iVar10 = FUN_004b9520();
          if ((iVar10 != DAT_012587f0 + 0x48) && (iVar10 != 0)) {
            uVar12 = *(undefined4 *)(local_68 + 0x188);
            *(int *)(puVar18 + -4) = iVar17;
            *(undefined4 *)(puVar18 + -8) = uVar12;
            *(undefined4 *)(puVar18 + -0xc) = 0x959baa;
            cVar8 = FUN_004d0e70();
            if (cVar8 != '\0') {
              *(undefined4 *)(puVar18 + -4) = 0x959bb9;
              cVar8 = FUN_004de3c0();
              if ((cVar8 != '\0') || (*(char *)(*(int *)(iVar17 + 0x80) + 0x2a) != '\0')) {
                local_74 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x128);
                iVar10 = *(int *)(*(int *)(iVar17 + 0x80) + 8);
                if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                       *(int *)(*(int *)(param_1 + 100) + 300) * 4)
                                              + 0xbcc) + 0x98) + iVar10 * 4) != 0) {
                  uVar11 = (uint)*(byte *)(iVar10 + 0x1d8 + iVar21);
                  iVar10 = *(int *)(*(int *)(iVar21 + 0x218) + 4 + uVar11 * 8);
                  if ((iVar10 < 0) ||
                     ((iVar10 < 1 && (*(int *)(*(int *)(iVar21 + 0x218) + uVar11 * 8) == 0)))) {
                    *(int *)(local_30 + local_1c * 8) = local_3c;
                    *(undefined4 *)(local_30 + local_1c * 8 + 4) = 0;
                  }
                  else {
                    if (DAT_01258a0c != 0) {
                      *(undefined4 *)(puVar18 + -4) = 0x959c4c;
                      FUN_009885d0();
                      *(char **)(puVar18 + -4) = " ---------------------------";
                      local_70 = (int *)(puVar18 + -0x20);
                      local_8 = 0;
                      *(undefined4 *)(puVar18 + -0x24) = 0x959c68;
                      FUN_00401320();
                      *(undefined4 *)(puVar18 + -0x24) = 5;
                      *(undefined4 *)(puVar18 + -0x28) = 0x63d;
                      *(uint **)(puVar18 + -0x2c) = local_64;
                      local_8._0_1_ = 1;
                      *(undefined4 *)(puVar18 + -0x30) = 0x959c82;
                      uVar12 = FUN_004015b0();
                      local_8 = (uint)local_8._1_3_ << 8;
                      *(undefined4 *)(puVar18 + -0x24) = uVar12;
                      local_8._0_1_ = 3;
                      *(undefined4 *)(puVar18 + -0x28) = 0x959c93;
                      uVar12 = FUN_004238b0();
                      *(undefined4 *)(puVar18 + -8) = uVar12;
                      *(undefined4 *)(puVar18 + -0xc) = 0x959c9c;
                      uVar12 = FUN_00418e30();
                      *(undefined4 *)(puVar18 + -0xc) = uVar12;
                      *(undefined4 *)(puVar18 + -0x10) = 0x959ca2;
                      FUN_00401280();
                      local_8 = (uint)local_8._1_3_ << 8;
                      *(undefined4 *)(puVar18 + -4) = 0x959cb4;
                      FUN_00401650();
                      local_8 = 0xffffffff;
                      *(undefined4 *)(puVar18 + -4) = 0x959cc3;
                      FUN_00408ad0();
                    }
                    local_48 = 0;
                    local_2c = 0;
                    if (0 < DAT_012587f4) {
                      local_d0 = 0;
                      do {
                        uVar11 = (uint)*(byte *)(iVar17 + 0x2c + local_2c);
                        iVar10 = *(int *)(iVar17 + 0x6c);
                        local_8c = *(undefined4 *)(iVar10 + 4 + uVar11 * 8);
                        local_90 = *(undefined4 *)(iVar10 + uVar11 * 8);
                        puVar22 = (undefined4 *)(iVar10 + uVar11 * 8);
                        *(undefined4 *)(puVar18 + -4) = 0x959d22;
                        cVar8 = FUN_0043a720();
                        if (cVar8 == '\0') {
                          uVar11 = (uint)*(byte *)(iVar21 + 0x288 + local_2c);
                          uVar12 = *(undefined4 *)(*(int *)(iVar21 + 0x2c8) + uVar11 * 8);
                          uVar4 = *(undefined4 *)(*(int *)(iVar21 + 0x2c8) + uVar11 * 8 + 4);
                          *(undefined4 *)(puVar18 + -4) = puVar22[1];
                          *(undefined4 *)(puVar18 + -8) = *puVar22;
                          *(undefined4 *)(puVar18 + -0xc) = uVar4;
                          *(undefined4 *)(puVar18 + -0x10) = uVar12;
                          *(undefined4 *)(puVar18 + -0x14) = 0x959d4e;
                          lVar23 = __allmul();
                          local_48 = (lVar23 >> 0xf) + local_48;
                        }
                        local_2c = local_2c + 1;
                      } while ((int)local_2c < DAT_012587f4);
                    }
                    uVar11 = 0;
                    iVar10 = 0;
                    local_28 = 0;
                    local_2c = 0;
                    if (0 < DAT_012587f4) {
                      local_84 = *(int *)(iVar17 + 0x6c);
                      do {
                        uVar15 = (uint)*(byte *)(iVar17 + 0x2c + iVar10);
                        iVar5 = *(int *)(local_84 + 4 + uVar15 * 8);
                        local_70 = (int *)(local_84 + uVar15 * 8);
                        if ((-1 < iVar5) && ((0 < iVar5 || (*local_70 != 0)))) {
                          puVar1 = (uint *)(*(int *)(iVar21 + 0x594) +
                                           (uint)*(byte *)(iVar21 + 0x554 + iVar10) * 8);
                          uVar11 = *puVar1;
                          uVar16 = (uint)*(byte *)(iVar21 + 0x494 + iVar10);
                          puVar2 = (uint *)(*(int *)(iVar21 + 0x4d4) + uVar16 * 8);
                          uVar13 = uVar11 + *puVar2;
                          puVar3 = (uint *)(*(int *)(iVar21 + 0x50) +
                                           (uint)*(byte *)(iVar21 + 0x10 + iVar10) * 8);
                          uVar15 = *puVar3;
                          uVar14 = uVar15 - uVar13;
                          iVar17 = (puVar3[1] -
                                   (puVar1[1] + *(int *)(*(int *)(iVar21 + 0x4d4) + uVar16 * 8 + 4)
                                   + (uint)CARRY4(uVar11,*puVar2))) - (uint)(uVar15 < uVar13);
                          if (iVar17 < 0) {
                            local_28 = 0;
                            uVar11 = 1;
                            iVar17 = local_6c;
                            break;
                          }
                          iVar5 = *local_70;
                          *(int *)(puVar18 + -4) = local_70[1];
                          *(int *)(puVar18 + -8) = iVar5;
                          *(uint *)(puVar18 + -0xc) = iVar17 * 0x8000 | uVar14 >> 0x11;
                          *(uint *)(puVar18 + -0x10) = uVar14 * 0x8000;
                          *(undefined4 *)(puVar18 + -0x14) = 0x959e1a;
                          lVar23 = __alldiv();
                          if (0x320000 < lVar23) {
                            lVar23 = 0x320000;
                          }
                          local_28 = lVar23 + local_28;
                          uVar11 = local_2c + 1;
                          iVar17 = local_6c;
                          local_2c = uVar11;
                        }
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < DAT_012587f4);
                    }
                    uVar14 = (uint)local_28;
                    uVar15 = local_28._4_4_ << 0xf;
                    uVar13 = (uint)local_28 >> 0x11;
                    *(uint *)(puVar18 + -4) = ((int)uVar11 >> 0x1f) << 0xf | uVar11 >> 0x11;
                    *(uint *)(puVar18 + -8) = uVar11 << 0xf;
                    *(uint *)(puVar18 + -0xc) = uVar15 | uVar13;
                    *(uint *)(puVar18 + -0x10) = uVar14 << 0xf;
                    *(undefined4 *)(puVar18 + -0x14) = 0x959e7c;
                    local_28 = __alldiv();
                    local_70 = *(int **)(iVar17 + 0x80);
                    puVar1 = (uint *)(*(int *)(iVar21 + 0x50) +
                                     (uint)*(byte *)(iVar21 + 0x10 + local_70[2]) * 8);
                    local_c8 = *puVar1;
                    uVar11 = puVar1[1];
                    puVar1 = (uint *)(*(int *)(iVar21 + 0x1c0) +
                                     (uint)*(byte *)(local_70[2] + 0x180 + iVar21) * 8);
                    uVar15 = *puVar1;
                    uVar14 = uVar15 - local_c8;
                    uVar13 = puVar1[1];
                    uVar15 = (uint)(uVar15 < local_c8);
                    iVar10 = uVar13 - uVar11;
                    local_9c = iVar10 - uVar15;
                    if (((local_9c < 0) ||
                        (((local_9c == 0 || SBORROW4(uVar13,uVar11) != SBORROW4(iVar10,uVar15) &&
                          (uVar14 == 0)) || (local_28 < 1)))) ||
                       ((iVar10 = *(int *)(*(int *)(param_1 + 0x1d4) + 0xb0), iVar10 != 0 &&
                        (local_70 == *(int **)(iVar10 + 0x80))))) {
LAB_0095a079:
                      uVar11 = 0;
                    }
                    else {
                      puVar22 = (undefined4 *)
                                (*(int *)(iVar21 + 0x2c8) +
                                (uint)*(byte *)(iVar21 + 0x288 + local_70[2]) * 8);
                      uVar12 = *puVar22;
                      uVar4 = *(undefined4 *)(iVar17 + 0x88);
                      uVar6 = *(undefined4 *)(iVar17 + 0x8c);
                      *(undefined4 *)(puVar18 + -4) = puVar22[1];
                      *(undefined4 *)(puVar18 + -8) = uVar12;
                      *(undefined4 *)(puVar18 + -0xc) = uVar6;
                      *(undefined4 *)(puVar18 + -0x10) = uVar4;
                      local_80 = uVar4;
                      local_7c = uVar6;
                      *(undefined4 *)(puVar18 + -0x14) = 0x959f41;
                      lVar23 = __allmul();
                      uVar12 = local_80;
                      lVar23 = (lVar23 >> 0xf) - local_48;
                      local_98 = (int)lVar23;
                      if (lVar23 < 1) goto LAB_0095a079;
                      uVar11 = local_9c << 0xf;
                      *(undefined4 *)(puVar18 + -4) = local_7c;
                      *(undefined4 *)(puVar18 + -8) = uVar12;
                      *(uint *)(puVar18 + -0xc) = uVar11 | uVar14 >> 0x11;
                      *(uint *)(puVar18 + -0x10) = uVar14 * 0x8000;
                      *(undefined4 *)(puVar18 + -0x14) = 0x959f84;
                      lVar24 = __alldiv();
                      if (0x320000 < lVar24) {
                        lVar24 = 0x320000;
                      }
                      if ((-1 < local_28) && ((0 < local_28._4_4_ || (0x320000 < (uint)local_28))))
                      {
                        local_28 = 0x320000;
                      }
                      *(int *)(puVar18 + -4) = local_28._4_4_;
                      *(uint *)(puVar18 + -8) = (uint)local_28;
                      *(longlong *)(puVar18 + -0x10) = lVar24;
                      *(undefined4 *)(puVar18 + -0x14) = 0x959fc6;
                      lVar24 = __allmul();
                      uVar12 = local_98;
                      *(int *)(puVar18 + -4) = (int)((ulonglong)lVar23 >> 0x20);
                      *(undefined4 *)(puVar18 + -8) = uVar12;
                      *(longlong *)(puVar18 + -0x10) = lVar24 >> 0xf;
                      *(undefined4 *)(puVar18 + -0x14) = 0x959fdc;
                      lVar23 = __allmul();
                      uVar13 = (uint)((ulonglong)(lVar23 >> 0xf) >> 0x20);
                      uVar15 = (uint)(lVar23 >> 0xf) >> 0xf;
                      uVar11 = uVar15 | uVar13 << 0x11;
                      *(undefined4 *)(puVar18 + -4) = 0x959ff9;
                      iVar17 = FUN_004b8a80();
                      piVar9 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) +
                                                 *(int *)(extraout_ECX + 300) * 0x10) +
                                        *(int *)(iVar17 + 0x6c) * 4);
                      pcVar7 = *(code **)(*piVar9 + 0x34);
                      puVar19 = (undefined4 *)(puVar18 + -4);
                      puVar18 = puVar18 + -4;
                      *puVar19 = 0x95a01f;
                      cVar8 = (*pcVar7)();
                      if (cVar8 != '\0') {
                        uVar14 = (uint)*(byte *)((int)piVar9 + local_70[2] + 0x94);
                        iVar17 = *(int *)(piVar9[0x35] + 4 + uVar14 * 8);
                        uVar14 = *(uint *)(piVar9[0x35] + uVar14 * 8);
                        if ((-1 < iVar17) && ((0 < iVar17 || (uVar14 != 0)))) {
                          *(uint *)(puVar18 + -4) = ((int)uVar11 >> 0x1f) << 0xf | uVar13 & 0x7fff;
                          *(uint *)(puVar18 + -8) = uVar15 << 0xf;
                          *(uint *)(puVar18 + -0xc) = iVar17 + (uint)(0xffff7fff < uVar14);
                          *(uint *)(puVar18 + -0x10) = uVar14 + 0x8000;
                          *(undefined4 *)(puVar18 + -0x14) = 0x95a067;
                          lVar23 = __allmul();
                          uVar11 = (uint)(lVar23 >> 0xf) >> 0xf |
                                   (int)((ulonglong)(lVar23 >> 0xf) >> 0x20) << 0x11;
                        }
                      }
                    }
                    if (DAT_01258a0c != 0) {
                      *(undefined4 *)(puVar18 + -4) = 7;
                      *(char **)(puVar18 + -8) = "pop.cpp";
                      local_50 = 0xf;
                      local_54 = 0;
                      local_64[0] = local_64[0] & 0xffffff00;
                      *(undefined4 *)(puVar18 + -0xc) = 0x95a0a9;
                      FUN_00409350();
                      *(undefined4 *)(puVar18 + -4) = 0x10002;
                      *(undefined4 *)(puVar18 + -8) = 0x6d9;
                      *(uint **)(puVar18 + -0xc) = local_64;
                      local_8 = 4;
                      *(undefined4 *)(puVar18 + -0x10) = 0x95a0c9;
                      FUN_004015b0();
                      *(uint *)(puVar18 + -4) = uVar11;
                      local_8._0_1_ = 5;
                      *(undefined4 *)(puVar18 + -8) = 0x95a0dd;
                      uVar12 = FUN_00987d20();
                      *(undefined4 *)(puVar18 + -8) = uVar12;
                      puVar20 = puVar18 + -0xc;
                      *(undefined4 *)(puVar18 + -0xc) = 0x95a0e3;
                      uVar12 = FUN_00455470();
                      *(undefined4 *)(puVar20 + -4) = uVar12;
                      *(undefined4 *)(puVar20 + -8) = 0x95a0e9;
                      FUN_00401280();
                      *(undefined ****)(puVar20 + -4) = local_170;
                      local_8 = CONCAT31(local_8._1_3_,4);
                      *(undefined4 *)(puVar20 + -8) = 0x95a0fc;
                      FUN_00987ac0();
                      *(undefined ****)(puVar20 + -4) = local_170;
                      local_170[0] = std::ios_base::vftable;
                      *(undefined4 *)(puVar20 + -8) = 0x95a112;
                      FUN_00aad52d();
                      local_8 = 0xffffffff;
                      if (0xf < local_50) {
                        *(uint *)(puVar20 + -4) = local_64[0];
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar20 + -8) = &UNK_0095a12b;
                        FUN_00aae91b();
                      }
                      *(undefined4 *)(puVar20 + -4) = 7;
                      *(char **)(puVar20 + -8) = "pop.cpp";
                      local_50 = 0xf;
                      local_54 = 0;
                      local_64[0] = local_64[0] & 0xffffff00;
                      *(undefined4 *)(puVar20 + -0xc) = 0x95a14f;
                      FUN_00409350();
                      *(undefined4 *)(puVar20 + -4) = 0x10002;
                      *(undefined4 *)(puVar20 + -8) = 0x6da;
                      *(uint **)(puVar20 + -0xc) = local_64;
                      local_8 = 6;
                      *(undefined4 *)(puVar20 + -0x10) = 0x95a16f;
                      FUN_004015b0();
                      *(uint *)(puVar20 + -4) = uVar11;
                      local_8._0_1_ = 7;
                      *(undefined4 *)(puVar20 + -8) = 0x95a183;
                      uVar12 = FUN_00987d20();
                      *(undefined4 *)(puVar20 + -8) = uVar12;
                      puVar18 = puVar20 + -0xc;
                      *(undefined4 *)(puVar20 + -0xc) = 0x95a189;
                      uVar12 = FUN_00455470();
                      *(undefined4 *)(puVar18 + -4) = uVar12;
                      *(undefined4 *)(puVar18 + -8) = 0x95a18f;
                      FUN_00401280();
                      *(undefined ****)(puVar18 + -4) = local_170;
                      local_8 = CONCAT31(local_8._1_3_,6);
                      *(undefined4 *)(puVar18 + -8) = 0x95a1a2;
                      FUN_00987ac0();
                      *(undefined ****)(puVar18 + -4) = local_170;
                      local_170[0] = std::ios_base::vftable;
                      *(undefined4 *)(puVar18 + -8) = 0x95a1b8;
                      FUN_00aad52d();
                      local_8 = 0xffffffff;
                      if (0xf < local_50) {
                        *(uint *)(puVar18 + -4) = local_64[0];
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar18 + -8) = &UNK_0095a1d1;
                        FUN_00aae91b();
                      }
                    }
                    *(int *)(local_30 + local_1c * 8) = local_3c;
                    *(uint *)(local_30 + local_1c * 8 + 4) = uVar11;
                    local_34 = local_34 + uVar11;
                  }
                  local_1c = local_1c + 1;
                }
              }
            }
          }
        }
        iVar17 = local_1c;
        local_40 = local_40 + 0x160;
        local_3c = local_3c + 1;
      } while (local_3c < local_78);
      if (0 < local_1c) {
        iVar21 = 0;
        if (local_34 < 1) {
          iVar21 = *(int *)(param_2 + ((*(int *)(param_1 + 0xc) + 0x714U) % 1000) * 4) % local_1c;
          if (param_3 != '\0') {
            *(undefined4 *)(puVar18 + -4) = 0x95a2ba;
            iVar21 = FUN_009b7610();
            iVar21 = iVar21 % local_1c;
          }
          iVar21 = *(int *)(local_30 + iVar21 * 8);
        }
        else {
          param_2 = *(int *)(param_2 + ((*(int *)(param_1 + 0xc) + 0x6fcU) % 1000) * 4) % local_34;
          if (param_3 != '\0') {
            *(undefined4 *)(puVar18 + -4) = 0x95a25c;
            param_2 = FUN_009b7610();
            param_2 = param_2 % local_34;
          }
          iVar10 = 0;
          _param_3 = 0;
          if (0 < iVar17) {
            piVar9 = (int *)(local_30 + 4);
            do {
              if ((*piVar9 != 0) &&
                 (_param_3 = _param_3 + *piVar9, iVar17 = local_1c, param_2 < _param_3)) {
                iVar21 = *(int *)(local_30 + iVar10 * 8);
                break;
              }
              iVar10 = iVar10 + 1;
              piVar9 = piVar9 + 2;
            } while (iVar10 < iVar17);
          }
        }
        *(int *)(*(int *)(param_1 + 0x1d4) + 0xb0) = iVar21 * 0x160 + *local_38;
        iVar21 = *(int *)(param_1 + 0x1d4);
        *(undefined4 *)(puVar18 + -4) = 0x40;
        *(undefined4 *)(puVar18 + -8) = 0;
        *(int *)(puVar18 + -0xc) = iVar21 + 8;
        *(undefined4 *)(puVar18 + -0x10) = 0x95a2ef;
        _memset(*(void **)(puVar18 + -0xc),*(int *)(puVar18 + -8),*(size_t *)(puVar18 + -4));
        if (*(int *)(iVar21 + 0x48) != *(int *)(iVar21 + 0x4c)) {
          *(int *)(iVar21 + 0x4c) = *(int *)(iVar21 + 0x48);
        }
        *(undefined4 *)(puVar18 + -4) = 0x95a328;
        FUN_00423920();
        local_124 = 0x18d;
        local_128 = CGoodsPool::vftable;
        local_e0 = 0;
        local_dc = 0;
        local_d8 = 0;
        *(undefined4 *)(puVar18 + -4) = 0x40;
        *(undefined4 *)(puVar18 + -8) = 0;
        *(undefined1 **)(puVar18 + -0xc) = local_120;
        local_8 = 8;
        *(undefined4 *)(puVar18 + -0x10) = 0x95a364;
        _memset(*(void **)(puVar18 + -0xc),*(int *)(puVar18 + -8),*(size_t *)(puVar18 + -4));
        *(undefined4 *)(puVar18 + -4) = 0x95a377;
        FUN_00423920();
        local_8 = 9;
        *(undefined4 *)(puVar18 + -4) = 0x95a389;
        uVar25 = FUN_00b31c36();
        *(undefined8 *)(*(int *)(param_1 + 0x1d4) + 0xe8) = uVar25;
        iVar21 = *(int *)(param_1 + 0x1d4);
        *(undefined4 *)(iVar21 + 0xf0) = 0x8000;
        *(undefined4 *)(iVar21 + 0xf4) = 0;
        iVar21 = *(int *)(param_1 + 0x1d4);
        *(int *)(puVar18 + -4) = iVar21;
        *(undefined4 *)(puVar18 + -8) = *(undefined4 *)(iVar21 + 0xb0);
        *(undefined4 *)(puVar18 + -0xc) = 0x95a3cc;
        FUN_004dd3c0();
        iVar21 = *(int *)(param_1 + 0x1d4);
        *(undefined ****)(puVar18 + -4) = &local_128;
        *(int *)(puVar18 + -8) = iVar21 + 0x58;
        *(undefined4 *)(puVar18 + -0xc) = 0x95a3e2;
        FUN_0047dbb0();
        uVar12 = *(undefined4 *)(param_1 + 0x1d4);
        *(undefined ****)(puVar18 + -4) = &local_128;
        *(undefined4 *)(puVar18 + -8) = uVar12;
        *(undefined4 *)(puVar18 + -0xc) = 0x95a3f5;
        FUN_0047dbb0();
        *(undefined4 *)(puVar18 + -8) = 0x10000;
        *(undefined4 *)(puVar18 + -4) = 0;
        *(undefined4 *)(puVar18 + -0xc) = *(undefined4 *)(param_1 + 0x1d4);
        *(undefined4 *)(puVar18 + -0x10) = 0x95a412;
        FUN_0047de60();
        if (DAT_01258a0c != 0) {
          *(undefined4 *)(puVar18 + -4) = 7;
          *(char **)(puVar18 + -8) = "pop.cpp";
          local_50 = 0xf;
          local_54 = 0;
          local_64[0] = local_64[0] & 0xffffff00;
          *(undefined4 *)(puVar18 + -0xc) = 0x95a43f;
          FUN_00409350();
          *(undefined4 *)(puVar18 + -4) = 0x10002;
          *(undefined4 *)(puVar18 + -8) = 0x72c;
          *(uint **)(puVar18 + -0xc) = local_64;
          local_8._0_1_ = 10;
          *(undefined4 *)(puVar18 + -0x10) = 0x95a45c;
          FUN_004015b0();
          local_8._0_1_ = 0xb;
          iVar21 = *(int *)(*(int *)(param_1 + 0x1d4) + 0xb0);
          puVar22 = (undefined4 *)(iVar21 + 8);
          *(undefined4 *)(puVar18 + -4) = 0x95a481;
          uVar12 = FUN_00987d20();
          if (0xf < *(uint *)(iVar21 + 0x1c)) {
            puVar22 = (undefined4 *)*puVar22;
          }
          *(undefined4 **)(puVar18 + -4) = puVar22;
          *(undefined4 *)(puVar18 + -8) = uVar12;
          *(undefined4 *)(puVar18 + -0xc) = 0x95a494;
          uVar12 = FUN_00418e30();
          *(undefined4 *)(puVar18 + -0xc) = uVar12;
          *(undefined4 *)(puVar18 + -0x10) = 0x95a49a;
          FUN_00401280();
          *(undefined ****)(puVar18 + -4) = local_170;
          local_8._0_1_ = 10;
          *(undefined4 *)(puVar18 + -8) = 0x95a4ad;
          FUN_00987ac0();
          *(undefined ****)(puVar18 + -4) = local_170;
          local_170[0] = std::ios_base::vftable;
          *(undefined4 *)(puVar18 + -8) = 0x95a4c4;
          FUN_00aad52d();
          local_8._0_1_ = 9;
          if (0xf < local_50) {
            *(uint *)(puVar18 + -4) = local_64[0];
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar18 + -8) = &UNK_0095a4d9;
            FUN_00aae91b();
          }
          *(undefined4 *)(puVar18 + -4) = 7;
          *(char **)(puVar18 + -8) = "pop.cpp";
          local_a8 = 0xf;
          local_ac = 0;
          local_bc[0] = local_bc[0] & 0xffffff00;
          *(undefined4 *)(puVar18 + -0xc) = 0x95a509;
          FUN_00409350();
          *(undefined4 *)(puVar18 + -4) = 0x10002;
          *(undefined4 *)(puVar18 + -8) = 0x72d;
          *(uint **)(puVar18 + -0xc) = local_bc;
          local_8._0_1_ = 0xc;
          *(undefined4 *)(puVar18 + -0x10) = 0x95a529;
          FUN_004015b0();
          local_8._0_1_ = 0xd;
          *(undefined4 *)(puVar18 + -4) = 0x95a53c;
          uVar12 = FUN_00987d20();
          *(undefined4 *)(puVar18 + -4) = uVar12;
          *(undefined4 *)(puVar18 + -8) = 0x95a542;
          FUN_00401280();
          *(undefined ****)(puVar18 + -4) = local_230;
          local_8 = CONCAT31(local_8._1_3_,0xc);
          *(undefined4 *)(puVar18 + -8) = 0x95a555;
          FUN_00987ac0();
          *(undefined ****)(puVar18 + -4) = local_230;
          local_230[0] = std::ios_base::vftable;
          *(undefined4 *)(puVar18 + -8) = 0x95a567;
          FUN_00aad52d();
          if (0xf < local_a8) {
            *(uint *)(puVar18 + -4) = local_bc[0];
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar18 + -8) = &UNK_0095a57e;
            FUN_00aae91b();
          }
        }
        if (local_e0 != 0) {
          *(int *)(puVar18 + -4) = local_e0;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar18 + -8) = &UNK_0095a591;
          FUN_00aae91b();
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

