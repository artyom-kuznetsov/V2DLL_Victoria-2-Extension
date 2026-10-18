// FUN_0043ab60 @ 0043ab60 body=[[0043ab60, 0043ab77]]


void FUN_0043ab60(void)

{
  undefined4 *in_EAX;
  int in_ECX;
  
  for (; in_ECX != 0; in_ECX = in_ECX + -1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = 0;
      in_EAX[1] = 0;
    }
    in_EAX = in_EAX + 2;
  }
  return;
}

