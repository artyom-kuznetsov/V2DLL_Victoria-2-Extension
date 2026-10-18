// FUN_00796870 @ 00796870 body=[[00796870, 00796889]]


void FUN_00796870(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 4) + 0x50))();
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}

