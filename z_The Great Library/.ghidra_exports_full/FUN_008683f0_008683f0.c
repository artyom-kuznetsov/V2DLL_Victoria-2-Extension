// FUN_008683f0 @ 008683f0 body=[[008683f0, 00868520] [00868524, 00868534]]


void FUN_008683f0(uint param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 *_Dst;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  iVar2 = param_1;
  uVar5 = *(uint *)(param_1 + 8);
  param_1 = 1;
  if (uVar5 == 0x9249249) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("deque<T> too long");
  }
  uVar4 = uVar5 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  else if (uVar4 < 2) goto LAB_00868440;
  if (uVar5 <= 0x9249249 - uVar4) {
    param_1 = uVar4;
  }
LAB_00868440:
  uVar5 = *(uint *)(iVar2 + 0xc);
  _Dst = (undefined4 *)FUN_007055a0();
  iVar7 = uVar5 * 4;
  pvVar3 = (void *)(iVar7 + *(int *)(iVar2 + 4));
  sVar1 = ((*(int *)(iVar2 + 8) * 4 - (int)pvVar3) + *(int *)(iVar2 + 4) >> 2) * 4;
  pvVar3 = FID_conflict__memcpy(_Dst + uVar5,pvVar3,sVar1);
  pvVar3 = (void *)((int)pvVar3 + sVar1);
  if (param_1 < uVar5) {
    FID_conflict__memcpy(pvVar3,*(void **)(iVar2 + 4),((int)(param_1 * 4) >> 2) * 4);
    pvVar3 = (void *)(*(int *)(iVar2 + 4) + param_1 * 4);
    sVar1 = ((iVar7 - (int)pvVar3) + *(int *)(iVar2 + 4) >> 2) * 4;
    pvVar3 = FID_conflict__memcpy(_Dst,pvVar3,sVar1);
    puVar8 = (undefined4 *)(sVar1 + (int)pvVar3);
    uVar5 = param_1;
  }
  else {
    sVar1 = (iVar7 >> 2) * 4;
    pvVar3 = FID_conflict__memcpy(pvVar3,*(void **)(iVar2 + 4),sVar1);
    puVar6 = (undefined4 *)((int)pvVar3 + sVar1);
    iVar7 = param_1 - uVar5;
    puVar8 = _Dst;
    if (iVar7 != 0) {
      for (; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
  }
  if (uVar5 != 0) {
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
  }
  if (*(int *)(iVar2 + 4) == 0) {
    *(int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_1;
    *(undefined4 **)(iVar2 + 4) = _Dst;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*(int *)(iVar2 + 4));
}

