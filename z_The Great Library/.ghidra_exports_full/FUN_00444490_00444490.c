// FUN_00444490 @ 00444490 body=[[00444490, 004444cb] [004444d2, 00444507]]


void FUN_00444490(int param_1)

{
  int iVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (0 < iVar3) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
      if (iVar1 != 0) {
        FUN_00444740();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  _Dst = *(void **)(param_1 + 0x14);
  if (_Dst != *(void **)(param_1 + 0x18)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x18),0);
    *(void **)(param_1 + 0x18) = _Dst;
  }
  return;
}

