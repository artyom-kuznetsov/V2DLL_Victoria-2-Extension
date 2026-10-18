// FUN_00a17000 @ 00a17000 body=[[00a17000, 00a1702d]]


void FUN_00a17000(int param_1)

{
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00408ed0(param_1 + 0x18,0,0xffffffff);
  return;
}

