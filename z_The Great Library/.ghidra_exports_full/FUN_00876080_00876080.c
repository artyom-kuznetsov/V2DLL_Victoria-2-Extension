// FUN_00876080 @ 00876080 body=[[00876080, 008760a5]]


void FUN_00876080(void)

{
  undefined4 *in_EAX;
  
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  *(undefined1 *)(in_EAX + 5) = 0;
  in_EAX[1] = 0x18d;
  *(undefined2 *)(in_EAX + 7) = 0;
  in_EAX[8] = 0;
  *in_EAX = CAddSubUnitEffect::vftable;
  in_EAX[9] = 0;
  return;
}

