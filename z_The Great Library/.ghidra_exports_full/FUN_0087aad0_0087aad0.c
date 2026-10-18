// FUN_0087aad0 @ 0087aad0 body=[[0087aad0, 0087ab0e]]


void FUN_0087aad0(int param_1)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
    return;
  }
  FUN_0098fc80(&param_1,(undefined4 *)(in_ECX + 0x20));
  return;
}

