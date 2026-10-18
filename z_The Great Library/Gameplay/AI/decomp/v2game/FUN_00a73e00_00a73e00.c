// FUN_00a73e00 @ 00a73e00 body=[[00a73e00, 00a73e1a] [00a73e1e, 00a73e3c] [00a73e40, 00a73e59] [00a73e5d, 00a73e63]]


void FUN_00a73e00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e37db4;
  if (0xf < (uint)in_ECX[0xe]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[9]);
  }
  in_ECX[0xe] = 0xf;
  in_ECX[0xd] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
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

