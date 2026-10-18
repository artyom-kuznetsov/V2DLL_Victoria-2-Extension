// FUN_0064e860 @ 0064e860 body=[[0064e860, 0064e874] [0064e878, 0064e887]]


void FUN_0064e860(void)

{
  undefined4 *unaff_ESI;
  
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

