// FUN_00705300 @ 00705300 body=[[00705300, 00705437] [0070543b, 0070544d]]


void FUN_00705300(uint param_1)

{
  size_t sVar1;
  int iVar2;
  undefined4 *_Dst;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  iVar2 = param_1;
  uVar7 = *(uint *)(param_1 + 8);
  param_1 = 1;
  if (uVar7 == 0xfffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("deque<T> too long");
  }
  uVar4 = uVar7 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  else if (uVar4 < 2) goto LAB_0070534d;
  if (uVar7 <= 0xfffffff - uVar4) {
    param_1 = uVar4;
  }
LAB_0070534d:
  uVar7 = *(uint *)(iVar2 + 0xc) >> 2;
  _Dst = (undefined4 *)FUN_007055a0();
  iVar6 = uVar7 * 4;
  pvVar3 = (void *)(iVar6 + *(int *)(iVar2 + 4));
  sVar1 = ((*(int *)(iVar2 + 8) * 4 - (int)pvVar3) + *(int *)(iVar2 + 4) >> 2) * 4;
  pvVar3 = FID_conflict__memcpy(_Dst + uVar7,pvVar3,sVar1);
  pvVar3 = (void *)((int)pvVar3 + sVar1);
  if (param_1 < uVar7) {
    FID_conflict__memcpy(pvVar3,*(void **)(iVar2 + 4),((int)(param_1 * 4) >> 2) * 4);
    pvVar3 = (void *)(param_1 * 4 + *(int *)(iVar2 + 4));
    sVar1 = ((iVar6 - (int)pvVar3) + *(int *)(iVar2 + 4) >> 2) * 4;
    pvVar3 = FID_conflict__memcpy(_Dst,pvVar3,sVar1);
    puVar8 = (undefined4 *)(sVar1 + (int)pvVar3);
    uVar7 = param_1;
  }
  else {
    sVar1 = (iVar6 >> 2) * 4;
    pvVar3 = FID_conflict__memcpy(pvVar3,*(void **)(iVar2 + 4),sVar1);
    puVar5 = (undefined4 *)((int)pvVar3 + sVar1);
    iVar6 = param_1 - uVar7;
    puVar8 = _Dst;
    if (iVar6 != 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (uVar7 != 0) {
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
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

