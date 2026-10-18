// FUN_004c8ee0 @ 004c8ee0 body=[[004c8ee0, 004c8fcf] [004c8fd3, 004c90c9] [004c90d0, 004c90e8]]


void FUN_004c8ee0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  size_t _Size;
  int *piVar2;
  uint in_EAX;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *_Src;
  
  piVar2 = param_1;
  if (in_EAX != 0) {
    pvVar5 = (void *)param_1[1];
    iVar3 = (int)pvVar5 - *param_1 >> 2;
    if (0x3fffffffU - iVar3 < in_EAX) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar7 = iVar3 + in_EAX;
    uVar4 = param_1[2] - *param_1 >> 2;
    if (uVar4 < uVar7) {
      if (0x3fffffff - (uVar4 >> 1) < uVar4) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)(uVar4 + (uVar4 >> 1));
      }
      if (param_1 < uVar7) {
        param_1 = (int *)uVar7;
      }
      pvVar5 = (void *)FUN_007055a0();
      iVar3 = (int)param_2 - *piVar2 >> 2;
      puVar8 = (undefined4 *)((int)pvVar5 + iVar3 * 4);
      for (uVar7 = in_EAX; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *param_3;
        puVar8 = puVar8 + 1;
      }
      FID_conflict__memcpy(pvVar5,(void *)*piVar2,((int)param_2 - *piVar2 >> 2) * 4);
      FID_conflict__memcpy
                ((void *)((int)pvVar5 + (iVar3 + in_EAX) * 4),param_2,
                 (piVar2[1] - (int)param_2 >> 2) * 4);
      iVar3 = *piVar2;
      if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar3);
      }
      *piVar2 = (int)pvVar5;
      piVar2[2] = (int)((int)pvVar5 + (int)param_1 * 4);
      piVar2[1] = (int)((int)pvVar5 + (in_EAX + (piVar2[1] - iVar3 >> 2)) * 4);
      return;
    }
    uVar1 = *param_3;
    uVar7 = (int)pvVar5 - (int)param_2 >> 2;
    if (uVar7 < in_EAX) {
      FID_conflict__memcpy(param_2 + in_EAX,param_2,uVar7 * 4);
      puVar8 = (undefined4 *)param_1[1];
      iVar3 = in_EAX - ((int)puVar8 - (int)param_2 >> 2);
      if (iVar3 != 0) {
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        }
      }
      param_1[1] = param_1[1] + in_EAX * 4;
      puVar8 = (undefined4 *)(param_1[1] + in_EAX * -4);
      if (param_2 != puVar8) {
        do {
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        } while (param_2 != puVar8);
        return;
      }
    }
    else {
      _Src = (void *)((int)pvVar5 + in_EAX * -4);
      _Size = ((int)pvVar5 - (int)_Src >> 2) * 4;
      pvVar6 = FID_conflict__memcpy(pvVar5,_Src,_Size);
      param_1[1] = (int)((int)pvVar6 + _Size);
      iVar3 = (int)_Src - (int)param_2 >> 2;
      FID_conflict__memcpy((void *)((int)pvVar5 + iVar3 * -4),param_2,iVar3 * 4);
      puVar8 = param_2;
      if (param_2 != param_2 + in_EAX) {
        do {
          *puVar8 = uVar1;
          puVar8 = puVar8 + 1;
        } while (puVar8 != param_2 + in_EAX);
      }
    }
  }
  return;
}

