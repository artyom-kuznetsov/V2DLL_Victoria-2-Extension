// FUN_00808f20 @ 00808f20 body=[[00808f20, 00808f7b] [00808f7f, 00808f95]]


void FUN_00808f20(uint param_1)

{
  int iVar1;
  void *_Dst;
  int *unaff_ESI;
  
  if (0x1fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(unaff_ESI[2] - *unaff_ESI >> 3) < param_1) {
    _Dst = (void *)FUN_00810880();
    FID_conflict__memcpy(_Dst,(void *)*unaff_ESI,(unaff_ESI[1] - *unaff_ESI >> 3) * 8);
    iVar1 = *unaff_ESI;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *unaff_ESI = (int)_Dst;
    unaff_ESI[2] = (int)((int)_Dst + param_1 * 8);
    unaff_ESI[1] = (int)((int)_Dst + (unaff_ESI[1] - iVar1 >> 3) * 8);
  }
  return;
}

