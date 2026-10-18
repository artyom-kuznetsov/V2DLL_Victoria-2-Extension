// FUN_0047aa50 @ 0047aa50 body=[[0047aa50, 0047aa5e] [0047aa62, 0047aa80] [0047aa84, 0047aa92]]


void FUN_0047aa50(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x34)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x20));
  }
  *(undefined4 *)(unaff_ESI + 0x34) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x18)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 4));
  }
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined1 *)(unaff_ESI + 4) = 0;
  return;
}

