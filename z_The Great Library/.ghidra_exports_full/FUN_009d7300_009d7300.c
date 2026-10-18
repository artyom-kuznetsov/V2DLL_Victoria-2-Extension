// FUN_009d7300 @ 009d7300 body=[[009d7300, 009d735b]]


void FUN_009d7300(void)

{
  void *_Dst;
  void *_Src;
  uint in_EAX;
  size_t _Size;
  uint uVar1;
  int *unaff_ESI;
  
  _Src = (void *)unaff_ESI[1];
  uVar1 = (int)_Src - *unaff_ESI;
  if (in_EAX < uVar1) {
    _Dst = (void *)(*unaff_ESI + in_EAX);
    if (_Dst != _Src) {
      FID_conflict__memcpy(_Dst,_Src,0);
      unaff_ESI[1] = (int)_Dst;
    }
  }
  else if (uVar1 < in_EAX) {
    FUN_009d73c0();
    _Size = (*unaff_ESI - unaff_ESI[1]) + in_EAX;
    if (_Size != 0) {
      _memset((void *)unaff_ESI[1],0,_Size);
    }
    unaff_ESI[1] = *unaff_ESI + in_EAX;
    return;
  }
  return;
}

