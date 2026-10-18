// FUN_00a7b990 @ 00a7b990 body=[[00a7b990, 00a7ba01]]


float10 FUN_00a7b990(float param_1,float param_2)

{
  int *in_ECX;
  float local_c;
  float local_8;
  
  (**(code **)(*in_ECX + 0xd4))(&local_c);
  if (((int)(short)(int)local_c <= (int)((int)param_1 & 0xffffU)) &&
     ((int)((int)param_1 & 0xffffU) <= (int)(short)in_ECX[0x53] + (int)(short)(int)local_c)) {
    if (((int)(short)(int)local_8 <= (int)((int)param_2 & 0xffffU)) &&
       ((int)((int)param_2 & 0xffffU) <=
        (int)*(short *)((int)in_ECX + 0x14e) + (int)(short)(int)local_8)) {
      return (float10)1;
    }
  }
  return (float10)0;
}

