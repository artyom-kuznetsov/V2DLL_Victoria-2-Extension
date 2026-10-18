// FUN_0067dae0 @ 0067dae0 body=[[0067dae0, 0067daff] [0067db03, 0067db10] [0067db14, 0067db29] [0067db2d, 0067db3a] [0067db3e, 0067db46]]


void FUN_0067dae0(void)

{
  int *piVar1;
  undefined4 *unaff_EDI;
  
  piVar1 = (int *)unaff_EDI[0x348];
  *unaff_EDI = CCurrentGameState::vftable;
  if (piVar1 != (int *)0x0) {
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
  piVar1 = (int *)unaff_EDI[0x304];
  if (piVar1 == (int *)0x0) {
    FUN_0067fe40(unaff_EDI);
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

