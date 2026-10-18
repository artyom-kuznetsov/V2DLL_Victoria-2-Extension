// FUN_00a44bb0 @ 00a44bb0 body=[[00a44bb0, 00a44bd9] [00a44bdd, 00a44c0a] [00a44c0e, 00a44c2e] [00a44c32, 00a44c49] [00a44c4d, 00a44c59]]


void FUN_00a44bb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00e40f98;
  in_ECX[0x25] = CTextBlock::vftable;
  if (0xf < (uint)in_ECX[0x3a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x35]);
  }
  in_ECX[0x3a] = 0xf;
  in_ECX[0x39] = 0;
  *(undefined1 *)(in_ECX + 0x35) = 0;
  if (0xf < (uint)in_ECX[0x33]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x2e]);
  }
  in_ECX[0x33] = 0xf;
  in_ECX[0x32] = 0;
  *(undefined1 *)(in_ECX + 0x2e) = 0;
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
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  return;
}

