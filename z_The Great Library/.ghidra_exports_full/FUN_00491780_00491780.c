// FUN_00491780 @ 00491780 body=[[00491780, 004917a6] [004917aa, 004917bf]]


void FUN_00491780(void)

{
  undefined4 *unaff_ESI;
  
  *unaff_ESI = CMilitaryConstruction::vftable;
  unaff_ESI[0xc] = CMilitaryConstruction::vftable;
  FUN_00849e90();
  if (0xf < (uint)unaff_ESI[0x1f]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[0x1a]);
  }
  unaff_ESI[0x1f] = 0xf;
  unaff_ESI[0x1e] = 0;
  *(undefined1 *)(unaff_ESI + 0x1a) = 0;
  FUN_00490f70(unaff_ESI);
  return;
}

