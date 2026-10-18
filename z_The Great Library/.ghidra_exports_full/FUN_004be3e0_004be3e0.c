// FUN_004be3e0 @ 004be3e0 body=[[004be3e0, 004be3fc]]


void FUN_004be3e0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x88) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

