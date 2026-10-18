// FUN_00aea300 @ 00aea300 body=[[00aea300, 00aea72c]]


void FUN_00aea300(float *param_1,uint param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  uint uVar12;
  
  pfVar11 = param_1;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar12 = 1;
  fVar1 = param_1[2];
  param_3[2] = fVar1;
  if (1 < param_2) {
    if (3 < (int)(param_2 - 1)) {
      fVar2 = param_3[1];
      iVar10 = (param_2 - 5 >> 2) + 1;
      uVar12 = iVar10 * 4 + 1;
      pfVar9 = param_1 + 8;
      do {
        iVar10 = iVar10 + -1;
        *param_3 = pfVar9[-5] + *param_3;
        fVar3 = pfVar9[-4];
        param_3[1] = fVar2 + fVar3;
        fVar4 = pfVar9[-3];
        param_3[2] = fVar4 + fVar1;
        *param_3 = pfVar9[-2] + *param_3;
        fVar2 = pfVar9[-1] + fVar2 + fVar3;
        param_3[1] = fVar2;
        fVar1 = *pfVar9 + fVar4 + fVar1;
        param_3[2] = fVar1;
        *param_3 = pfVar9[1] + *param_3;
        fVar2 = pfVar9[2] + fVar2;
        param_3[1] = fVar2;
        fVar1 = pfVar9[3] + fVar1;
        param_3[2] = fVar1;
        *param_3 = pfVar9[4] + *param_3;
        fVar2 = pfVar9[5] + fVar2;
        param_3[1] = fVar2;
        fVar1 = pfVar9[6] + fVar1;
        param_3[2] = fVar1;
        pfVar9 = pfVar9 + 0xc;
      } while (iVar10 != 0);
    }
    if (uVar12 < param_2) {
      fVar1 = param_3[1];
      fVar2 = param_3[2];
      iVar10 = param_2 - uVar12;
      pfVar9 = param_1 + uVar12 * 3 + 2;
      do {
        iVar10 = iVar10 + -1;
        *param_3 = pfVar9[-2] + *param_3;
        fVar1 = pfVar9[-1] + fVar1;
        param_3[1] = fVar1;
        fVar2 = fVar2 + *pfVar9;
        param_3[2] = fVar2;
        pfVar9 = pfVar9 + 3;
      } while (iVar10 != 0);
    }
  }
  fVar1 = (float)(int)param_2;
  if ((int)param_2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar1 = 1.0 / fVar1;
  uVar12 = 0;
  *param_3 = *param_3 * fVar1;
  param_3[1] = param_3[1] * fVar1;
  param_3[2] = fVar1 * param_3[2];
  *param_4 = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[3] = 0.0;
  param_4[4] = 0.0;
  param_4[5] = 0.0;
  if (3 < (int)param_2) {
    fVar1 = param_4[1];
    fVar2 = param_4[2];
    fVar3 = param_4[3];
    iVar10 = (param_2 - 4 >> 2) + 1;
    fVar4 = param_4[4];
    pfVar9 = param_1 + 5;
    param_1 = (float *)param_4[5];
    uVar12 = iVar10 * 4;
    do {
      fVar5 = pfVar9[-5] - *param_3;
      fVar7 = pfVar9[-4] - param_3[1];
      fVar6 = pfVar9[-3] - param_3[2];
      *param_4 = fVar5 * fVar5 + *param_4;
      fVar1 = fVar7 * fVar5 + fVar1;
      param_4[1] = fVar1;
      fVar2 = fVar6 * fVar5 + fVar2;
      param_4[2] = fVar2;
      fVar3 = fVar7 * fVar7 + fVar3;
      param_4[3] = fVar3;
      fVar4 = fVar6 * fVar7 + fVar4;
      param_4[4] = fVar4;
      fVar6 = fVar6 * fVar6 + (float)param_1;
      param_4[5] = fVar6;
      fVar7 = pfVar9[-2] - *param_3;
      fVar5 = pfVar9[-1] - param_3[1];
      fVar8 = *pfVar9 - param_3[2];
      *param_4 = fVar7 * fVar7 + *param_4;
      fVar1 = fVar5 * fVar7 + fVar1;
      param_4[1] = fVar1;
      fVar2 = fVar8 * fVar7 + fVar2;
      param_4[2] = fVar2;
      fVar3 = fVar5 * fVar5 + fVar3;
      param_4[3] = fVar3;
      fVar4 = fVar8 * fVar5 + fVar4;
      param_4[4] = fVar4;
      fVar6 = fVar8 * fVar8 + fVar6;
      param_4[5] = fVar6;
      fVar5 = pfVar9[1] - *param_3;
      fVar7 = pfVar9[2] - param_3[1];
      fVar8 = pfVar9[3] - param_3[2];
      iVar10 = iVar10 + -1;
      *param_4 = fVar5 * fVar5 + *param_4;
      fVar1 = fVar7 * fVar5 + fVar1;
      param_4[1] = fVar1;
      fVar2 = fVar8 * fVar5 + fVar2;
      param_4[2] = fVar2;
      fVar3 = fVar7 * fVar7 + fVar3;
      param_4[3] = fVar3;
      fVar4 = fVar8 * fVar7 + fVar4;
      param_4[4] = fVar4;
      fVar6 = fVar8 * fVar8 + fVar6;
      param_4[5] = fVar6;
      fVar8 = pfVar9[4] - *param_3;
      fVar7 = pfVar9[5] - param_3[1];
      fVar5 = pfVar9[6] - param_3[2];
      *param_4 = fVar8 * fVar8 + *param_4;
      fVar1 = fVar7 * fVar8 + fVar1;
      param_4[1] = fVar1;
      fVar2 = fVar5 * fVar8 + fVar2;
      param_4[2] = fVar2;
      fVar3 = fVar7 * fVar7 + fVar3;
      param_4[3] = fVar3;
      fVar4 = fVar5 * fVar7 + fVar4;
      param_4[4] = fVar4;
      param_1 = (float *)(fVar5 * fVar5 + fVar6);
      param_4[5] = (float)param_1;
      pfVar9 = pfVar9 + 0xc;
    } while (iVar10 != 0);
  }
  if (uVar12 < param_2) {
    fVar1 = param_4[1];
    fVar2 = param_4[2];
    fVar3 = param_4[3];
    iVar10 = param_2 - uVar12;
    fVar4 = param_4[4];
    param_1 = (float *)param_4[5];
    pfVar11 = pfVar11 + uVar12 * 3 + 2;
    do {
      iVar10 = iVar10 + -1;
      fVar7 = pfVar11[-2] - *param_3;
      fVar5 = pfVar11[-1] - param_3[1];
      fVar6 = *pfVar11 - param_3[2];
      *param_4 = fVar7 * fVar7 + *param_4;
      fVar1 = fVar5 * fVar7 + fVar1;
      param_4[1] = fVar1;
      fVar2 = fVar6 * fVar7 + fVar2;
      param_4[2] = fVar2;
      fVar3 = fVar5 * fVar5 + fVar3;
      param_4[3] = fVar3;
      fVar4 = fVar6 * fVar5 + fVar4;
      param_4[4] = fVar4;
      param_1 = (float *)(fVar6 * fVar6 + (float)param_1);
      param_4[5] = (float)param_1;
      pfVar11 = pfVar11 + 3;
    } while (iVar10 != 0);
  }
  fVar1 = ABS(*param_4);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar1 < ABS(param_4[1])) {
    fVar1 = ABS(param_4[1]);
  }
  if (fVar1 < ABS(param_4[2])) {
    fVar1 = ABS(param_4[2]);
  }
  if (fVar1 < ABS(param_4[3])) {
    fVar1 = ABS(param_4[3]);
  }
  if (fVar1 < ABS(param_4[4])) {
    fVar1 = ABS(param_4[4]);
  }
  if (fVar1 < ABS(param_4[5])) {
    fVar1 = ABS(param_4[5]);
  }
  *param_4 = *param_4 / fVar1;
  param_4[1] = param_4[1] / fVar1;
  param_4[2] = param_4[2] / fVar1;
  param_4[3] = param_4[3] / fVar1;
  param_4[4] = param_4[4] / fVar1;
  param_4[5] = param_4[5] / fVar1;
  return;
}

