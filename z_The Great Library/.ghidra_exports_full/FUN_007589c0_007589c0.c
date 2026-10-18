// FUN_007589c0 @ 007589c0 body=[[007589c0, 00758a56]]


void FUN_007589c0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 4);
  FUN_00408ed0(unaff_EDI + 8,0,0xffffffff);
  FUN_00408ed0(unaff_EDI + 0x24,0,0xffffffff);
  FUN_00408ed0(unaff_EDI + 0x40,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x5c) = *(undefined4 *)(unaff_EDI + 0x5c);
  *(undefined4 *)(unaff_ESI + 0x60) = *(undefined4 *)(unaff_EDI + 0x60);
  *(undefined4 *)(unaff_ESI + 100) = *(undefined4 *)(unaff_EDI + 100);
  *(undefined4 *)(unaff_ESI + 0x68) = *(undefined4 *)(unaff_EDI + 0x68);
  *(undefined4 *)(unaff_ESI + 0x6c) = *(undefined4 *)(unaff_EDI + 0x6c);
  *(undefined4 *)(unaff_ESI + 0x74) = *(undefined4 *)(unaff_EDI + 0x74);
  *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(unaff_EDI + 0x78);
  *(undefined4 *)(unaff_ESI + 0x7c) = *(undefined4 *)(unaff_EDI + 0x7c);
  *(undefined4 *)(unaff_ESI + 0x80) = *(undefined4 *)(unaff_EDI + 0x80);
  FUN_00408ed0(unaff_EDI + 0x84,0,0xffffffff);
  *(undefined1 *)(unaff_ESI + 0xa0) = *(undefined1 *)(unaff_EDI + 0xa0);
  return;
}

