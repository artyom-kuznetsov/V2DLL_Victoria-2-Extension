// FUN_0099d060 @ 0099d060 body=[[0099d060, 0099d0b4]]


void FUN_0099d060(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x6bc50);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x6bc54);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x6bc58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x6bc50) = 0;
  *(undefined4 *)(unaff_ESI + 0x6bc54) = 0;
  *(undefined4 *)(unaff_ESI + 0x6bc58) = 0;
  return;
}

