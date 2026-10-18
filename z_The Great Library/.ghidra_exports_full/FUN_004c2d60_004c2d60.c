// FUN_004c2d60 @ 004c2d60 body=[[004c2d60, 004c2e0a]]


void FUN_004c2d60(void)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  unaff_ESI[1] = *(undefined4 *)(unaff_EDI + 4);
  *unaff_ESI = CProvinceRGO::vftable;
  unaff_ESI[2] = *(undefined4 *)(unaff_EDI + 8);
  unaff_ESI[3] = *(undefined4 *)(unaff_EDI + 0xc);
  FUN_004c2e10(unaff_ESI + 4);
  unaff_ESI[0x20] = *(undefined4 *)(unaff_EDI + 0x80);
  unaff_ESI[0x21] = *(undefined4 *)(unaff_EDI + 0x84);
  unaff_ESI[0x22] = *(undefined4 *)(unaff_EDI + 0x88);
  unaff_ESI[0x23] = *(undefined4 *)(unaff_EDI + 0x8c);
  unaff_ESI[0x24] = *(undefined4 *)(unaff_EDI + 0x90);
  unaff_ESI[0x25] = *(undefined4 *)(unaff_EDI + 0x94);
  unaff_ESI[0x26] = *(undefined4 *)(unaff_EDI + 0x98);
  unaff_ESI[0x27] = *(undefined4 *)(unaff_EDI + 0x9c);
  unaff_ESI[0x28] = *(undefined4 *)(unaff_EDI + 0xa0);
  unaff_ESI[0x29] = *(undefined4 *)(unaff_EDI + 0xa4);
  *(undefined1 *)(unaff_ESI + 0x2a) = *(undefined1 *)(unaff_EDI + 0xa8);
  return;
}

