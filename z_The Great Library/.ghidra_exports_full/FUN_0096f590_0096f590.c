// FUN_0096f590 @ 0096f590 body=[[0096f590, 0096f5a1]]


void FUN_0096f590(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x3c4);
  *in_EAX = *(undefined4 *)(in_ECX + 0x3c0);
  in_EAX[1] = uVar1;
  return;
}

