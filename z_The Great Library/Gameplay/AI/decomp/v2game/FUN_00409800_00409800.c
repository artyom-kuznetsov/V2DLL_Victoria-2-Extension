// FUN_00409800 @ 00409800 body=[[00409800, 0040980f]]


void FUN_00409800(void)

{
  uint in_EAX;
  int *in_ECX;
  
  *in_ECX = in_EAX << 0xf;
  in_ECX[1] = ((int)in_EAX >> 0x1f) << 0xf | in_EAX >> 0x11;
  return;
}

