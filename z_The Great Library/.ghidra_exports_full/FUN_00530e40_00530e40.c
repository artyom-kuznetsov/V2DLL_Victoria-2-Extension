// FUN_00530e40 @ 00530e40 body=[[00530e40, 0053133d] [00531341, 00531370] [00531374, 0053139e] [005313a2, 005313cc] [005313d0, 00531412] [00531416, 0053143c] [00531440, 00531467] [0053146b, 00531489] [0053148d, 005314b9] [005314bd, 0053176f] [00531773, 005317a2] [005317a6, 005317d0] [005317d4, 005317fe] [00531802, 00531844] [00531848, 0053186e] [00531872, 00531896] [0053189a, 005318b8] [005318bc, 005318eb] [005318ef, 00531aec] [00531af0, 00531b24] [00531b28, 00531b52] [00531b56, 00531b80] [00531b84, 00531bd2] [00531bd6, 00531c05] [00531c09, 00531c33] [00531c37, 00531c61] [00531c65, 00531c8f] [00531c93, 00531ca9]]


/* WARNING: Removing unreachable block (ram,0x005318af) */
/* WARNING: Removing unreachable block (ram,0x005314ad) */
/* WARNING: Removing unreachable block (ram,0x00531480) */
/* WARNING: Removing unreachable block (ram,0x0053188d) */
/* WARNING: Removing unreachable block (ram,0x005318df) */
/* WARNING: Removing unreachable block (ram,0x0053145e) */
/* WARNING: Removing unreachable block (ram,0x005311bb) */
/* WARNING: Removing unreachable block (ram,0x005310f7) */
/* WARNING: Removing unreachable block (ram,0x005315ee) */

