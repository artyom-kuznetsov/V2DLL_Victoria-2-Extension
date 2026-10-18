// FUN_009a9d70 @ 009a9d70 body=[[009a9d70, 009a9d84] [009a9d88, 009a9dac] [009a9db0, 009a9dc9] [009a9dcd, 009a9dd3]]


void FUN_009a9d70(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  *in_ECX = &PTR_FUN_00e38ecc;
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

