// FUN_007bfe80 @ 007bfe80 body=[[007bfe80, 007bfea6]]


void FUN_007bfe80(void)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x1ec) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x1ec) + 4))(1);
    *(undefined4 *)(in_ECX + 0x1ec) = 0;
  }
  FUN_007bfe20();
  return;
}

