// FUN_009f4d20 @ 009f4d20 body=[[009f4d20, 009f4d4a] [009f4d4e, 009f4d78] [009f4d82, 009f4da2] [009f4da6, 009f4dc2] [009f4dc6, 009f4dd7]]


void FUN_009f4d20(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e3d158;
  if (unaff_ESI[0x29] != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x29]);
  }
  unaff_ESI[0x29] = 0;
  unaff_ESI[0x2a] = 0;
  unaff_ESI[0x2b] = 0;
  if (unaff_ESI[0x22] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x22]);
  }
  unaff_ESI[0x22] = 0;
  unaff_ESI[0x23] = 0;
  unaff_ESI[0x24] = 0;
  if (0xf < (uint)unaff_ESI[0x19]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x14]);
  }
  unaff_ESI[0x19] = 0xf;
  unaff_ESI[0x18] = 0;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  if (0xf < (uint)unaff_ESI[0xb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[6]);
  }
  unaff_ESI[0xb] = 0xf;
  unaff_ESI[10] = 0;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  FUN_009f7fa0();
  return;
}

