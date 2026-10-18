// FUN_008b76d0 @ 008b76d0 body=[[008b76d0, 008b76ec]]


void FUN_008b76d0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CRichTaxAbovePoorTrigger::vftable;
  return;
}

