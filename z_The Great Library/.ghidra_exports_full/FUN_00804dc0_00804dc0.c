// FUN_00804dc0 @ 00804dc0 body=[[00804dc0, 00804e1b]]


void FUN_00804dc0(void)

{
  undefined8 *in_EAX;
  int in_EDX;
  uint uStack_14;
  
  for (; in_EDX != 0; in_EDX = in_EDX + -1) {
    uStack_14 = uStack_14 & 0xffffff00;
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = 0;
      in_EAX[1] = 0;
      in_EAX[2] = (ulonglong)uStack_14 << 0x20;
      in_EAX[3] = 0;
      *(undefined4 *)(in_EAX + 4) = 0;
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0x24);
  }
  return;
}

