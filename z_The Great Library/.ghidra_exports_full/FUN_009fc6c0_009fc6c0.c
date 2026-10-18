// FUN_009fc6c0 @ 009fc6c0 body=[[009fc6c0, 009fc6d4] [009fc6d8, 009fc6fc] [009fc700, 009fc719] [009fc71d, 009fc723]]


void FUN_009fc6c0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0x18]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x13]);
  }
  in_ECX[0x18] = 0xf;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
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

