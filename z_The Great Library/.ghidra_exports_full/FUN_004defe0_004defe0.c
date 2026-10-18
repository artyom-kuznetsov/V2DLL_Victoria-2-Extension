// FUN_004defe0 @ 004defe0 body=[[004defe0, 004deffc]]


void FUN_004defe0(void)

{
  undefined4 *in_EAX;
  undefined4 *unaff_EDI;
  
  for (; in_EAX != unaff_EDI; in_EAX = in_EAX + 0x58) {
    (**(code **)*in_EAX)(0);
  }
  return;
}

