// FUN_009132d0 @ 009132d0 body=[[009132d0, 009132e4] [009132e8, 00913308] [0091330c, 00913312]]


void FUN_009132d0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *in_ECX = CDiplomaticAction::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

