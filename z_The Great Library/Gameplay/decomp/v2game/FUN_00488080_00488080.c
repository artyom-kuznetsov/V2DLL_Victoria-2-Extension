// FUN_00488080 @ 00488080  (requested 00488080, first bytes: 55 8B EC 83 E4 F8 6A FF)


/* WARNING: Removing unreachable block (ram,0x00489500) */
/* WARNING: Removing unreachable block (ram,0x00488fda) */
/* WARNING: Removing unreachable block (ram,0x0048854c) */
/* WARNING: Removing unreachable block (ram,0x00488f0a) */
/* WARNING: Removing unreachable block (ram,0x00489782) */
/* WARNING: Removing unreachable block (ram,0x00489520) */
/* WARNING: Removing unreachable block (ram,0x0048966d) */
/* WARNING: Removing unreachable block (ram,0x00488ffa) */
/* WARNING: Removing unreachable block (ram,0x004896e8) */
/* WARNING: Removing unreachable block (ram,0x0048856c) */

void FUN_00488080(int param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  longlong lVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  int local_3c0;
  int local_3b8;
  undefined8 local_350;
  uint local_330;
  uint local_32c;
  undefined8 local_328;
  uint local_320;
  uint local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined8 local_310;
  longlong local_308;
  uint local_300;
  uint local_2fc;
  int *local_2f8;
  uint uStack_2f4;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  int local_2d8;
  int local_2d4;
  uint uStack_2d0;
  uint local_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  int *local_2c0;
  undefined4 uStack_2b8;
  undefined4 local_2b4;
  undefined8 local_2b0;
  undefined4 local_2a8;
  uint uStack_2a4;
  uint local_298;
  undefined4 local_290;
  int local_238;
  undefined4 local_234;
  undefined4 local_230;
  int local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  int local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined **local_178;
  undefined4 local_174;
  undefined1 local_170 [64];
  int local_130;
  undefined4 local_12c;
  undefined4 local_128;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00b9eba5;
  pvStack_14 = ExceptionList;
  DAT_0125ba88 = DAT_0125ba10;
  DAT_0125ba8c = DAT_0125ba14;
  local_174 = 0x18d;
  local_178 = CGoodsPool::vftable;
  local_130 = 0;
  local_12c = 0;
  local_128 = 0;
  local_c = 0;
  ExceptionList = &pvStack_14;
  _memset(local_170,0,0x40);
  FUN_00423920();
  local_c = 1;
  __alldiv();
  if (DAT_01258728 == (int *)0x0) {
    DAT_01258728 = (int *)FUN_00aae9af();
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
  piVar11 = DAT_012588e8;
  piVar10 = DAT_01258728;
  local_2f8 = (int *)DAT_012588e8[0x2f4];
  puVar19 = (uint *)(DAT_012588e8 + 0x2f4);
  while( true ) {
    do {
      if ((local_2f8 < (int *)*puVar19) || ((int *)piVar11[0x2f5] <= local_2f8)) {
        iVar18 = (**(code **)(*DAT_012588e8 + 0x18))();
        local_3b8 = 0;
        if (0 < iVar18) {
          do {
            iVar3 = *(int *)(DAT_012588e8[0x2b3] + local_3b8 * 4);
            if (*(int *)(iVar3 + 300) != 0) {
              local_290 = *(undefined4 *)(iVar3 + 0x128);
              iVar16 = *(int *)(param_1 + 0x808) - *(int *)(param_1 + 0x804) >> 2;
              local_3c0 = 0;
              if (0 < iVar16) {
                do {
                  iVar20 = *(int *)(*(int *)(*(int *)(param_1 + 0x804) + local_3c0 * 4) * 0x10 +
                                   *(int *)(iVar3 + 0x194));
                  while (iVar8 = iVar20, iVar8 != 0) {
                    iVar20 = *(int *)(iVar8 + 0x27c);
                    if (((*(char *)(*(int *)(iVar8 + 0x68) + 0x39c) != '\0') &&
                        (*(int *)(*(int *)(iVar8 + 0x1d4) + 0xb0) != 0)) &&
                       (iVar21 = *(int *)(*(int *)(*(int *)(iVar8 + 0x1d4) + 0xb0) + 0x80),
                       iVar21 != 0)) {
                      iVar5 = *(int *)(iVar8 + 0x14c);
                      uVar15 = *(uint *)(iVar8 + 0x148);
                      iVar12 = *(int *)(*(int *)(iVar8 + 100) + 300) * 0x58 +
                               *(int *)(param_1 + 0x110);
                      puVar19 = (uint *)(*(int *)(iVar12 + 0x48) +
                                        (uint)*(byte *)(*(int *)(iVar21 + 8) + 8 + iVar12) * 8);
                      uStack_2a4 = puVar19[1];
                      uVar24 = CONCAT44(DAT_0125ba14,DAT_0125ba10);
                      if ((*puVar19 != DAT_0125ba10) || (uStack_2a4 != DAT_0125ba14)) {
                        iVar12 = *(int *)(*(int *)(iVar8 + 100) + 300) * 0x58 +
                                 *(int *)(param_1 + 0x110);
                        uStack_2b8 = *(undefined4 *)
                                      (*(int *)(iVar12 + 0x48) +
                                      (uint)*(byte *)(*(int *)(iVar21 + 8) + 8 + iVar12) * 8);
                        uVar24 = __alldiv();
                      }
                      *(undefined8 *)(*(int *)(iVar8 + 0x1d4) + 0xd0) = uVar24;
                      iVar12 = *(int *)(*(int *)(iVar8 + 100) + 300) * 0x58 +
                               *(int *)(param_1 + 0x110);
                      puVar19 = (uint *)(*(int *)(iVar12 + 0x48) +
                                        (uint)*(byte *)(*(int *)(iVar21 + 8) + 8 + iVar12) * 8);
                      local_2e8 = 0;
                      if ((*puVar19 != DAT_0125ba10) || (puVar19[1] != DAT_0125ba14)) {
                        iVar12 = *(int *)(*(int *)(iVar8 + 100) + 300) * 0x58 +
                                 *(int *)(param_1 + 0x110);
                        uStack_2c4 = *(undefined4 *)
                                      (*(int *)(iVar12 + 0x48) +
                                       (uint)*(byte *)(*(int *)(iVar21 + 8) + 8 + iVar12) * 8 + 4);
                        __alldiv();
                      }
                      lVar23 = __allmul();
                      uStack_2d0 = (uint)(lVar23 >> 0xf);
                      local_2e0._0_4_ = uVar15 - uStack_2d0;
                      local_2f0 = CONCAT44(DAT_0125ba14,DAT_0125ba10);
                      local_2e0._4_4_ =
                           (iVar5 - (int)((ulonglong)(lVar23 >> 0xf) >> 0x20)) -
                           (uint)(uVar15 < uStack_2d0);
                      if ((local_2e0._4_4_ < (int)DAT_0125ba14) ||
                         ((local_2e0._4_4_ <= (int)DAT_0125ba14 && ((uint)local_2e0 <= DAT_0125ba10)
                          ))) {
                        puVar17 = &local_2f0;
                      }
                      else {
                        puVar17 = &local_2e0;
                      }
                      uVar9 = *(undefined4 *)((int)puVar17 + 4);
                      iVar5 = *(int *)(iVar8 + 0x1d4);
                      *(undefined4 *)(iVar5 + 0xe0) = *(undefined4 *)puVar17;
                      *(undefined4 *)(iVar5 + 0xe4) = uVar9;
                      puVar19 = (uint *)(*(int *)(param_1 + 0x100) +
                                        (uint)*(byte *)(*(int *)(iVar21 + 8) + 0xc0 + param_1) * 8);
                      uVar24 = 0;
                      if ((*puVar19 != DAT_0125ba10) || (puVar19[1] != DAT_0125ba14)) {
                        lVar23 = __alldiv();
                        uVar24 = 0;
                        if (CONCAT44(DAT_0125ba14,DAT_0125ba10) < lVar23) {
                          __allmul();
                          uVar24 = __alldiv();
                          __allmul();
                        }
                      }
                      *(undefined8 *)(*(int *)(iVar8 + 0x1d4) + 0xd8) = uVar24;
                      __allmul();
                      __allmul();
                      lVar23 = __allmul();
                      lVar23 = lVar23 >> 0xf;
                      plVar1 = (longlong *)(*(int *)(iVar8 + 0x1d4) + 0xf0);
                      lVar25 = *plVar1;
                      if (*plVar1 < lVar23) {
                        lVar26 = __allmul();
                        lVar25 = (lVar26 >> 0xf) + lVar25;
                      }
                      local_310 = lVar25 - *(longlong *)(iVar8 + 0x188);
                      local_300 = DAT_0125ba10;
                      local_2fc = DAT_0125ba14;
                      if (local_310 < CONCAT44(DAT_0125ba14,DAT_0125ba10)) {
                        puVar19 = &local_300;
                      }
                      else {
                        puVar19 = (uint *)&local_310;
                      }
                      local_2f8 = (int *)*puVar19;
                      local_330 = DAT_0125ba10;
                      local_32c = DAT_0125ba14;
                      local_320 = (int)(int *)lVar23 - (int)local_2f8;
                      local_31c = ((int)((ulonglong)lVar23 >> 0x20) - puVar19[1]) -
                                  (uint)((int *)lVar23 < local_2f8);
                      uStack_2f4 = puVar19[1];
                      local_308 = lVar23;
                      FUN_00439780();
                      FUN_0095a5f0();
                      FUN_0095a6a0();
                      *(longlong *)(*(int *)(iVar8 + 0x1d4) + 0xf8) = lVar23;
                    }
                  }
                  local_3c0 = local_3c0 + 1;
                } while (local_3c0 < iVar16);
              }
            }
            local_3b8 = local_3b8 + 1;
          } while (local_3b8 < iVar18);
        }
        if (local_130 == 0) {
          ExceptionList = pvStack_14;
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar18 = *local_2f8;
      local_2f8 = local_2f8 + 1;
    } while ((int)(*(int *)(iVar18 + 0x9dc) - *(int *)(iVar18 + 0x9d8) & 0xfffffffcU) < 1);
    iVar3 = *(int *)(iVar18 + 0x20);
    lVar23 = __alldiv();
    local_2b0 = lVar23 + CONCAT44(DAT_00f0ae14,DAT_00f0ae10);
    __alldiv();
    __allmul();
    piVar4 = *(int **)(iVar18 + 0xe44);
    uVar24 = local_328;
    while (piVar4 != (int *)0x0) {
      iVar16 = *piVar4;
      iVar20 = *(int *)(iVar16 + 0x5c);
      piVar4 = (int *)piVar4[2];
      iVar16 = *(int *)(iVar16 + 0x60);
      while (iVar8 = iVar16, local_328 = CONCAT44(DAT_0125ba14,DAT_0125ba10), iVar8 != 0) {
        iVar16 = *(int *)(iVar8 + 0x224);
        if (((0 < *(int *)(iVar8 + 0x20)) && (*(int *)(iVar8 + 0x184) < 0xb)) &&
           (*(char *)(iVar8 + 0x188) == '\0')) {
          uVar15 = *(uint *)(iVar8 + 0xd8);
          iVar21 = *(int *)(iVar8 + 0xdc);
          iVar5 = *(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x18) + 300) + 0x80) + 8);
          iVar12 = *(int *)(param_1 + 0x110) + iVar20 * 0x58;
          puVar14 = (uint *)(*(int *)(iVar12 + 0x48) + (uint)*(byte *)(iVar12 + 8 + iVar5) * 8);
          uVar13 = *puVar14;
          uVar6 = puVar14[1];
          if ((uVar13 != DAT_0125ba10) || (uVar6 != DAT_0125ba14)) {
            local_328._0_4_ = DAT_0125ba10;
            local_328._4_4_ = DAT_0125ba14;
            local_328 = __alldiv();
          }
          iVar12 = *(int *)(iVar8 + 0x1fc);
          uVar7 = *(uint *)(iVar8 + 0x1f8);
          local_308 = 0;
          if ((uVar13 == DAT_0125ba10) && (uVar6 == DAT_0125ba14)) {
            uVar24 = 0;
          }
          else {
            uVar24 = __alldiv();
          }
          *(undefined8 *)(iVar8 + 0x1e8) = uVar24;
          lVar23 = __allmul();
          uVar13 = (uint)(lVar23 >> 0xf);
          local_330 = uVar15 - uVar13;
          local_320 = DAT_0125ba10;
          local_32c = (iVar21 - (int)((ulonglong)(lVar23 >> 0xf) >> 0x20)) - (uint)(uVar15 < uVar13)
          ;
          local_31c = DAT_0125ba14;
          if (((int)local_32c < (int)DAT_0125ba14) ||
             (((int)local_32c <= (int)DAT_0125ba14 && (local_330 <= DAT_0125ba10)))) {
            puVar14 = &local_320;
          }
          else {
            puVar14 = &local_330;
          }
          uVar15 = *puVar14;
          *(uint *)(iVar8 + 0x1fc) = puVar14[1];
          *(uint *)(iVar8 + 0x1f8) = uVar15;
          puVar2 = (undefined4 *)
                   (*(int *)(param_1 + 0x2c8) + (uint)*(byte *)(param_1 + 0x288 + iVar5) * 8);
          local_318 = *puVar2;
          local_314 = puVar2[1];
          puVar14 = (uint *)(*(int *)(param_1 + 0x100) + (uint)*(byte *)(param_1 + 0xc0 + iVar5) * 8
                            );
          local_350 = 0;
          if ((*puVar14 != DAT_0125ba10) || (puVar14[1] != DAT_0125ba14)) {
            lVar23 = __alldiv();
            if (CONCAT44(DAT_0125ba14,DAT_0125ba10) < lVar23) {
              lVar23 = __allmul();
              uVar15 = (uint)(lVar23 >> 0xf);
              uVar13 = uVar7 - uVar15;
              iVar21 = (iVar12 - (int)((ulonglong)(lVar23 >> 0xf) >> 0x20)) - (uint)(uVar7 < uVar15)
              ;
              local_350 = CONCAT44(iVar21,uVar13);
              if ((iVar21 <= (int)DAT_0125ba14) &&
                 ((iVar21 < (int)DAT_0125ba14 || (uVar13 < DAT_0125ba10)))) {
                local_350 = CONCAT44(DAT_0125ba14,DAT_0125ba10);
              }
              __allmul();
            }
          }
          *(uint *)(iVar8 + 0x1f0) = DAT_0125ba10;
          *(uint *)(iVar8 + 500) = DAT_0125ba14;
          *(undefined4 *)(iVar8 + 0x200) = (undefined4)local_350;
          *(undefined4 *)(iVar8 + 0x204) = local_350._4_4_;
          __allmul();
          __allmul();
          __allmul();
          FUN_004f4b30(iVar8,param_1);
          uVar24 = local_328;
        }
      }
    }
    local_328 = uVar24;
    FUN_0047db00();
    local_c._0_1_ = 6;
    FUN_0047ddb0();
    FUN_0047db00();
    local_c._0_1_ = 7;
    FUN_0047db00();
    local_c._0_1_ = 8;
    FUN_0047ddb0();
    FUN_0047db00();
    local_c._0_1_ = 9;
    FUN_0047dd30();
    FUN_0047db00();
    local_c._0_1_ = 10;
    FUN_0047dca0();
    FUN_0047d9e0();
    FUN_0047dbb0();
    FUN_0047db00();
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_0047ddb0();
    FUN_00b31c36();
    FUN_0047d9e0();
    FUN_0047dd30();
    FUN_0047e3e0();
    FUN_0047dd30();
    FUN_0047e3e0();
    if (*(int *)(iVar18 + 0x20) == DAT_012588e8[0x2d8]) {
      FUN_0047dc20();
      FUN_0047dc20();
      FUN_0047dd30();
    }
    uVar13 = (uint)local_310 + local_300;
    iVar20 = local_310._4_4_ + local_2fc + (uint)CARRY4((uint)local_310,local_300);
    puVar14 = (uint *)(iVar18 + 0xe78);
    uVar15 = *puVar14;
    *puVar14 = *puVar14 + uVar13;
    *(int *)(iVar18 + 0xe7c) = *(int *)(iVar18 + 0xe7c) + iVar20 + (uint)CARRY4(uVar15,uVar13);
    iVar16 = *(int *)(iVar18 + (DAT_01258738 + 0xd) * 0x10);
    puVar14 = (uint *)(iVar16 + 0x20);
    uVar15 = *puVar14;
    *puVar14 = *puVar14 + uVar13;
    piVar4 = (int *)(iVar16 + 0x24);
    *piVar4 = *piVar4 + iVar20 + (uint)CARRY4(uVar15,uVar13);
    if (local_238 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_238 = 0;
    local_234 = 0;
    local_230 = 0;
    if (local_188 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_188 = 0;
    local_184 = 0;
    local_180 = 0;
    if (local_d8 != 0) break;
    local_d8 = 0;
    local_d4 = 0;
    local_d0 = 0;
    if (local_80 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_80 = 0;
    local_7c = 0;
    local_78 = 0;
    if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = CONCAT31(local_c._1_3_,1);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (local_1e0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    piVar4 = (int *)(*(int *)(param_1 + 0x7f4) + iVar3 * 8);
    iVar16 = *piVar4;
    iVar20 = piVar4[1];
    iVar8 = *(int *)(iVar18 + 0x1444);
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = 0;
    if ((iVar8 < (int)DAT_0125ba14) ||
       ((iVar8 <= (int)DAT_0125ba14 && (*(uint *)(iVar18 + 0x1440) <= DAT_0125ba10)))) {
      if ((iVar8 <= (int)DAT_0125ba14) &&
         ((iVar8 < (int)DAT_0125ba14 || (*(uint *)(iVar18 + 0x1440) < DAT_0125ba10)))) {
        FUN_005339d0();
        __allmul();
        local_2d8 = -iVar16;
        local_2d4 = -(iVar20 + (uint)(iVar16 != 0));
        __allmul();
        FUN_00525770();
      }
    }
    else {
      FUN_005339d0();
      __allmul();
      lVar23 = __allmul();
      uVar13 = (uint)(lVar23 >> 0xf);
      iVar20 = (int)((ulonglong)(lVar23 >> 0xf) >> 0x20);
      puVar14 = (uint *)(iVar18 + 0xe78);
      uVar15 = *puVar14;
      *puVar14 = *puVar14 + uVar13;
      *(int *)(iVar18 + 0xe7c) = *(int *)(iVar18 + 0xe7c) + iVar20 + (uint)CARRY4(uVar15,uVar13);
      iVar16 = *(int *)(iVar18 + (DAT_01258738 + 0xd) * 0x10);
      puVar14 = (uint *)(iVar16 + 0x18);
      uVar15 = *puVar14;
      *puVar14 = *puVar14 + uVar13;
      piVar4 = (int *)(iVar16 + 0x1c);
      *piVar4 = *piVar4 + iVar20 + (uint)CARRY4(uVar15,uVar13);
    }
    local_2c0 = *(int **)(iVar18 + 0x9d8);
    while ((*(int **)(iVar18 + 0x9d8) <= local_2c0 && (local_2c0 < *(int **)(iVar18 + 0x9dc)))) {
      iVar20 = *local_2c0 * 0xb0 + *piVar10;
      local_2c0 = local_2c0 + 1;
      iVar16 = *(int *)(iVar20 + 8);
      if ((DAT_01258734 != 0) && ((iVar16 != DAT_01258734 + 0x10 && (iVar16 != 0)))) {
        iVar8 = *(int *)(iVar20 + 0xc);
        if ((iVar8 != DAT_012587f0 + 0x48) && (iVar8 != 0)) {
          if ((((iVar16 == DAT_01258734 + 0x10) || (iVar16 == 0)) || (iVar8 == DAT_012587f0 + 0x48))
             || (iVar8 == 0)) {
            lVar23 = 0;
          }
          else {
            __allmul();
            __allmul();
            lVar23 = __allmul();
            lVar23 = lVar23 >> 0xf;
          }
          if (*(char *)(iVar8 + 0x3c) == '\0') {
            iVar16 = iVar3 * 0x58 + *(int *)(param_1 + 0x110);
            puVar14 = (uint *)(*(int *)(iVar16 + 0x48) +
                              (uint)*(byte *)(*(int *)(iVar8 + 8) + 8 + iVar16) * 8);
            local_2cc = puVar14[1];
            if ((*puVar14 != DAT_0125ba10) || (local_2cc != DAT_0125ba14)) {
              local_2c8 = *(undefined4 *)
                           (*(int *)(iVar16 + 0x48) +
                           (uint)*(byte *)(*(int *)(iVar8 + 8) + 8 + iVar16) * 8);
              __alldiv();
            }
            uVar15 = (uint)*(byte *)(*(int *)(iVar8 + 8) + 8 + iVar16);
            local_2f0 = 0;
            if ((*(uint *)(*(int *)(iVar16 + 0x48) + uVar15 * 8) == DAT_0125ba10) &&
               (*(uint *)(*(int *)(iVar16 + 0x48) + uVar15 * 8 + 4) == DAT_0125ba14)) {
              uVar24 = 0;
            }
            else {
              local_2b4 = *(undefined4 *)
                           (*(int *)(iVar16 + 0x48) +
                            (uint)*(byte *)(*(int *)(iVar8 + 8) + 8 + iVar16) * 8 + 4);
              uVar24 = __alldiv();
            }
            *(undefined8 *)(iVar20 + 0x90) = uVar24;
            lVar25 = __allmul();
            local_2a8 = (undefined4)(lVar25 >> 0xf);
            local_2e0 = lVar23 - (lVar25 >> 0xf);
            local_2e8 = CONCAT44(DAT_0125ba14,DAT_0125ba10);
            if (local_2e8 < local_2e0) {
              puVar17 = &local_2e0;
            }
            else {
              puVar17 = &local_2e8;
            }
            uVar9 = *(undefined4 *)((int)puVar17 + 4);
            *(undefined4 *)(iVar20 + 0xa0) = *(undefined4 *)puVar17;
            *(undefined4 *)(iVar20 + 0xa4) = uVar9;
            puVar14 = (uint *)(*(int *)(param_1 + 0x100) +
                              (uint)*(byte *)(*(int *)(iVar8 + 8) + 0xc0 + param_1) * 8);
            if ((*puVar14 != DAT_0125ba10) || (puVar14[1] != DAT_0125ba14)) {
              lVar23 = __alldiv();
              if (CONCAT44(DAT_0125ba14,DAT_0125ba10) < lVar23) {
                __allmul();
                uVar24 = __alldiv();
                *(undefined8 *)(iVar20 + 0x98) = uVar24;
                __allmul();
              }
            }
            __allmul();
            __allmul();
            __allmul();
            FUN_004c1200();
          }
          else {
            __allmul();
            __allmul();
            lVar23 = __allmul();
            local_298 = (uint)(lVar23 >> 0xf);
            FUN_004c1200();
            bVar22 = CARRY4(DAT_0125ba88,local_298);
            DAT_0125ba88 = DAT_0125ba88 + local_298;
            DAT_0125ba8c = DAT_0125ba8c + (int)((ulonglong)(lVar23 >> 0xf) >> 0x20) + (uint)bVar22;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

