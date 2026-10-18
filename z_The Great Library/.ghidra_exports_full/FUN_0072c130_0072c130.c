// FUN_0072c130 @ 0072c130 body=[[0072c130, 0072c14a] [0072c14e, 0072c168] [0072c16c, 0072c172]]


void FUN_0072c130(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

