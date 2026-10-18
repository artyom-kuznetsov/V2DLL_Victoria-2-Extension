// FUN_00471280 @ 00471280 body=[[00471280, 00471292] [00471296, 004712b9]]


void FUN_00471280(void)

{
  int *unaff_ESI;
  int *unaff_EDI;
  
  if (unaff_ESI != unaff_EDI) {
    if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*unaff_ESI);
    }
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    *unaff_ESI = *unaff_EDI;
    unaff_ESI[1] = unaff_EDI[1];
    unaff_ESI[2] = unaff_EDI[2];
    *unaff_EDI = 0;
    unaff_EDI[1] = 0;
    unaff_EDI[2] = 0;
  }
  return;
}

