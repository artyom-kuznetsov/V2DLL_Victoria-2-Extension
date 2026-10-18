// FUN_0044eee0 @ 0044eee0 body=[[0044eee0, 0044ef4e] [0044ef52, 0044ef6f]]


void FUN_0044eee0(uint param_1)

{
  void *_Dst;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((int)DAT_0125a5bc - (int)DAT_0125a5b4 >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,DAT_0125a5b4,((int)DAT_0125a5b8 - (int)DAT_0125a5b4 >> 2) * 4);
    if (DAT_0125a5b4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0125a5b4);
    }
    DAT_0125a5b8 = (void *)((int)_Dst + ((int)DAT_0125a5b8 - (int)DAT_0125a5b4 >> 2) * 4);
    DAT_0125a5bc = (void *)((int)_Dst + param_1 * 4);
    DAT_0125a5b4 = _Dst;
  }
  return;
}

