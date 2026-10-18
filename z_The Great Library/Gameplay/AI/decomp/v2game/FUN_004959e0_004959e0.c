// FUN_004959e0 @ 004959e0 body=[[004959e0, 00495a04]]


void FUN_004959e0(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = local_c;
      in_EAX[1] = local_8;
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

