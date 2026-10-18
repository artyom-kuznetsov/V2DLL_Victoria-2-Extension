// FUN_009cd6c0 @ 009cd6c0 body=[[009cd6c0, 009cd6da] [009cd6de, 009cd6f8] [009cd6fc, 009cd702]]


void FUN_009cd6c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e3b228;
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

