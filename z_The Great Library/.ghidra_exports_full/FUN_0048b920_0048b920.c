// FUN_0048b920 @ 0048b920 body=[[0048b920, 0048b939]]


void FUN_0048b920(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x16) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

