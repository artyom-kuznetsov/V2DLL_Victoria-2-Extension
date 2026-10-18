// FUN_00993b80 @ 00993b80 body=[[00993b80, 00993bb3] [00993bb8, 00993bef]]


void FUN_00993b80(void)

{
  int *unaff_ESI;
  
  if (unaff_ESI != &DAT_0131c8ec) {
    if (DAT_0131c8ec != 0) {
      FUN_00a3ab10();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0131c8ec);
    }
    DAT_0131c8ec = *unaff_ESI;
    DAT_0131c8f0 = unaff_ESI[1];
    DAT_0131c8f4 = unaff_ESI[2];
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
  }
  return;
}

