// FUN_00ae71b0 @ 00ae71b0 body=[[00ae71b0, 00ae72f7]]


bool FUN_00ae71b0(uint *param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int local_c;
  
  uVar2 = in_ECX[1];
  fVar1 = -1.0;
  uVar8 = 0;
  iVar7 = 0;
  if (uVar2 != 0) {
    local_c = 0;
    do {
      iVar5 = *in_ECX + local_c;
      uVar6 = 0;
      uVar3 = *(uint *)(iVar5 + 8);
      if (3 < (int)uVar3) {
        do {
          iVar4 = *(int *)(*(int *)(iVar5 + 4) + uVar6 * 4);
          if (fVar1 < *(float *)(iVar4 + 0xc)) {
            fVar1 = *(float *)(iVar4 + 0xc);
            *param_1 = uVar8;
            *param_2 = uVar6;
            iVar7 = iVar4;
          }
          iVar4 = *(int *)(*(int *)(iVar5 + 4) + 4 + uVar6 * 4);
          if (fVar1 < *(float *)(iVar4 + 0xc)) {
            fVar1 = *(float *)(iVar4 + 0xc);
            *param_1 = uVar8;
            *param_2 = uVar6 + 1;
            iVar7 = iVar4;
          }
          iVar4 = *(int *)(*(int *)(iVar5 + 4) + 8 + uVar6 * 4);
          if (fVar1 < *(float *)(iVar4 + 0xc)) {
            fVar1 = *(float *)(iVar4 + 0xc);
            *param_1 = uVar8;
            *param_2 = uVar6 + 2;
            iVar7 = iVar4;
          }
          iVar4 = *(int *)(*(int *)(iVar5 + 4) + 0xc + uVar6 * 4);
          if (fVar1 < *(float *)(iVar4 + 0xc)) {
            fVar1 = *(float *)(iVar4 + 0xc);
            *param_1 = uVar8;
            *param_2 = uVar6 + 3;
            iVar7 = iVar4;
          }
          uVar6 = uVar6 + 4;
        } while (uVar6 < uVar3 - 3);
      }
      for (; uVar6 < uVar3; uVar6 = uVar6 + 1) {
        iVar4 = *(int *)(*(int *)(iVar5 + 4) + uVar6 * 4);
        if (fVar1 < *(float *)(iVar4 + 0xc)) {
          fVar1 = *(float *)(iVar4 + 0xc);
          *param_1 = uVar8;
          *param_2 = uVar6;
          iVar7 = iVar4;
        }
      }
      local_c = local_c + 0x14;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return iVar7 != 0;
}

