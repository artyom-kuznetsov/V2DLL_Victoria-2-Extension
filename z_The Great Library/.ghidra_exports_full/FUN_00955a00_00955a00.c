// FUN_00955a00 @ 00955a00 body=[[00955a00, 00955ade]]


void FUN_00955a00(void)

{
  int unaff_ESI;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = *(undefined4 *)(unaff_EDI + 0x6c);
  *(undefined4 *)(unaff_ESI + 0x70) = *(undefined4 *)(unaff_EDI + 0x70);
  *(undefined4 *)(unaff_ESI + 0x78) = *(undefined4 *)(unaff_EDI + 0x78);
  FUN_0043a750(unaff_EDI + 0x7c);
  FUN_009beeb0(unaff_EDI + 0x8c);
  *(undefined4 *)(unaff_ESI + 0xa0) = *(undefined4 *)(unaff_EDI + 0xa0);
  FUN_0043a750(unaff_EDI + 0xa4);
  FUN_009beeb0(unaff_EDI + 0xb4);
  *(undefined4 *)(unaff_ESI + 0x118) = 0;
  *(undefined4 *)(unaff_ESI + 0x11c) = 0;
  *(undefined4 *)(unaff_ESI + 0x120) = 0;
  *(undefined4 *)(unaff_ESI + 0x124) = 0;
  *(undefined4 *)(unaff_ESI + 0x128) = *(undefined4 *)(unaff_EDI + 0x128);
  *(undefined4 *)(unaff_ESI + 300) = *(undefined4 *)(unaff_EDI + 300);
  *(undefined4 *)(unaff_ESI + 0x274) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c8) = 0;
  *(undefined4 *)(unaff_ESI + 0x1cc) = 0;
  *(undefined4 *)(unaff_ESI + 0x134) = 0;
  *(undefined4 *)(unaff_ESI + 0x130) = 0x8000;
  *(undefined4 *)(unaff_ESI + 0x13c) = 0;
  *(undefined4 *)(unaff_ESI + 0x138) = 0x8000;
  *(undefined4 *)(unaff_ESI + 0x140) = 0;
  *(undefined4 *)(unaff_ESI + 0x144) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined1 *)(unaff_ESI + 0x38) = 0;
  return;
}

