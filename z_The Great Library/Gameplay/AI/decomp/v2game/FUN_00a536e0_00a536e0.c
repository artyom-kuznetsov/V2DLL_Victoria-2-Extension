// FUN_00a536e0 @ 00a536e0 body=[[00a536e0, 00a53722]]


void FUN_00a536e0(void)

{
  int *piVar1;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0x48)) {
    piVar1 = *(int **)(in_ECX + 0x1c0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    piVar1 = *(int **)(in_ECX + 0x1c4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(undefined4 *)(in_ECX + 0x1c0) = 0;
    *(undefined4 *)(in_ECX + 0x1c4) = 0;
  }
  return;
}

