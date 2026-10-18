// FUN_00b0ba60 @ 00b0ba60 body=[[00b0ba60, 00b0bd05]]


void FUN_00b0ba60(int param_1,int param_2,float *param_3,float *param_4,float *param_5,float param_6
                 )

{
  int iVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_10 [16];
  
  if (param_6 < *(float *)(in_ECX + 8)) {
    param_6 = *(float *)(in_ECX + 8);
  }
  if (*(float *)(in_ECX + 0xc) < param_6) {
    param_6 = *(float *)(in_ECX + 0xc);
  }
  fVar9 = (float10)FUN_00b12f00(param_6);
  uVar7 = 0;
  if (*(uint *)(in_ECX + 0x18) != 0) {
    piVar4 = (int *)(*(int *)(in_ECX + 0x14) + 0x38);
    do {
      if (*piVar4 == param_2) {
        iVar8 = uVar7 * 0x3c;
        iVar1 = iVar8 + 0x20 + *(int *)(in_ECX + 0x14);
        fVar2 = *(float *)(iVar1 + 4);
        fVar3 = *(float *)(iVar1 + 8);
        *param_3 = *param_3 + *(float *)(iVar8 + 0x20 + *(int *)(in_ECX + 0x14)) * param_6;
        param_3[1] = fVar2 * param_6 + param_3[1];
        param_3[2] = param_3[2] + fVar3 * param_6;
        iVar1 = iVar8 + 0x2c + *(int *)(in_ECX + 0x14);
        fVar2 = *(float *)(iVar1 + 4);
        fVar3 = *(float *)(iVar1 + 8);
        *param_5 = *param_5 + *(float *)(iVar8 + 0x2c + *(int *)(in_ECX + 0x14)) * param_6;
        param_5[1] = fVar2 * param_6 + param_5[1];
        param_5[2] = fVar3 * param_6 + param_5[2];
        fVar10 = (float10)*(float *)(*(int *)(param_1 + 0x1c) + param_2 * 0x38);
        iVar1 = *(int *)(param_1 + 0x1c) + param_2 * 0x38;
        fVar11 = (float10)*(float *)(iVar1 + 4);
        fVar12 = (float10)*(float *)(iVar1 + 8);
        fVar13 = (float10)*(float *)(iVar1 + 0xc);
        fVar2 = *(float *)(*(int *)(in_ECX + 0x14) + iVar8);
        iVar8 = *(int *)(in_ECX + 0x14) + iVar8;
        fVar17 = (float10)1 - fVar9;
        if ((float10)*(float *)(iVar8 + 0xc) * fVar13 +
            (float10)*(float *)(iVar8 + 8) * fVar12 +
            (float10)fVar2 * fVar10 + (float10)*(float *)(iVar8 + 4) * fVar11 < (float10)0.0) {
          fVar9 = -(float10)(float)fVar9;
        }
        fVar2 = (float)(fVar17 * fVar10 + (float10)fVar2 * fVar9);
        fVar3 = (float)((float10)*(float *)(iVar8 + 4) * fVar9 + fVar11 * fVar17);
        fVar16 = (float10)*(float *)(iVar8 + 8) * fVar9 + fVar12 * fVar17;
        fVar14 = (float10)fVar3;
        fVar15 = (float10)fVar2;
        fVar9 = (float10)(float)(fVar13 * fVar17 + (float10)*(float *)(iVar8 + 0xc) * fVar9);
        fVar17 = (float10)1 /
                 SQRT(fVar9 * fVar9 + fVar16 * fVar16 + fVar15 * fVar15 + fVar14 * fVar14);
        local_30 = (float)((float10)fVar2 * fVar17);
        local_2c = (float)((float10)fVar3 * fVar17);
        local_28 = (float)(fVar16 * fVar17);
        local_24 = (float)(fVar9 * fVar17);
        fVar9 = (float10)1 / (fVar13 * fVar13 + fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11)
        ;
        local_20 = (float)-(fVar9 * fVar10);
        local_1c = (float)-(fVar11 * fVar9);
        local_18 = (float)-(fVar12 * fVar9);
        local_14 = (float)(fVar9 * fVar13);
        uVar5 = FUN_00aed250(local_10,&local_20,&local_30);
        pfVar6 = (float *)FUN_00aed250(&local_20,param_4,uVar5);
        *param_4 = *pfVar6;
        param_4[1] = pfVar6[1];
        param_4[2] = pfVar6[2];
        fVar2 = pfVar6[3];
        param_4[3] = fVar2;
        fVar2 = 1.0 / SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1] +
                           fVar2 * fVar2);
        *param_4 = *param_4 * fVar2;
        param_4[1] = param_4[1] * fVar2;
        param_4[2] = param_4[2] * fVar2;
        param_4[3] = fVar2 * param_4[3];
        return;
      }
      uVar7 = uVar7 + 1;
      piVar4 = piVar4 + 0xf;
    } while (uVar7 < *(uint *)(in_ECX + 0x18));
  }
  return;
}

