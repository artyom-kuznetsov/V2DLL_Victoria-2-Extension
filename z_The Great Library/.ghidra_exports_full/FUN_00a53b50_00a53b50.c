// FUN_00a53b50 @ 00a53b50 body=[[00a53b50, 00a53b68] [00a53b6c, 00a53b89] [00a53b8d, 00a53ba8] [00a53bac, 00a53bbb]]


void FUN_00a53b50(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e41960;
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

