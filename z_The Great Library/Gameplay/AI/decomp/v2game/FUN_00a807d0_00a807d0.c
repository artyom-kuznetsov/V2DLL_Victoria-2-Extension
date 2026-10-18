// FUN_00a807d0 @ 00a807d0 body=[[00a807d0, 00a8080b]]


void FUN_00a807d0(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    if (in_ECX != (undefined4 *)0x0) {
      *in_ECX = local_10;
      in_ECX[1] = local_c;
      in_ECX[2] = local_8;
    }
    in_ECX = in_ECX + 3;
  }
  return;
}

