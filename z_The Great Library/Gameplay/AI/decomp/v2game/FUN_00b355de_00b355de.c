// FUN_00b355de @ 00b355de body=[[00b355de, 00b35b3f]]


float10 FUN_00b355de(double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [12];
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  double dVar9;
  undefined1 in_XMM0 [16];
  uint uVar12;
  ulonglong in_XMM2_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined4 in_XMM7_Dc;
  undefined4 in_XMM7_Dd;
  double local_c;
  
  dVar9 = in_XMM0._0_8_;
  uVar12 = in_XMM0._4_4_;
  uVar5 = uVar12 >> 0xc & 0x7ffff;
  if (uVar5 - 0x3fb00 < 0x3bb) {
    auVar10._0_8_ = ((ulonglong)uVar12 & 0xffffc000) << 0x20;
    auVar10._8_8_ = in_XMM2_Qb & CONCAT44(in_XMM7_Dd,in_XMM7_Dc);
    iVar6 = (uVar12 >> 0xc & 0xfffc) - 0xfb00;
    iVar7 = iVar6 * 4;
    dVar14 = SUB168(auVar10 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar9 * dVar9) * dVar14;
    dVar1 = dVar9 * *(double *)(&DAT_00e46f90 + iVar6 * 2) - dVar13;
    uVar12 = SUB164(auVar10 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar2 = dVar1 * dVar1;
    auVar4._4_8_ = 0;
    auVar4._0_4_ = uVar12;
    auVar11._0_12_ = auVar4 << 0x20;
    auVar11._12_4_ = uVar12;
    return (float10)(((dVar9 - dVar14) * (dVar9 + dVar14)) /
                     (dVar9 * *(double *)(&DAT_00e46f90 + iVar6 * 2) + dVar13) +
                     (dVar2 * 0.044642857142857144 + 0.075) * dVar1 * dVar2 * dVar2 +
                     dVar1 * dVar2 * 0.16666666666666666 +
                     (double)(*(ulonglong *)(&DAT_00e46090 + iVar7) ^ (ulonglong)uVar12 << 0x20) +
                    (double)(*(ulonglong *)(&UNK_00e46098 + iVar7) ^ auVar11._8_8_));
  }
  if (uVar5 - 0x3febb < 0x43) {
    dVar14 = SQRT(1.0 - dVar9 * dVar9);
    auVar3._8_4_ = in_XMM7_Dc;
    auVar3._0_8_ = dVar9;
    auVar3._12_4_ = in_XMM7_Dd;
    dVar2 = (double)((ulonglong)dVar9 & 0x7fffffc000000000);
    dVar1 = ABS(dVar9) - dVar2;
    dVar13 = (double)((ulonglong)dVar14 & 0xffffc00000000000 | 0x200000000000);
    iVar7 = (ushort)((ulonglong)((longlong)dVar14 << 2) >> 0x30) - 0xfec0;
    dVar14 = dVar14 * *(double *)(&DAT_00e46f90 + iVar7 * 8);
    dVar15 = (dVar2 * dVar13 - dVar14) + dVar1 * dVar13;
    iVar7 = iVar7 * 0x10;
    dVar16 = dVar15 * dVar15;
    return (float10)(double)((ulonglong)
                             ((((dVar16 * 0.044642857142857144 + 0.075) * dVar15 * dVar16 * dVar16 +
                               dVar15 * dVar16 * 0.16666666666666666 +
                               (6.123233995736766e-17 - *(double *)(&DAT_00e46090 + iVar7))) -
                              (((1.0 - dVar2 * dVar2) - dVar13 * dVar13) -
                              (ABS(dVar9) + dVar2) * dVar1) / (dVar14 + dVar14 + dVar15)) +
                             (1.5707963267948966 - *(double *)(&UNK_00e46098 + iVar7))) |
                            (ulonglong)(ushort)((ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 0xf) <<
                            0x30);
  }
  if (uVar5 - 0x3c300 < 0x3800) {
    dVar2 = dVar9 * dVar9;
    dVar14 = dVar9 * dVar9;
    dVar1 = dVar9 * dVar2;
    return (float10)(dVar9 + dVar1 * dVar1 * dVar1 *
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) +
                             dVar9 * dVar14 *
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144));
  }
  if (uVar5 - 0x3fefe < 2) {
    dVar15 = SQRT(1.0 - dVar9 * dVar9);
    dVar1 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    dVar16 = (double)((ulonglong)dVar15 & 0xfffffffff8000000);
    dVar9 = dVar9 - dVar1;
    auVar18._8_4_ = SUB84(dVar15,0);
    auVar18._0_8_ = dVar15;
    auVar18._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
    dVar2 = dVar15 * dVar15;
    dVar14 = dVar15 * dVar15;
    dVar17 = dVar15 * dVar2;
    dVar13 = dVar17 * dVar17 * dVar17;
    return (float10)(double)((ulonglong)
                             (((((dVar2 * 0.011551800896136895 + 0.01396484375) *
                                 dVar17 * dVar17 * dVar13 + 6.123233995736766e-17) -
                               ((dVar2 * dVar2 * 0.017352764423076924 +
                                dVar2 * 0.022372159090909092 + 0.030381944444444444) * dVar13 +
                                (dVar14 * dVar14 * 0.044642857142857144 +
                                dVar14 * 0.075 + 0.16666666666666666) * auVar18._8_8_ * dVar14 +
                               (((((1.0 - dVar1 * dVar1) - (dVar1 + dVar1) * dVar9) -
                                 dVar16 * dVar16) - dVar9 * dVar9) +
                               (dVar15 + dVar15 + (dVar16 - dVar15)) * (dVar16 - dVar15)) /
                               (dVar15 + dVar15))) -
                              (dVar15 - ((dVar15 - 1.5707963267948966) + 1.5707963267948966))) -
                             (dVar15 - 1.5707963267948966)) |
                            (ulonglong)(in_XMM0._6_2_ & 0x8000) << 0x30);
  }
  if (uVar5 < 0x3ff00) {
    if (0x7fdf < ((ushort)((ulonglong)param_1 >> 0x30) & 0x7ff0) - 0x10) {
      param_1 = (double)((ulonglong)param_1 | (ulonglong)(param_1 + 0.0));
    }
    return (float10)param_1;
  }
  if ((uVar12 & 0x7fffffff) != 0x3ff00000 || in_XMM0._0_4_ != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)(SUB84(param_1,0) == 0)) < 0) {
      local_c = -NAN;
      uVar8 = 0x3d;
    }
    else {
      local_c = param_1 + 0.0;
      uVar8 = 0x3f1;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar8);
    return (float10)local_c;
  }
  return (float10)(double)((ulonglong)dVar9 & 0x8000000000000000 | 0x3ff921fb54442d18);
}

