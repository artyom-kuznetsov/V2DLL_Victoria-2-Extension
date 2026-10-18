// FUN_00a56280 @ 00a56280 body=[[00a56280, 00a563d2]]


void FUN_00a56280(int param_1)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  int unaff_EDI;
  
  FUN_009d9070(unaff_ESI,
               CONCAT22((short)*(undefined4 *)(param_1 + 0x6b9c0),
                        (short)*(undefined4 *)(param_1 + 0x6b9bc)));
  unaff_ESI[0x54] = 0;
  uVar1 = DAT_00f092fc;
  unaff_ESI[0x56] = param_1;
  *unaff_ESI = &PTR_FUN_00e41ab8;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x55] = unaff_EDI;
  unaff_ESI[0x59] = uVar1;
  unaff_ESI[0x5a] = uVar1;
  unaff_ESI[0x5b] = uVar1;
  unaff_ESI[0x5c] = uVar1;
  unaff_ESI[0x58] = 0x18d;
  unaff_ESI[0x57] = CColor::vftable;
  *(undefined1 *)(unaff_ESI + 0x5d) = 1;
  *(undefined1 *)(unaff_ESI + 100) = 1;
  unaff_ESI[0x5f] = 0x18d;
  unaff_ESI[0x5e] = CColor::vftable;
  unaff_ESI[0x60] = uVar1;
  unaff_ESI[0x61] = uVar1;
  unaff_ESI[0x62] = uVar1;
  unaff_ESI[99] = uVar1;
  unaff_ESI[0x58] = *(undefined4 *)(unaff_EDI + 0x7c);
  *(undefined8 *)(unaff_ESI + 0x59) = *(undefined8 *)(unaff_EDI + 0x80);
  *(undefined8 *)(unaff_ESI + 0x5b) = *(undefined8 *)(unaff_EDI + 0x88);
  *(undefined1 *)(unaff_ESI + 0x5d) = *(undefined1 *)(unaff_EDI + 0x90);
  unaff_ESI[0x5f] = *(undefined4 *)(unaff_EDI + 0x98);
  *(undefined8 *)(unaff_ESI + 0x60) = *(undefined8 *)(unaff_EDI + 0x9c);
  *(undefined8 *)(unaff_ESI + 0x62) = *(undefined8 *)(unaff_EDI + 0xa4);
  *(undefined1 *)(unaff_ESI + 100) = *(undefined1 *)(unaff_EDI + 0xac);
  return;
}

