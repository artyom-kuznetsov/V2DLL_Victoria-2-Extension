// FUN_004750f0 @ 004750f0 body=[[004750f0, 00475116]]


void FUN_004750f0(int param_1)

{
  int in_EAX;
  
  if (param_1 < 0) {
    *(undefined4 *)(in_EAX + 0x28) = 0;
    return;
  }
  if (1000 < param_1) {
    param_1 = 1000;
  }
  *(int *)(in_EAX + 0x28) = param_1;
  return;
}

