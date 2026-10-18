// FUN_00a52580 @ 00a52580 body=[[00a52580, 00a525ce]]


void FUN_00a52580(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x48);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
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
  if (*(int *)(in_ECX + 0x48) < 0) {
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  return;
}

