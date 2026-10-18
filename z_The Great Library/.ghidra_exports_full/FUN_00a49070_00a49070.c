// FUN_00a49070 @ 00a49070 body=[[00a49070, 00a49088] [00a4908c, 00a490a9] [00a490ad, 00a490c8] [00a490cc, 00a490db]]


void FUN_00a49070(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e41350;
  if (0xf < (uint)in_ECX[0x1c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x17]);
  }
  in_ECX[0x1c] = 0xf;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
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

