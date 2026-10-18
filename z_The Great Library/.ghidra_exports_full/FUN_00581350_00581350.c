// FUN_00581350 @ 00581350 body=[[00581350, 00581364] [00581368, 0058138c] [00581390, 005813a9] [005813ad, 005813b3]]


void FUN_00581350(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0x16]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x16] = 0xf;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 0x11) = 0;
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

