// FUN_00a36080 @ 00a36080 body=[[00a36080, 00a36099]]


void FUN_00a36080(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0xe) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

