// FUN_004034f0 @ 004034f0 body=[[004034f0, 004034fe] [00403502, 00403520] [00403524, 0040353c] [00403540, 00403549]]


void FUN_004034f0(void)

{
  int *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0x13]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xe]);
  }
  unaff_ESI[0x13] = 0xf;
  unaff_ESI[0x12] = 0;
  *(undefined1 *)(unaff_ESI + 0xe) = 0;
  if (0xf < (uint)unaff_ESI[9]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[4]);
  }
  unaff_ESI[9] = 0xf;
  unaff_ESI[8] = 0;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

