// FUN_006a6110 @ 006a6110 body=[[006a6110, 006a612b]]


void FUN_006a6110(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  }
  *(undefined1 *)(in_ECX + 0xf8) = 1;
  return;
}

