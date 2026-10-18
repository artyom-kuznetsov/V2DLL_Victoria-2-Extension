// FUN_008b7cc0 @ 008b7cc0 body=[[008b7cc0, 008b7cdc]]


void FUN_008b7cc0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 0x18d;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined2 *)(in_EAX + 6) = 0;
  *in_EAX = CHasFlashPointTrigger::vftable;
  return;
}

