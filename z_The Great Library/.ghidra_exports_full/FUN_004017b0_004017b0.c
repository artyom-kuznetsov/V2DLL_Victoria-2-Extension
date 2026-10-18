// FUN_004017b0 @ 004017b0 body=[[004017b0, 004017ce] [004017d2, 004017e9]]


void FUN_004017b0(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_0040a110(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

