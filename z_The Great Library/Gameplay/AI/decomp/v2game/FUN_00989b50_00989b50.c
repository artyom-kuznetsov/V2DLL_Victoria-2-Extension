// FUN_00989b50 @ 00989b50 body=[[00989b50, 00989b79]]


void FUN_00989b50(undefined4 param_1)

{
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined1 *unaff_ESI;
  
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0xf;
  *unaff_ESI = 0;
  FUN_00408ed0(in_EDX,in_ECX,param_1);
  return;
}

