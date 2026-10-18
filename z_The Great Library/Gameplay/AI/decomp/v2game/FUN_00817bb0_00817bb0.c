// FUN_00817bb0 @ 00817bb0 body=[[00817bb0, 00817f8e]]


undefined4 *
FUN_00817bb0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5,undefined4 param_6)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  undefined4 in_ECX;
  float *pfVar6;
  float10 fVar7;
  float fVar8;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b58e06;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_007d9800(param_1,in_ECX);
  param_1[0x50] = param_2;
  param_1[0x4f] = in_ECX;
  piVar1 = param_1 + 0x54;
  *param_1 = CUnitArrow::vftable;
  param_1[0x51] = param_3;
  param_1[0x52] = param_4;
  param_1[0x53] = 0;
  *piVar1 = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  local_8 = 1;
  param_1[0x58] = 0;
  param_1[0x3a] = param_1[0x51];
  pfVar6 = (float *)*param_5;
  do {
    if (pfVar6 == (float *)0x0) {
      FUN_00818390(param_1,param_6);
      ExceptionList = local_10;
      return param_1;
    }
    if ((pfVar6[3] == 0.0) || ((float *)pfVar6[4] == (float *)0x0)) {
LAB_00817f5e:
      FUN_007ea300();
    }
    else {
      fVar8 = *pfVar6;
      local_1c = *(float *)pfVar6[4];
      fVar7 = (float10)FUN_0040b340(fVar8 - local_1c);
      if (((float10)0.20000000298023224 <= fVar7) ||
         ((fVar7 = (float10)FUN_0040b340(pfVar6[1] - *(float *)((int)pfVar6[4] + 4)),
          (float10)0.20000000298023224 <= fVar7 ||
          (fVar7 = (float10)FUN_0040b340(pfVar6[2] - *(float *)((int)pfVar6[4] + 8)),
          (float10)0.20000000298023224 <= fVar7)))) {
        pfVar2 = (float *)pfVar6[3];
        local_28 = *pfVar2 - fVar8;
        local_24 = pfVar2[1] - pfVar6[1];
        local_20 = pfVar2[2] - pfVar6[2];
        local_1c = local_1c - fVar8;
        local_18 = *(float *)((int)pfVar6[4] + 4) - pfVar6[1];
        local_14 = *(float *)((int)pfVar6[4] + 8) - pfVar6[2];
        fVar8 = local_28 * local_28 + local_24 * local_24 + local_20 * local_20;
        if ((0.001 < fVar8) &&
           (fVar4 = local_1c * local_1c + local_18 * local_18 + local_14 * local_14, 0.001 < fVar4))
        {
          fVar7 = (float10)FUN_00401030(fVar8);
          fVar8 = (float)((float10)1 / fVar7);
          local_28 = fVar8 * local_28;
          local_24 = local_24 * fVar8;
          local_20 = fVar8 * local_20;
          fVar7 = (float10)FUN_00401030(fVar4);
          fVar8 = (float)((float10)1 / fVar7);
          local_1c = fVar8 * local_1c;
          local_18 = local_18 * fVar8;
          local_14 = fVar8 * local_14;
        }
        fVar8 = local_18 * local_24 + local_1c * local_28 + local_14 * local_20;
        if (-0.999999 <= fVar8) {
          if (0.999999 < fVar8) {
            fVar8 = 0.999999;
          }
        }
        else {
          fVar8 = -0.999999;
        }
        fVar7 = (float10)FUN_00817b90(fVar8);
        if (-400.0 <= (float)(fVar7 * (float10)57.29577791868205)) goto LAB_00817f5e;
        iVar3 = param_1[0x55];
        iVar5 = iVar3 - *piVar1 >> 0x1f;
        if (((iVar3 - *piVar1) / 0xc + iVar5 != iVar5) && (*piVar1 != iVar3)) {
          param_1[0x55] = iVar3 + -0xc;
        }
      }
      else {
        pfVar6 = (float *)pfVar6[4];
      }
    }
    pfVar6 = (float *)pfVar6[4];
  } while( true );
}

