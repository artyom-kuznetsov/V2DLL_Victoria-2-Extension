// FUN_009d45d0 @ 009d45d0 body=[[009d45d0, 009d45dc] [009d45e0, 009d45f4]]


void FUN_009d45d0(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_EDX;
  
  for (; param_1 != in_EDX; param_1 = param_1 + 1) {
    if (in_EAX != (undefined4 *)0x0) {
      *in_EAX = *param_1;
    }
    in_EAX = in_EAX + 1;
  }
  return;
}

