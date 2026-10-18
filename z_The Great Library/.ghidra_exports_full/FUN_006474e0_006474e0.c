// FUN_006474e0 @ 006474e0 body=[[006474e0, 00647520]]


void FUN_006474e0(int param_1)

{
  void *_Dst;
  
  _Dst = *(void **)(param_1 + 0xcfc);
  if (_Dst != *(void **)(param_1 + 0xd00)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0xd00),0);
    *(void **)(param_1 + 0xd00) = _Dst;
  }
  return;
}

