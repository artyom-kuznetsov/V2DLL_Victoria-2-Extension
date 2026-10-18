// FUN_007abcc0 @ 007abcc0 body=[[007abcc0, 007abd61]]


char FUN_007abcc0(void)

{
  void *_Dst;
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined1 local_8 [4];
  
  FUN_007afcb0(in_ECX + 0xe8,local_8,*(undefined4 *)(in_ECX + 0xe8),*(undefined4 *)(in_ECX + 0xec));
  iVar2 = 0;
  iVar3 = *(int *)(in_ECX + 0xfc) - *(int *)(in_ECX + 0xf8) >> 2;
  if (0 < iVar3) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xf8) + iVar2 * 4) + 0x50))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  _Dst = *(void **)(in_ECX + 0xf8);
  if (_Dst != *(void **)(in_ECX + 0xfc)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0xfc),0);
    *(void **)(in_ECX + 0xfc) = _Dst;
  }
  cVar1 = FUN_007539f0();
  if (cVar1 != '\0') {
    FUN_007abda0(in_ECX);
  }
  return cVar1;
}

