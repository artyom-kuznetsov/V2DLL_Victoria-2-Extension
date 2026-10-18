// FUN_00a16f90 @ 00a16f90 body=[[00a16f90, 00a16fa4] [00a16fa8, 00a16fc8] [00a16fcc, 00a16fe8] [00a16ff2, 00a16ffd]]


void FUN_00a16f90(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_00e3f0c4;
  if (0xf < (uint)unaff_ESI[0x13]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xe]);
  }
  unaff_ESI[0x13] = 0xf;
  unaff_ESI[0x12] = 0;
  *(undefined1 *)(unaff_ESI + 0xe) = 0;
  if (0xf < (uint)unaff_ESI[0xb]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[6]);
  }
  unaff_ESI[0xb] = 0xf;
  unaff_ESI[10] = 0;
  *(undefined1 *)(unaff_ESI + 6) = 0;
  if (unaff_ESI[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = 0;
  return;
}

