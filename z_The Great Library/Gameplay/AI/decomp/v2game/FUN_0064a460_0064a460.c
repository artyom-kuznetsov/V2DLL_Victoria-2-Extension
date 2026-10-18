// FUN_0064a460 @ 0064a460 body=[[0064a460, 0064a4b1]]


void FUN_0064a460(void)

{
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_EDI + 0x20);
  *(undefined4 *)(unaff_ESI + 0x24) = *(undefined4 *)(unaff_EDI + 0x24);
  unaff_ESI[0x28] = *(undefined1 *)(unaff_EDI + 0x28);
  unaff_ESI[0x29] = *(undefined1 *)(unaff_EDI + 0x29);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  unaff_ESI[0x30] = *(undefined1 *)(unaff_EDI + 0x30);
  *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(unaff_EDI + 0x34);
  return;
}