void FUN_00530e40(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  int extraout_EDX;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 local_248;
  undefined4 uStack_244;
  int *local_23c;
  uint local_238;
  int local_230;
  int local_22c;
  int local_218;
  uint local_1a0 [4];
  undefined4 local_190;
  uint local_18c;
  uint local_184;
  undefined4 local_174;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130;
  undefined4 local_120;
  uint local_11c;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  int local_fc;
  uint uStack_f8;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint uStack_dc;
  undefined4 uStack_cc;
  uint uStack_c8;
  uint uStack_c0;
  undefined4 uStack_b0;
  uint uStack_ac;
  uint uStack_a4;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_88;
  undefined4 uStack_78;
  uint uStack_74;
  uint uStack_6c;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b73a02;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (param_2 == 0) {
    ExceptionList = &pvStack_14;
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1a4) = 0;
  }
  uVar12 = *(uint *)(param_1 + 0x9d8);
  local_238 = 0;
  for (; (*(uint *)(param_1 + 0x9d8) <= uVar12 && (uVar12 < *(uint *)(param_1 + 0x9dc)));
      uVar12 = uVar12 + 4) {
    iVar9 = FUN_004b8870();
    local_238 = local_238 + iVar9;
  }
  iVar9 = *(int *)(param_1 + 0xa60);
  iVar2 = *(int *)(iVar9 + 0x398);
  iVar3 = *(int *)(iVar9 + 0x3a0);
  iVar4 = *(int *)(iVar9 + 0x3a8);
  iVar9 = *(int *)(iVar9 + 0x3b0);
  local_248 = 0;
  local_22c = 0;
  if (DAT_0125fdd8 == 0) {
    iVar10 = FUN_00aae9af();
    local_c = 0;
    if (iVar10 != 0) {
      FUN_008b0060();
    }
    local_c = 0xffffffff;
    FUN_005c2810();
  }
  local_230 = *(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) >> 2;
  if (0 < local_230) {
    local_23c = *(int **)(*(int *)(param_1 + 0xbcc) + 0x310);
    lVar15 = 0;
    do {
      uStack_244 = (undefined4)((ulonglong)lVar15 >> 0x20);
      iVar10 = *local_23c;
      if (*(char *)(iVar10 + 0x39) != '\0') {
        uVar12 = *(int *)(iVar10 + 0x234) + *(int *)(iVar10 + 0x230) + iVar4 + iVar9;
        __alldiv(uVar12 * 0x40000000,
                 (((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11) << 0xf | (uVar12 & 0x1ffff) >> 2);
        uVar12 = *(uint *)(iVar10 + 0x238);
        local_fc = extraout_EDX;
        uVar14 = __alldiv(uVar12 << 0x1e,
                          (((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11) << 0xf |
                          (uVar12 & 0x1ffff) >> 2);
        lVar15 = __allmul(uVar14);
        lVar15 = (lVar15 >> 0xf) + CONCAT44(uStack_244,local_248);
        local_248 = (undefined4)lVar15;
        local_22c = local_22c + 1;
      }
      local_23c = local_23c + 1;
      local_230 = local_230 + -1;
    } while (local_230 != 0);
    if (local_22c != 0) {
      __alldiv(lVar15 << 0xf);
    }
  }
  if (*(char *)(param_1 + 0x120) == '\0') {
    piVar5 = *(int **)(param_1 + 0x7b4);
    local_23c = (int *)0x0;
    while (piVar5 != (int *)0x0) {
      piVar6 = (int *)*piVar5;
      piVar5 = (int *)piVar5[2];
      cVar8 = (**(code **)(*piVar6 + 0x38))();
      if (cVar8 != '\0') {
        local_23c = (int *)((int)local_23c + piVar6[0x10]);
      }
    }
  }
  else {
    local_23c = (int *)FUN_005db950();
  }
  uVar12 = (int)local_23c * 4;
  if ((int)local_238 < (int)local_23c * 4) {
    uVar12 = local_238;
  }
  uVar13 = *(uint *)(*(int *)(param_1 + 0xa60) + 0x48);
  lVar15 = CONCAT44(((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11,uVar12 << 0xf);
  __alldiv(uVar13 << 0x1e,
           (((int)uVar13 >> 0x1f) << 0xf | uVar13 >> 0x11) << 0xf | (uVar13 & 0x1ffff) >> 2);
  FUN_00b31c36();
  if (*(char *)(param_1 + 3000) != '\0') {
    uVar12 = *(uint *)(*(int *)(DAT_012586dc + 0x30) + 0x388);
    uVar14 = __alldiv(uVar12 << 0x1e,
                      (((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11) << 0xf |
                      (uVar12 & 0x1ffff) >> 2);
    lVar15 = __allmul(uVar14);
    lVar15 = lVar15 >> 0xf;
  }
  lVar15 = __allmul(lVar15);
  uVar14 = __allmul(lVar15 >> 0xf);
  lVar15 = __alldiv((uint)uVar14 & 0xffff8000,(int)((ulonglong)uVar14 >> 0x20));
  if (param_2 == 0) {
    puVar1 = (uint *)(param_1 + 0x1a0);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 + (uint)lVar15;
    *(int *)(param_1 + 0x1a4) =
         *(int *)(param_1 + 0x1a4) + (int)((ulonglong)lVar15 >> 0x20) +
         (uint)CARRY4(uVar12,(uint)lVar15);
  }
  else if (0 < lVar15) {
    FUN_00409350();
    local_c = 1;
    FUN_00409350();
    local_c._0_1_ = 2;
    FUN_00409350();
    local_c._0_1_ = 3;
    FUN_00988bb0(local_1a0,3);
    local_c._0_1_ = 4;
    FUN_009a8ee0();
    local_c._0_1_ = 5;
    iVar9 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar9 + 0x6c));
    local_c._0_1_ = 6;
    FUN_00988f20();
    local_c._0_1_ = 7;
    FUN_00988f20();
    local_c._0_1_ = 8;
    FUN_00988f20();
    local_c._0_1_ = 9;
    FUN_00448aa0();
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,10);
    FUN_009adb70();
    if (local_218 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_218 = 0;
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18c = 0xf;
    local_190 = 0;
    local_1a0[0] = local_1a0[0] & 0xffffff00;
    local_c = 0xffffffff;
  }
  lVar15 = 0;
  piVar5 = *(int **)(param_1 + 0x7b4);
  while (piVar5 != (int *)0x0) {
    piVar6 = (int *)piVar5[2];
    piVar7 = (int *)*piVar5;
    cVar8 = (**(code **)(*piVar7 + 0x3c))();
    piVar5 = piVar6;
    if (cVar8 != '\0') {
      piVar6 = (int *)piVar7[0xe];
      while (piVar6 != (int *)0x0) {
        iVar9 = *(int *)(*piVar6 + 0x38);
        piVar6 = (int *)piVar6[2];
        if (*(char *)(iVar9 + 0x3b) != '\0') {
          iVar9 = __alldiv((longlong)(*(int *)(iVar9 + 0x248) + iVar2) *
                           (longlong)(*(int *)(iVar9 + 0x244) + iVar3));
          if (iVar9 + 0x189373U < 0x39580e) {
            uVar12 = (iVar9 * 1000) / 250000;
          }
          else {
            uVar14 = __allmul(iVar9,iVar9 >> 0x1f);
            uVar12 = __alldiv(uVar14);
            local_fc = (int)uVar12 >> 0x1f;
          }
          lVar16 = __alldiv(uVar12 << 0x1e,
                            (((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11) << 0xf |
                            (uVar12 & 0x1ffff) >> 2);
          lVar15 = lVar16 + lVar15;
        }
      }
    }
  }
  if (param_2 == 0) {
    puVar1 = (uint *)(param_1 + 0x1a0);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 + (uint)lVar15;
    *(int *)(param_1 + 0x1a4) =
         *(int *)(param_1 + 0x1a4) + (int)((ulonglong)lVar15 >> 0x20) +
         (uint)CARRY4(uVar12,(uint)lVar15);
  }
  else if (0 < lVar15) {
    FUN_00409350();
    local_c = 0xb;
    FUN_00409350();
    local_c._0_1_ = 0xc;
    FUN_00409350();
    local_c._0_1_ = 0xd;
    FUN_00988bb0(local_168,3);
    local_c._0_1_ = 0xe;
    FUN_009a8ee0();
    local_c._0_1_ = 0xf;
    iVar9 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar9 + 0x6c));
    local_c._0_1_ = 0x10;
    FUN_00988f20();
    local_c._0_1_ = 0x11;
    FUN_00988f20();
    local_c._0_1_ = 0x12;
    FUN_00988f20();
    local_c._0_1_ = 0x13;
    FUN_00448aa0();
    if (0xf < local_18c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_18c = 0xf;
    local_190 = 0;
    local_1a0[0] = local_1a0[0] & 0xffffff00;
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130 = local_130 & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x14);
    FUN_009adb70();
    if (local_218 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    local_c = 0xffffffff;
  }
  uVar12 = *(uint *)(param_1 + 0xbdc);
  uVar13 = ((int)uVar12 >> 0x1f) << 0xf | uVar12 >> 0x11;
  uVar11 = ((int)local_23c >> 0x1f) << 0xf | (uint)local_23c >> 0x11;
  uVar12 = uVar12 << 0xf;
  if (((int)uVar11 <= (int)uVar13) &&
     (((int)uVar11 < (int)uVar13 || ((uint)((int)local_23c << 0xf) < uVar12)))) {
    uVar12 = (int)local_23c << 0xf;
    uVar13 = uVar11;
  }
  if (param_2 == 0) {
    puVar1 = (uint *)(param_1 + 0x1a0);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 + uVar12;
    *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + uVar13 + (uint)CARRY4(uVar11,uVar12);
    ExceptionList = pvStack_14;
    return;
  }
  if ((-1 < (int)uVar13) && ((0 < (int)uVar13 || (uVar12 != 0)))) {
    uStack_ac = 0xf;
    uStack_b0 = 0;
    uStack_c0 = uStack_c0 & 0xffffff00;
    FUN_00409350();
    local_c = 0x15;
    uStack_c8 = 0xf;
    uStack_cc = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0x16;
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    uStack_f8 = uStack_f8 & 0xffffff00;
    FUN_00409350();
    local_c._0_1_ = 0x17;
    FUN_00988bb0(auStack_34,3);
    local_c._0_1_ = 0x18;
    FUN_009a8ee0();
    local_c._0_1_ = 0x19;
    iVar9 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar9 + 0x6c));
    local_c._0_1_ = 0x1a;
    FUN_00988f20();
    local_c._0_1_ = 0x1b;
    FUN_00988f20();
    local_c._0_1_ = 0x1c;
    FUN_00988f20();
    local_c._0_1_ = 0x1d;
    FUN_00448aa0();
    if (0xf < uStack_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_74 = 0xf;
    uStack_78 = 0;
    uStack_88 = uStack_88 & 0xffffff00;
    if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_3c = 0xf;
    uStack_40 = 0;
    uStack_50 = uStack_50 & 0xffffff00;
    if (0xf < uStack_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_90 = 0xf;
    uStack_94 = 0;
    uStack_a4 = uStack_a4 & 0xffffff00;
    if (0xf < uStack_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    uStack_6c = uStack_6c & 0xffffff00;
    local_c = CONCAT31(local_c._1_3_,0x1e);
    FUN_009adb70();
    if (iStack_110 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0;
    if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_20 = 0xf;
    uStack_24 = 0;
    auStack_34[0] = auStack_34[0] & 0xffffff00;
    if (0xf < uStack_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_e4 = 0xf;
    uStack_e8 = 0;
    uStack_f8 = uStack_f8 & 0xffffff00;
    if (0xf < uStack_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_c8 = 0xf;
    uStack_cc = 0;
    uStack_dc = uStack_dc & 0xffffff00;
    if (0xf < uStack_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_14;
  return;
}

