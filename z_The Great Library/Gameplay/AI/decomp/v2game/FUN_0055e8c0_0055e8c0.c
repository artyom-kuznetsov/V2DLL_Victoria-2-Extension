// FUN_0055e8c0 @ 0055e8c0 body=[[0055e8c0, 0055e8da] [0055e8de, 0055e8f7] [0055e8fb, 0055e902]]


void FUN_0055e8c0(void)

{
  int *piVar1;
  int *unaff_EDI;
  
  piVar1 = DAT_0125e2b0;
  if ((unaff_EDI != DAT_0125e2b0) && (DAT_0125e2b0 != (int *)0x0)) {
    if (*DAT_0125e2b0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*DAT_0125e2b0);
    }
    *DAT_0125e2b0 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(piVar1);
  }
  DAT_0125e2b0 = unaff_EDI;
  return;
}

