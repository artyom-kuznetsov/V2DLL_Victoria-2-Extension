// FUN_009ff770 @ 009ff770 body=[[009ff770, 009ff784] [009ff788, 009ff7ac] [009ff7b0, 009ff7c9] [009ff7cd, 009ff7d3]]


void FUN_009ff770(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0x1a]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x15]);
  }
  in_ECX[0x1a] = 0xf;
  in_ECX[0x19] = 0;
  *(undefined1 *)(in_ECX + 0x15) = 0;
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

