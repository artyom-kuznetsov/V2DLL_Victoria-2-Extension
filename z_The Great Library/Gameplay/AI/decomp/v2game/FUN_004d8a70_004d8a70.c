// FUN_004d8a70 @ 004d8a70 body=[[004d8a70, 004d8ac8]]


void FUN_004d8a70(int param_1,int param_2)

{
  int *piVar1;
  int in_ECX;
  
  if (param_2 == 0x33d) {
    piVar1 = (int *)FUN_0098fb60(param_1 + 0x228,&param_1);
    *(float *)(in_ECX + 0x40) = (float)*piVar1 / 1000.0;
  }
  else if (param_2 == 0x33e) {
    FUN_009a1750(in_ECX + 0x24,0);
    return;
  }
  return;
}

