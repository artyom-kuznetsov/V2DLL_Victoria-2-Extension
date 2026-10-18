// FUN_00990880 @ 00990880 body=[[00990880, 009908f4]]


void FUN_00990880(void)

{
  int iVar1;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  
  if ((DAT_01258a64 == '\0') || ((DAT_0131c8d0 - DAT_0131c8cc) / 0x1c != DAT_01258a60)) {
    FUN_009906a0(0);
  }
  iVar1 = DAT_0131c8cc + unaff_EDI * 0x1c;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *unaff_ESI = 0;
  FUN_00408ed0(iVar1,0,0xffffffff);
  return;
}

