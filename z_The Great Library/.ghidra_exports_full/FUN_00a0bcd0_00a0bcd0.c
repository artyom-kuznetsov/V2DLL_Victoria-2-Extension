// FUN_00a0bcd0 @ 00a0bcd0 body=[[00a0bcd0, 00a0bd41]]


void FUN_00a0bcd0(void)

{
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  unaff_ESI[1] = *(undefined4 *)(unaff_EDI + 4);
  *unaff_ESI = &PTR_FUN_00e3e544;
  unaff_ESI[7] = 0xf;
  unaff_ESI[6] = 0;
  *(undefined1 *)(unaff_ESI + 2) = 0;
  FUN_00408ed0(unaff_EDI + 8,0,0xffffffff);
  unaff_ESI[9] = *(undefined4 *)(unaff_EDI + 0x24);
  *(undefined1 *)(unaff_ESI + 10) = *(undefined1 *)(unaff_EDI + 0x28);
  unaff_ESI[0xb] = *(undefined4 *)(unaff_EDI + 0x2c);
  unaff_ESI[0xc] = *(undefined4 *)(unaff_EDI + 0x30);
  unaff_ESI[0xd] = *(undefined4 *)(unaff_EDI + 0x34);
  unaff_ESI[0xe] = *(undefined4 *)(unaff_EDI + 0x38);
  unaff_ESI[0xf] = *(undefined4 *)(unaff_EDI + 0x3c);
  unaff_ESI[0x10] = *(undefined4 *)(unaff_EDI + 0x40);
  unaff_ESI[0x11] = *(undefined4 *)(unaff_EDI + 0x44);
  unaff_ESI[0x12] = *(undefined4 *)(unaff_EDI + 0x48);
  unaff_ESI[0x13] = *(undefined4 *)(unaff_EDI + 0x4c);
  return;
}

