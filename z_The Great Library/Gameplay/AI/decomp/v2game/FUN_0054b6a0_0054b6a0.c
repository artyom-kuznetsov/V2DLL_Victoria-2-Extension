// FUN_0054b6a0 @ 0054b6a0 body=[[0054b6a0, 0054b6c3]]


void FUN_0054b6a0(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = 0;
      in_EAX[1] = 0;
      in_EAX[2] = 0;
      in_EAX[3] = 0;
      in_EAX[4] = 0;
      in_EAX[5] = 0;
    }
    in_EAX = in_EAX + 6;
  }
  return;
}

