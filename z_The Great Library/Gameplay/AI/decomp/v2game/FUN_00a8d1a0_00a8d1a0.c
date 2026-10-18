// FUN_00a8d1a0 @ 00a8d1a0 body=[[00a8d1a0, 00a8d21a]]


undefined4 FUN_00a8d1a0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0xfffffffe;
  }
  piVar1 = *(int **)(unaff_ESI + 0x20);
  if ((piVar1 != (int *)0x0) && (*piVar1 == unaff_ESI)) {
    if (piVar1[0x313] != 0) {
      (**(code **)(unaff_ESI + 0x28))(*(undefined4 *)(unaff_ESI + 0x2c),piVar1[0x313]);
    }
    if (piVar1[0x314] != 0) {
      (**(code **)(unaff_ESI + 0x28))(*(undefined4 *)(unaff_ESI + 0x2c),piVar1[0x314]);
    }
    if (piVar1[0x315] != 0) {
      (**(code **)(unaff_ESI + 0x28))(*(undefined4 *)(unaff_ESI + 0x2c),piVar1[0x315]);
    }
    (**(code **)(unaff_ESI + 0x28))
              (*(undefined4 *)(unaff_ESI + 0x2c),*(undefined4 *)(unaff_ESI + 0x20));
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    return 0;
  }
  return 0xfffffffe;
}

