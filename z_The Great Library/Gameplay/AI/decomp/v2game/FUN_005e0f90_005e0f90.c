// FUN_005e0f90 @ 005e0f90 body=[[005e0f90, 005e0fa4] [005e0fa8, 005e0fcc] [005e0fd0, 005e0fe9] [005e0fed, 005e0ff3]]


void FUN_005e0f90(byte param_1)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[0x17]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x12]);
  }
  in_ECX[0x17] = 0xf;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
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

