// FUN_006a1360 @ 006a1360 body=[[006a1360, 006a142d]]


void FUN_006a1360(void)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  int iVar6;
  int local_c;
  int local_8;
  
  puVar1 = (uint *)(in_ECX + 0x68);
  _Dst = (void *)*puVar1;
  if (_Dst != *(void **)(in_ECX + 0x6c)) {
    FID_conflict__memcpy(_Dst,*(void **)(in_ECX + 0x6c),0);
    *(void **)(in_ECX + 0x6c) = _Dst;
  }
  piVar5 = (int *)(DAT_012587f0 + 0xc);
  iVar6 = *(int *)(DAT_012587f0 + 0x10) - *(int *)(DAT_012587f0 + 0xc) >> 2;
  local_c = 0;
  if (0 < iVar6) {
    do {
      iVar2 = *(int *)(*piVar5 + local_c * 4);
      if ((iVar2 != DAT_012587f0 + 0x48) && (iVar2 != 0)) {
        piVar3 = *(int **)(in_ECX + 0x6c);
        local_8 = iVar2;
        if ((&local_8 < piVar3) && (piVar4 = (int *)*puVar1, piVar4 <= &local_8)) {
          if (piVar3 == *(int **)(in_ECX + 0x70)) {
            FUN_00a513f0();
          }
          if (*(undefined4 **)(in_ECX + 0x6c) != (undefined4 *)0x0) {
            **(undefined4 **)(in_ECX + 0x6c) =
                 *(undefined4 *)(*puVar1 + ((int)&local_8 - (int)piVar4 >> 2) * 4);
          }
        }
        else {
          if (piVar3 == *(int **)(in_ECX + 0x70)) {
            FUN_00a513f0();
          }
          if (*(int **)(in_ECX + 0x6c) != (int *)0x0) {
            **(int **)(in_ECX + 0x6c) = iVar2;
          }
        }
        *(int *)(in_ECX + 0x6c) = *(int *)(in_ECX + 0x6c) + 4;
      }
      local_c = local_c + 1;
    } while (local_c < iVar6);
  }
  return;
}

