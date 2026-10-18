// FUN_00494c10 @ 00494c10 body=[[00494c10, 00494c5e] [00494c62, 00494c7b] [00494c7f, 00494c89]]


/* WARNING: Removing unreachable block (ram,0x00494c21) */
/* WARNING: Removing unreachable block (ram,0x00494c26) */
/* WARNING: Removing unreachable block (ram,0x00494c3b) */

void FUN_00494c10(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x10) != *(int *)(unaff_ESI + 0x14)) {
    *(int *)(unaff_ESI + 0x14) = *(int *)(unaff_ESI + 0x10);
  }
  FUN_00aaea59(*(undefined4 *)(unaff_ESI + 0xc));
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  if (*(uint *)(unaff_ESI + 0x3c) < 0x10) {
    *(undefined4 *)(unaff_ESI + 0x3c) = 0xf;
    *(undefined4 *)(unaff_ESI + 0x38) = 0;
    *(undefined1 *)(unaff_ESI + 0x28) = 0;
    if (*(int *)(unaff_ESI + 0x10) == 0) {
      *(undefined4 *)(unaff_ESI + 0x10) = 0;
      *(undefined4 *)(unaff_ESI + 0x14) = 0;
      *(undefined4 *)(unaff_ESI + 0x18) = 0;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x28));
}

