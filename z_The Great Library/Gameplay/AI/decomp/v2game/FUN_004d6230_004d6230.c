// FUN_004d6230 @ 004d6230 body=[[004d6230, 004d6244]]


void FUN_004d6230(void)

{
  int in_EAX;
  undefined4 *in_ECX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    if (in_ECX != (undefined4 *)0x0) {
      *in_ECX = 0;
    }
    in_ECX = in_ECX + 1;
  }
  return;
}

