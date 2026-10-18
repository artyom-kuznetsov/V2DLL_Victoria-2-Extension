// FUN_007d90a0 @ 007d90a0 body=[[007d90a0, 007d90c2]]


void FUN_007d90a0(void)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *unaff_ESI;
  
  for (; in_ECX != unaff_ESI; in_ECX = in_ECX + 3) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *in_ECX;
      in_EAX[1] = in_ECX[1];
      *(undefined1 *)(in_EAX + 2) = *(undefined1 *)(in_ECX + 2);
    }
    in_EAX = in_EAX + 3;
  }
  return;
}

