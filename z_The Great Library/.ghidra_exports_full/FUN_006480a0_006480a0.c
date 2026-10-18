// FUN_006480a0 @ 006480a0 body=[[006480a0, 006480de]]


void FUN_006480a0(int param_1)

{
  void *_Dst;
  
  *(undefined4 *)(param_1 + 0x74) = 0;
  _Dst = *(void **)(param_1 + 0x78);
  if (_Dst != *(void **)(param_1 + 0x7c)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x7c),0);
    *(void **)(param_1 + 0x7c) = _Dst;
  }
  return;
}

