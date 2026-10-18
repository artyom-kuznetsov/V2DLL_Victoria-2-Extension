// FUN_0080df80 @ 0080df80 body=[[0080df80, 0080dfb1]]


void FUN_0080df80(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    if (in_ECX != (undefined4 *)0x0) {
      *in_ECX = 0;
      in_ECX[1] = 0;
    }
    in_ECX = in_ECX + 2;
  }
  return;
}

