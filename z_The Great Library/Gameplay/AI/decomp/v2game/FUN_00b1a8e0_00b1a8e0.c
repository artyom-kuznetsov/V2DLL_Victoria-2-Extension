// FUN_00b1a8e0 @ 00b1a8e0 body=[[00b1a8e0, 00b1ab45]]


void FUN_00b1a8e0(float *param_1,uint param_2)

{
  size_t _Size;
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  
  _Size = param_2 * 4;
  uVar6 = param_2 >> 1;
  iVar5 = uVar6 - 1;
  pfVar8 = param_1 + uVar6;
  **(float **)(in_ECX + 4) =
       *pfVar8 * *(float *)(in_ECX + 0x38) +
       *param_1 * *(float *)(in_ECX + 0x34) +
       param_1[iVar5] * *(float *)(in_ECX + 0x2c) + param_1[param_2 - 1] * *(float *)(in_ECX + 0x30)
  ;
  iVar4 = 2;
  *(float *)(*(int *)(in_ECX + 4) + 4) =
       *(float *)(in_ECX + 0x48) * *pfVar8 +
       *(float *)(in_ECX + 0x44) * *param_1 +
       param_1[iVar5] * *(float *)(in_ECX + 0x3c) + param_1[param_2 - 1] * *(float *)(in_ECX + 0x40)
  ;
  uVar1 = 0;
  if (3 < iVar5) {
    param_2 = (uVar6 - 5 >> 2) + 1;
    uVar1 = param_2 * 4;
    pfVar2 = param_1 + 2;
    pfVar7 = param_1 + uVar6 + 1;
    do {
      *(float *)(*(int *)(in_ECX + 4) + iVar4 * 4) =
           *pfVar7 * *(float *)(in_ECX + 0x38) +
           pfVar2[-1] * *(float *)(in_ECX + 0x34) +
           pfVar2[-2] * *(float *)(in_ECX + 0x2c) + *pfVar8 * *(float *)(in_ECX + 0x30);
      *(float *)(*(int *)(in_ECX + 4) + 4 + iVar4 * 4) =
           *(float *)(in_ECX + 0x48) * *pfVar7 +
           pfVar2[-1] * *(float *)(in_ECX + 0x44) +
           *(float *)(in_ECX + 0x3c) * pfVar2[-2] + *pfVar8 * *(float *)(in_ECX + 0x40);
      *(float *)(*(int *)(in_ECX + 4) + 8 + iVar4 * 4) =
           pfVar7[1] * *(float *)(in_ECX + 0x38) +
           *pfVar2 * *(float *)(in_ECX + 0x34) +
           pfVar2[-1] * *(float *)(in_ECX + 0x2c) + pfVar8[1] * *(float *)(in_ECX + 0x30);
      *(float *)(*(int *)(in_ECX + 4) + 0xc + iVar4 * 4) =
           pfVar7[1] * *(float *)(in_ECX + 0x48) +
           *(float *)(in_ECX + 0x44) * *pfVar2 +
           pfVar2[-1] * *(float *)(in_ECX + 0x3c) + pfVar8[1] * *(float *)(in_ECX + 0x40);
      *(float *)(*(int *)(in_ECX + 4) + 0x10 + iVar4 * 4) =
           pfVar7[2] * *(float *)(in_ECX + 0x38) +
           pfVar2[1] * *(float *)(in_ECX + 0x34) +
           *pfVar2 * *(float *)(in_ECX + 0x2c) + pfVar8[2] * *(float *)(in_ECX + 0x30);
      *(float *)(*(int *)(in_ECX + 4) + 0x14 + iVar4 * 4) =
           *(float *)(in_ECX + 0x48) * pfVar7[2] +
           *(float *)(in_ECX + 0x44) * pfVar2[1] +
           pfVar8[2] * *(float *)(in_ECX + 0x40) + *pfVar2 * *(float *)(in_ECX + 0x3c);
      iVar4 = iVar4 + 8;
      param_2 = param_2 + -1;
      *(float *)(*(int *)(in_ECX + 4) + -8 + iVar4 * 4) =
           pfVar7[3] * *(float *)(in_ECX + 0x38) +
           *(float *)(in_ECX + 0x34) * pfVar2[2] +
           pfVar2[1] * *(float *)(in_ECX + 0x2c) + pfVar8[3] * *(float *)(in_ECX + 0x30);
      *(float *)(*(int *)(in_ECX + 4) + -4 + iVar4 * 4) =
           *(float *)(in_ECX + 0x48) * pfVar7[3] +
           *(float *)(in_ECX + 0x44) * pfVar2[2] +
           pfVar8[3] * *(float *)(in_ECX + 0x40) + pfVar2[1] * *(float *)(in_ECX + 0x3c);
      pfVar2 = pfVar2 + 4;
      pfVar7 = pfVar7 + 4;
      pfVar8 = pfVar8 + 4;
    } while (param_2 != 0);
  }
  if (uVar1 < uVar6 - 1) {
    iVar5 = iVar4 * 4;
    pfVar8 = param_1 + uVar1 + 1 + uVar6;
    pfVar2 = param_1 + uVar1 + uVar6;
    do {
      uVar3 = uVar1 + 1;
      *(float *)(iVar5 + *(int *)(in_ECX + 4)) =
           *pfVar8 * *(float *)(in_ECX + 0x38) +
           param_1[uVar3] * *(float *)(in_ECX + 0x34) +
           *pfVar2 * *(float *)(in_ECX + 0x30) + param_1[uVar1] * *(float *)(in_ECX + 0x2c);
      *(float *)(iVar5 + 4 + *(int *)(in_ECX + 4)) =
           *(float *)(in_ECX + 0x48) * *pfVar8 +
           param_1[uVar3] * *(float *)(in_ECX + 0x44) +
           param_1[uVar1] * *(float *)(in_ECX + 0x3c) + *(float *)(in_ECX + 0x40) * *pfVar2;
      uVar1 = uVar3;
      iVar5 = iVar5 + 8;
      pfVar8 = pfVar8 + 1;
      pfVar2 = pfVar2 + 1;
    } while (uVar3 < uVar6 - 1);
  }
  FID_conflict__memcpy(param_1,*(void **)(in_ECX + 4),_Size);
  return;
}

