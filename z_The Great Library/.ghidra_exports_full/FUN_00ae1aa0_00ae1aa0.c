// FUN_00ae1aa0 @ 00ae1aa0 body=[[00ae1aa0, 00ae1c16]]


void FUN_00ae1aa0(int param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  int in_ECX;
  uint uVar11;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = *(int *)(in_ECX + 0x1c);
  fVar3 = *(float *)(iVar6 + 0x20 + param_2 * 0x38);
  fVar4 = *(float *)(iVar6 + 0x24 + param_2 * 0x38);
  fVar5 = *(float *)(iVar6 + 0x28 + param_2 * 0x38);
  pfVar1 = (float *)(iVar6 + 0x20 + param_2 * 0x38);
  local_c = 0.0;
  iVar7 = *(int *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0x80) + param_2 * 4);
  local_8 = 0.0;
  local_4 = 0.0;
  if (1e-05 < ABS(fVar3)) {
    local_c = *param_3 / fVar3;
  }
  fVar3 = ABS(fVar4);
  if (fVar3 < 1e-05 == (fVar3 == 1e-05)) {
    local_8 = param_3[1] / fVar4;
  }
  fVar3 = ABS(fVar5);
  if (fVar3 < 1e-05 == (fVar3 == 1e-05)) {
    local_4 = param_3[2] / fVar5;
  }
  uVar8 = *(uint *)(iVar7 + 0x40);
  uVar11 = 0;
  if (uVar8 != 0) {
    fVar3 = ABS(local_8);
    fVar4 = 0.0;
    do {
      pfVar2 = (float *)(iVar6 + 0x20 + *(int *)(*(int *)(iVar7 + 0x3c) + uVar11 * 4) * 0x38);
      fVar5 = fVar4;
      if (ABS(local_c) < 1e-05 == (ABS(local_c) == 1e-05)) {
        fVar5 = *pfVar2 / local_c;
      }
      fVar10 = fVar4;
      if (NAN(fVar3) || fVar3 < 1e-05 == (fVar3 == 1e-05)) {
        fVar10 = pfVar2[1] / local_8;
      }
      fVar9 = fVar4;
      if (1e-05 < ABS(local_4)) {
        fVar9 = pfVar2[2] / local_4;
      }
      uVar11 = uVar11 + 1;
      *pfVar2 = fVar5;
      pfVar2[1] = fVar10;
      pfVar2[2] = fVar9;
    } while (uVar11 < uVar8);
  }
  *pfVar1 = *param_3;
  pfVar1[1] = param_3[1];
  pfVar1[2] = param_3[2];
  return;
}

