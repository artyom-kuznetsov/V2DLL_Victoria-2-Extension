// FUN_009cb440 @ 009cb440 body=[[009cb440, 009cb460]]


void FUN_009cb440(undefined2 *param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x84);
  *param_1 = (short)(int)*(float *)(in_ECX + 0x80);
  param_1[1] = (short)(int)fVar1;
  return;
}

