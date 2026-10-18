// FUN_00a6b1a0 @ 00a6b1a0 body=[[00a6b1a0, 00a6b20e] [00a6b212, 00a6b22f]]


void FUN_00a6b1a0(uint param_1)

{
  void *_Dst;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((int)DAT_013f05c0 - (int)DAT_013f05b8 >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,DAT_013f05b8,((int)DAT_013f05bc - (int)DAT_013f05b8 >> 2) * 4);
    if (DAT_013f05b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_013f05b8);
    }
    DAT_013f05bc = (void *)((int)_Dst + ((int)DAT_013f05bc - (int)DAT_013f05b8 >> 2) * 4);
    DAT_013f05c0 = (void *)((int)_Dst + param_1 * 4);
    DAT_013f05b8 = _Dst;
  }
  return;
}

