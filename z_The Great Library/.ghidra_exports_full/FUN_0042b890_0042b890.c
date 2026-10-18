// FUN_0042b890 @ 0042b890 body=[[0042b890, 0042b8a9]]


void FUN_0042b890(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x10) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

