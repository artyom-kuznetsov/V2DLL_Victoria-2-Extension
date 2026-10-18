// FUN_00b32f99 @ 00b32f99 body=[[00b32f99, 00b33ad0]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00b32f99(double param_1,int param_2,uint param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ushort uVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  ulonglong uVar22;
  ulonglong in_XMM2_Qb;
  undefined1 auVar23 [16];
  longlong lVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  ulonglong uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 local_c [4];
  
  dVar13 = (double)((ulonglong)param_1 >> 0x2c);
  uVar11 = (ushort)((ulonglong)param_1 >> 0x30);
  uVar3 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
  dVar35 = (double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) *
           *(double *)((int)&DAT_00de9ec0 + uVar3 * 4);
  dVar31 = *(double *)((int)&DAT_00de9ec0 + uVar3 * 4);
  dVar14 = *(double *)(&DAT_00dea2d0 + uVar3 * 8);
  dVar33 = *(double *)(&UNK_00dea2d8 + uVar3 * 8);
  uVar7 = 0x7fef - uVar11;
  uVar3 = SUB84(param_1,0);
  uVar9 = (uint)((ulonglong)param_1 >> 0x20);
  dVar32 = param_1;
  if (0x7fffffff < (uVar11 - 0x10 | uVar7)) {
    auVar23._4_4_ = param_3;
    auVar23._0_4_ = param_2;
    in_XMM3._0_8_ = 0x7fffffffffffffff;
    auVar23._8_8_ = in_XMM2_Qb;
    uVar8 = param_3 & 0x7fffffff;
    if (uVar8 < 0x7ff00000) {
      if (param_2 == 0 && uVar8 == 0) {
        _local_c = 1.0;
        uVar10 = 0x1a;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          uVar10 = 0x1d;
          if (((uVar9 & 0x7fffffff) < 0x7ff00001) &&
             (((uVar9 & 0x7fffffff) < 0x7ff00000 || (uVar3 == 0)))) {
            return (float10)1.0;
          }
        }
        goto LAB_00b337a0;
      }
      if ((int)uVar7 < 0) {
        auVar27._8_8_ = in_XMM3._8_8_ << 0x34;
        auVar27._0_8_ = 0xfff0000000000000;
        iVar6 = (uVar8 >> 0x14) - 0x3f3;
        in_XMM3 = (undefined1  [16])0x0;
        uVar28 = (ulonglong)
                 CONCAT22((ushort)(-1 < iVar6) * (short)((uint)iVar6 >> 0x10),
                          (ushort)(-1 < (short)iVar6) * (short)iVar6);
        lVar21 = SUB168(auVar23 | auVar27,0) << uVar28;
        lVar26 = SUB168(auVar23 | auVar27,8) << uVar28;
        auVar24._0_4_ = -(uint)((int)lVar21 == 0);
        auVar24._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0);
        auVar24._8_4_ = -(uint)((int)lVar26 == 0);
        auVar24._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
        bVar1 = SUB161(auVar24 >> 7,0) & 1 | (SUB161(auVar24 >> 0xf,0) & 1) << 1 |
                (SUB161(auVar24 >> 0x17,0) & 1) << 2 | (SUB161(auVar24 >> 0x1f,0) & 1) << 3 |
                (SUB161(auVar24 >> 0x27,0) & 1) << 4 | (SUB161(auVar24 >> 0x2f,0) & 1) << 5 |
                (SUB161(auVar24 >> 0x37,0) & 1) << 6 | SUB161(auVar24 >> 0x3f,0) << 7;
        uVar8 = 0x7fef - uVar7 & 0x7fff;
        uVar28 = auVar24._8_8_;
        if (0x7fef < uVar8) {
          auVar17._0_4_ = -(uint)((int)((ulonglong)param_1 & 0xfffffffffffff) == 0);
          auVar17._4_4_ = -(uint)((int)(((ulonglong)param_1 & 0xfffffffffffff) >> 0x20) == 0);
          auVar17._8_4_ = 0xffffffff;
          auVar17._12_4_ = 0xffffffff;
          if ((byte)(SUB161(auVar17 >> 7,0) & 1 | (SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                     (SUB161(auVar17 >> 0x17,0) & 1) << 2 | (SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                     (SUB161(auVar17 >> 0x27,0) & 1) << 4 | (SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                     (SUB161(auVar17 >> 0x37,0) & 1) << 6 | SUB161(auVar17 >> 0x3f,0) << 7) == 0xff)
          {
            if (((ulonglong)param_1 & 0x8000000000000000) != 0) {
              if ((bVar1 != 0xff) ||
                 (uVar22 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4),
                 lVar21 = CONCAT44(param_3,param_2) << uVar22, lVar26 = uVar28 << uVar22,
                 auVar25._0_4_ = -(uint)((int)lVar21 == 0),
                 auVar25._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == 0),
                 auVar25._8_4_ = -(uint)((int)lVar26 == 0),
                 auVar25._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0),
                 (byte)(SUB161(auVar25 >> 7,0) & 1 | (SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                        (SUB161(auVar25 >> 0x17,0) & 1) << 2 | (SUB161(auVar25 >> 0x1f,0) & 1) << 3
                        | (SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                        (SUB161(auVar25 >> 0x2f,0) & 1) << 5 | (SUB161(auVar25 >> 0x37,0) & 1) << 6
                       | SUB161(auVar25 >> 0x3f,0) << 7) == 0xff)) {
                if ((param_3 & 0x80000000) != 0) {
                  return (float10)0;
                }
                goto LAB_00b33727;
              }
              if ((param_3 & 0x80000000) == 0) {
                return (float10)-INFINITY;
              }
              goto LAB_00b335b9;
            }
            if ((param_3 & 0x80000000) != 0) {
              return (float10)0;
            }
            goto LAB_00b33727;
          }
          goto LAB_00b335ff;
        }
        if (bVar1 == 0xff) {
          uVar22 = (ulonglong)(((param_3 & 0x7fffffff) >> 0x14) - 0x3f4);
          in_XMM3 = ZEXT816(0x8000000000000000);
          lVar21 = CONCAT44(param_3,param_2) << uVar22;
          lVar26 = uVar28 << uVar22;
          auVar23._0_4_ = -(uint)((int)lVar21 == 0);
          auVar23._4_4_ = -(uint)((int)((ulonglong)lVar21 >> 0x20) == in_XMM3._4_4_);
          auVar23._8_4_ = -(uint)((int)lVar26 == 0);
          auVar23._12_4_ = -(uint)((int)((ulonglong)lVar26 >> 0x20) == 0);
          uVar7 = (ushort)((ushort)(SUB161(auVar23 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7) + 0x3ff01 & 0x40000;
          if (0xf < uVar8) {
            uVar8 = 0xbfe7f;
            in_XMM3 = ZEXT816(0xfffffffffffff);
            in_XMM2_Qb = auVar23._8_8_;
            goto LAB_00b33016;
          }
          goto LAB_00b33434;
        }
        uVar22 = (ulonglong)param_1 >> 0x20;
        in_XMM2_Qb = uVar28 >> 0x20;
        uVar7 = 0;
        uVar8 = 0;
        if (uVar3 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) {
          _local_c = -NAN;
          uVar10 = 0x1c;
          goto LAB_00b337a0;
        }
LAB_00b334ba:
        dVar32 = dVar13;
        if ((uVar8 & 0x7fffffff) == 0) {
          if ((param_3 & 0x80000000) == 0) {
            if ((uVar8 & uVar7 << 0xd) == 0) {
              return (float10)0;
            }
LAB_00b335b9:
            return (float10)-0.0;
          }
          _local_c = (double)((ulonglong)(uVar8 & uVar7 << 0xd | 0x7ff00000) << 0x20);
          uVar10 = 0x1b;
          goto LAB_00b337a0;
        }
      }
      else {
        uVar7 = 0;
LAB_00b33434:
        dVar35 = 2.225073858507201e-308;
        in_XMM2_Qb = auVar23._8_8_;
        uVar22 = 0x3ff0000000000000;
        dVar13 = param_1 * 1.8446744073709552e+19;
        uVar8 = uVar9;
        dVar32 = dVar13;
        if (uVar3 == 0) goto LAB_00b334ba;
      }
      dVar13 = (double)((ulonglong)ABS(dVar32) >> 0x2c);
      uVar8 = (SUB82(dVar13,0) & 0xff) + 1 & 0x1fe;
      dVar35 = (double)((ulonglong)dVar35 & (ulonglong)dVar32 | uVar22) *
               *(double *)((int)&DAT_00de9ec0 + uVar8 * 4);
      dVar31 = *(double *)((int)&DAT_00de9ec0 + uVar8 * 4);
      dVar14 = *(double *)(&DAT_00dea2d0 + uVar8 * 8);
      dVar33 = *(double *)(&UNK_00dea2d8 + uVar8 * 8);
      uVar8 = 0x43e7f;
      goto LAB_00b33016;
    }
    uVar7 = uVar9;
    if ((0x7fefffff < (uVar9 & 0x7fffffff)) && ((0x7ff00000 < (uVar9 & 0x7fffffff) || (uVar3 != 0)))
       ) {
LAB_00b335ff:
      _local_c = param_1 + param_1;
      uVar10 = 0x3ee;
      goto LAB_00b337a0;
    }
    goto LAB_00b336b5;
  }
  uVar7 = 0;
  uVar8 = 0x3fe7f;
LAB_00b33016:
  uVar28 = in_XMM3._8_8_;
  uVar4 = ((ushort)((ulonglong)dVar35 >> 0x26) & 0xff) + 1 & 0x1fe;
  dVar29 = (double)((ulonglong)dVar32 & 0xfffffffffffff | DAT_00ded760);
  dVar15 = (double)((ulonglong)dVar29 & 0xfffffffff8000000);
  dVar29 = dVar29 - dVar15;
  uVar5 = ((ushort)((ulonglong)(dVar35 * *(double *)(&DAT_00deaae0 + uVar4 * 4)) >> 0x1f) & 0x1ff) +
          1 & 0x3fe;
  dVar30 = dVar31 * *(double *)(&DAT_00deaae0 + uVar4 * 4) * *(double *)(&DAT_00deb700 + uVar5 * 4);
  dVar35 = dVar35 * *(double *)(&DAT_00deaae0 + uVar4 * 4) * *(double *)(&DAT_00deb700 + uVar5 * 4);
  dVar32 = dVar14 + *(double *)(&DAT_00deaef0 + uVar4 * 8) +
           (double)(int)((longlong)dVar13 - (ulonglong)uVar8 >> 8) +
           *(double *)(&DAT_00debf10 + uVar5 * 8);
  dVar34 = dVar33 + *(double *)(&DAT_00deaef8 + uVar4 * 8) + *(double *)(&DAT_00debf18 + uVar5 * 8);
  dVar14 = (double)((ulonglong)dVar30 & 0xfffffffff8000000);
  dVar30 = dVar30 - dVar14;
  dVar36 = dVar35 + -1.442694902420044;
  dVar33 = dVar32 + dVar36;
  dVar31 = (double)CONCAT44(param_3,param_2);
  uVar2 = (ushort)(param_3 >> 0x10);
  dVar32 = dVar32 - dVar33;
  uVar4 = (uint)(ushort)((ulonglong)dVar33 >> 0x30);
  dVar14 = (((dVar35 - dVar14 * dVar15) - dVar15 * dVar30) - dVar14 * dVar29) - dVar29 * dVar30;
  dVar35 = dVar36 - dVar14;
  dVar13 = dVar33 - dVar14;
  uVar8 = uVar2 & 0x7ff0;
  if (0x7fef < uVar8) {
    _local_c = (double)CONCAT44(param_3,param_2);
    auVar23._8_8_ = in_XMM2_Qb;
    auVar23._0_8_ = _local_c;
    in_XMM3._0_8_ = (ulonglong)_local_c & 0xfffffffffffff;
    in_XMM3._8_8_ = uVar28 >> 0x1f & in_XMM2_Qb;
    auVar18._0_4_ = -(uint)((int)in_XMM3._0_8_ == 0);
    auVar18._4_4_ = -(uint)((int)(in_XMM3._0_8_ >> 0x20) == 0);
    auVar18._8_4_ = -(uint)((int)in_XMM3._8_8_ == 0);
    auVar18._12_4_ = -(uint)((int)(in_XMM3._8_8_ >> 0x20) == 0);
    if ((byte)(SUB161(auVar18 >> 7,0) & 1 | (SUB161(auVar18 >> 0xf,0) & 1) << 1 |
               (SUB161(auVar18 >> 0x17,0) & 1) << 2 | (SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
               (SUB161(auVar18 >> 0x27,0) & 1) << 4 | (SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
               (SUB161(auVar18 >> 0x37,0) & 1) << 6 | SUB161(auVar18 >> 0x3f,0) << 7) == 0xff) {
      bVar12 = uVar3 == 0;
      uVar3 = uVar4;
      if (bVar12) {
        if (uVar9 != 0x3ff00000) {
          uVar3 = uVar9;
          if (uVar9 == 0xbff00000) {
            return (float10)1;
          }
          goto LAB_00b336b5;
        }
      }
      else {
LAB_00b336b5:
        _local_c = auVar23._0_8_;
        uVar28 = in_XMM3._8_8_ & auVar23._8_8_;
        auVar19._0_4_ = -(uint)((int)((ulonglong)_local_c & 0xfffffffffffff) == 0);
        auVar19._4_4_ = -(uint)((int)(((ulonglong)_local_c & 0xfffffffffffff) >> 0x20) == 0);
        auVar19._8_4_ = -(uint)((int)uVar28 == 0);
        auVar19._12_4_ = -(uint)((int)(uVar28 >> 0x20) == 0);
        if ((byte)(SUB161(auVar19 >> 7,0) & 1 | (SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                   (SUB161(auVar19 >> 0x17,0) & 1) << 2 | (SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                   (SUB161(auVar19 >> 0x27,0) & 1) << 4 | (SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                   (SUB161(auVar19 >> 0x37,0) & 1) << 6 | SUB161(auVar19 >> 0x3f,0) << 7) != 0xff)
        goto LAB_00b3372e;
        if (uVar3 != 0 || uVar7 != 0xbff00000) {
          if ((auVar23._6_2_ & 0x8000) == 0) {
            if ((uVar11 & 0x7ff0) < 0x3ff0) {
              return (float10)0;
            }
          }
          else if (0x3fef < (uVar11 & 0x7ff0)) {
            return (float10)0;
          }
LAB_00b33727:
          return (float10)INFINITY;
        }
      }
      _local_c = 1.0;
      uVar10 = 0x1c;
    }
    else {
LAB_00b3372e:
      _local_c = _local_c + _local_c;
      uVar10 = 0x3ee;
    }
    goto LAB_00b337a0;
  }
  iVar6 = (uVar8 - 0x3ff0) + (uVar4 & 0x7ff0);
  if ((0x40a0U - iVar6 | iVar6 - 0x3c70U) < 0x80000000) {
LAB_00b33168:
    dVar15 = (double)((ulonglong)dVar31 & 0xfffffffff8000000);
    dVar29 = (double)((ulonglong)dVar13 & 0xfffffffff8000000);
    dVar14 = (dVar32 + dVar36) - (dVar14 - (dVar33 - dVar13));
    dVar33 = dVar15 * dVar29 * 128.0;
    uVar3 = (uint)ROUND(dVar33);
    dVar31 = dVar15 * (dVar13 - dVar29) + dVar29 * (dVar31 - dVar15) +
             (dVar13 - dVar29) * (dVar31 - dVar15);
    if (0 < (int)(0x1ff7f - uVar3 | uVar3 + 0x1e1ff)) {
      iVar6 = (uVar3 & 0x7f) * 0x10;
      auVar16._0_8_ = (double)((ulonglong)((uVar7 + uVar3 & 0xffffff80) + 0x1ff80) << 0x2d);
      auVar16._8_4_ = 0;
      auVar16._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
      dVar32 = *(double *)(&DAT_00decf40 + iVar6) * auVar16._0_8_;
      dVar31 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
               dVar31 + ((dVar35 * 0.16015105075297303 + dVar35 * dVar35 * -0.08325619496072671) *
                         dVar35 * dVar35 +
                         dVar35 * 9.597935033233511e-08 + dVar35 * dVar35 * -0.3465736568077919 +
                        dVar34 + dVar14) * (double)CONCAT44(param_3,param_2);
      return (float10)(dVar31 * dVar31 * dVar32 *
                       (dVar31 * 0.0013333558146428443 + 0.009618129107628477) * dVar31 * dVar31 +
                       *(double *)(&UNK_00decf48 + iVar6) * auVar16._8_8_ +
                       (dVar31 * 0.055504108664821576 + 0.2402265069591007) * dVar31 * dVar31 *
                       dVar32 + dVar31 * 0.6931471805599453 * dVar32 + dVar32);
    }
    if ((int)uVar3 < 1) {
      if ((int)uVar3 < -0x3fdff) {
LAB_00b339f9:
        _local_c = (double)((ulonglong)uVar7 << 0x2d);
        uVar10 = 0x19;
        goto LAB_00b337a0;
      }
      uVar7 = uVar7 + 0x80;
      uVar9 = (uVar3 & 0xffffff80) + 0x3fe80;
      uVar11 = 0;
    }
    else {
      if (0x3ffff < uVar3) goto LAB_00b33a1c;
      uVar7 = uVar7 + 0x3ff00;
      uVar9 = uVar3 - 0x80 & 0xffffff80;
      uVar11 = 0x3ff0;
    }
    iVar6 = (uVar3 & 0x7f) * 0x10;
    uVar3 = ((int)-(uVar9 - 0x1ff80) >> 7) + 2;
    auVar20._0_8_ = (double)((ulonglong)uVar9 << 0x2d);
    auVar20._8_4_ = 0;
    auVar20._12_4_ = (int)((ulonglong)auVar20._0_8_ >> 0x20);
    dVar32 = *(double *)(&DAT_00decf40 + iVar6) * auVar20._0_8_;
    dVar31 = (dVar33 - ((dVar33 + 6755399441055744.0) - 6755399441055744.0)) * 0.0078125 +
             dVar31 + ((dVar35 * 0.16015105075297303 + dVar35 * dVar35 * -0.08325619496072671) *
                       dVar35 * dVar35 +
                       dVar35 * 9.597935033233511e-08 + dVar35 * dVar35 * -0.3465736568077919 +
                      dVar34 + dVar14) * (double)CONCAT44(param_3,param_2);
    _local_c = (double)((ulonglong)uVar7 << 0x2d);
    uVar28 = (ulonglong)(uVar3 + (uVar3 & 0x20));
    dVar14 = (double)(-1L << uVar28 & (ulonglong)dVar32);
    dVar31 = dVar31 * dVar31 * dVar32 *
             (dVar31 * 0.0013333558146428443 + 0.009618129107628477) * dVar31 * dVar31 +
             *(double *)(&UNK_00decf48 + iVar6) * auVar20._8_8_ +
             (dVar31 * 0.055504108664821576 + 0.2402265069591007) * dVar31 * dVar31 * dVar32 +
             dVar31 * 0.6931471805599453 * dVar32;
    dVar33 = (double)((ulonglong)(dVar14 + dVar31) & -1L << uVar28);
    dVar31 = dVar31 + (dVar14 - dVar33) + (dVar32 - dVar14);
    if ((int)(uVar9 - 0x1ff80) < 1) {
      _local_c = dVar31 * _local_c + dVar33 * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
      uVar10 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
    else {
      _local_c = (dVar31 + dVar33) * _local_c;
      _local_c = _local_c + (double)((ulonglong)uVar11 << 0x30) * _local_c;
      uVar10 = 0x18;
      if ((((ushort)((ulonglong)_local_c >> 0x30) & 0x7ff0) != 0x7ff0) &&
         (uVar10 = 0x19, ((ulonglong)_local_c & 0x7ff0000000000000) != 0)) {
        return (float10)_local_c;
      }
    }
  }
  else {
    dVar33 = dVar31 * dVar13;
    uVar3 = (ushort)((ulonglong)dVar33 >> 0x30) & 0x7ff0;
    uVar9 = uVar3 - 0x3c70;
    if ((0x40a0 - uVar3 | uVar9) < 0x80000000) goto LAB_00b33168;
    if (0x7fffffff < uVar9) {
      return (float10)(double)((ulonglong)(uVar7 | 0x1ff80) << 0x2d);
    }
    if (((uVar2 ^ (uVar11 & 0x7ff0) + 0xc010) & 0x8000) != 0) goto LAB_00b339f9;
LAB_00b33a1c:
    uVar10 = 0x18;
    if (uVar7 == 0) {
      _local_c = INFINITY;
    }
    else {
      _local_c = -INFINITY;
    }
  }
LAB_00b337a0:
  ___libm_error_support(&param_1,&param_2,local_c,uVar10);
  return (float10)_local_c;
}

