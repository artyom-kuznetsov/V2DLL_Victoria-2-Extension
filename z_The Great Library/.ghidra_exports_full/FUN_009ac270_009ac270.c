// FUN_009ac270 @ 009ac270 body=[[009ac270, 009ac284] [009ac288, 009ac2a6] [009ac2aa, 009ac2c9] [009ac2cd, 009ac2d3]]


void FUN_009ac270(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0xd]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[8]);
  }
  in_ECX[0xd] = 0xf;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0xf;
  *(undefined1 *)(in_ECX + 1) = 0;
  *in_ECX = &PTR_FUN_00e38eb4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

