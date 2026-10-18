// FUN_009be480 @ 009be480 body=[[009be480, 009be4ee] [009be4f2, 009be50f]]


void FUN_009be480(uint param_1)

{
  void *_Dst;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)((int)DAT_0131ca0c - (int)DAT_0131ca04 >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,DAT_0131ca04,((int)DAT_0131ca08 - (int)DAT_0131ca04 >> 2) * 4);
    if (DAT_0131ca04 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(DAT_0131ca04);
    }
    DAT_0131ca08 = (void *)((int)_Dst + ((int)DAT_0131ca08 - (int)DAT_0131ca04 >> 2) * 4);
    DAT_0131ca0c = (void *)((int)_Dst + param_1 * 4);
    DAT_0131ca04 = _Dst;
  }
  return;
}

