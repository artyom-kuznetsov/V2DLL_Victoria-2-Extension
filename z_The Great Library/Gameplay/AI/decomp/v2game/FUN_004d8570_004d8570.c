// FUN_004d8570 @ 004d8570 body=[[004d8570, 004d8634] [004d8638, 004d86ec] [004d86f0, 004d8705]]


void FUN_004d8570(int *param_1,undefined1 *param_2,uint param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  void *pvVar7;
  uint uVar8;
  size_t sVar9;
  uint uVar10;
  
  piVar3 = param_1;
  if (param_3 != 0) {
    iVar2 = *param_1;
    pvVar4 = (void *)param_1[1];
    if ((iVar2 - (int)pvVar4) - 1U < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00aad3ad("vector<T> too long");
    }
    uVar10 = (int)pvVar4 + (param_3 - iVar2);
    uVar8 = param_1[2] - iVar2;
    if (uVar8 < uVar10) {
      if (-(uVar8 >> 1) - 1 < uVar8) {
        param_1 = (int *)0x0;
      }
      else {
        param_1 = (int *)(uVar8 + (uVar8 >> 1));
      }
      if (param_1 < uVar10) {
        param_1 = (int *)uVar10;
      }
      pvVar4 = (void *)FUN_009d6a00();
      puVar5 = (undefined1 *)(((int)param_2 - *piVar3) + (int)pvVar4);
      puVar6 = puVar5;
      for (uVar8 = param_3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = *param_4;
        puVar6 = puVar6 + 1;
      }
      FID_conflict__memcpy(pvVar4,(void *)*piVar3,(int)param_2 - *piVar3);
      FID_conflict__memcpy(puVar5 + param_3,param_2,piVar3[1] - (int)param_2);
      iVar2 = *piVar3;
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(iVar2);
      }
      *piVar3 = (int)pvVar4;
      piVar3[2] = (int)param_1 + (int)pvVar4;
      piVar3[1] = (int)pvVar4 + param_3 + (piVar3[1] - iVar2);
      return;
    }
    if ((uint)((int)pvVar4 - (int)param_2) < param_3) {
      param_4 = (undefined1 *)CONCAT31(param_4._1_3_,*param_4);
      FID_conflict__memcpy(param_2 + param_3,param_2,(int)pvVar4 - (int)param_2);
      FUN_004d8710();
      param_1[1] = param_1[1] + param_3;
      if (param_2 != (undefined1 *)(param_1[1] - param_3)) {
        _memset(param_2,(int)param_4,(int)(param_1[1] - param_3) - (int)param_2);
        return;
      }
    }
    else {
      uVar1 = *param_4;
      sVar9 = (int)pvVar4 - (int)((int)pvVar4 - param_3);
      pvVar7 = FID_conflict__memcpy(pvVar4,(void *)((int)pvVar4 - param_3),sVar9);
      param_1[1] = (int)pvVar7 + sVar9;
      sVar9 = (int)pvVar4 + (-param_3 - (int)param_2);
      FID_conflict__memcpy((void *)((int)pvVar4 - sVar9),param_2,sVar9);
      puVar6 = param_2;
      if (param_2 != param_2 + param_3) {
        do {
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (puVar6 != param_2 + param_3);
      }
    }
  }
  return;
}

