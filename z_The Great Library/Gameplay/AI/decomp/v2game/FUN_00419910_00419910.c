// FUN_00419910 @ 00419910 body=[[00419910, 0041992e] [00419932, 00419949]]


void FUN_00419910(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_00419800(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

