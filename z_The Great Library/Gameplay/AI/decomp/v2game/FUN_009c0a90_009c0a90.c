// FUN_009c0a90 @ 009c0a90 body=[[009c0a90, 009c0e1e]]


void FUN_009c0a90(void)

{
  float fVar1;
  float *in_EAX;
  float *in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = in_ECX[5];
  fVar3 = *in_ECX;
  fVar2 = in_ECX[10];
  *in_EAX = 0.0;
  in_EAX[1] = 0.0;
  in_EAX[2] = 0.0;
  in_EAX[3] = DAT_00f092fc;
  fVar1 = fVar3 + fVar4 + fVar2 + 1.0;
  if (1e-05 < fVar1) {
    fVar2 = 0.5 / SQRT(fVar1);
    fVar4 = in_ECX[9];
    in_EAX[3] = 0.25 / fVar2;
    fVar3 = in_ECX[2];
    *in_EAX = (in_ECX[6] - fVar4) * fVar2;
    fVar4 = in_ECX[4];
    in_EAX[1] = (in_ECX[8] - fVar3) * fVar2;
    in_EAX[2] = (in_ECX[1] - fVar4) * fVar2;
    return;
  }
  if ((fVar3 <= fVar4) || (fVar3 <= fVar2)) {
    if (fVar4 <= fVar2) {
      fVar3 = SQRT(((fVar2 + 1.0) - fVar3) - fVar4) * 2.0;
      fVar2 = 1.0 / fVar3;
      fVar4 = in_ECX[6];
      *in_EAX = (in_ECX[8] + in_ECX[2]) * fVar2;
      in_EAX[1] = (in_ECX[9] + fVar4) * fVar2;
      fVar4 = in_ECX[1];
      in_EAX[2] = fVar3 * 0.25;
      fVar3 = in_ECX[4];
    }
    else {
      fVar1 = in_ECX[1];
      fVar3 = SQRT(((fVar4 + 1.0) - fVar3) - fVar2) * 2.0;
      fVar2 = 1.0 / fVar3;
      fVar4 = in_ECX[4];
      in_EAX[1] = fVar3 * 0.25;
      fVar3 = in_ECX[9];
      *in_EAX = (fVar4 + fVar1) * fVar2;
      fVar4 = in_ECX[2];
      in_EAX[2] = (fVar3 + in_ECX[6]) * fVar2;
      fVar3 = in_ECX[8];
    }
  }
  else {
    fVar2 = SQRT(((fVar3 + 1.0) - fVar4) - fVar2) * 2.0;
    *in_EAX = fVar2 * 0.25;
    fVar2 = 1.0 / fVar2;
    fVar3 = in_ECX[2];
    in_EAX[1] = (in_ECX[4] + in_ECX[1]) * fVar2;
    fVar4 = in_ECX[6];
    in_EAX[2] = (in_ECX[8] + fVar3) * fVar2;
    fVar3 = in_ECX[9];
  }
  in_EAX[3] = (fVar3 - fVar4) * fVar2;
  return;
}

