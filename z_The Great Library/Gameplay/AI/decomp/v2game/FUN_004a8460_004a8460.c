// FUN_004a8460 @ 004a8460 body=[[004a8460, 004a8480] [004a8484, 004a849b]]


void FUN_004a8460(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_004bf6f0(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

