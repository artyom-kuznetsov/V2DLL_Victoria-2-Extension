// FUN_007ebb80 @ 007ebb80 body=[[007ebb80, 007ebc47]]


void FUN_007ebb80(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 *in_EAX;
  int in_ECX;
  float in_XMM1_Da;
  
  fVar2 = *(float *)(in_ECX + 8) * in_XMM1_Da;
  if (DAT_00f092fc < fVar2) {
    fVar2 = DAT_00f092fc;
  }
  fVar3 = *(float *)(in_ECX + 0xc) * in_XMM1_Da;
  if (DAT_00f092fc < fVar3) {
    fVar3 = DAT_00f092fc;
  }
  fVar4 = *(float *)(in_ECX + 0x10) * in_XMM1_Da;
  if (DAT_00f092fc < fVar4) {
    fVar4 = DAT_00f092fc;
  }
  fVar1 = *(float *)(in_ECX + 0x14);
  in_EAX[2] = fVar2;
  in_EAX[1] = 0x18d;
  *in_EAX = CColor::vftable;
  in_EAX[3] = fVar3;
  in_EAX[4] = fVar4;
  in_EAX[5] = fVar1;
  if ((((0.999 < fVar2) && (0.999 < fVar3)) && (0.999 < fVar4)) && (0.999 < fVar1)) {
    *(undefined1 *)(in_EAX + 6) = 1;
    return;
  }
  *(undefined1 *)(in_EAX + 6) = 0;
  return;
}

