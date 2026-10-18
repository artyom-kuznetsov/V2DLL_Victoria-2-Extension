// FUN_0098cb50 @ 0098cb50 body=[[0098cb50, 0098cba0]]


void FUN_0098cb50(void)

{
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  
  FUN_007d9800(unaff_ESI,unaff_EDI);
  unaff_ESI[0x50] = 0;
  unaff_ESI[0x51] = 0;
  *unaff_ESI = &PTR_FUN_00e379e8;
  unaff_ESI[0x4f] = unaff_EDI;
  unaff_ESI[0x52] = 0;
  unaff_ESI[0x53] = 0;
  unaff_ESI[0x54] = 0;
  unaff_ESI[0x56] = 0;
  *(undefined1 *)(unaff_ESI + 0x59) = 0;
  unaff_ESI[0x57] = 0xffffffff;
  unaff_ESI[0x58] = 0xffffffff;
  return;
}

