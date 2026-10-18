// FUN_00b352e0 @ 00b352e0 body=[[00b352e0, 00b3532e]]


void FUN_00b352e0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  
  if ((DAT_013f3ab8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00b36120();
    return;
  }
  FUN_00b32ad8((double)in_ST0);
  FUN_00b35338();
  return;
}

