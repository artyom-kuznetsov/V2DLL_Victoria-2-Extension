// FUN_00456520 @ 00456520 body=[[00456520, 0045655c]]


void FUN_00456520(void)

{
  void *_Dst;
  int in_ECX;
  
  _Dst = *(void **)(in_ECX + 0x18);
  if (_Dst != *(void **)(in_ECX + 0x1c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x1c),0);
    *(void **)(in_ECX + 0x1c) = _Dst;
  }
  *(undefined2 *)(in_ECX + 0x28) = 0x101;
  FUN_004567a0();
  return;
}

