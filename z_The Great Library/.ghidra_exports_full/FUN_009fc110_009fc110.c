// FUN_009fc110 @ 009fc110 body=[[009fc110, 009fc130] [009fc134, 009fc14c]]


void FUN_009fc110(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 8) != 0) {
    FUN_00463b30(*(undefined4 *)(unaff_ESI + 0xc));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 8));
  }
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}

