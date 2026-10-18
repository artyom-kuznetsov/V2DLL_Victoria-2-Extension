// FUN_0072c6f0 @ 0072c6f0 body=[[0072c6f0, 0072c70b] [0072c70f, 0072c72f] [0072c733, 0072c754] [0072c758, 0072c767]]


void FUN_0072c6f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CPlayerConnected::vftable;
  if (0xf < (uint)in_ECX[0x20]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1b]);
  }
  in_ECX[0x20] = 0xf;
  in_ECX[0x1f] = 0;
  *(undefined1 *)(in_ECX + 0x1b) = 0;
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
  return;
}

