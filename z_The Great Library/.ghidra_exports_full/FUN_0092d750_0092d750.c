// FUN_0092d750 @ 0092d750 body=[[0092d750, 0092d77c]]


void FUN_0092d750(int param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x71) = 1;
  if (DAT_0131b1e8 < param_1) {
    param_1 = DAT_0131b1e8;
  }
  if (param_1 < DAT_0131b2c8) {
    *(int *)(in_ECX + 0x3c) = DAT_0131b2c8;
    return;
  }
  *(int *)(in_ECX + 0x3c) = param_1;
  return;
}

