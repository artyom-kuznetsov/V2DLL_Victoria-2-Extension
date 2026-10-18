// FUN_0098a270 @ 0098a270 body=[[0098a270, 0098a281] [0098a285, 0098a2dd]]


void FUN_0098a270(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  if (unaff_ESI != unaff_EDI) {
    if (7 < (uint)unaff_ESI[5]) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(*unaff_ESI);
    }
    unaff_ESI[5] = 7;
    unaff_ESI[4] = 0;
    *(undefined2 *)unaff_ESI = 0;
    if ((uint)unaff_EDI[5] < 8) {
      FID_conflict__memcpy(unaff_ESI,unaff_EDI,unaff_EDI[4] * 2 + 2);
    }
    else {
      *unaff_ESI = *unaff_EDI;
      *unaff_EDI = 0;
    }
    unaff_ESI[4] = unaff_EDI[4];
    unaff_ESI[5] = unaff_EDI[5];
    unaff_EDI[5] = 7;
    unaff_EDI[4] = 0;
    *(undefined2 *)unaff_EDI = 0;
  }
  return;
}

