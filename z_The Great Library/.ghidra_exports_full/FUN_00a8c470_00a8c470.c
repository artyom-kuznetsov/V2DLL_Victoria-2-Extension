// FUN_00a8c470 @ 00a8c470 body=[[00a8c470, 00a8c4f4]]


undefined4 FUN_00a8c470(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0xfffffffe;
  }
  if (*(int *)(unaff_ESI + 0x24) == 0) {
    *(code **)(unaff_ESI + 0x24) = FUN_00a8bd00;
  }
  if (*(int *)(unaff_ESI + 0x28) == 0) {
    *(code **)(unaff_ESI + 0x28) = FUN_00a8bd20;
  }
  piVar1 = (int *)(**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x2c),0xfa74,1);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffd;
  }
  *piVar1 = unaff_ESI;
  *(int **)(unaff_ESI + 0x20) = piVar1;
  piVar1[8] = 0;
  piVar1[7] = 0;
  piVar1[0x319] = 0;
  piVar1[1] = 10;
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined1 *)(piVar1 + 10) = 0;
  piVar1[0x315] = 0;
  piVar1[0x314] = 0;
  piVar1[0x313] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  return 0;
}

