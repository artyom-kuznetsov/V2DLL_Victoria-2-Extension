// FUN_0041a3a0 @ 0041a3a0 body=[[0041a3a0, 0041a3b1]]


void FUN_0041a3a0(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0xe7c);
  *in_EAX = *(undefined4 *)(in_ECX + 0xe78);
  in_EAX[1] = uVar1;
  return;
}

