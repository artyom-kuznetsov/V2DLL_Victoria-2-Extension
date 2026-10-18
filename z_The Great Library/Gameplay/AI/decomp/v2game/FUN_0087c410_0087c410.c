// FUN_0087c410 @ 0087c410 body=[[0087c410, 0087c44f]]


void FUN_0087c410(int param_1)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    *(undefined1 *)(in_ECX + 0x20) = 0;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
  }
  *(bool *)(in_ECX + 0x20) = param_1 == 0x29f;
  return;
}

