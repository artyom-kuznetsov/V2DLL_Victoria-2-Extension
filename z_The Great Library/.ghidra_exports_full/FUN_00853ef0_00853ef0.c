// FUN_00853ef0 @ 00853ef0 body=[[00853ef0, 00853f08] [00853f0c, 00853f33] [00853f37, 00853f3d]]


void FUN_00853ef0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CAINationalFocus::vftable;
  if (in_ECX[0x1b] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1b]);
  }
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  FUN_00825ec0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

