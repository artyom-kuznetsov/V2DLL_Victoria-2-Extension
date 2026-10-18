// FUN_007e8060 @ 007e8060 body=[[007e8060, 007e80f1]]


void FUN_007e8060(void)

{
  int in_ECX;
  int iVar1;
  
  *(undefined1 *)(in_ECX + 0x29) = 1;
  if (*(int **)(in_ECX + 0x140) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x140) + 0x34))();
  }
  if (*(int **)(in_ECX + 0x124) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x124) + 0x34))();
  }
  if (*(int **)(in_ECX + 300) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 300) + 0x34))();
  }
  if (*(int **)(in_ECX + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x128) + 0x34))();
  }
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x134) - *(int *)(in_ECX + 0x130) & 0xfffffffcU)) {
    do {
      if (*(int *)(*(int *)(in_ECX + 0x130) + iVar1 * 4) != 0) {
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x130) + iVar1 * 4) + 0x34))();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x134) - *(int *)(in_ECX + 0x130) >> 2);
  }
  return;
}

