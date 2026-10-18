// FUN_007ed470 @ 007ed470 body=[[007ed470, 007ed4cd]]


void FUN_007ed470(void)

{
  void *_Dst;
  int in_EAX;
  
  FUN_00804b90(*(undefined4 *)(in_EAX + 0x1c),*(undefined4 *)(in_EAX + 0x20),0);
  _Dst = *(void **)(in_EAX + 0x1c);
  if (_Dst != *(void **)(in_EAX + 0x20)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_EAX + 0x20),0);
    *(void **)(in_EAX + 0x20) = _Dst;
  }
  FUN_0068f390();
  return;
}

