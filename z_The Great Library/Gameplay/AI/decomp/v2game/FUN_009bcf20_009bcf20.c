// FUN_009bcf20 @ 009bcf20 body=[[009bcf20, 009bcf54]]


void FUN_009bcf20(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  uint in_ECX;
  
  if (in_ECX < 10000) {
    uVar1 = *(undefined4 *)(in_ECX * 0x2c + 0x28 + param_1);
    *in_EAX = *(undefined4 *)(in_ECX * 0x2c + 0x24 + param_1);
    in_EAX[1] = uVar1;
    return;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}

