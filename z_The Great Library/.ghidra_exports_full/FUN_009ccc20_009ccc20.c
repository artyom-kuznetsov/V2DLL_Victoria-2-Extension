// FUN_009ccc20 @ 009ccc20 body=[[009ccc20, 009ccc95]]


void FUN_009ccc20(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x6c))();
  (**(code **)(**(int **)(in_ECX + 0xac) + 0x6c))();
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x6c))();
  (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x6c))();
  if (*(int *)(in_ECX + 0x200) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x200) + 0x124))();
  }
  if (*(int *)(in_ECX + 0x204) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x204) + 0x124))();
  }
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x6c))();
  return;
}

