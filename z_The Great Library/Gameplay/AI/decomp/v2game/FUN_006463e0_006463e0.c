// FUN_006463e0 @ 006463e0 body=[[006463e0, 006464bd] [006464c1, 006465aa]]


void FUN_006463e0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  void *_Src;
  undefined4 uVar2;
  size_t _Size;
  int *piVar3;
  undefined4 *in_EAX;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  
  piVar3 = param_1;
  pvVar6 = (void *)param_1[1];
  iVar4 = (int)pvVar6 - *param_1 >> 2;
  if (iVar4 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00aad3ad("vector<T> too long");
  }
  uVar1 = iVar4 + 1;
  uVar5 = param_1[2] - *param_1 >> 2;
  if (uVar1 <= uVar5) {
    if ((int)pvVar6 - (int)param_2 >> 2 == 0) {
      uVar2 = *in_EAX;
      FID_conflict__memcpy(param_2 + 1,param_2,0);
      FUN_004ec480();
      param_1[1] = param_1[1] + 4;
      iVar4 = param_1[1];
      if (param_2 != (undefined4 *)(iVar4 + -4)) {
        do {
          *param_2 = uVar2;
          param_2 = param_2 + 1;
        } while (param_2 != (undefined4 *)(iVar4 + -4));
        return;
      }
    }
    else {
      uVar2 = *in_EAX;
      _Src = (void *)((int)pvVar6 + -4);
      _Size = ((int)pvVar6 - (int)_Src >> 2) * 4;
      pvVar7 = FID_conflict__memcpy(pvVar6,_Src,_Size);
      param_1[1] = (int)((int)pvVar7 + _Size);
      iVar4 = (int)_Src - (int)param_2 >> 2;
      FID_conflict__memcpy((void *)((int)pvVar6 + iVar4 * -4),param_2,iVar4 * 4);
      puVar8 = param_2;
      if (param_2 != param_2 + 1) {
        do {
          *puVar8 = uVar2;
          puVar8 = puVar8 + 1;
        } while (puVar8 != param_2 + 1);
      }
    }
    return;
  }
  if (0x3fffffff - (uVar5 >> 1) < uVar5) {
    param_1 = (int *)0x0;
  }
  else {
    param_1 = (int *)(uVar5 + (uVar5 >> 1));
  }
  if (param_1 < uVar1) {
    param_1 = (int *)uVar1;
  }
  pvVar6 = (void *)FUN_007055a0();
  iVar4 = *piVar3;
  FUN_004ec480();
  FID_conflict__memcpy(pvVar6,(void *)*piVar3,((int)param_2 - *piVar3 >> 2) * 4);
  FID_conflict__memcpy
            ((void *)((int)pvVar6 + ((int)param_2 - iVar4 >> 2) * 4 + 4),param_2,
             (piVar3[1] - (int)param_2 >> 2) * 4);
  iVar4 = *piVar3;
  if (iVar4 == 0) {
    *piVar3 = (int)pvVar6;
    piVar3[2] = (int)((int)pvVar6 + (int)param_1 * 4);
    piVar3[1] = (int)pvVar6 + (piVar3[1] - iVar4 >> 2) * 4 + 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(iVar4);
}

