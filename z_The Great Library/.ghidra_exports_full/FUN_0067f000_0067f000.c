// FUN_0067f000 @ 0067f000 body=[[0067f000, 0067f01c] [0067f026, 0067f065]]


void FUN_0067f000(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0xcd4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0xcd4));
  }
  *(undefined4 *)(unaff_ESI + 0xcd4) = 0;
  *(undefined4 *)(unaff_ESI + 0xcd8) = 0;
  *(undefined4 *)(unaff_ESI + 0xcdc) = 0;
  *(undefined4 *)(unaff_ESI + 0xce4) = 0;
  *(undefined4 *)(unaff_ESI + 0xcec) = 0;
  *(undefined4 *)(unaff_ESI + 0xce8) = 0x2d2d2d;
  *(undefined4 *)(unaff_ESI + 0xcf0) = DAT_0126259c;
  return;
}

