// FUN_00403550 @ 00403550 body=[[00403550, 0040355e] [00403562, 00403571]]


void FUN_00403550(void)

{
  int unaff_ESI;
  
  if (0xf < *(uint *)(unaff_ESI + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 0x1c) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined1 *)(unaff_ESI + 8) = 0;
  return;
}

