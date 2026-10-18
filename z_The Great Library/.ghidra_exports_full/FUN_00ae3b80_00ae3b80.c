// FUN_00ae3b80 @ 00ae3b80 body=[[00ae3b80, 00ae3c42]]


void FUN_00ae3b80(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *in_ECX;
  
  pfVar1 = (float *)in_ECX[4];
  pfVar2 = (float *)in_ECX[5];
  pfVar3 = (float *)in_ECX[6];
  fVar10 = *pfVar3 - *pfVar2;
  fVar5 = pfVar3[1] - pfVar2[1];
  fVar9 = pfVar3[2] - pfVar2[2];
  fVar4 = *pfVar2 - *pfVar1;
  fVar7 = pfVar2[1] - pfVar1[1];
  fVar8 = pfVar2[2] - pfVar1[2];
  fVar6 = fVar7 * fVar9 - fVar8 * fVar5;
  fVar8 = fVar8 * fVar10 - fVar9 * fVar4;
  fVar4 = fVar5 * fVar4 - fVar7 * fVar10;
  *in_ECX = fVar6;
  in_ECX[1] = fVar8;
  in_ECX[2] = fVar4;
  fVar5 = SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar8 * fVar8);
  if (fVar5 == 0.0) {
    *in_ECX = 0.0;
    in_ECX[1] = 1.0;
    in_ECX[2] = 0.0;
    return;
  }
  fVar5 = 1.0 / fVar5;
  *in_ECX = fVar6 * fVar5;
  in_ECX[1] = fVar8 * fVar5;
  in_ECX[2] = fVar5 * fVar4;
  return;
}

