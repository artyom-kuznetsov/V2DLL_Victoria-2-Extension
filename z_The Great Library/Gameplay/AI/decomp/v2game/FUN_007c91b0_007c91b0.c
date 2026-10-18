// FUN_007c91b0 @ 007c91b0 body=[[007c91b0, 007c920a]]


void FUN_007c91b0(void)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[1] = unaff_EDI[1];
  unaff_ESI[2] = unaff_EDI[2];
  unaff_ESI[8] = 0xf;
  unaff_ESI[7] = 0;
  *(undefined1 *)(unaff_ESI + 3) = 0;
  FUN_00408ed0(unaff_EDI + 3,0,0xffffffff);
  unaff_ESI[0xb] = unaff_EDI[0xb];
  unaff_ESI[10] = CColor::vftable;
  *(undefined8 *)(unaff_ESI + 0xc) = *(undefined8 *)(unaff_EDI + 0xc);
  *(undefined8 *)(unaff_ESI + 0xe) = *(undefined8 *)(unaff_EDI + 0xe);
  *(undefined1 *)(unaff_ESI + 0x10) = *(undefined1 *)(unaff_EDI + 0x10);
  return;
}

