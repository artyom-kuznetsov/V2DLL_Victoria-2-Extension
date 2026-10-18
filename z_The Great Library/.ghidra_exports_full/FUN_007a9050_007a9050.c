// FUN_007a9050 @ 007a9050 body=[[007a9050, 007a9069]]


void FUN_007a9050(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x14) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

