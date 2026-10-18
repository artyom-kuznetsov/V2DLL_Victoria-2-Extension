// FUN_00a548b0 @ 00a548b0 body=[[00a548b0, 00a548ce] [00a548d2, 00a548f8] [00a548fc, 00a54917] [00a5491b, 00a5492a]]


void FUN_00a548b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e419f8;
  if (0xf < (uint)in_ECX[0x35]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x30]);
  }
  in_ECX[0x35] = 0xf;
  in_ECX[0x34] = 0;
  *(undefined1 *)(in_ECX + 0x30) = 0;
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

