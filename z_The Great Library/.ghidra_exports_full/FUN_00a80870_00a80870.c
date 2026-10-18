// FUN_00a80870 @ 00a80870 body=[[00a80870, 00a808bf]]


void FUN_00a80870(void)

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
  *(undefined4 *)(unaff_ESI + 0x28) = *(undefined4 *)(unaff_EDI + 0x28);
  *(undefined4 *)(unaff_ESI + 0x2c) = *(undefined4 *)(unaff_EDI + 0x2c);
  *(undefined4 *)(unaff_ESI + 0x30) = *(undefined4 *)(unaff_EDI + 0x30);
  *(undefined4 *)(unaff_ESI + 0x34) = *(undefined4 *)(unaff_EDI + 0x34);
  *(undefined4 *)(unaff_ESI + 0x38) = *(undefined4 *)(unaff_EDI + 0x38);
  return;
}

