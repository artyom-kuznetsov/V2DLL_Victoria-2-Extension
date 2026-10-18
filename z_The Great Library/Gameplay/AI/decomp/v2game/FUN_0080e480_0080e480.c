// FUN_0080e480 @ 0080e480 body=[[0080e480, 0080e49a] [0080e49e, 0080e4bc] [0080e4c0, 0080e4d9] [0080e4dd, 0080e4e3]]


void FUN_0080e480(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CProvinceType::vftable;
  if (0xf < (uint)in_ECX[0xf]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[10]);
  }
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
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

