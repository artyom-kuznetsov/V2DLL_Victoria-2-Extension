// FUN_008b6bf0 @ 008b6bf0 body=[[008b6bf0, 008b6c19]]


void FUN_008b6bf0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CHasGlobalFlagTrigger::vftable;
  in_EAX[0xc] = 0xf;
  in_EAX[0xb] = 0;
  *(undefined1 *)(in_EAX + 7) = 0;
  return;
}

