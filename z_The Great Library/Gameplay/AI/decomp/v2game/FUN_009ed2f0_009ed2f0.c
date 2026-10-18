// FUN_009ed2f0 @ 009ed2f0 body=[[009ed2f0, 009ed310] [009ed314, 009ed33c] [009ed340, 009ed346]]


void FUN_009ed2f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3cb38;
  if (0xf < (uint)in_ECX[0x2d1]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2cc]);
  }
  in_ECX[0x2d1] = 0xf;
  in_ECX[0x2d0] = 0;
  *(undefined1 *)(in_ECX + 0x2cc) = 0;
  FUN_007d9930();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

