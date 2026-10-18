// FUN_00462d20 @ 00462d20 body=[[00462d20, 00462d2f] [00462d33, 00462d49] [00462d4d, 00462d5a]]


void FUN_00462d20(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[7]);
  }
  unaff_ESI[7] = 0;
  unaff_ESI[8] = 0;
  unaff_ESI[9] = 0;
  if (0xf < (uint)unaff_ESI[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0xf;
  *(undefined1 *)unaff_ESI = 0;
  return;
}

