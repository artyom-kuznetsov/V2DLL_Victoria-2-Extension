// FUN_006335e0 @ 006335e0 body=[[006335e0, 006335f1]]


void FUN_006335e0(void)

{
  undefined4 *in_EAX;
  
  in_EAX[1] = 10000;
  *(undefined1 *)((int)in_EAX + 9) = 1;
  *in_EAX = CNullSound::vftable;
  return;
}

