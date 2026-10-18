// FUN_00456570 @ 00456570 body=[[00456570, 004565a0]]


void FUN_00456570(void)

{
  void *_Dst;
  int in_ECX;
  
  _Dst = *(void **)(in_ECX + 0x18);
  if (_Dst != *(void **)(in_ECX + 0x1c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x1c),0);
    *(void **)(in_ECX + 0x1c) = _Dst;
  }
  return;
}

