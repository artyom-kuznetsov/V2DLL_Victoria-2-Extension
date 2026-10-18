// FUN_00a49950 @ 00a49950 body=[[00a49950, 00a49970]]


void FUN_00a49950(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x2c70);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0x2c70) = 0;
  return;
}

