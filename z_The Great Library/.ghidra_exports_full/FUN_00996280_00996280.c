// FUN_00996280 @ 00996280 body=[[00996280, 0099628f] [00996293, 009962c4]]


void FUN_00996280(void)

{
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 0x308) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(unaff_ESI + 0x308));
  }
  *(undefined4 *)(unaff_ESI + 0x308) = 0;
  *(undefined4 *)(unaff_ESI + 0x30c) = 0;
  *(undefined4 *)(unaff_ESI + 0x310) = 0;
  *(undefined ***)(unaff_ESI + 0x1c) = C3dObject::vftable;
  FUN_009f8f70();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

