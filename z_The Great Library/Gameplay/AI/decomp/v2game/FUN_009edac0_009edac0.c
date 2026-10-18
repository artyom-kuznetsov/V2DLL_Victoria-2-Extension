// FUN_009edac0 @ 009edac0 body=[[009edac0, 009edb0e] [009edb12, 009edb3e] [009edb42, 009edb62]]


void FUN_009edac0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[0x4f] = &PTR_FUN_00e3ce44;
  *in_ECX = &PTR_FUN_00e3ccc8;
  FUN_004be200();
  in_ECX[0x53] = CTextBlock::vftable;
  if (0xf < (uint)in_ECX[0x68]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[99]);
  }
  in_ECX[0x68] = 0xf;
  in_ECX[0x67] = 0;
  *(undefined1 *)(in_ECX + 99) = 0;
  if (0xf < (uint)in_ECX[0x61]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x5c]);
  }
  in_ECX[0x61] = 0xf;
  in_ECX[0x60] = 0;
  *(undefined1 *)(in_ECX + 0x5c) = 0;
  FUN_007d9930();
  return;
}

