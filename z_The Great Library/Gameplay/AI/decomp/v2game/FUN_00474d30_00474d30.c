// FUN_00474d30 @ 00474d30 body=[[00474d30, 00474d9e] [00474da2, 00474dbf]]


void FUN_00474d30(uint param_1)

{
  void *_Dst;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((int)DAT_0125b5d8 - (int)DAT_0125b5d0 >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,DAT_0125b5d0,((int)DAT_0125b5d4 - (int)DAT_0125b5d0 >> 2) * 4);
    if (DAT_0125b5d0 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0125b5d0);
    }
    DAT_0125b5d4 = (void *)((int)_Dst + ((int)DAT_0125b5d4 - (int)DAT_0125b5d0 >> 2) * 4);
    DAT_0125b5d8 = (void *)((int)_Dst + param_1 * 4);
    DAT_0125b5d0 = _Dst;
  }
  return;
}

