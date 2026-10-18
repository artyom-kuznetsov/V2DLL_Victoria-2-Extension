// FUN_00401580 @ 00401580 body=[[00401580, 004015af]]


void FUN_00401580(int param_1)

{
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00408ed0(param_1 + 0x174,0,0xffffffff);
  return;
}

