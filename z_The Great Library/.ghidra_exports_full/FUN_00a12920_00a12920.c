// FUN_00a12920 @ 00a12920 body=[[00a12920, 00a12949]]


int FUN_00a12920(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  for (; in_EAX != param_1; in_EAX = in_EAX + 0x10) {
    FUN_004134a0(in_EAX);
    in_ECX = in_ECX + 0x10;
  }
  return in_ECX;
}

