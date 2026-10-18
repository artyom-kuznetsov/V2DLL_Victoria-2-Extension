// FUN_00632870 @ 00632870 body=[[00632870, 0063288b]]


void FUN_00632870(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x1c))();
  }
  *(undefined1 *)(in_ECX + 0x98) = 1;
  return;
}

