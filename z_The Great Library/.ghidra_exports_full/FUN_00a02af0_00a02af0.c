// FUN_00a02af0 @ 00a02af0 body=[[00a02af0, 00a02b04] [00a02b08, 00a02b35] [00a02b39, 00a02b60] [00a02b64, 00a02b7e]]


void FUN_00a02af0(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0xd0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xbc));
  }
  *(undefined4 *)(unaff_ESI + 0xd0) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xcc) = 0;
  *(undefined1 *)(unaff_ESI + 0xbc) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0xa0));
  }
  *(undefined4 *)(unaff_ESI + 0xb4) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xb0) = 0;
  *(undefined1 *)(unaff_ESI + 0xa0) = 0;
  if (0xf < *(uint *)(unaff_ESI + 0x88)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x74));
  }
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0xf;
  *(undefined1 *)(unaff_ESI + 0x74) = 0;
  FUN_009fa970();
  return;
}

