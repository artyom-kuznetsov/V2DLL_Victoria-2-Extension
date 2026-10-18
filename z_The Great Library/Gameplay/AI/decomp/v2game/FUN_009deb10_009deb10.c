// FUN_009deb10 @ 009deb10 body=[[009deb10, 009deb6e]]


void FUN_009deb10(void)

{
  int *piVar1;
  int unaff_ESI;
  
  piVar1 = *(int **)(unaff_ESI + 0x280);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x284);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = *(int **)(unaff_ESI + 0x288);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(unaff_ESI + 0x288) = 0;
  *(undefined4 *)(unaff_ESI + 0x280) = 0;
  *(undefined4 *)(unaff_ESI + 0x284) = 0;
  *(undefined4 *)(unaff_ESI + 0x28c) = 0;
  *(undefined4 *)(unaff_ESI + 0x290) = 0;
  *(undefined4 *)(unaff_ESI + 0x29c) = 0;
  return;
}

