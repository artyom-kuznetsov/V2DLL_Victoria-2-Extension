// FUN_004445c0 @ 004445c0 body=[[004445c0, 004445fb] [00444602, 00444637]]


void FUN_004445c0(int param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 2;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x34) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_004447a0();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  _Dst = *(void **)(param_1 + 0x34);
  if (_Dst != *(void **)(param_1 + 0x38)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x38),0);
    *(void **)(param_1 + 0x38) = _Dst;
  }
  return;
}

