// FUN_0060c5f0 @ 0060c5f0 body=[[0060c5f0, 0060c634]]


void FUN_0060c5f0(void)

{
  int in_ECX;
  
  FUN_0060bf70(in_ECX);
  if (*(int **)(in_ECX + 0x1f8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1f8) + 4))(1);
  }
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  if (*(int **)(in_ECX + 500) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 500) + 4))(1);
  }
  *(undefined4 *)(in_ECX + 500) = 0;
  return;
}

