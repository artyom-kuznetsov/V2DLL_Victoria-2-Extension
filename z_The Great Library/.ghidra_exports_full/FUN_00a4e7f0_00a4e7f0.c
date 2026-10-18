// FUN_00a4e7f0 @ 00a4e7f0 body=[[00a4e7f0, 00a4eb75]]


void FUN_00a4e7f0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
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
  int in_ECX;
  int iVar12;
  float *pfVar13;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  
  fVar11 = DAT_00f092fc;
  uVar1 = *(undefined4 *)(in_ECX + 0x150);
  pfVar13 = local_48;
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar13 = *param_3;
    param_3 = param_3 + 1;
    pfVar13 = pfVar13 + 1;
  }
  FUN_00a20ae0(uVar1);
  fVar4 = local_48[2] * 0.0;
  fVar3 = local_48[0] * 0.0;
  fVar2 = local_48[2] * 0.0;
  local_48[2] = local_48[0] * 0.0 + local_48[1] * 0.0 + fVar11 * local_48[2];
  fVar5 = local_30 * 0.0;
  fVar7 = local_38 * 0.0;
  fVar6 = local_30 * 0.0;
  local_30 = local_34 * 0.0 + local_38 * 0.0 + local_30 * fVar11;
  fVar8 = local_20 * 0.0;
  fVar10 = local_28 * 0.0;
  fVar9 = local_20 * 0.0;
  local_20 = local_24 * 0.0 + local_28 * 0.0 + local_20 * fVar11;
  local_48[0] = local_48[1] * 0.0 + fVar11 * local_48[0] + fVar4;
  local_48[1] = fVar11 * local_48[1] + fVar3 + fVar2;
  local_38 = local_34 * 0.0 + local_38 * fVar11 + fVar5;
  local_34 = local_34 * fVar11 + fVar7 + fVar6;
  local_28 = local_24 * 0.0 + local_28 * fVar11 + fVar8;
  local_24 = local_24 * fVar11 + fVar10 + fVar9;
  FUN_00a4e290(*(undefined4 *)(in_ECX + 0x154),*(undefined4 *)(in_ECX + 0x158),local_48,
               *(undefined4 *)(in_ECX + 0x14c));
  return;
}

