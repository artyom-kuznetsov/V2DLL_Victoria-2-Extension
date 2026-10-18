// FUN_004d1c20 @ 004d1c20 body=[[004d1c20, 004d1c44] [004d1c48, 004d1c4e]]


void FUN_004d1c20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CNullState::vftable;
  in_ECX[0xc] = CNullState::vftable;
  FUN_004ce720(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

