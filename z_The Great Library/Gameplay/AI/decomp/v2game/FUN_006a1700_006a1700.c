// FUN_006a1700 @ 006a1700 body=[[006a1700, 006a171e] [006a1723, 006a173a]]


void FUN_006a1700(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_006a2140();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

