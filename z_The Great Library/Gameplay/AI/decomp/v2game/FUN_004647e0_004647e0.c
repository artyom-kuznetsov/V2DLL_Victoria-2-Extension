// FUN_004647e0 @ 004647e0 body=[[004647e0, 004647f8] [004647fc, 00464818] [0046481c, 00464841] [00464845, 00464866] [0046486a, 0046488b] [0046488f, 004648a6] [004648aa, 004648bb]]


void FUN_004647e0(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CNewsScope::vftable;
  if (0xf < (uint)unaff_ESI[0x1e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x19]);
  }
  unaff_ESI[0x1e] = 0xf;
  unaff_ESI[0x1d] = 0;
  *(undefined1 *)(unaff_ESI + 0x19) = 0;
  if (unaff_ESI[0x15] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x15]);
  }
  unaff_ESI[0x15] = 0;
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  if (unaff_ESI[0x11] != 0) {
    FUN_00463b30(unaff_ESI[0x12]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x11]);
  }
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[0x13] = 0;
  if (unaff_ESI[0xd] != 0) {
    FUN_004651b0(unaff_ESI[0xe]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xd]);
  }
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[0xf] = 0;
  if (unaff_ESI[9] != 0) {
    FUN_004651b0(unaff_ESI[10]);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[9]);
  }
  unaff_ESI[9] = 0;
  unaff_ESI[10] = 0;
  unaff_ESI[0xb] = 0;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

