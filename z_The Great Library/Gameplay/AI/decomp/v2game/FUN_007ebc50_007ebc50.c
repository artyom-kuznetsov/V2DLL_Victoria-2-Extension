// FUN_007ebc50 @ 007ebc50 body=[[007ebc50, 007ebc88]]


void FUN_007ebc50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  *in_EAX = *in_ECX;
  in_EAX[1] = in_ECX[1];
  in_EAX[3] = param_2;
  in_EAX[2] = param_1;
  in_EAX[5] = param_4;
  in_EAX[4] = param_3;
  in_EAX[6] = 0xffffffff;
  in_EAX[7] = 0xffffffff;
  in_EAX[0x11] = 0;
  return;
}

