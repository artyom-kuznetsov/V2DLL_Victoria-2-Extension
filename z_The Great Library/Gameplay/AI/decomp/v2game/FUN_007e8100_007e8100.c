// FUN_007e8100 @ 007e8100 body=[[007e8100, 007e8191]]


void FUN_007e8100(void)

{
  int in_ECX;
  int iVar1;
  
  *(undefined1 *)(in_ECX + 0x29) = 0;
  if (*(int **)(in_ECX + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x124) + 0x38))();
  }
  if (*(int **)(in_ECX + 300) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 300) + 0x38))();
  }
  if (*(int **)(in_ECX + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x140) + 0x38))();
  }
  if (*(int **)(in_ECX + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x128) + 0x38))();
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x134) - *(int *)(in_ECX + 0x130) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x130) + iVar1 * 4) != 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x130) + iVar1 * 4) + 0x38))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x134) - *(int *)(in_ECX + 0x130) >> 2);
  }
  return;
}

