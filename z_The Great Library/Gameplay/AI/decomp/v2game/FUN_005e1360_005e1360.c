// FUN_005e1360 @ 005e1360 body=[[005e1360, 005e1383] [005e1387, 005e13a1] [005e13a5, 005e13ab]]


void FUN_005e1360(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_00471cc0(in_ECX + 0xf);
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

