// FUN_00a1d350 @ 00a1d350 body=[[00a1d350, 00a1d35f] [00a1d363, 00a1d37c] [00a1d380, 00a1d38f]]


void FUN_00a1d350(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x138) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x138));
  }
  *(undefined4 *)(unaff_ESI + 0x138) = 0;
  if (*(int *)(unaff_ESI + 0x13c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x13c));
  }
  *(undefined4 *)(unaff_ESI + 0x13c) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

