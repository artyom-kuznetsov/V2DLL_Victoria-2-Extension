// FUN_0048cba0 @ 0048cba0 body=[[0048cba0, 0048cbce]]


void FUN_0048cba0(int param_1)

{
  int in_EAX;
  int in_ECX;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 0x78) {
    if (in_EAX != 0) {
      FUN_0048cbd0();
    }
    in_EAX = in_EAX + 0x78;
  }
  return;
}

