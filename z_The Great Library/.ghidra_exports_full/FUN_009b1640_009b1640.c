// FUN_009b1640 @ 009b1640 body=[[009b1640, 009b165e] [009b1662, 009b1679]]


void FUN_009b1640(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_0068fae0(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

