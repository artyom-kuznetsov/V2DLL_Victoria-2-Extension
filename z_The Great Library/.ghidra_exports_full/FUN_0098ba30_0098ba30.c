// FUN_0098ba30 @ 0098ba30 body=[[0098ba30, 0098ba69]]


void FUN_0098ba30(void)

{
  void *_Dst;
  int in_ECX;
  
  _Dst = *(void **)(in_ECX + 0x124);
  if (_Dst != *(void **)(in_ECX + 0x128)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x128),0);
    *(void **)(in_ECX + 0x128) = _Dst;
  }
  return;
}

