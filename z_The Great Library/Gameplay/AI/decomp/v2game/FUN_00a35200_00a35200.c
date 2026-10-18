// FUN_00a35200 @ 00a35200 body=[[00a35200, 00a3520f] [00a35213, 00a3522a] [00a3522e, 00a3524f] [00a35253, 00a35261]]


void FUN_00a35200(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[0x16] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x16]);
  }
  unaff_ESI[0x16] = 0;
  unaff_ESI[0x17] = 0;
  unaff_ESI[0x18] = 0;
  if (0xf < (uint)unaff_ESI[0x14]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0xf]);
  }
  unaff_ESI[0x14] = 0xf;
  unaff_ESI[0x13] = 0;
  *(undefined1 *)(unaff_ESI + 0xf) = 0;
  *unaff_ESI = CCommand::vftable;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[6] = 0;
  unaff_ESI[7] = 0xf;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

