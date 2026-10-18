// FUN_00b322de @ 00b322de body=[[00b322de, 00b32813]]


float10 FUN_00b322de(undefined8 param_1)

{
  undefined1 auVar1 [12];
  double dVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  int in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dd;
  double dVar9;
  double dVar10;
  ulonglong in_XMM2_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  ulonglong in_XMM7_Qb;
  undefined1 auVar19 [16];
  double local_c;
  
  dVar2 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
  uVar4 = in_XMM0_Db >> 0xc & 0x7ffff;
  if (uVar4 - 0x3fb00 < 0x3bb) {
    auVar11._0_8_ = ((ulonglong)in_XMM0_Db & 0xffffc000) << 0x20;
    auVar11._8_8_ = in_XMM2_Qb & in_XMM7_Qb;
    iVar5 = (in_XMM0_Db >> 0xc & 0xfffc) - 0xfb00;
    iVar6 = iVar5 * 4;
    dVar14 = SUB168(auVar11 | ZEXT816(0x200000000000),0);
    dVar13 = SQRT(1.0 - dVar2 * dVar2) * dVar14;
    dVar9 = dVar2 * *(double *)(&DAT_00de9470 + iVar5 * 2) - dVar13;
    uVar4 = SUB164(auVar11 | ZEXT816(0x200000000000),4) & 0x80000000;
    dVar10 = dVar9 * dVar9;
    auVar3._4_8_ = 0;
    auVar3._0_4_ = uVar4;
    auVar12._0_12_ = auVar3 << 0x20;
    auVar12._12_4_ = uVar4;
    return (float10)((((dVar10 * -0.044642857142857144 + -0.075) * dVar9 * dVar10 * dVar10 +
                      (dVar9 * dVar10 * -0.16666666666666666 -
                      ((double)(*(ulonglong *)(&DAT_00de8570 + iVar6) ^ (ulonglong)uVar4 << 0x20) -
                      6.123233995736766e-17))) -
                     ((dVar2 + dVar14) * ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) - dVar14)) /
                     (dVar2 * *(double *)(&DAT_00de9470 + iVar5 * 2) + dVar13)) -
                    ((double)(*(ulonglong *)(&DAT_00de8578 + iVar6) ^ auVar12._8_8_) -
                    1.5707963267948966));
  }
  if (uVar4 - 0x3febb < 0x41) {
    dVar18 = (double)((ulonglong)(in_XMM0_Db >> 6) << 0x26);
    auVar1._4_4_ = in_XMM0_Db;
    auVar1._0_4_ = in_XMM0_Da;
    auVar1._8_4_ = in_XMM0_Dd >> 0xc;
    dVar14 = 1.0 - dVar18 * dVar18;
    dVar9 = ((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + dVar18) * (dVar2 - dVar18);
    dVar13 = SQRT(dVar14 - dVar9);
    iVar5 = -(uint)(SUB121(auVar1 >> 0x3f,0) & 1);
    dVar10 = (double)((ulonglong)dVar13 & 0xffffc00000000000 |
                     ((ulonglong)in_XMM0_Db & 0x80000000) << 0x20 | 0x200000000000);
    auVar15._0_8_ = CONCAT44(iVar5,iVar5);
    auVar15._8_4_ = iVar5;
    auVar15._12_4_ = iVar5;
    iVar6 = (ushort)((ulonglong)((longlong)dVar13 << 2) >> 0x30) - 0xfec0;
    dVar13 = dVar13 * *(double *)(&DAT_00de9470 + iVar6 * 8);
    dVar18 = (dVar18 * dVar10 - dVar13) + (dVar2 - dVar18) * dVar10;
    dVar2 = ((dVar14 - dVar10 * dVar10) - dVar9) / (dVar13 + dVar13 + dVar18);
    iVar6 = iVar6 * 0x10;
    dVar10 = (double)(auVar15._8_8_ & 0xc00921fb54442d18) + *(double *)(&DAT_00de8578 + iVar6);
    dVar14 = dVar18 * dVar18;
    dVar9 = dVar2 + dVar10;
    return (float10)(double)((ulonglong)
                             ((dVar14 * -0.044642857142857144 + -0.075) * dVar18 * dVar14 * dVar14 +
                              dVar18 * dVar14 * -0.16666666666666666 +
                              (double)(auVar15._0_8_ & 0xbca1a62633145c07) +
                              *(double *)(&DAT_00de8570 + iVar6) + dVar2 + (dVar10 - dVar9) + dVar9)
                            ^ (ulonglong)((ushort)iVar5 & 0x8000) << 0x30);
  }
  if (uVar4 - 0x3c300 < 0x3800) {
    dVar9 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar10 = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * (double)CONCAT44(in_XMM0_Db,in_XMM0_Da);
    dVar14 = dVar2 * dVar9;
    return (float10)((1.5707963267948966 - dVar2) +
                    (((6.123233995736766e-17 -
                      dVar14 * dVar14 * dVar14 *
                      (dVar9 * 0.022372159090909092 + 0.030381944444444444 +
                      dVar9 * dVar9 * 0.017352764423076924)) -
                     (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) * dVar10 *
                     (dVar10 * 0.075 + 0.16666666666666666 + dVar10 * dVar10 * 0.044642857142857144)
                     ) - (dVar2 - (1.5707963267948966 - (1.5707963267948966 - dVar2)))));
  }
  if (uVar4 - 0x3fefc < 4) {
    dVar2 = 0.5 - ABS(dVar2) * 0.5;
    uVar7 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar19._8_4_ = SUB84(dVar2,0);
    auVar19._0_8_ = dVar2;
    auVar19._12_4_ = uVar7;
    dVar9 = SQRT(dVar2);
    dVar14 = auVar19._8_8_;
    auVar17._8_4_ = SUB84(dVar2,0);
    auVar17._0_8_ = dVar2;
    auVar17._12_4_ = uVar7;
    uVar8 = -(ulonglong)((double)CONCAT44(in_XMM0_Db,in_XMM0_Da) < 0.0);
    dVar10 = (double)((ulonglong)dVar9 & 0xfffffffff8000000);
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar9;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    return (float10)(double)((ulonglong)
                             ((double)(uVar8 & 0xc00921fb54442d18) +
                             (dVar2 * 0.022372159090909092 + 0.030381944444444444 +
                             dVar2 * dVar2 * 0.017352764423076924) * dVar2 * dVar2 * dVar2 * dVar2 *
                             (dVar9 + dVar9) + (double)(uVar8 & 0xbca1a62633145c07) +
                             (dVar14 * 0.075 + 0.16666666666666666 +
                             dVar14 * dVar14 * 0.044642857142857144) * auVar17._8_8_ *
                             (auVar16._8_8_ + auVar16._8_8_) +
                             ((dVar2 - dVar10 * dVar10) -
                             (dVar9 - dVar10) * ((dVar9 + dVar9) - (dVar9 - dVar10))) / dVar9 +
                             dVar9 + dVar9) ^
                            (ulonglong)((ushort)(in_XMM0_Db >> 0x10) & 0x8000) << 0x30);
  }
  if (uVar4 < 0x3ff00) {
    return (float10)1.5707963267948966;
  }
  if ((in_XMM0_Db & 0x7fffffff) != 0x3ff00000 || in_XMM0_Da != 0) {
    if ((int)((((uint)((ulonglong)param_1 >> 0x20) & 0x7fffffff) + 0x80100000) -
             (uint)((int)param_1 == 0)) < 0) {
      local_c = -NAN;
      uVar7 = 0x3a;
    }
    else {
      local_c = (double)CONCAT44(in_XMM0_Db,in_XMM0_Da) + 0.0;
      uVar7 = 0x3f0;
    }
    ___libm_error_support(&param_1,&param_1,&local_c,uVar7);
    return (float10)local_c;
  }
  uVar8 = CONCAT44((int)in_XMM0_Db >> 0x1f,(int)in_XMM0_Db >> 0x1f);
  return (float10)((double)(uVar8 & 0x400921fb54442d18) + (double)(uVar8 & 0x3ca1a62633145c07));
}

