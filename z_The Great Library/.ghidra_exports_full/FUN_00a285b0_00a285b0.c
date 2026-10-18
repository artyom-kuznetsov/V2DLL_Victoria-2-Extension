// FUN_00a285b0 @ 00a285b0 body=[[00a285b0, 00a285d6]]


void FUN_00a285b0(void)

{
  undefined8 *in_EAX;
  int in_ECX;
  undefined8 local_10;
  undefined4 local_8;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (in_EAX != (undefined8 *)0x0) {
      *in_EAX = local_10;
      *(undefined4 *)(in_EAX + 1) = local_8;
    }
    in_EAX = (undefined8 *)((int)in_EAX + 0xc);
  }
  return;
}

