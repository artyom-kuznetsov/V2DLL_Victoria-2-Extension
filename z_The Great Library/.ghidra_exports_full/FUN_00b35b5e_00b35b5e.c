// FUN_00b35b5e @ 00b35b5e body=[[00b35b5e, 00b35dab]]


float10 FUN_00b35b5e(double param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined1 in_XMM0 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double local_c;
  
  iVar4 = 0;
  while( true ) {
    uVar7 = in_XMM0._0_8_;
    uVar2 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar8 = (double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000);
    uVar1 = SUB82(dVar8 + 4398046511103.0073,0) & 0x7f0;
    dVar10 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar12 = (double)(uVar7 & 0xfffffffe00000 | 0x3ff0000000000000);
    dVar11 = dVar10 * *(double *)(&DAT_00e47940 + uVar1) - 1.0;
    dVar8 = (dVar8 - dVar10) * *(double *)(&DAT_00e47940 + uVar1);
    dVar9 = ((double)(uVar7 & 0xfffffffffffff | 0x3ff0000000000000) - dVar12) *
            *(double *)(&UNK_00e47948 + uVar1);
    dVar10 = dVar8 + dVar11;
    in_XMM0._8_8_ = dVar9 + (dVar12 * *(double *)(&UNK_00e47948 + uVar1) - 1.0);
    uVar3 = uVar2 - 1;
    if (uVar3 < 0x7fe) {
      iVar4 = (uVar2 - 0x3ff) + iVar4;
      dVar12 = (double)iVar4;
      iVar5 = 0;
      if (uVar1 + iVar4 * 0x400 == 0) {
        iVar5 = 0x10;
      }
      return (float10)(((dVar10 * 0.1428709072311373 + -0.1666800146149218) * dVar10 +
                       0.1999999994995557) * dVar10 * dVar10 * dVar10 * dVar10 * dVar10 +
                       ((in_XMM0._8_8_ * -0.24999999959276006 + 0.33333333333333787) * in_XMM0._8_8_
                       + -0.5000000000000031) * in_XMM0._8_8_ * in_XMM0._8_8_ +
                       *(double *)(&UNK_00e47d58 + uVar1) + dVar12 * 5.497923018708371e-14 +
                       (double)((ulonglong)dVar9 & *(ulonglong *)(&UNK_00e478a8 + iVar5)) +
                      *(double *)(&DAT_00e47d50 + uVar1) + dVar11 + dVar12 * 0.6931471805598903 +
                      (double)((ulonglong)dVar8 & *(ulonglong *)(&DAT_00e478a0 + iVar5)));
    }
    local_c = (double)-(ulonglong)(param_1 == 0.0);
    if (SUB82(local_c,0) != 0) break;
    if (uVar3 != 0xffffffff) {
      if (uVar3 < 0x7ff) {
        local_c = 2.225073858507201e-308;
        if ((double)((ulonglong)param_1 & 0xfffffffffffff | 0x3ff0000000000000) == 1.0) {
          return (float10)INFINITY;
        }
        uVar6 = 1000;
      }
      else if (((uVar2 & 0x7ff) < 0x7ff) ||
              (SUB84(param_1,0) == 0 && ((ulonglong)param_1 & 0xfffff00000000) == 0)) {
        local_c = -NAN;
        uVar6 = 3;
      }
      else {
        uVar6 = 1000;
      }
      goto LAB_00b35d52;
    }
    in_XMM0._0_8_ = param_1 * 4503599627370496.0;
    iVar4 = -0x34;
  }
  local_c = -INFINITY;
  uVar6 = 2;
LAB_00b35d52:
  ___libm_error_support(&param_1,&param_1,&local_c,uVar6);
  return (float10)local_c;
}

