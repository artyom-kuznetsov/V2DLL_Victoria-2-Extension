// FUN_00a06930 @ 00a06930 body=[[00a06930, 00a06944] [00a06948, 00a06972] [00a06976, 00a06990]]


void FUN_00a06930(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0xa4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x90));
  }
  *(undefined4 *)(unaff_ESI + 0xa4) = 0xf;
  *(undefined4 *)(unaff_ESI + 0xa0) = 0;
  *(undefined1 *)(unaff_ESI + 0x90) = 0;
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

