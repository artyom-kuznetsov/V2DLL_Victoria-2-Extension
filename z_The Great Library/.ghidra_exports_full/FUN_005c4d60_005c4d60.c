// FUN_005c4d60 @ 005c4d60 body=[[005c4d60, 005c4dce] [005c4dd2, 005c4def]]


void FUN_005c4d60(uint param_1)

{
  void *_Dst;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((int)DAT_0125fe18 - (int)DAT_0125fe10 >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,DAT_0125fe10,((int)DAT_0125fe14 - (int)DAT_0125fe10 >> 2) * 4);
    if (DAT_0125fe10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0125fe10);
    }
    DAT_0125fe14 = (void *)((int)_Dst + ((int)DAT_0125fe14 - (int)DAT_0125fe10 >> 2) * 4);
    DAT_0125fe18 = (void *)((int)_Dst + param_1 * 4);
    DAT_0125fe10 = _Dst;
  }
  return;
}

