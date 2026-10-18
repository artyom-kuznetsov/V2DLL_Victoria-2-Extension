// FUN_00a1f390 @ 00a1f390 body=[[00a1f390, 00a1f91c]]


void FUN_00a1f390(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x54);
  fVar2 = *(float *)(in_ECX + 0x58);
  fVar3 = *(float *)(in_ECX + 0x5c);
  fVar4 = *(float *)(in_ECX + 0x60);
  *(float *)(in_ECX + 0x54) =
       *param_1 * fVar1 + fVar2 * param_1[4] + fVar3 * param_1[8] + param_1[0xc] * fVar4;
  *(float *)(in_ECX + 0x58) =
       param_1[5] * fVar2 + fVar1 * param_1[1] + param_1[9] * fVar3 + fVar4 * param_1[0xd];
  *(float *)(in_ECX + 0x5c) =
       param_1[6] * fVar2 + fVar1 * param_1[2] + param_1[10] * fVar3 + fVar4 * param_1[0xe];
  *(float *)(in_ECX + 0x60) =
       param_1[7] * fVar2 + fVar1 * param_1[3] + param_1[0xb] * fVar3 + fVar4 * param_1[0xf];
  fVar1 = *(float *)(in_ECX + 100);
  fVar2 = *(float *)(in_ECX + 0x68);
  fVar3 = *(float *)(in_ECX + 0x6c);
  fVar4 = *(float *)(in_ECX + 0x70);
  *(float *)(in_ECX + 100) =
       *param_1 * fVar1 + fVar2 * param_1[4] + fVar3 * param_1[8] + param_1[0xc] * fVar4;
  *(float *)(in_ECX + 0x68) =
       param_1[5] * fVar2 + fVar1 * param_1[1] + param_1[9] * fVar3 + fVar4 * param_1[0xd];
  *(float *)(in_ECX + 0x6c) =
       param_1[6] * fVar2 + fVar1 * param_1[2] + param_1[10] * fVar3 + fVar4 * param_1[0xe];
  *(float *)(in_ECX + 0x70) =
       param_1[7] * fVar2 + fVar1 * param_1[3] + param_1[0xb] * fVar3 + fVar4 * param_1[0xf];
  fVar1 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x7c);
  fVar4 = *(float *)(in_ECX + 0x80);
  *(float *)(in_ECX + 0x74) =
       *param_1 * fVar1 + fVar2 * param_1[4] + fVar3 * param_1[8] + param_1[0xc] * fVar4;
  *(float *)(in_ECX + 0x78) =
       param_1[5] * fVar2 + fVar1 * param_1[1] + param_1[9] * fVar3 + fVar4 * param_1[0xd];
  *(float *)(in_ECX + 0x7c) =
       param_1[6] * fVar2 + fVar1 * param_1[2] + param_1[10] * fVar3 + fVar4 * param_1[0xe];
  *(float *)(in_ECX + 0x80) =
       param_1[7] * fVar2 + fVar1 * param_1[3] + param_1[0xb] * fVar3 + fVar4 * param_1[0xf];
  fVar1 = *(float *)(in_ECX + 0x84);
  fVar2 = *(float *)(in_ECX + 0x88);
  fVar3 = *(float *)(in_ECX + 0x8c);
  fVar4 = *(float *)(in_ECX + 0x90);
  *(float *)(in_ECX + 0x84) =
       *param_1 * fVar1 + fVar2 * param_1[4] + fVar3 * param_1[8] + param_1[0xc] * fVar4;
  *(float *)(in_ECX + 0x88) =
       param_1[5] * fVar2 + fVar1 * param_1[1] + param_1[9] * fVar3 + fVar4 * param_1[0xd];
  *(float *)(in_ECX + 0x8c) =
       param_1[6] * fVar2 + fVar1 * param_1[2] + param_1[10] * fVar3 + fVar4 * param_1[0xe];
  *(float *)(in_ECX + 0x90) =
       param_1[7] * fVar2 + fVar1 * param_1[3] + param_1[0xb] * fVar3 + fVar4 * param_1[0xf];
  return;
}

