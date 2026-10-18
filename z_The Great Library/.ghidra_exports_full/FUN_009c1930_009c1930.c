// FUN_009c1930 @ 009c1930 body=[[009c1930, 009c1946] [009c194b, 009c1964]]


void FUN_009c1930(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

