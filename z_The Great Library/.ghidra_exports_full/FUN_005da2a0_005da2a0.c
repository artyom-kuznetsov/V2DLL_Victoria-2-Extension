// FUN_005da2a0 @ 005da2a0 body=[[005da2a0, 005da569]]


void FUN_005da2a0(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *unaff_EDI;
  
  fVar4 = DAT_00f092fc;
  FUN_005dabb0(param_1);
  fVar1 = *unaff_EDI;
  fVar2 = unaff_EDI[1];
  fVar3 = unaff_EDI[2];
  *unaff_EDI = fVar4 * fVar1 + fVar2 * 0.0 + fVar3 * 0.0;
  unaff_EDI[1] = fVar1 * 0.0 + fVar4 * fVar2 + fVar3 * 0.0;
  unaff_EDI[2] = fVar1 * 0.0 + fVar2 * 0.0 + fVar4 * fVar3;
  fVar1 = unaff_EDI[5];
  fVar2 = unaff_EDI[4];
  fVar3 = unaff_EDI[6];
  unaff_EDI[4] = fVar1 * 0.0 + fVar4 * fVar2 + fVar3 * 0.0;
  unaff_EDI[5] = fVar4 * fVar1 + fVar2 * 0.0 + fVar3 * 0.0;
  unaff_EDI[6] = fVar1 * 0.0 + fVar2 * 0.0 + fVar4 * fVar3;
  fVar1 = unaff_EDI[9];
  fVar2 = unaff_EDI[8];
  fVar3 = unaff_EDI[10];
  unaff_EDI[8] = fVar1 * 0.0 + fVar4 * fVar2 + fVar3 * 0.0;
  unaff_EDI[9] = fVar4 * fVar1 + fVar2 * 0.0 + fVar3 * 0.0;
  unaff_EDI[10] = fVar1 * 0.0 + fVar2 * 0.0 + fVar4 * fVar3;
  return;
}

