// FUN_004064a0 @ 004064a0 body=[[004064a0, 00406565] [00406569, 00406590] [00406594, 004069b1]]


void FUN_004064a0(int param_1,float *param_2,float param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  undefined4 local_64;
  uint local_50;
  uint local_48;
  uint local_34;
  int local_24;
  int local_20;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b40a18;
  local_10 = ExceptionList;
  bVar3 = false;
  local_18 = (int *)0x0;
  ExceptionList = &local_10;
  if (0 < (int)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) & 0xfffffffcU)) {
    do {
      iVar8 = *(int *)(*(int *)(param_1 + 0x40) + (int)local_18 * 4);
      iVar4 = FUN_00401580(iVar8);
      local_8 = 0;
      if (*(int *)(iVar4 + 0x10) == 0) {
        fVar11 = *(float *)(*(int *)(iVar8 + 0x13c) + 0x94) * 0.5;
      }
      else {
        iVar4 = FUN_00401580(iVar8);
        bVar3 = true;
        fVar11 = (float)*(int *)(iVar4 + 0x10) * *(float *)(iVar8 + 0x1ac) * 0.25;
      }
      if (bVar3) {
        bVar3 = false;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_48);
        }
        local_34 = 0xf;
        local_48 = local_48 & 0xffffff00;
      }
      local_8 = 0xffffffff;
      if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_64);
      }
      fVar12 = (*(float *)(iVar8 + 0x16c) + (*(float *)(iVar8 + 0x84) - *param_4)) - *param_2;
      fVar1 = (*(float *)(iVar8 + 0x170) + (*(float *)(iVar8 + 0x8c) - param_4[1])) - param_2[1];
      fVar10 = (float10)FUN_00401030(fVar12 * fVar12 + fVar1 * fVar1);
      if (fVar10 < (float10)fVar11 * (float10)param_3) {
        *(undefined1 *)(iVar8 + 0x1c4) = 1;
        ExceptionList = local_10;
        return;
      }
      local_18 = (int *)((int)local_18 + 1);
    } while ((int)local_18 < *(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2);
  }
  fVar11 = param_3 * 25.0;
  iVar8 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  local_20 = 0;
  local_24 = -1;
  param_3 = 0.0;
  if (0 < iVar8) {
    local_18 = *(int **)(param_1 + 0x10);
    fVar12 = fVar11;
    do {
      iVar4 = *local_18;
      pfVar7 = *(float **)(iVar4 + 0x148);
      iVar5 = *(int *)(iVar4 + 0x14c) - (int)pfVar7 >> 3;
      iVar6 = 0;
      if (0 < iVar5) {
        do {
          fVar2 = (*pfVar7 + (*(float *)(iVar4 + 0x84) - *param_4)) - *param_2;
          fVar1 = (pfVar7[1] + (*(float *)(iVar4 + 0x8c) - param_4[1])) - param_2[1];
          fVar1 = fVar1 * fVar1 + fVar2 * fVar2;
          if (fVar1 < fVar12) {
            local_24 = (int)param_3;
            fVar12 = fVar1;
            local_20 = iVar4;
            break;
          }
          iVar6 = iVar6 + 1;
          pfVar7 = pfVar7 + 2;
        } while (iVar6 < iVar5);
      }
      local_18 = local_18 + 1;
      param_3 = (float)((int)param_3 + 1);
    } while ((int)param_3 < iVar8);
    if (local_20 != 0) {
      *(undefined1 *)(local_20 + 0x164) = 1;
      iVar8 = *(int *)(*(int *)(param_1 + 0x30) + local_24 * 4);
      if (iVar8 == 0) {
        ExceptionList = local_10;
        return;
      }
      *(undefined1 *)(iVar8 + 0x1c4) = 1;
      ExceptionList = local_10;
      return;
    }
  }
  param_3 = 0.0;
  iVar8 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2;
  if (0 < iVar8) {
    piVar9 = *(int **)(param_1 + 0x20);
    param_1 = iVar8;
    do {
      iVar8 = *piVar9;
      pfVar7 = *(float **)(iVar8 + 0x148);
      iVar5 = *(int *)(iVar8 + 0x14c) - (int)pfVar7 >> 3;
      iVar6 = 0;
      fVar12 = fVar11;
      iVar4 = (int)param_3;
      if (0 < iVar5) {
        do {
          fVar1 = ((*(float *)(iVar8 + 0x84) - *param_4) + *pfVar7) - *param_2;
          fVar12 = (pfVar7[1] + (*(float *)(iVar8 + 0x8c) - param_4[1])) - param_2[1];
          fVar12 = fVar12 * fVar12 + fVar1 * fVar1;
          iVar4 = iVar8;
          if (fVar12 < fVar11) break;
          iVar6 = iVar6 + 1;
          pfVar7 = pfVar7 + 2;
          fVar12 = fVar11;
          iVar4 = (int)param_3;
        } while (iVar6 < iVar5);
      }
      param_3 = (float)iVar4;
      fVar11 = fVar12;
      piVar9 = piVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if (param_3 != 0.0) {
      *(undefined1 *)((int)param_3 + 0x164) = 1;
    }
  }
  ExceptionList = local_10;
  return;
}

