// FUN_00a3c1b0 @ 00a3c1b0 body=[[00a3c1b0, 00a3c1cb] [00a3c1cf, 00a3c1f0] [00a3c1f4, 00a3c21a] [00a3c21e, 00a3c242] [00a3c246, 00a3c261] [00a3c265, 00a3c274]]


void FUN_00a3c1b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e40938;
  if (in_ECX[0x32] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x32]);
  }
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  if (in_ECX[0x2e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2e]);
  }
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  if (0xf < (uint)in_ECX[0x2a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x25]);
  }
  in_ECX[0x2a] = 0xf;
  in_ECX[0x29] = 0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
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
  return;
}

