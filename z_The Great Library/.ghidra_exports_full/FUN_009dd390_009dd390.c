// FUN_009dd390 @ 009dd390 body=[[009dd390, 009dd3e7]]


void FUN_009dd390(void)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x29) = 0;
  if (*(int *)(in_ECX + 0x1a0) != 0) {
    FUN_009bcce0(*(int *)(in_ECX + 500) + 0x158,in_ECX + 0x184);
  }
  piVar1 = *(int **)(in_ECX + 0x1f8);
  *(undefined4 *)(in_ECX + 0x1a0) = 0;
  if (piVar1 != (int *)0x0) {
    *(undefined1 *)(in_ECX + 0x308) = 1;
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x1f8) = 0;
  }
  return;
}

