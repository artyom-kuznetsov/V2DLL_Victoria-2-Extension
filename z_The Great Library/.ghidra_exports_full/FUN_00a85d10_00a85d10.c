// FUN_00a85d10 @ 00a85d10 body=[[00a85d10, 00a863cc]]


void FUN_00a85d10(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int in_ECX;
  int iVar19;
  float *pfVar20;
  float *pfVar21;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar1 = *param_1;
  fVar2 = param_1[8];
  fVar3 = param_1[0xc];
  pfVar20 = (float *)(in_ECX + 0x180);
  pfVar21 = local_48;
  for (iVar19 = 0x10; fVar18 = local_10, fVar17 = local_14, fVar16 = local_18, fVar15 = local_20,
      fVar14 = local_24, fVar13 = local_28, fVar12 = local_30, fVar11 = local_34, fVar10 = local_38,
      fVar9 = local_48[2], fVar8 = local_48[1], fVar7 = local_48[0], iVar19 != 0;
      iVar19 = iVar19 + -1) {
    *pfVar21 = *pfVar20;
    pfVar20 = pfVar20 + 1;
    pfVar21 = pfVar21 + 1;
  }
  fVar4 = param_1[4];
  fVar6 = param_1[1] * local_48[0];
  local_48[0] = fVar1 * local_48[0] + fVar4 * local_48[1] + fVar2 * local_48[2] +
                fVar3 * local_48[3];
  fVar5 = param_1[5];
  local_48[1] = fVar6 + fVar5 * local_48[1] + param_1[9] * local_48[2] + param_1[0xd] * local_48[3];
  local_48[2] = param_1[2] * fVar7 + param_1[6] * fVar8 + param_1[10] * local_48[2] +
                param_1[0xe] * local_48[3];
  local_48[3] = param_1[3] * fVar7 + param_1[7] * fVar8 + param_1[0xb] * fVar9 +
                param_1[0xf] * local_48[3];
  local_38 = fVar4 * local_34 + fVar1 * local_38 + fVar2 * local_30 + fVar3 * local_2c;
  local_34 = fVar5 * local_34 + param_1[1] * fVar10 + param_1[9] * local_30 +
             param_1[0xd] * local_2c;
  local_30 = param_1[2] * fVar10 + param_1[6] * fVar11 + param_1[10] * local_30 +
             param_1[0xe] * local_2c;
  local_2c = param_1[3] * fVar10 + param_1[7] * fVar11 + param_1[0xb] * fVar12 +
             param_1[0xf] * local_2c;
  local_28 = fVar1 * local_28 + fVar4 * local_24 + fVar2 * local_20 + fVar3 * local_1c;
  local_24 = fVar5 * local_24 + param_1[1] * fVar13 + param_1[9] * local_20 +
             param_1[0xd] * local_1c;
  local_20 = param_1[2] * fVar13 + param_1[6] * fVar14 + param_1[10] * local_20 +
             param_1[0xe] * local_1c;
  local_1c = param_1[3] * fVar13 + param_1[7] * fVar14 + param_1[0xb] * fVar15 +
             param_1[0xf] * local_1c;
  local_18 = fVar1 * local_18 + fVar4 * local_14 + fVar2 * local_10 + fVar3 * local_c;
  local_14 = fVar5 * local_14 + param_1[1] * fVar16 + param_1[9] * local_10 + param_1[0xd] * local_c
  ;
  local_10 = param_1[2] * fVar16 + param_1[6] * fVar17 + param_1[10] * local_10 +
             param_1[0xe] * local_c;
  local_c = param_1[3] * fVar16 + param_1[7] * fVar17 + fVar18 * param_1[0xb] +
            local_c * param_1[0xf];
  pfVar20 = local_48;
  pfVar21 = (float *)(in_ECX + 0x94);
  for (iVar19 = 0x10; iVar19 != 0; iVar19 = iVar19 + -1) {
    *pfVar21 = *pfVar20;
    pfVar20 = pfVar20 + 1;
    pfVar21 = pfVar21 + 1;
  }
  return;
}

