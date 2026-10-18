// FUN_0045dbc0 @ 0045dbc0 body=[[0045dbc0, 0045dbf7]]


void FUN_0045dbc0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = CNewsCaseText::vftable;
  in_EAX[1] = 0x18d;
  in_EAX[3] = 0x18d;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  *(undefined2 *)(in_EAX + 8) = 0;
  in_EAX[2] = CAndTrigger::vftable;
  in_EAX[9] = 0;
  in_EAX[10] = 0;
  in_EAX[0xb] = 0;
  in_EAX[0xd] = 0xffffffff;
  return;
}

