// FUN_00ae18c0 @ 00ae18c0 body=[[00ae18c0, 00ae19a7]]


void FUN_00ae18c0(int param_1,float *param_2)

{
  uint *puVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int in_ECX;
  
  if ((((*(uint *)(in_ECX + 0x2c) & 2) != 0) && ((*(uint *)(in_ECX + 0x2c) & 0x10) != 0)) &&
     (iVar6 = param_1 * 0x38, fVar3 = *param_2 - *(float *)(iVar6 + 0x20 + *(int *)(in_ECX + 0x18)),
     iVar2 = iVar6 + 0x20 + *(int *)(in_ECX + 0x18), fVar5 = param_2[1] - *(float *)(iVar2 + 4),
     fVar4 = param_2[2] - *(float *)(iVar2 + 8),
     1e-05 < fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3)) {
    puVar1 = (uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
    *puVar1 = *puVar1 | 1;
    iVar2 = *(int *)(in_ECX + 0x18);
    *(float *)(iVar6 + 0x20 + iVar2) = *param_2;
    iVar2 = iVar6 + 0x20 + iVar2;
    *(float *)(iVar2 + 4) = param_2[1];
    *(float *)(iVar2 + 8) = param_2[2];
  }
  if ((0.0001 < ABS(*param_2 - 1.0)) ||
     (ABS(param_2[1] - 1.0) < 0.0001 == (ABS(param_2[1] - 1.0) == 0.0001))) {
    *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) =
         *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) | 2;
  }
  else if (ABS(param_2[2] - 1.0) < 0.0001 == (ABS(param_2[2] - 1.0) == 0.0001)) {
    *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) =
         *(uint *)(*(int *)(in_ECX + 0x20) + param_1 * 4) | 2;
    return;
  }
  return;
}

