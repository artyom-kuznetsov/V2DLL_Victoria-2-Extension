// FUN_0096ff40 @ 0096ff40 body=[[0096ff40, 0096ff69]]


int FUN_0096ff40(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  for (; in_EAX != param_1; in_EAX = in_EAX + 0x10) {
    FUN_009beeb0(in_EAX);
    in_ECX = in_ECX + 0x10;
  }
  return in_ECX;
}

