// FUN_006336b0 @ 006336b0 body=[[006336b0, 006336be] [006336c2, 006336d1]]


void FUN_006336b0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x28) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined1 *)(unaff_ESI + 0x14) = 0;
  return;
}

