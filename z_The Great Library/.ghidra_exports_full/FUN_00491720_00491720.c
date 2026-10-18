// FUN_00491720 @ 00491720 body=[[00491720, 0049174c] [00491750, 00491770] [00491774, 0049177a]]


void FUN_00491720(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = CMilitaryConstruction::vftable;
  in_ECX[0xc] = CMilitaryConstruction::vftable;
  FUN_00849e90();
  if (0xf < (uint)in_ECX[0x1f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(in_ECX[0x1a]);
  }
  in_ECX[0x1f] = 0xf;
  in_ECX[0x1e] = 0;
  *(undefined1 *)(in_ECX + 0x1a) = 0;
  FUN_00490f70(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  return;
}

