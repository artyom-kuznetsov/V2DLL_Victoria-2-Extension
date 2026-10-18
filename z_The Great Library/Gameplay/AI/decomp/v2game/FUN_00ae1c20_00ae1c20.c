// FUN_00ae1c20 @ 00ae1c20 body=[[00ae1c20, 00ae1dd0]]


void FUN_00ae1c20(int param_1,int param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0x80) + param_2 * 4);
  fVar3 = *(float *)(*(int *)(in_ECX + 0x18) + 0x20 + param_2 * 0x38);
  iVar1 = *(int *)(in_ECX + 0x18) + 0x20 + param_2 * 0x38;
  fVar4 = *(float *)(iVar1 + 4);
  fVar5 = *(float *)(iVar1 + 8);
  local_18 = 0.0;
  local_14 = 0.0;
  local_10 = 0.0;
  if (1e-05 < ABS(fVar3)) {
    local_18 = *param_3 / fVar3;
  }
  fVar3 = ABS(fVar4);
  if (fVar3 < 1e-05 == (fVar3 == 1e-05)) {
    local_14 = param_3[1] / fVar4;
  }
  fVar3 = ABS(fVar5);
  if (fVar3 < 1e-05 == (fVar3 == 1e-05)) {
    local_10 = param_3[2] / fVar5;
  }
  uVar7 = *(uint *)(iVar6 + 0x40);
  uVar8 = 0;
  if (uVar7 == 0) {
    FUN_00ae18c0(param_2,param_3);
    return;
  }
  do {
    iVar1 = *(int *)(*(int *)(iVar6 + 0x3c) + uVar8 * 4);
    local_c = 0.0;
    local_8 = 0.0;
    local_4 = 0.0;
    pfVar2 = (float *)(*(int *)(in_ECX + 0x18) + 0x20 + iVar1 * 0x38);
    if (1e-05 < ABS(local_18)) {
      local_c = *pfVar2 / local_18;
    }
    if (1e-05 < ABS(local_14)) {
      local_8 = pfVar2[1] / local_14;
    }
    if (1e-05 < ABS(local_10)) {
      local_4 = pfVar2[2] / local_10;
    }
    FUN_00ae18c0(iVar1,&local_c);
    uVar8 = uVar8 + 1;
  } while (uVar8 < uVar7);
  FUN_00ae18c0(param_2,param_3);
  return;
}

