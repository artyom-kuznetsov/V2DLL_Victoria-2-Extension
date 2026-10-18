// FUN_006cac60 @ 006cac60 body=[[006cac60, 006cafe0] [006cafe4, 006cb00a]]


/* WARNING: Removing unreachable block (ram,0x006cac87) */
/* WARNING: Removing unreachable block (ram,0x006caced) */

void FUN_006cac60(uint param_1)

{
  undefined4 *_Dst;
  void *pvVar1;
  int in_ECX;
  int iVar2;
  uint local_a0;
  undefined4 *local_9c;
  uint local_70;
  undefined4 *local_6c;
  int local_60;
  undefined4 *local_5c;
  uint local_c;
  
  if (0xfffffffU - *(int *)(in_ECX + 8) < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("deque<T> too long");
  }
  local_c = *(uint *)(in_ECX + 8) >> 1;
  if (local_c < 8) {
    local_c = 8;
  }
  if ((param_1 < local_c) && (*(uint *)(in_ECX + 8) <= 0xfffffff - local_c)) {
    param_1 = local_c;
  }
  local_70 = *(uint *)(in_ECX + 0xc) >> 2;
  _Dst = (undefined4 *)_Allocate<>(*(int *)(in_ECX + 8) + param_1,0);
  pvVar1 = (void *)(*(int *)(in_ECX + 4) + local_70 * 4);
  iVar2 = (*(int *)(in_ECX + 4) + *(int *)(in_ECX + 8) * 4) - (int)pvVar1 >> 2;
  pvVar1 = FID_conflict__memcpy(_Dst + local_70,pvVar1,iVar2 << 2);
  pvVar1 = (void *)((int)pvVar1 + iVar2 * 4);
  if (param_1 < local_70) {
    FID_conflict__memcpy
              (pvVar1,*(void **)(in_ECX + 4),
               ((int)((*(int *)(in_ECX + 4) + param_1 * 4) - (int)*(void **)(in_ECX + 4)) >> 2) << 2
              );
    pvVar1 = (void *)(*(int *)(in_ECX + 4) + param_1 * 4);
    iVar2 = (int)((*(int *)(in_ECX + 4) + local_70 * 4) - (int)pvVar1) >> 2;
    pvVar1 = FID_conflict__memcpy(_Dst,pvVar1,iVar2 << 2);
    local_9c = (undefined4 *)((int)pvVar1 + iVar2 * 4);
    for (local_a0 = param_1; local_a0 != 0; local_a0 = local_a0 - 1) {
      *local_9c = 0;
      local_9c = local_9c + 1;
    }
  }
  else {
    iVar2 = (int)((*(int *)(in_ECX + 4) + local_70 * 4) - (int)*(void **)(in_ECX + 4)) >> 2;
    pvVar1 = FID_conflict__memcpy(pvVar1,*(void **)(in_ECX + 4),iVar2 << 2);
    local_5c = (undefined4 *)((int)pvVar1 + iVar2 * 4);
    for (local_60 = param_1 - local_70; local_6c = _Dst, local_60 != 0; local_60 = local_60 + -1) {
      *local_5c = 0;
      local_5c = local_5c + 1;
    }
    for (; local_70 != 0; local_70 = local_70 - 1) {
      *local_6c = 0;
      local_6c = local_6c + 1;
    }
  }
  if (*(int *)(in_ECX + 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 **)(in_ECX + 4) = _Dst;
  *(uint *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_1;
  return;
}

