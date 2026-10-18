// FUN_00b3522c @ 00b3522c body=[[00b3522c, 00b35266] [00b35271, 00b3527a]]


void FUN_00b3522c(void)

{
  ushort in_FPUControlWord;
  
  if ((DAT_013f3ab8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00b35db0();
    return;
  }
  __cintrindisp1();
  return;
}

