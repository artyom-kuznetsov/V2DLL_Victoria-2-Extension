// FUN_006a17e0 @ 006a17e0 body=[[006a17e0, 006a18a7] [006a18ab, 006a1975]]


void FUN_006a17e0(int *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  void *pvVar8;
  size_t sVar9;
  uint uVar10;
  
  piVar3 = param_1;
  if (param_3 != 0) {
    iVar2 = *param_1;
    pvVar5 = (void *)param_1[1];
    if ((iVar2 - (int)pvVar5) - 1U < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar10 = (int)pvVar5 + (param_3 - iVar2);
    uVar4 = param_1[2] - iVar2;
    if (uVar4 < uVar10) {
      if (-(uVar4 >> 1) - 1 < uVar4) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)(uVar4 + (uVar4 >> 1));
      }
      if (param_1 < uVar10) {
        param_1 = (int *)uVar10;
      }
      pvVar5 = (void *)FUN_00408fd0(param_1);
      puVar6 = (undefined1 *)(((int)param_2 - *piVar3) + (int)pvVar5);
      puVar7 = puVar6;
      for (uVar4 = param_3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar7 = *param_4;
        puVar7 = puVar7 + 1;
      }
      FID_conflict__memcpy(pvVar5,(void *)*piVar3,(int)param_2 - *piVar3);
      FID_conflict__memcpy(puVar6 + param_3,param_2,piVar3[1] - (int)param_2);
      iVar2 = *piVar3;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
      *piVar3 = (int)pvVar5;
      piVar3[2] = (int)param_1 + (int)pvVar5;
      piVar3[1] = (int)pvVar5 + param_3 + (piVar3[1] - iVar2);
      return;
    }
    if ((uint)((int)pvVar5 - (int)param_2) < param_3) {
      param_4 = (undefined1 *)CONCAT31(param_4._1_3_,*param_4);
      FID_conflict__memcpy(param_2 + param_3,param_2,(int)pvVar5 - (int)param_2);
      FUN_004d8710();
      param_1[1] = param_1[1] + param_3;
      if (param_2 != (undefined1 *)(param_1[1] - param_3)) {
        _memset(param_2,(int)param_4,(int)(param_1[1] - param_3) - (int)param_2);
        return;
      }
    }
    else {
      uVar1 = *param_4;
      sVar9 = (int)pvVar5 - (int)((int)pvVar5 - param_3);
      pvVar8 = FID_conflict__memcpy(pvVar5,(void *)((int)pvVar5 - param_3),sVar9);
      param_1[1] = (int)pvVar8 + sVar9;
      sVar9 = (int)pvVar5 + (-param_3 - (int)param_2);
      FID_conflict__memcpy((void *)((int)pvVar5 - sVar9),param_2,sVar9);
      puVar7 = param_2;
      if (param_2 != param_2 + param_3) {
        do {
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
        } while (puVar7 != param_2 + param_3);
      }
    }
  }
  return;
}

