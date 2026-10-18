// FUN_004dee70 @ 004dee70 body=[[004dee70, 004dee89]]


void FUN_004dee70(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 8) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

