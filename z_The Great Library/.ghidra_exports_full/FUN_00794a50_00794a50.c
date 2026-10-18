// FUN_00794a50 @ 00794a50 body=[[00794a50, 00794a73] [00794a78, 00794a8d] [00794a91, 00794a9e]]


void FUN_00794a50(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x18) != 0) {
    FUN_005e5d30();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x18));
  }
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  if (*(int *)(unaff_ESI + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}

