// FUN_0087a520 @ 0087a520 body=[[0087a520, 0087a529] [0087a530, 0087a538] [0087a543, 0087a55e]]


void FUN_0087a520(void)

{
  int unaff_EDI;
  
  if (*(int *)(unaff_EDI + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_EDI + 0x3c));
  }
  *(undefined4 *)(unaff_EDI + 0x3c) = 0;
  *(undefined4 *)(unaff_EDI + 0x40) = 0;
  *(undefined4 *)(unaff_EDI + 0x44) = 0;
  FUN_008760f0(unaff_EDI);
  return;
}

