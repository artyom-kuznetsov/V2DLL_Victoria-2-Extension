// FUN_008192c0 @ 008192c0 body=[[008192c0, 008192e0] [008192e4, 0081930e] [00819312, 00819318]]


void FUN_008192c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CUnitstatsBillboardType::vftable;
  if (0xf < (uint)in_ECX[0x52]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x4d]);
  }
  in_ECX[0x52] = 0xf;
  in_ECX[0x51] = 0;
  *(undefined1 *)(in_ECX + 0x4d) = 0;
  FUN_00a2fc90();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

