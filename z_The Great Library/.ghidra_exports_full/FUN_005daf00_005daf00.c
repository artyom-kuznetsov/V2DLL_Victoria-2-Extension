// FUN_005daf00 @ 005daf00 body=[[005daf00, 005daf28] [005daf32, 005daf3f] [005daf4d, 005daf5a]]


void FUN_005daf00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    return;
  }
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

