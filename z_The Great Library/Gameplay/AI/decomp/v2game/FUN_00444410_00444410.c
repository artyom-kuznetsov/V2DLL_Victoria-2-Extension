// FUN_00444410 @ 00444410 body=[[00444410, 0044444b] [00444452, 00444487]]


void FUN_00444410(int param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 4) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_004446c0();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  _Dst = *(void **)(param_1 + 4);
  if (_Dst != *(void **)(param_1 + 8)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 8),0);
    *(void **)(param_1 + 8) = _Dst;
  }
  return;
}

