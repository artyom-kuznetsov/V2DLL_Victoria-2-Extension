// FUN_008b7400 @ 008b7400 body=[[008b7400, 008b741c]]


void FUN_008b7400(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CHasNationalValueTrigger::vftable;
  return;
}

