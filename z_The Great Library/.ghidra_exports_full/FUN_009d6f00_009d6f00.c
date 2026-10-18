// FUN_009d6f00 @ 009d6f00 body=[[009d6f00, 009d6f0e] [009d6f12, 009d6f2e] [009d6f32, 009d6f46] [009d6f4a, 009d6f53]]


void FUN_009d6f00(void)

{
  int *unaff_ESI;
  
  if (0xf < (uint)unaff_ESI[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[8]);
  }
  unaff_ESI[0xd] = 0xf;
  unaff_ESI[0xc] = 0;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  if (unaff_ESI[4] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[4]);
  }
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[6] = 0;
  if (*unaff_ESI != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_ESI);
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  return;
}

