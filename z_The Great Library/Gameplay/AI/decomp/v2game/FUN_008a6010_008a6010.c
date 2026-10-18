// FUN_008a6010 @ 008a6010 body=[[008a6010, 008a603f]]


void FUN_008a6010(int param_1)

{
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00408ed0(param_1 + 0xdc,0,0xffffffff);
  return;
}

