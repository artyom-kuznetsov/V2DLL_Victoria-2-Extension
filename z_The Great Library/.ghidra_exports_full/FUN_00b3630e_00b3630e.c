// FUN_00b3630e @ 00b3630e body=[[00b3630e, 00b36498]]


float10 FUN_00b3630e(void)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  float10 fVar4;
  double in_XMM0_Qa;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  uVar1 = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar2 = (uVar1 & 0x7fff) + 0xcfd0;
  if (uVar2 < 0x10c6) {
    dVar10 = (in_XMM0_Qa * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
    iVar3 = ((int)ROUND(in_XMM0_Qa * 10.185916357881302) + 0x1c7610U & 0x3f) * 0x20;
    dVar11 = dVar10 * 3.798187816439979e-12;
    dVar5 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar15 = in_XMM0_Qa - dVar10 * 0.09817477042088285;
    dVar16 = dVar15 - dVar11;
    dVar6 = dVar5 - dVar11;
    dVar8 = dVar5 - dVar10 * 3.798187816439979e-12;
    dVar7 = dVar6 * dVar6;
    dVar9 = dVar8 * dVar8;
    dVar12 = *(double *)(&DAT_00e48f50 + iVar3) + *(double *)(&DAT_00e48f68 + iVar3);
    dVar13 = *(double *)(&DAT_00e48f68 + iVar3) * dVar16;
    dVar17 = dVar16 * *(double *)(&DAT_00e48f50 + iVar3);
    dVar14 = dVar13 + *(double *)(&DAT_00e48f58 + iVar3);
    dVar18 = dVar17 + dVar14;
    return (float10)(dVar18 + (dVar10 * 1.2639164054974691e-22 - ((dVar15 - dVar16) - dVar11)) *
                              (*(double *)(&DAT_00e48f58 + iVar3) * dVar16 - dVar12) +
                              *(double *)(&DAT_00e48f60 + iVar3) +
                              (*(double *)(&DAT_00e48f58 + iVar3) - dVar14) + dVar13 +
                              (dVar14 - dVar18) + dVar17 +
                              (dVar7 * 0.008333333333333333 + -0.16666666666666666 +
                              (dVar5 * 2.7557319223985893e-06 * dVar6 + -0.0001984126984126984) *
                              dVar7 * dVar7) * dVar12 * dVar16 * dVar7 +
                              (dVar9 * 0.041666666666666664 + -0.5 +
                              (dVar5 * 2.48015873015873e-05 * dVar8 + -0.001388888888888889) *
                              dVar9 * dVar9) * *(double *)(&DAT_00e48f58 + iVar3) * dVar9);
  }
  if ((short)uVar2 < 0x10c6) {
    return (float10)(1.0 - (double)((ulonglong)in_XMM0_Qa & 0xffffffffffff |
                                   (ulonglong)(uVar1 & 0x7fff) << 0x30));
  }
  fVar4 = (float10)FUN_00b3545f();
  return fVar4;
}

