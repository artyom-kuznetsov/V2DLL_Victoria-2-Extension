// FUN_00a76bc0 @ 00a76bc0 body=[[00a76bc0, 00a76c16]]


void FUN_00a76bc0(void)

{
  undefined8 *in_EAX;
  int in_ECX;
  undefined8 local_28;
  undefined8 local_20;
  uint local_18;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = local_28;
      in_EAX[1] = local_20;
      in_EAX[2] = (ulonglong)local_18;
      in_EAX[3] = 0;
      *(undefined4 *)(in_EAX + 4) = 0xffffffff;
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0x24);
  }
  return;
}

