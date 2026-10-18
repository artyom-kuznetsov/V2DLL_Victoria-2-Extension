// FUN_009d9260 @ 009d9260 body=[[009d9260, 009d92eb]]


float10 FUN_009d9260(float param_1,float param_2)

{
  byte bVar1;
  int *in_ECX;
  float local_c;
  float local_8;
  
  (**(code **)(*in_ECX + 0xd4))(&local_c);
  if ((in_ECX[0x5d] != 0) && (*(char *)(in_ECX[0x5d] + 0x84) == '\0')) {
    if (((int)(short)(int)local_c <= (int)((int)param_1 & 0xffffU)) &&
       ((int)((int)param_1 & 0xffffU) <= (int)(short)in_ECX[0x53] + (int)(short)(int)local_c)) {
      if (((int)(short)(int)local_8 <= (int)((int)param_2 & 0xffffU)) &&
         ((int)((int)param_2 & 0xffffU) <=
          (int)*(short *)((int)in_ECX + 0x14e) + (int)(short)(int)local_8)) {
        bVar1 = 1;
        goto LAB_009d92d6;
      }
    }
  }
  bVar1 = 0;
LAB_009d92d6:
  return (float10)bVar1;
}

