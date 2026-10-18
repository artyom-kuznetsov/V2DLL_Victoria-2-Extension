// FUN_00a58a40 @ 00a58a40 body=[[00a58a40, 00a58a5a] [00a58a5e, 00a58a7d] [00a58a81, 00a58a87]]


void FUN_00a58a40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e41cf4;
  if (0xf < (uint)in_ECX[0x1e]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x19]);
  }
  in_ECX[0x1e] = 0xf;
  in_ECX[0x1d] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  FUN_006467c0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

