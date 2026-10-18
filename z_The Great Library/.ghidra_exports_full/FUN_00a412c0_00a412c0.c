// FUN_00a412c0 @ 00a412c0 body=[[00a412c0, 00a4169f]]


undefined4 FUN_00a412c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *in_ECX;
  float *in_EDX;
  float *unaff_ESI;
  float *unaff_EDI;
  
  fVar1 = *unaff_ESI - *param_1;
  fVar2 = unaff_ESI[1] - param_1[1];
  fVar3 = unaff_ESI[2] - param_1[2];
  fVar4 = (in_EDX[2] - param_1[2]) * in_ECX[1] - (in_EDX[1] - param_1[1]) * in_ECX[2];
  fVar5 = (*in_EDX - *param_1) * in_ECX[2] - (in_EDX[2] - param_1[2]) * *in_ECX;
  fVar6 = (in_EDX[1] - param_1[1]) * *in_ECX - (*in_EDX - *param_1) * in_ECX[1];
  fVar7 = fVar1 * fVar4 + fVar2 * fVar5 + fVar3 * fVar6;
  if ((fVar7 <= -0.0001) || (0.0001 <= fVar7)) {
    fVar8 = *unaff_EDI - *param_1;
    fVar9 = unaff_EDI[1] - param_1[1];
    fVar10 = unaff_EDI[2] - param_1[2];
    fVar4 = (fVar8 * fVar4 + fVar9 * fVar5 + fVar10 * fVar6) * (1.0 / fVar7);
    if ((0.0 <= fVar4) && (fVar4 <= DAT_00f092fc)) {
      fVar1 = ((fVar9 * fVar3 - fVar10 * fVar2) * *in_ECX +
              (fVar10 * fVar1 - fVar8 * fVar3) * in_ECX[1] +
              (fVar8 * fVar2 - fVar9 * fVar1) * in_ECX[2]) * (1.0 / fVar7);
      if ((0.0 <= fVar1) && (fVar1 + fVar4 <= 1.0)) {
        return 1;
      }
    }
  }
  return 0;
}

