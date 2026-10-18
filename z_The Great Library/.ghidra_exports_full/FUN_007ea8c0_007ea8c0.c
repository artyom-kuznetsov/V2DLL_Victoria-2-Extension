// FUN_007ea8c0 @ 007ea8c0 body=[[007ea8c0, 007ea8ff]]


void FUN_007ea8c0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (-1 < *(int *)(in_ECX + 0x94)) {
    FUN_009bcda0();
  }
  *(undefined4 *)(in_ECX + 0x94) = 0xffffffff;
  piVar1 = *(int **)(in_ECX + 0xd4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}

