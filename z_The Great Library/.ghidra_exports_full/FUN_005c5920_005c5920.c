// FUN_005c5920 @ 005c5920 body=[[005c5920, 005c5974] [005c5978, 005c598e]]


void FUN_005c5920(uint param_1)

{
  int iVar1;
  void *_Dst;
  int *unaff_ESI;
  
  if (0x7fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(unaff_ESI[2] - *unaff_ESI >> 1) < param_1) {
    _Dst = (void *)FUN_0098a700();
    FID_conflict__memcpy(_Dst,(void *)*unaff_ESI,(unaff_ESI[1] - *unaff_ESI >> 1) * 2);
    iVar1 = *unaff_ESI;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *unaff_ESI = (int)_Dst;
    unaff_ESI[2] = (int)((int)_Dst + param_1 * 2);
    unaff_ESI[1] = (int)((int)_Dst + (unaff_ESI[1] - iVar1 >> 1) * 2);
  }
  return;
}

