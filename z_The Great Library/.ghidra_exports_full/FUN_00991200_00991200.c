// FUN_00991200 @ 00991200 body=[[00991200, 0099126e] [00991272, 0099128f]]


void FUN_00991200(uint param_1)

{
  void *_Dst;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((int)DAT_0131c8e4 - (int)DAT_0131c8dc >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,DAT_0131c8dc,((int)DAT_0131c8e0 - (int)DAT_0131c8dc >> 2) * 4);
    if (DAT_0131c8dc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0131c8dc);
    }
    DAT_0131c8e0 = (void *)((int)_Dst + ((int)DAT_0131c8e0 - (int)DAT_0131c8dc >> 2) * 4);
    DAT_0131c8e4 = (void *)((int)_Dst + param_1 * 4);
    DAT_0131c8dc = _Dst;
  }
  return;
}

