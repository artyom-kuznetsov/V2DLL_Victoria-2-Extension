// FUN_0058a8a0 @ 0058a8a0 body=[[0058a8a0, 0058a8b5] [0058a8b9, 0058a8d6] [0058a8da, 0058a8f2] [0058a8f6, 0058a8fd]]


void FUN_0058a8a0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX[0x11] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = CCommand::vftable;
  if (0xf < (uint)in_ECX[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[2]);
  }
  in_ECX[7] = 0xf;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

