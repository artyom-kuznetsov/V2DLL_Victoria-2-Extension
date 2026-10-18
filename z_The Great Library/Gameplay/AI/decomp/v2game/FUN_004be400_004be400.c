// FUN_004be400 @ 004be400 body=[[004be400, 004be41c]]


void FUN_004be400(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x9e) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

