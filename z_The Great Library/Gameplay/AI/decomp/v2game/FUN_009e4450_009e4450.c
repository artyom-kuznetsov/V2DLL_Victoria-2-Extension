// FUN_009e4450 @ 009e4450 body=[[009e4450, 009e4485]]


void FUN_009e4450(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x67) = 1;
  if (*(int **)(in_ECX + 0x248) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x248) + 0x34))();
    *(undefined1 *)(*(int *)(in_ECX + 0x494) + 0x124) = 1;
    return;
  }
  *(undefined1 *)(*(int *)(in_ECX + 0x494) + 0x124) = 1;
  return;
}

