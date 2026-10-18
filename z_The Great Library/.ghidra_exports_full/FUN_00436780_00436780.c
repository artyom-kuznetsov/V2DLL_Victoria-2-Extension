// FUN_00436780 @ 00436780 body=[[00436780, 004367b5]]


void FUN_00436780(void)

{
  int in_EAX;
  int in_EDX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EDX + 0x84 + in_EAX * 0x1c,0,0xffffffff);
  return;
}

