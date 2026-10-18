// FUN_009e0b70 @ 009e0b70 body=[[009e0b70, 009e0c8f]]


float10 FUN_009e0b70(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float10 fVar3;
  
  fVar1 = (float)(int)(short)(int)((float)(*(int *)(*(int *)(in_ECX + 0x168) + 0x6b9bc) / 2) +
                                  *(float *)(in_ECX + 0xc4)) - (float)((int)param_1 & 0xffff);
  fVar2 = (float)(int)(short)(int)((float)(*(int *)(*(int *)(in_ECX + 0x168) + 0x6b9c0) / 2) -
                                  *(float *)(in_ECX + 200)) - (float)((int)param_2 & 0xffff);
  fVar3 = (float10)FUN_00401030(fVar2 * fVar2 + fVar1 * fVar1);
  fVar3 = (float10)FUN_0040b340((float)fVar3);
  if (fVar3 < (float10)(int)*(short *)(in_ECX + 0x150)) {
    return (float10)1;
  }
  return (float10)0;
}

