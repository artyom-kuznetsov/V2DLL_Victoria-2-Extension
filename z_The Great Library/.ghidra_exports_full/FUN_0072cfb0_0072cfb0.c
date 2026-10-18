// FUN_0072cfb0 @ 0072cfb0 body=[[0072cfb0, 0072cfc8] [0072cfcc, 0072cfef] [0072cff3, 0072d002]]


void FUN_0072cfb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = CPauseGame::vftable;
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

