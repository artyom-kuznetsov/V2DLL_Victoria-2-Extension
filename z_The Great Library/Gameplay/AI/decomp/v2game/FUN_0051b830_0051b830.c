// FUN_0051b830 @ 0051b830 body=[[0051b830, 0051b865]]


void FUN_0051b830(int param_1)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x65c) = *(int *)(in_EAX + 0x65c) + param_1;
  if (*(int *)(in_EAX + 0x65c) < 0) {
    *(undefined4 *)(in_EAX + 0x65c) = 0;
  }
  if (9000 < *(int *)(in_EAX + 0x65c)) {
    *(undefined4 *)(in_EAX + 0x65c) = 9000;
  }
  return;
}

