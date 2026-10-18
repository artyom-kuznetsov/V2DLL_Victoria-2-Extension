// FUN_0057ffd0 @ 0057ffd0 body=[[0057ffd0, 0057ffe4] [0057ffe8, 0058000c] [00580010, 00580029] [0058002d, 00580033]]


void FUN_0057ffd0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0x14]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xf]);
  }
  in_ECX[0x14] = 0xf;
  in_ECX[0x13] = 0;
  *(undefined1 *)(in_ECX + 0xf) = 0;
  *in_ECX = CCommand::vftable;
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

