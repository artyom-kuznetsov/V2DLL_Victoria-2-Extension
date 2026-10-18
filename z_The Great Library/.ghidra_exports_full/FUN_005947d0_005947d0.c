// FUN_005947d0 @ 005947d0 body=[[005947d0, 005947f5]]


void FUN_005947d0(void)

{
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(unaff_EDI,0,0xffffffff);
  *(undefined4 *)(unaff_ESI + 0x1c) = *(undefined4 *)(unaff_EDI + 0x1c);
  return;
}

