// FUN_00445da0 @ 00445da0 body=[[00445da0, 00445df5]]


void FUN_00445da0(void)

{
  undefined8 *in_EAX;
  int in_EDX;
  
  for (; in_EDX != 0; in_EDX = in_EDX + -1) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = 0;
      in_EAX[1] = 0;
      in_EAX[2] = 0;
      *(undefined4 *)(in_EAX + 3) = 0xffffffff;
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0x1c);
  }
  return;
}

