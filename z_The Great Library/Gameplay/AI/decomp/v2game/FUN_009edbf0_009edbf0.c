// FUN_009edbf0 @ 009edbf0 body=[[009edbf0, 009edc67]]


void FUN_009edbf0(float param_1)

{
  float fVar1;
  int in_ECX;
  
  param_1 = param_1 + *(float *)(in_ECX + 0x1bc);
  fVar1 = *(float *)(in_ECX + 0x1c8);
  *(float *)(in_ECX + 0x1bc) = param_1;
  param_1 = *(float *)(in_ECX + 0x1c4) * fVar1 * param_1;
  *(float *)(in_ECX + 0x1c0) = param_1;
  if (fVar1 < param_1) {
    *(float *)(in_ECX + 0x1c0) = fVar1;
    *(undefined1 *)(in_ECX + 0x1cc) = 1;
  }
  return;
}

