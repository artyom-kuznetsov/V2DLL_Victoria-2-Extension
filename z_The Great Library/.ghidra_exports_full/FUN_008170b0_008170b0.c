// FUN_008170b0 @ 008170b0 body=[[008170b0, 008170d0] [008170d4, 008170fe] [00817102, 00817108]]


void FUN_008170b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CShieldObject::vftable;
  if (0xf < (uint)in_ECX[0x5c]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x57]);
  }
  in_ECX[0x5c] = 0xf;
  in_ECX[0x5b] = 0;
  *(undefined1 *)(in_ECX + 0x57) = 0;
  FUN_00a203f0();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

