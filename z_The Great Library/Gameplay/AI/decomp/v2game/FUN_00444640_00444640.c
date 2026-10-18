// FUN_00444640 @ 00444640 body=[[00444640, 00444682] [00444689, 004446bf]]


void FUN_00444640(int param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
  if (0 < iVar3) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x44) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = CMapIcon::vftable;
        if ((int *)puVar1[4] != (int *)0x0) {
          (**(code **)(*(int *)puVar1[4] + 0x50))();
          puVar1[4] = 0;
        }
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  _Dst = *(void **)(param_1 + 0x44);
  if (_Dst != *(void **)(param_1 + 0x48)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x48),0);
    *(void **)(param_1 + 0x48) = _Dst;
  }
  return;
}

