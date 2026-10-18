// FUN_00a1b250 @ 00a1b250 body=[[00a1b250, 00a1b295]]


void FUN_00a1b250(void)

{
  char in_CL;
  uint uVar1;
  uint *in_EDX;
  
  uVar1 = *(uint *)(&DAT_00def7e0 + (((int)in_CL ^ *in_EDX) & 0xff) * 4) ^ *in_EDX >> 8;
  *in_EDX = uVar1;
  uVar1 = ((uVar1 & 0xff) + in_EDX[1]) * 0x8088405 + 1;
  in_EDX[1] = uVar1;
  in_EDX[2] = in_EDX[2] >> 8 ^ *(uint *)(&DAT_00def7e0 + ((uVar1 >> 0x18 ^ in_EDX[2]) & 0xff) * 4);
  return;
}

