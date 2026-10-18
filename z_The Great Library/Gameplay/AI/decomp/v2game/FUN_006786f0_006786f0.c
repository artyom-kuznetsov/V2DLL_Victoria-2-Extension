// FUN_006786f0 @ 006786f0 body=[[006786f0, 00678709]]


void FUN_006786f0(char param_1)

{
  int in_ECX;
  
  *(char *)(in_ECX + 0xbc4) = param_1;
  if (param_1 == '\0') {
    *(undefined1 *)(in_ECX + 0xbc5) = 0;
  }
  return;
}

