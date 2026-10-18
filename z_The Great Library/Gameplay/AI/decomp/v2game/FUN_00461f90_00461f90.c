// FUN_00461f90 @ 00461f90  (requested 00461F90, first bytes: 8B 06 85 C0 74 09 50 E8)


void FUN_00461f90(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

