// FUN_009d96d0 @ 009d96d0 body=[[009d96d0, 009d96eb]]


void FUN_009d96d0(void)

{
  int in_EAX;
  undefined8 *in_ECX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    if (in_ECX != (undefined8 *)0x0) {
      *in_ECX = 0;
      in_ECX[1] = 0;
    }
    in_ECX = in_ECX + 2;
  }
  return;
}

