// FUN_00a8c3f0 @ 00a8c3f0 body=[[00a8c3f0, 00a8c461]]


undefined4 FUN_00a8c3f0(void)

{
  int *piVar1;
  int unaff_ESI;
  
  if (unaff_ESI == 0) {
    return 0xfffffffe;
  }
  piVar1 = *(int **)(unaff_ESI + 0x20);
  if ((piVar1 != (int *)0x0) && (*piVar1 == unaff_ESI)) {
    if (piVar1[4] != 0) {
      (**(code **)(unaff_ESI + 0x28))(*(undefined4 *)(unaff_ESI + 0x2c),piVar1[4]);
    }
    if (piVar1[5] != 0) {
      (**(code **)(unaff_ESI + 0x28))(*(undefined4 *)(unaff_ESI + 0x2c),piVar1[5]);
    }
    if (piVar1[6] != 0) {
      (**(code **)(unaff_ESI + 0x28))(*(undefined4 *)(unaff_ESI + 0x2c),piVar1[6]);
    }
    (**(code **)(unaff_ESI + 0x28))
              (*(undefined4 *)(unaff_ESI + 0x2c),*(undefined4 *)(unaff_ESI + 0x20));
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    return 0;
  }
  return 0xfffffffe;
}

