// FUN_00aa7ec0 @ 00aa7ec0 body=[[00aa7ec0, 00aa7f1f] [00aa7f23, 00aa7f3a]]


void FUN_00aa7ec0(uint param_1)

{
  int iVar1;
  void *_Dst;
  int *in_ECX;
  
  if (0x3fffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  if ((uint)(in_ECX[2] - *in_ECX >> 2) < param_1) {
    _Dst = (void *)FUN_00aa7570(param_1);
    FID_conflict__memcpy(_Dst,(void *)*in_ECX,(in_ECX[1] - *in_ECX >> 2) * 4);
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(iVar1);
    }
    *in_ECX = (int)_Dst;
    in_ECX[2] = (int)((int)_Dst + param_1 * 4);
    in_ECX[1] = (int)((int)_Dst + (in_ECX[1] - iVar1 >> 2) * 4);
  }
  return;
}

