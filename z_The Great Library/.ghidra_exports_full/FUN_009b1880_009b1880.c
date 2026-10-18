// FUN_009b1880 @ 009b1880 body=[[009b1880, 009b189c]]


void FUN_009b1880(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x29) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

