// FUN_009cb3c0 @ 009cb3c0 body=[[009cb3c0, 009cb432]]


void FUN_009cb3c0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x3a) = 1;
  (**(code **)(**(int **)(in_ECX + 0xac) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x150) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x154) + 0x30))();
  (**(code **)(**(int **)(in_ECX + 0x1a8) + 0x30))();
  if (*(int **)(in_ECX + 0x200) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x200) + 0x30))();
    *(undefined4 *)(in_ECX + 0x200) = 0;
  }
  if (*(int **)(in_ECX + 0x204) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x204) + 0x30))();
    *(undefined4 *)(in_ECX + 0x204) = 0;
  }
  return;
}

