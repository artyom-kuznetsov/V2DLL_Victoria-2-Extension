// FUN_004d5cd0 @ 004d5cd0 body=[[004d5cd0, 004d5d09]]


void FUN_004d5cd0(int param_1)

{
  int in_EAX;
  
  param_1 = *(int *)(in_EAX + 0x280) + param_1;
  *(int *)(in_EAX + 0x280) = param_1;
  if (param_1 < 0) {
    *(undefined4 *)(in_EAX + 0x280) = 0;
    return;
  }
  if (100000 < param_1) {
    *(undefined4 *)(in_EAX + 0x280) = 100000;
  }
  return;
}

