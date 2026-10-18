// FUN_006a73c0 @ 006a73c0 body=[[006a73c0, 006a7414]]


void FUN_006a73c0(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  *(undefined1 *)((int)unaff_ESI + 0x12) = 1;
  unaff_ESI[1] = 0x18d;
  *unaff_ESI = CMessageType::vftable;
  unaff_ESI[2] = 5;
  unaff_ESI[3] = 0x100;
  *(undefined2 *)(unaff_ESI + 4) = 0;
  unaff_ESI[10] = 0xf;
  unaff_ESI[9] = 0;
  *(undefined1 *)(unaff_ESI + 5) = 0;
  FUN_00408ed0(param_1,0,0xffffffff);
  unaff_ESI[0xc] = 0;
  *(undefined1 *)(unaff_ESI + 0xd) = 0;
  unaff_ESI[0xe] = 0;
  return;
}

