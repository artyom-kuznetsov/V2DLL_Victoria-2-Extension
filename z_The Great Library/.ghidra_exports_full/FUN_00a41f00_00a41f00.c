// FUN_00a41f00 @ 00a41f00 body=[[00a41f00, 00a4208a]]


void FUN_00a41f00(void)

{
  float fVar1;
  int iVar2;
  float *unaff_ESI;
  int *unaff_EDI;
  float10 fVar3;
  float10 fVar4;
  
  iVar2 = unaff_EDI[0x50];
  if (iVar2 == 0) {
    iVar2 = unaff_EDI[0x4f];
    *(undefined8 *)unaff_ESI = *(undefined8 *)(iVar2 + 0xa4);
    *(undefined8 *)(unaff_ESI + 2) = *(undefined8 *)(iVar2 + 0xac);
    *(undefined8 *)(unaff_ESI + 4) = *(undefined8 *)(iVar2 + 0xb4);
  }
  else {
    *unaff_ESI = *(float *)(iVar2 + 0x18);
    unaff_ESI[3] = *(float *)(iVar2 + 0x24);
    unaff_ESI[1] = *(float *)(iVar2 + 0x1c);
    unaff_ESI[4] = *(float *)(iVar2 + 0x28);
    unaff_ESI[2] = *(float *)(iVar2 + 0x20);
    unaff_ESI[5] = *(float *)(iVar2 + 0x2c);
  }
  fVar1 = *(float *)(unaff_EDI[0x4f] + 0xdc);
  fVar3 = (float10)(**(code **)(*unaff_EDI + 0x178))();
  fVar4 = (float10)(**(code **)(*unaff_EDI + 0xa0))();
  fVar1 = (float)(fVar4 * (float10)(double)fVar3 * (float10)fVar1);
  *unaff_ESI = fVar1 * *unaff_ESI;
  unaff_ESI[1] = unaff_ESI[1] * fVar1;
  unaff_ESI[2] = fVar1 * unaff_ESI[2];
  unaff_ESI[3] = unaff_ESI[3] * fVar1;
  unaff_ESI[4] = unaff_ESI[4] * fVar1;
  unaff_ESI[5] = fVar1 * unaff_ESI[5];
  *unaff_ESI = *unaff_ESI + (float)unaff_EDI[0x31];
  unaff_ESI[1] = (float)unaff_EDI[0x32] + unaff_ESI[1];
  unaff_ESI[2] = (float)unaff_EDI[0x33] + unaff_ESI[2];
  unaff_ESI[3] = unaff_ESI[3] + (float)unaff_EDI[0x31];
  unaff_ESI[4] = (float)unaff_EDI[0x32] + unaff_ESI[4];
  unaff_ESI[5] = (float)unaff_EDI[0x33] + unaff_ESI[5];
  return;
}

