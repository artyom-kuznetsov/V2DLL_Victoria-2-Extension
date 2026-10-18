// FUN_0081a9f0 @ 0081a9f0 body=[[0081a9f0, 0081aa40]]


void FUN_0081a9f0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(in_ECX + 0x10);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  return;
}

