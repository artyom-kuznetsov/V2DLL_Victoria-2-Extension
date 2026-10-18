// FUN_00595b20 @ 00595b20  (requested 00595B20, first bytes: 55 8B EC 56 8B F1 C7 06)


void FUN_00595b20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CTextBlock::vftable;
  if (0xf < (uint)in_ECX[0x15]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x10]);
  }
  in_ECX[0x15] = 0xf;
  in_ECX[0x14] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  if (0xf < (uint)in_ECX[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0xf;
  *(undefined1 *)(in_ECX + 9) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

