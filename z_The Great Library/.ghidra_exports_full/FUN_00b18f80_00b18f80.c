// FUN_00b18f80 @ 00b18f80 body=[[00b18f80, 00b19022]]


void FUN_00b18f80(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  float *in_ECX;
  
  if ((*(char *)(in_ECX + 0x23) == '\0') && (param_2 != 0)) {
    pfVar6 = (float *)(param_1 + 8);
    do {
      fVar1 = pfVar6[-2];
      fVar2 = pfVar6[-1];
      fVar3 = *pfVar6;
      fVar4 = fVar1;
      fVar5 = fVar2;
      if (*(char *)(in_ECX + 0x23) == '\0') {
        fVar4 = in_ECX[8] * fVar3 + *in_ECX * fVar1 + in_ECX[4] * fVar2 + in_ECX[0xc];
        fVar5 = in_ECX[9] * fVar3 + in_ECX[5] * fVar2 + in_ECX[1] * fVar1 + in_ECX[0xd];
        fVar3 = in_ECX[2] * fVar1 + in_ECX[6] * fVar2 + in_ECX[10] * fVar3 + in_ECX[0xe];
      }
      fVar1 = pfVar6[1];
      if (*(char *)((int)in_ECX + 0x8d) != '\0') {
        fVar1 = -fVar1;
      }
      param_2 = param_2 + -1;
      pfVar6[-2] = fVar4;
      pfVar6[-1] = fVar5;
      *pfVar6 = fVar3;
      pfVar6[1] = fVar1;
      pfVar6 = pfVar6 + 4;
    } while (param_2 != 0);
  }
  return;
}

