// FUN_009ee040 @ 009ee040 body=[[009ee040, 009ee0a2]]


void FUN_009ee040(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 4);
  *(undefined4 *)(unaff_ESI + 0xc) = *(undefined4 *)(unaff_EDI + 0xc);
  *(undefined8 *)(unaff_ESI + 0x10) = *(undefined8 *)(unaff_EDI + 0x10);
  *(undefined8 *)(unaff_ESI + 0x18) = *(undefined8 *)(unaff_EDI + 0x18);
  *(undefined1 *)(unaff_ESI + 0x20) = *(undefined1 *)(unaff_EDI + 0x20);
  FUN_00408ed0(unaff_EDI + 0x24,0,0xffffffff);
  FUN_00408ed0(unaff_EDI + 0x40,0,0xffffffff);
  *(undefined8 *)(unaff_ESI + 0x5c) = *(undefined8 *)(unaff_EDI + 0x5c);
  *(undefined8 *)(unaff_ESI + 100) = *(undefined8 *)(unaff_EDI + 100);
  *(undefined4 *)(unaff_ESI + 0x6c) = *(undefined4 *)(unaff_EDI + 0x6c);
  return;
}

