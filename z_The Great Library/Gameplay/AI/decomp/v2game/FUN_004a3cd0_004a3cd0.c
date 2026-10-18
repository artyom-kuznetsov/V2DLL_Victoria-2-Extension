// FUN_004a3cd0 @ 004a3cd0 body=[[004a3cd0, 004a3ce9]]


void FUN_004a3cd0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 4) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

