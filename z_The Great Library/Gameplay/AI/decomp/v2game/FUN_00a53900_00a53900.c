// FUN_00a53900 @ 00a53900 body=[[00a53900, 00a5391e] [00a53922, 00a53948] [00a5394c, 00a53967] [00a5396b, 00a5397a]]


void FUN_00a53900(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e41890;
  if (0xf < (uint)in_ECX[0x28]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x23]);
  }
  in_ECX[0x28] = 0xf;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x23) = 0;
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

