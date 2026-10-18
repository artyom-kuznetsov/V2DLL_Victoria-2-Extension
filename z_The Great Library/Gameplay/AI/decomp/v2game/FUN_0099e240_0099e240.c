// FUN_0099e240 @ 0099e240 body=[[0099e240, 0099e251]]


void FUN_0099e240(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[3];
  uVar2 = *in_ECX;
  in_EAX[1] = 0;
  *in_EAX = uVar2;
  in_EAX[2] = uVar1;
  return;
}

