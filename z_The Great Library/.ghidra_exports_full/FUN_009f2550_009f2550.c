// FUN_009f2550 @ 009f2550 body=[[009f2550, 009f2564] [009f2568, 009f258c] [009f2590, 009f25a9] [009f25ad, 009f25b3]]


void FUN_009f2550(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  *in_ECX = &PTR_FUN_00e3cffc;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[6] = 0;
  in_ECX[7] = 0xf;
  *(undefined1 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

