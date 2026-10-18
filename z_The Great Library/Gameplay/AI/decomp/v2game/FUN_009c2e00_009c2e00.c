// FUN_009c2e00 @ 009c2e00 body=[[009c2e00, 009c2e5c]]


void FUN_009c2e00(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  
  *unaff_ESI = *unaff_EDI;
  unaff_ESI[6] = 0xf;
  unaff_ESI[5] = 0;
  *(undefined1 *)(unaff_ESI + 1) = 0;
  FUN_00408ed0(unaff_EDI + 1,0,0xffffffff);
  *(undefined1 *)(unaff_ESI + 8) = *(undefined1 *)(unaff_EDI + 8);
  *(undefined1 *)((int)unaff_ESI + 0x21) = *(undefined1 *)((int)unaff_EDI + 0x21);
  unaff_ESI[9] = unaff_EDI[9];
  unaff_ESI[10] = unaff_EDI[10];
  unaff_ESI[0xb] = unaff_EDI[0xb];
  unaff_ESI[0xc] = param_1;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 0xe) = 0;
  return;
}

