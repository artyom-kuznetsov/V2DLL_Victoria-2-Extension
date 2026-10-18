// FUN_009d26d0 @ 009d26d0 body=[[009d26d0, 009d26e7] [009d26eb, 009d26fc]]


void FUN_009d26d0(void)

{
  undefined4 *unaff_EDI;
  
  FUN_009d1130();
  if (0xf < (uint)unaff_EDI[5]) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*unaff_EDI);
  }
  unaff_EDI[5] = 0xf;
  unaff_EDI[4] = 0;
  *(undefined1 *)unaff_EDI = 0;
  return;
}

