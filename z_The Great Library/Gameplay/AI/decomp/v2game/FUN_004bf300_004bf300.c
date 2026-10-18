// FUN_004bf300 @ 004bf300 body=[[004bf300, 004bf359] [004bf35d, 004bf373]]


void FUN_004bf300(uint param_1)

{
  int iVar1;
  void *_Dst;
  int *unaff_ESI;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(unaff_ESI[2] - *unaff_ESI >> 2) < param_1) {
    _Dst = (void *)FUN_007055a0();
    FID_conflict__memcpy(_Dst,(void *)*unaff_ESI,(unaff_ESI[1] - *unaff_ESI >> 2) * 4);
    iVar1 = *unaff_ESI;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *unaff_ESI = (int)_Dst;
    unaff_ESI[2] = (int)((int)_Dst + param_1 * 4);
    unaff_ESI[1] = (int)((int)_Dst + (unaff_ESI[1] - iVar1 >> 2) * 4);
  }
  return;
}

