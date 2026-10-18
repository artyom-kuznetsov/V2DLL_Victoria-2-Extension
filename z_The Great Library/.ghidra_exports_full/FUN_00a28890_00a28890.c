// FUN_00a28890 @ 00a28890 body=[[00a28890, 00a288f2]]


void FUN_00a28890(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xec);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(in_ECX + 0xf0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(in_ECX + 0xf4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0xec) = 0;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined4 *)(in_ECX + 0x108) = 0;
  return;
}

