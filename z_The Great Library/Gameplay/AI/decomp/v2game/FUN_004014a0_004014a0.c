// FUN_004014a0 @ 004014a0 body=[[004014a0, 004014b2]]


void FUN_004014a0(void)

{
  undefined2 *in_EAX;
  
  *(undefined1 *)(in_EAX + 1) = 0x2d;
  *in_EAX = 0x2d2d;
  *(undefined1 *)((int)in_EAX + 3) = 0;
  *(undefined4 *)(in_EAX + 2) = 0;
  return;
}

