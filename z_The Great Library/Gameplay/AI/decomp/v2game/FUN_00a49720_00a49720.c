// FUN_00a49720 @ 00a49720 body=[[00a49720, 00a49931]]


void FUN_00a49720(void)

{
  float fVar1;
  int in_EAX;
  int iVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined1 local_8 [4];
  
  fVar1 = DAT_00f177d4;
  pfVar3 = (float *)(in_EAX + 0xb8);
  iVar2 = 0x14;
  do {
    pfVar3[0x13] = 10.0;
    pfVar3[0x14] = 10.0;
    if (fVar1 < *pfVar3) {
      *pfVar3 = 0.0;
      pfVar3[-1] = 0.0;
    }
    pfVar3[0x2f] = 10.0;
    pfVar3[0x30] = 10.0;
    if (fVar1 < pfVar3[0x1c]) {
      pfVar3[0x1c] = 0.0;
      pfVar3[0x1b] = 0.0;
    }
    pfVar3[0x4b] = 10.0;
    pfVar3[0x4c] = 10.0;
    if (fVar1 < pfVar3[0x38]) {
      pfVar3[0x38] = 0.0;
      pfVar3[0x37] = 0.0;
    }
    pfVar3[0x67] = 10.0;
    pfVar3[0x68] = 10.0;
    if (fVar1 < pfVar3[0x54]) {
      pfVar3[0x54] = 0.0;
      pfVar3[0x53] = 0.0;
    }
    pfVar3[0x83] = 10.0;
    pfVar3[0x84] = 10.0;
    if (fVar1 < pfVar3[0x70]) {
      pfVar3[0x70] = 0.0;
      pfVar3[0x6f] = 0.0;
    }
    pfVar3 = pfVar3 + 0x8c;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (**(code **)(**(int **)(in_EAX + 0x2c70) + 0x2c))
            (*(int **)(in_EAX + 0x2c70),0,0x4b0,local_8,0x2000);
  puVar4 = (undefined8 *)(in_EAX + 0x10c);
  pfVar3 = (float *)(in_EAX + 0x2c78);
  iVar2 = 100;
  do {
    FUN_00ab047b();
    FUN_00ab047b();
    pfVar3[-1] = pfVar3[3] + pfVar3[-1];
    *pfVar3 = pfVar3[4] + *pfVar3;
    pfVar3[1] = pfVar3[5] + pfVar3[1];
    fVar1 = pfVar3[1];
    *puVar4 = *(undefined8 *)(pfVar3 + -1);
    *(float *)(puVar4 + 1) = fVar1;
    if (100.0 < pfVar3[-1] * pfVar3[-1] + *pfVar3 * *pfVar3 + pfVar3[1] * pfVar3[1]) {
      pfVar3[-0xffffffff00000001] = 0.0;
      pfVar3[0] = 0.0;
      pfVar3[1] = 0.0;
    }
    pfVar3[2] = -NAN;
    puVar4 = puVar4 + 0xe;
    pfVar3 = pfVar3 + 0xd;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

