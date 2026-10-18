// FUN_004115d0 @ 004115d0 body=[[004115d0, 0041160a]]


void FUN_004115d0(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  FUN_00408ed0(unaff_EDI + 0x1c,0,0xffffffff);
  FUN_00408ed0(unaff_EDI + 0x38,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x54) = *(undefined4 *)(unaff_EDI + 0x54);
  *(undefined1 *)(unaff_ESI + 0x58) = *(undefined1 *)(unaff_EDI + 0x58);
  return;
}

