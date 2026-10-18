// FUN_00a49540 @ 00a49540 body=[[00a49540, 00a4957e]]


void FUN_00a49540(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xac);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(in_ECX + 0x2c70);
  *(undefined4 *)(in_ECX + 0xac) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0x2c70) = 0;
  return;
}

