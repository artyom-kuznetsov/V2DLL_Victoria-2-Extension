// FUN_00a15810 @ 00a15810 body=[[00a15810, 00a15832] [00a15836, 00a1584f] [00a15853, 00a15867] [00a1586b, 00a15878] [00a15886, 00a15893]]


void FUN_00a15810(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
  if (0xf < (uint)piVar1[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1[8]);
  }
  piVar1[0xd] = 0xf;
  piVar1[0xc] = 0;
  *(undefined1 *)(piVar1 + 8) = 0;
  if (piVar1[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1[4]);
  }
  piVar1[4] = 0;
  piVar1[5] = 0;
  piVar1[6] = 0;
  if (*piVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*piVar1);
  }
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

