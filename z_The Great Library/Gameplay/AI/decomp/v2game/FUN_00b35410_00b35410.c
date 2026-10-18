// FUN_00b35410 @ 00b35410 body=[[00b35410, 00b3545e]]


void FUN_00b35410(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_013f3ab8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00b362f0();
    return;
  }
  FUN_00b32ad8((double)in_ST0);
  FUN_00b35468();
  return;
}

