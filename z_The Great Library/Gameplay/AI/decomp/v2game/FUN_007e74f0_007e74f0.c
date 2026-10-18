// FUN_007e74f0 @ 007e74f0 body=[[007e74f0, 007e750a] [007e750e, 007e7528] [007e752c, 007e7532]]


void FUN_007e74f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CNullGraphicalCultureType::vftable;
  if (0xf < (uint)in_ECX[8]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[3]);
  }
  in_ECX[8] = 0xf;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 3) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

