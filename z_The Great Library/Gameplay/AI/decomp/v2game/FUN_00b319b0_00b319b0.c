// FUN_00b319b0 @ 00b319b0 body=[[00b319b0, 00b31a03]]


void FUN_00b319b0(void)

{
  ushort in_FPUControlWord;
  float10 in_ST0;
  float10 in_ST1;
  
  if ((DAT_013f3ab8 != 0) && ((MXCSR & 0x7f80) == 0x1f80 && (in_FPUControlWord & 0x7f) == 0x7f)) {
    FUN_00b32f80();
    return;
  }
  FUN_00b31a0d((double)in_ST1,(double)in_ST0);
  return;
}

