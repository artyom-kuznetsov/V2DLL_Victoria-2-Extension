// FUN_00a3f280 @ 00a3f280 body=[[00a3f280, 00a3f29e] [00a3f2a2, 00a3f2b9]]


void FUN_00a3f280(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_00a40980(unaff_ESI[1]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

