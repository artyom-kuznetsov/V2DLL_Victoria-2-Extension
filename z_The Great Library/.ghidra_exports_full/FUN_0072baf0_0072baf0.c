// FUN_0072baf0 @ 0072baf0 body=[[0072baf0, 0072bb08] [0072bb0c, 0072bb2f] [0072bb33, 0072bb42]]


void FUN_0072baf0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CAddPlayer::vftable;
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

