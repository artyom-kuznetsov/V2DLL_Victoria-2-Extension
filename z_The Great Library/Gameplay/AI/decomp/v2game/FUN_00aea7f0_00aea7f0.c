// FUN_00aea7f0 @ 00aea7f0 body=[[00aea7f0, 00aeac0f]]


void FUN_00aea7f0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float *pfVar12;
  float *pfVar13;
  float local_10;
  
  pfVar4 = param_1;
  fVar5 = (float10)*param_1 + (float10)param_1[3] + (float10)param_1[5];
  fVar6 = (float10)param_1[1] * (float10)param_1[1];
  fVar7 = (float10)param_1[2] * (float10)param_1[2];
  fVar8 = (float10)param_1[4] * (float10)param_1[4];
  fVar10 = ((float10)param_1[5] * (float10)param_1[3] +
           ((((float10)*param_1 * (float10)param_1[3] - fVar6) +
            (float10)*param_1 * (float10)param_1[5]) - fVar7)) - fVar8;
  fVar9 = (float10)0.33333334;
  fVar11 = (fVar10 * (float10)3.0 - fVar5 * fVar5) * fVar9;
  fVar6 = ((fVar10 * (float10)9.0 * fVar5 - fVar5 * fVar5 * (float10)2.0 * fVar5) -
          (((((float10)param_1[1] * (float10)2.0 * (float10)param_1[2] * (float10)param_1[4] +
             (float10)param_1[5] * (float10)*param_1 * (float10)param_1[3]) -
            (float10)*param_1 * (float10)(float)fVar8) - (float10)(float)fVar7 * (float10)param_1[3]
           ) - (float10)param_1[5] * fVar6) * (float10)27.0) * (float10)0.037037037 * (float10)0.5;
  fVar7 = fVar11 * fVar11 * fVar11 * (float10)0.037037037 + fVar6 * fVar6;
  if ((float10)1e-06 < fVar7) {
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_3 = 0.0;
    param_3[2] = 0.0;
    param_3[1] = 1.0;
    *param_4 = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 1.0;
    return;
  }
  pfVar13 = param_4;
  if ((float10)-1e-06 <= fVar7) {
    fVar7 = (float10)FUN_00b319b0();
    if ((float)fVar6 < 0.0) {
      fVar7 = -fVar7;
    }
    param_1 = (float *)(float)fVar7;
    fVar7 = fVar7 + (float10)(float)(fVar9 * fVar5);
    FUN_00ae88a0(pfVar4,(float)fVar7,param_2,param_3);
    fVar1 = (float)(fVar9 * fVar5) - ((float)param_1 + (float)param_1);
    if (fVar1 <= (float)fVar7) goto LAB_00aeaaef;
  }
  else {
    fVar8 = (float10)fpatan(SQRT(-fVar7),-fVar6);
    fVar1 = (float)(fVar5 * fVar9);
    fVar5 = (float10)FUN_00b319b0();
    if ((float)SQRT(fVar6 * fVar6 - fVar7) < 0.0) {
      fVar5 = -fVar5;
    }
    param_1 = (float *)(float)fVar5;
    fVar6 = (float10)fcos((float10)(float)(fVar8 * fVar9));
    fVar7 = (float10)fsin((float10)(float)(fVar8 * fVar9));
    fVar5 = (fVar5 + fVar5) * fVar6 + (float10)fVar1;
    local_10 = (float)fVar5;
    FUN_00ae8750(pfVar4,(float)fVar5,param_2);
    fVar2 = fVar1 - ((float)fVar7 * 1.7320508 + (float)fVar6) * (float)param_1;
    fVar3 = fVar2;
    pfVar12 = param_3;
    if (local_10 < fVar2) {
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      fVar3 = local_10;
      pfVar12 = param_2;
      local_10 = fVar2;
    }
    FUN_00ae8750(pfVar4,fVar3,pfVar12);
    fVar1 = fVar1 - ((float)fVar6 - (float)fVar7 * 1.7320508) * (float)param_1;
    if (fVar1 <= local_10) {
      if (fVar3 < fVar1) {
        *param_4 = *param_3;
        param_4[1] = param_3[1];
        param_4[2] = param_3[2];
        pfVar13 = param_3;
      }
      goto LAB_00aeaaef;
    }
  }
  *param_4 = *param_3;
  param_4[1] = param_3[1];
  param_4[2] = param_3[2];
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  pfVar13 = param_2;
LAB_00aeaaef:
  FUN_00ae8750(pfVar4,fVar1,pfVar13);
  fVar1 = 1.0 / SQRT(param_2[1] * param_2[1] + *param_2 * *param_2 + param_2[2] * param_2[2]);
  *param_2 = *param_2 * fVar1;
  param_2[1] = param_2[1] * fVar1;
  param_2[2] = param_2[2] * fVar1;
  fVar1 = 1.0 / SQRT(param_3[1] * param_3[1] + *param_3 * *param_3 + param_3[2] * param_3[2]);
  *param_3 = *param_3 * fVar1;
  param_3[1] = param_3[1] * fVar1;
  param_3[2] = fVar1 * param_3[2];
  fVar1 = 1.0 / SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]);
  fVar2 = *param_4 * fVar1;
  *param_4 = fVar2;
  fVar3 = param_4[1] * fVar1;
  param_4[1] = fVar3;
  fVar1 = param_4[2] * fVar1;
  param_4[2] = fVar1;
  if (0.0 <= fVar2 * (param_2[1] * param_3[2] - param_2[2] * param_3[1]) +
             fVar3 * (param_2[2] * *param_3 - *param_2 * param_3[2]) +
             fVar1 * (param_3[1] * *param_2 - *param_3 * param_2[1])) {
    return;
  }
  *param_4 = -fVar2;
  param_4[1] = -fVar3;
  param_4[2] = -fVar1;
  return;
}

