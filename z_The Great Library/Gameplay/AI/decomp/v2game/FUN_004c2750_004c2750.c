// FUN_004c2750 @ 004c2750 body=[[004c2750, 004c276c]]


void FUN_004c2750(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x2c) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

