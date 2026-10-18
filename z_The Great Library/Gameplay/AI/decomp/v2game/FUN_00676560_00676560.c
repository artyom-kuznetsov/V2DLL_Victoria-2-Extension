// FUN_00676560 @ 00676560 body=[[00676560, 0067657a] [0067657e, 0067659f] [006765a3, 006765a9]]


void FUN_00676560(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CQuitDialog::vftable;
  if (0xf < (uint)in_ECX[0x1f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1a]);
  }
  in_ECX[0x1f] = 0xf;
  in_ECX[0x1e] = 0;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  FUN_00640880();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

