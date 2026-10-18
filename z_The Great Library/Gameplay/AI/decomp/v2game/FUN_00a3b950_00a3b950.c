// FUN_00a3b950 @ 00a3b950 body=[[00a3b950, 00a3b968] [00a3b96c, 00a3b989] [00a3b98d, 00a3b9a8] [00a3b9ac, 00a3b9bb]]


void FUN_00a3b950(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e408d0;
  if (0xf < (uint)in_ECX[0x1e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x19]);
  }
  in_ECX[0x1e] = 0xf;
  in_ECX[0x1d] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
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

