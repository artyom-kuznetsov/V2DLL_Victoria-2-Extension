// FUN_0087bcd0 @ 0087bcd0 body=[[0087bcd0, 0087bd1b]]


void FUN_0087bcd0(int param_1)

{
  int iVar1;
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
  iVar1 = FUN_00aaf0c5(&stack0x00000008);
  *(int *)(in_ECX + 0x20) = iVar1 * 1000;
  return;
}

