// FUN_009edb70 @ 009edb70 body=[[009edb70, 009edbd4]]


void FUN_009edb70(float param_1)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x1c8);
  *(float *)(in_ECX + 0x1bc) = param_1;
  fVar2 = *(float *)(in_ECX + 0x1c4) * fVar1 * param_1;
  *(float *)(in_ECX + 0x1c0) = fVar2;
  if (fVar1 < fVar2) {
    *(float *)(in_ECX + 0x1c0) = fVar1;
    *(float *)(in_ECX + 0x1bc) = param_1;
    *(undefined1 *)(in_ECX + 0x1cc) = 1;
  }
  return;
}

