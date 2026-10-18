// FUN_00444510 @ 00444510 body=[[00444510, 00444540] [00444544, 00444576] [0044457d, 004445b3]]


void FUN_00444510(int param_1)

{
  undefined4 *puVar1;
  void *_Dst;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2;
  if (0 < iVar3) {
    do {
      puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + iVar2 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        if (0xf < (uint)puVar1[0x12]) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar1[0xd]);
        }
        puVar1[0x12] = 0xf;
        puVar1[0x11] = 0;
        *(undefined1 *)(puVar1 + 0xd) = 0;
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
  _Dst = *(void **)(param_1 + 0x24);
  if (_Dst != *(void **)(param_1 + 0x28)) {
    FID_conflict__memcpy(_Dst,*(void **)(param_1 + 0x28),0);
    *(void **)(param_1 + 0x28) = _Dst;
  }
  return;
}

