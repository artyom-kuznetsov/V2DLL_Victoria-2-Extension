// FUN_0099a560 @ 0099a560 body=[[0099a560, 0099a58c]]


void FUN_0099a560(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x14);
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  return;
}

