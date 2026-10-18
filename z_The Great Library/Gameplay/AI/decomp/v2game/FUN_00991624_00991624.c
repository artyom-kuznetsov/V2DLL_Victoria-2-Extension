// FUN_00991624 @ 00991624 body=[[00991624, 00991658]]


void FUN_00991624(void)

{
  undefined1 *unaff_EBX;
  int unaff_EBP;
  
  *(undefined4 *)(unaff_EBX + 0x14) = 0xf;
  *(undefined4 *)(unaff_EBX + 0x10) = 0;
  *unaff_EBX = 0;
  FUN_00409350(&DAT_00ded94d,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

