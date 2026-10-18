// FUN_009abf00 @ 009abf00 body=[[009abf00, 009abf14] [009abf18, 009abf38] [009abf3c, 009abf42]]


void FUN_009abf00(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[6]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[1]);
  }
  in_ECX[6] = 0xf;
  in_ECX[5] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  *in_ECX = &PTR_FUN_00e38eb4;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

