// FUN_00471c70 @ 00471c70 body=[[00471c70, 00471c8d] [00471c91, 00471ca0]]


void FUN_00471c70(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00471cc0(unaff_ESI + 0xf);
  *unaff_ESI = CCommand::vftable;
  if (0xf < (uint)unaff_ESI[7]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(unaff_ESI[2]);
  }
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  return;
}

