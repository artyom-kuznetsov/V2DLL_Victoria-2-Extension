// FUN_0041a360 @ 0041a360 body=[[0041a360, 0041a394]]


void FUN_0041a360(int param_1)

{
  int in_EAX;
  
  *(int *)(in_EAX + 0x1a8) = param_1;
  if (param_1 < 1000) {
    *(undefined4 *)(in_EAX + 0x1a8) = 1000;
  }
  if (100000 < *(int *)(in_EAX + 0x1a8)) {
    *(undefined4 *)(in_EAX + 0x1a8) = 100000;
  }
  return;
}

