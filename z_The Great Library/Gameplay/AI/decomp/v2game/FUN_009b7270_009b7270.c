// FUN_009b7270 @ 009b7270 body=[[009b7270, 009b7397]]


void FUN_009b7270(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int in_EDX;
  float in_XMM0_Da;
  float fVar4;
  
  fVar4 = DAT_00f092fc;
  if ((DAT_00f092fc < in_XMM0_Da) || (fVar4 = 0.0, in_XMM0_Da < 0.0)) {
    in_XMM0_Da = fVar4;
  }
  fVar4 = (*(float *)(in_ECX + 8) - *(float *)(in_EDX + 8)) * in_XMM0_Da + *(float *)(in_EDX + 8);
  fVar1 = (*(float *)(in_ECX + 0xc) - *(float *)(in_EDX + 0xc)) * in_XMM0_Da +
          *(float *)(in_EDX + 0xc);
  fVar2 = (*(float *)(in_ECX + 0x10) - *(float *)(in_EDX + 0x10)) * in_XMM0_Da +
          *(float *)(in_EDX + 0x10);
  fVar3 = (*(float *)(in_ECX + 0x14) - *(float *)(in_EDX + 0x14)) * in_XMM0_Da +
          *(float *)(in_EDX + 0x14);
  param_1[2] = fVar4;
  param_1[1] = 0x18d;
  *param_1 = CColor::vftable;
  param_1[3] = fVar1;
  param_1[4] = fVar2;
  param_1[5] = fVar3;
  if ((((0.999 < fVar4) && (0.999 < fVar1)) && (0.999 < fVar2)) && (0.999 < fVar3)) {
    *(undefined1 *)(param_1 + 6) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

