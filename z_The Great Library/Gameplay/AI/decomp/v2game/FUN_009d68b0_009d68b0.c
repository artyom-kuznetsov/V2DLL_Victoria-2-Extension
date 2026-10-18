// FUN_009d68b0 @ 009d68b0 body=[[009d68b0, 009d68c0] [009d68c4, 009d6905]]


void FUN_009d68b0(void)

{
  int unaff_ESI;
  
  if ((*(byte *)(unaff_ESI + 0x40) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(**(undefined4 **)(unaff_ESI + 0x10));
  }
  **(undefined4 **)(unaff_ESI + 0x10) = 0;
  **(undefined4 **)(unaff_ESI + 0x20) = 0;
  **(undefined4 **)(unaff_ESI + 0x30) = 0;
  **(undefined4 **)(unaff_ESI + 0x14) = 0;
  **(undefined4 **)(unaff_ESI + 0x24) = 0;
  **(undefined4 **)(unaff_ESI + 0x34) = 0;
  *(uint *)(unaff_ESI + 0x40) = *(uint *)(unaff_ESI + 0x40) & 0xfffffffe;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  return;
}

