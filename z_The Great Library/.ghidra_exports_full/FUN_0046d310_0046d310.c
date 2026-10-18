// FUN_0046d310 @ 0046d310 body=[[0046d310, 0046d355]]


void FUN_0046d310(void)

{
  undefined1 *in_EAX;
  int in_EDX;
  
  if (0xfc < *(int *)(in_EDX + 0x10)) {
    FUN_009895f0(0xfc);
    return;
  }
  *(undefined4 *)(in_EAX + 0x14) = 0xf;
  *(undefined4 *)(in_EAX + 0x10) = 0;
  *in_EAX = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  return;
}

