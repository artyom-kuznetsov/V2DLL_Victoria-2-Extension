// FUN_009052f0 @ 009052f0 body=[[009052f0, 0090531b]]


void FUN_009052f0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CNewsDateEqTrigger::vftable;
  in_EAX[7] = 0;
  in_EAX[8] = DAT_0131a7f4;
  *(undefined1 *)(in_EAX + 9) = 0;
  return;
}

