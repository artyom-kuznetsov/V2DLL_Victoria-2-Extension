// FUN_009d91d0 @ 009d91d0 body=[[009d91d0, 009d91f4] [009d91f8, 009d9219] [009d921d, 009d9236]]


void FUN_009d91d0(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x160) != 0) {
    FUN_004651b0(*(undefined4 *)(unaff_ESI + 0x164));
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(unaff_ESI + 0x160));
  }
  *(undefined4 *)(unaff_ESI + 0x160) = 0;
  *(undefined4 *)(unaff_ESI + 0x164) = 0;
  *(undefined4 *)(unaff_ESI + 0x168) = 0;
  if (*(int *)(unaff_ESI + 0x150) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x150));
  }
  *(undefined4 *)(unaff_ESI + 0x150) = 0;
  *(undefined4 *)(unaff_ESI + 0x154) = 0;
  *(undefined4 *)(unaff_ESI + 0x158) = 0;
  FUN_00a203f0();
  return;
}

