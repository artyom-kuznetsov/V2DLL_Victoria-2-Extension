// FUN_009a46d0 @ 009a46d0 body=[[009a46d0, 009a46fb]]


void FUN_009a46d0(int *param_1)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x54))();
  }
  *(int **)(in_ECX + 0xa0) = param_1;
  (**(code **)(*param_1 + 0x50))();
  return;
}

