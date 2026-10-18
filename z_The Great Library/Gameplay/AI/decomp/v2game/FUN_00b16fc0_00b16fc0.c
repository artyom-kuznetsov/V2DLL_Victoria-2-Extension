// FUN_00b16fc0 @ 00b16fc0 body=[[00b16fc0, 00b17717]]


void FUN_00b16fc0(float *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [16];
  float local_84 [16];
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  float local_20;
  float local_1c;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_f0;
  local_c4[0] = *param_1;
  local_c4[1] = param_1[4];
  local_c4[2] = param_1[8];
  local_c4[4] = param_1[1];
  local_c4[5] = param_1[5];
  local_c4[6] = param_1[9];
  local_c4[8] = param_1[2];
  local_c4[9] = param_1[6];
  local_c4[10] = param_1[10];
  local_e4 = ABS(local_c4[4]);
  local_dc = ABS(local_c4[8]);
  local_cc = ABS(local_c4[0]) + local_e4 + local_dc;
  if (local_cc <= 0.0) {
    local_cc = 0.0;
  }
  local_e8 = ABS(local_c4[5]);
  local_e0 = ABS(local_c4[9]);
  fVar3 = local_e0 + ABS(local_c4[1]) + local_e8;
  if (local_cc < fVar3) {
    local_cc = fVar3;
  }
  local_ec = ABS(local_c4[10]);
  fVar3 = ABS(local_c4[2]) + ABS(local_c4[6]) + local_ec;
  if (local_cc < fVar3) {
    local_cc = fVar3;
  }
  local_f0 = ABS(local_c4[0]) + ABS(local_c4[1]) + ABS(local_c4[2]);
  if (local_f0 <= 0.0) {
    local_f0 = 0.0;
  }
  fVar3 = local_e4 + local_e8 + ABS(local_c4[6]);
  if (local_f0 < fVar3) {
    local_f0 = fVar3;
  }
  fVar3 = local_dc + local_e0 + local_ec;
  if (local_f0 < fVar3) {
    local_f0 = fVar3;
  }
  do {
    FUN_00b165b0(local_c4,&local_44);
    local_d0 = local_c4[2] * local_3c + local_c4[0] * local_44 + local_c4[1] * local_40;
    if (local_d0 == 0.0) {
      FUN_00b16be0(local_c4,&local_44,local_c4);
      break;
    }
    fVar3 = ABS(local_24) + ABS(local_44) + ABS(local_34);
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    fVar4 = ABS(local_20) + ABS(local_40) + ABS(local_30);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    local_c8 = ABS(local_2c);
    fVar4 = local_c8 + ABS(local_3c) + ABS(local_1c);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = ABS(local_40) + ABS(local_44) + ABS(local_3c);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = ABS(local_30) + ABS(local_34) + local_c8;
    if (fVar4 < fVar5) {
      fVar4 = fVar5;
    }
    fVar5 = ABS(local_20) + ABS(local_24) + ABS(local_1c);
    if (fVar4 < fVar5) {
      fVar4 = fVar5;
    }
    iVar6 = 0;
    fVar3 = SQRT(SQRT((fVar4 * fVar3) / (local_f0 * local_cc)) / ABS(local_d0));
    fVar4 = fVar3 * 0.5;
    fVar3 = 0.5 / (fVar3 * local_d0);
    do {
      uVar1 = *(undefined4 *)((int)local_c4 + iVar6 + 4);
      *(undefined4 *)((int)local_84 + iVar6) = *(undefined4 *)((int)local_c4 + iVar6);
      uVar2 = *(undefined4 *)((int)local_c4 + iVar6 + 8);
      *(undefined4 *)((int)local_84 + iVar6 + 4) = uVar1;
      *(undefined4 *)((int)local_84 + iVar6 + 8) = uVar2;
      iVar6 = iVar6 + 0x10;
    } while (iVar6 < 0x30);
    local_c4[0] = local_c4[0] * fVar4 + local_44 * fVar3;
    local_c4[1] = local_c4[1] * fVar4 + local_40 * fVar3;
    local_c4[2] = local_3c * fVar3 + local_c4[2] * fVar4;
    local_c4[4] = local_c4[4] * fVar4 + local_34 * fVar3;
    local_c4[5] = local_c4[5] * fVar4 + local_30 * fVar3;
    local_c4[6] = local_c4[6] * fVar4 + local_2c * fVar3;
    local_c4[8] = local_c4[8] * fVar4 + local_24 * fVar3;
    local_c4[9] = local_c4[9] * fVar4 + local_20 * fVar3;
    local_c4[10] = local_1c * fVar3 + local_c4[10] * fVar4;
    local_84[0] = local_84[0] - local_c4[0];
    local_84[1] = local_84[1] - local_c4[1];
    local_84[2] = local_84[2] - local_c4[2];
    local_84[4] = local_84[4] - local_c4[4];
    local_84[5] = local_84[5] - local_c4[5];
    local_84[6] = local_84[6] - local_c4[6];
    local_84[8] = local_84[8] - local_c4[8];
    local_84[9] = local_84[9] - local_c4[9];
    local_84[10] = local_84[10] - local_c4[10];
    fVar3 = 0.0;
    fVar4 = ABS(local_84[8]) + ABS(local_84[0]) + ABS(local_84[4]);
    if (0.0 < fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = ABS(local_84[9]) + ABS(local_84[1]) + ABS(local_84[5]);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = ABS(local_84[10]) + ABS(local_84[2]) + ABS(local_84[6]);
    if (fVar3 < fVar4) {
      fVar3 = fVar4;
    }
    local_e4 = ABS(local_c4[4]);
    local_d8 = ABS(local_c4[0]);
    local_dc = ABS(local_c4[8]);
    local_cc = local_dc + local_d8 + local_e4;
    if (local_cc <= 0.0) {
      local_cc = 0.0;
    }
    local_e8 = ABS(local_c4[5]);
    local_e0 = ABS(local_c4[9]);
    fVar4 = ABS(local_c4[1]) + local_e8 + local_e0;
    if (local_cc < fVar4) {
      local_cc = fVar4;
    }
    local_d4 = ABS(local_c4[6]);
    local_ec = ABS(local_c4[10]);
    fVar4 = local_d4 + ABS(local_c4[2]) + local_ec;
    if (local_cc < fVar4) {
      local_cc = fVar4;
    }
    local_f0 = local_d8 + ABS(local_c4[1]) + ABS(local_c4[2]);
    if (local_f0 <= 0.0) {
      local_f0 = 0.0;
    }
    fVar4 = local_e4 + local_e8 + local_d4;
    if (local_f0 < fVar4) {
      local_f0 = fVar4;
    }
    fVar4 = local_dc + local_e0 + local_ec;
    if (local_f0 < fVar4) {
      local_f0 = fVar4;
    }
  } while (local_cc * 1e-06 < fVar3);
  *param_2 = local_c4[0];
  param_2[1] = local_c4[4];
  param_2[2] = local_c4[8];
  param_2[4] = local_c4[1];
  param_2[5] = local_c4[5];
  param_2[6] = local_c4[9];
  param_2[8] = local_c4[2];
  param_2[9] = local_c4[6];
  param_2[10] = local_c4[10];
  param_2[0xb] = 0.0;
  param_2[0xe] = 0.0;
  param_2[7] = 0.0;
  param_2[0xd] = 0.0;
  param_2[3] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xf] = 1.0;
  FUN_00b164c0(local_c4,param_1,param_3);
  param_3[0xb] = 0.0;
  param_3[0xe] = 0.0;
  iVar6 = 0;
  param_3[7] = 0.0;
  param_3[0xd] = 0.0;
  local_f0 = 4.2039e-45;
  param_3[3] = 0.0;
  param_3[0xc] = 0.0;
  param_3[0xf] = 1.0;
  pfVar10 = param_3;
  do {
    if (iVar6 < 3) {
      iVar11 = iVar6;
      if (3 < (int)local_f0) {
        iVar9 = (-iVar6 - 1U >> 2) + 1;
        iVar11 = iVar6 + iVar9 * 4;
        pfVar7 = pfVar10 + 8;
        pfVar8 = pfVar10;
        do {
          iVar9 = iVar9 + -1;
          fVar3 = (*pfVar8 + pfVar7[-8]) * 0.5;
          pfVar7[-8] = fVar3;
          *pfVar8 = fVar3;
          fVar3 = (pfVar7[-4] + pfVar8[1]) * 0.5;
          pfVar7[-4] = fVar3;
          pfVar8[1] = fVar3;
          fVar3 = (*pfVar7 + pfVar8[2]) * 0.5;
          *pfVar7 = fVar3;
          pfVar8[2] = fVar3;
          fVar3 = (pfVar7[4] + pfVar8[3]) * 0.5;
          pfVar7[4] = fVar3;
          pfVar8[3] = fVar3;
          pfVar7 = pfVar7 + 0x10;
          pfVar8 = pfVar8 + 4;
        } while (iVar9 != 0);
      }
      if (iVar11 < 3) {
        iVar9 = 3 - iVar11;
        pfVar7 = param_3 + iVar6 + iVar11 * 4;
        pfVar8 = param_3 + iVar11 + iVar6 * 4;
        do {
          iVar9 = iVar9 + -1;
          fVar3 = (*pfVar8 + *pfVar7) * 0.5;
          *pfVar7 = fVar3;
          *pfVar8 = fVar3;
          pfVar7 = pfVar7 + 4;
          pfVar8 = pfVar8 + 1;
        } while (iVar9 != 0);
      }
    }
    local_f0 = (float)((int)local_f0 + -1);
    iVar6 = iVar6 + 1;
    pfVar10 = pfVar10 + 5;
  } while (0 < (int)local_f0);
  __security_check_cookie(local_4 ^ (uint)&local_f0);
  return;
}

