// FUN_004f6550 @ 004f6550 body=[[004f6550, 004f6561]]


void FUN_004f6550(void)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x12c4);
  *in_EAX = *(undefined4 *)(in_ECX + 0x12c0);
  in_EAX[1] = uVar1;
  return;
}

