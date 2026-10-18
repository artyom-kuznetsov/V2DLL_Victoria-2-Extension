// FUN_005d75b0 @ 005d75b0 body=[[005d75b0, 005d75f8]]


void FUN_005d75b0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_005c5e00(unaff_ESI);
  *unaff_ESI = CNavy::vftable;
  unaff_ESI[2] = CNavy::vftable;
  unaff_ESI[0x69] = 0;
  unaff_ESI[0x6a] = 0;
  unaff_ESI[0x6b] = 0;
  *(undefined1 *)(unaff_ESI + 0x6c) = 0;
  unaff_ESI[0x6e] = 0;
  unaff_ESI[0x6f] = 0;
  unaff_ESI[0x6d] = 0;
  return;
}

