// FUN_00a4fe30 @ 00a4fe30 body=[[00a4fe30, 00a4fe97]]


void FUN_00a4fe30(void)

{
  void *_Dst;
  int in_ECX;
  
  FUN_00a513b0();
  _Dst = *(void **)(in_ECX + 0xe4);
  if (_Dst != *(void **)(in_ECX + 0xe8)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0xe8),0);
    *(void **)(in_ECX + 0xe8) = _Dst;
  }
  (**(code **)(**(int **)(in_ECX + 0xe0) + 8))(*(int **)(in_ECX + 0xe0));
  *(undefined4 *)(in_ECX + 0xe0) = 0;
  *(undefined1 *)(in_ECX + 0x128) = 0;
  return;
}

