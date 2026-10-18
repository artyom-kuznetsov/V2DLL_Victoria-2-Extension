// FUN_00440070 @ 00440070 body=[[00440070, 004400c3]]


void FUN_00440070(void)

{
  void *_Dst;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x20) = 0;
  _Dst = *(void **)(in_ECX + 0x94);
  if (_Dst != *(void **)(in_ECX + 0x98)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x98),0);
    *(void **)(in_ECX + 0x98) = _Dst;
  }
  *(undefined1 *)(in_ECX + 0xb4) = 1;
  *(undefined4 *)(in_ECX + 0xac) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0xb0) = 0xffffffff;
  return;
}

