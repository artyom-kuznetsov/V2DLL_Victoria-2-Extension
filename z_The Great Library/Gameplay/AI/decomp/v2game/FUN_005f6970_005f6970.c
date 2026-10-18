// FUN_005f6970 @ 005f6970 body=[[005f6970, 005f6984] [005f6988, 005f69a6] [005f69aa, 005f69c9] [005f69cd, 005f69d3]]


void FUN_005f6970(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0x10]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0xb]);
  }
  in_ECX[0x10] = 0xf;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  if (0xf < (uint)in_ECX[9]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[4]);
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0xf;
  *(undefined1 *)(in_ECX + 4) = 0;
  *in_ECX = CHistoryEntry::vftable;
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

