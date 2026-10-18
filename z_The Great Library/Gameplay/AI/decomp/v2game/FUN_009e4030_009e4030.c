// FUN_009e4030 @ 009e4030 body=[[009e4030, 009e4065]]


void FUN_009e4030(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x67) = 0;
  if (*(int **)(in_ECX + 0x248) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x248) + 0x38))();
    *(undefined1 *)(*(int *)(in_ECX + 0x494) + 0x124) = 0;
    return;
  }
  *(undefined1 *)(*(int *)(in_ECX + 0x494) + 0x124) = 0;
  return;
}

