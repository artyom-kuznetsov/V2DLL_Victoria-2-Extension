// FUN_00a3feb0 @ 00a3feb0 body=[[00a3feb0, 00a3febe] [00a3fec2, 00a3fed1]]


void FUN_00a3feb0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x10));
  }
  *(undefined4 *)(unaff_ESI + 0x24) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined1 *)(unaff_ESI + 0x10) = 0;
  return;
}

