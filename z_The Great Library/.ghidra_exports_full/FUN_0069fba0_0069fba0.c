// FUN_0069fba0 @ 0069fba0 body=[[0069fba0, 0069fc45]]


void FUN_0069fba0(void)

{
  void *_Dst;
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  
  _Dst = *(void **)(in_ECX + 0x68);
  if (_Dst != *(void **)(in_ECX + 0x6c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x6c),0);
    *(void **)(in_ECX + 0x6c) = _Dst;
  }
  iVar2 = 0;
  iVar3 = *(int *)(*(int *)(in_ECX + 0x4c) + 0xae0) - *(int *)(*(int *)(in_ECX + 0x4c) + 0xadc) >> 2
  ;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(in_ECX + 0x4c) + 0xadc) + iVar2 * 4);
      if (((0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU)) &&
          (*(int *)(iVar1 + 0x20) != 0)) &&
         ((*(char *)(iVar1 + 0x1c) != 'R' ||
          ((*(char *)(iVar1 + 0x1d) != 'E' || (*(char *)(iVar1 + 0x1e) != 'B')))))) {
        FUN_0068f390();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  return;
}

