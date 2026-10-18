// FUN_00aeac10 @ 00aeac10 body=[[00aeac10, 00aeae08]]


void FUN_00aeac10(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *in_ECX;
  float *pfVar9;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_4c;
  FUN_00aea300(param_1,param_2,in_ECX + 0x13,&local_40);
  FUN_00aea7f0(&local_40,&local_28,&local_1c,&local_10);
  local_40 = 3.4028235e+38;
  local_3c = 3.4028235e+38;
  local_38 = 3.4028235e+38;
  fVar1 = -3.4028235e+38;
  fVar5 = -3.4028235e+38;
  fVar4 = -3.4028235e+38;
  if (param_2 != 0) {
    local_48 = in_ECX[0x13];
    pfVar9 = (float *)(param_1 + 8);
    local_44 = in_ECX[0x14];
    local_4c = in_ECX[0x15];
    fVar5 = -3.4028235e+38;
    fVar1 = -3.4028235e+38;
    fVar2 = -3.4028235e+38;
    do {
      fVar7 = pfVar9[-2] - local_48;
      fVar6 = pfVar9[-1] - local_44;
      fVar8 = *pfVar9 - local_4c;
      fVar4 = local_20 * fVar8 + local_28 * fVar7 + local_24 * fVar6;
      fVar3 = fVar4;
      if ((fVar4 <= fVar5) && (fVar3 = fVar5, fVar4 < local_40)) {
        local_40 = fVar4;
      }
      fVar5 = fVar3;
      fVar3 = local_14 * fVar8 + local_1c * fVar7 + local_18 * fVar6;
      fVar4 = fVar3;
      if ((fVar3 <= fVar2) && (fVar4 = fVar2, fVar3 < local_3c)) {
        local_3c = fVar3;
      }
      fVar2 = fVar8 * local_8 + local_c * fVar6 + local_10 * fVar7;
      fVar6 = fVar2;
      if ((fVar2 <= fVar1) && (fVar6 = fVar1, fVar2 < local_38)) {
        local_38 = fVar2;
      }
      fVar1 = fVar6;
      pfVar9 = pfVar9 + 3;
      param_2 = param_2 + -1;
      fVar2 = fVar4;
    } while (param_2 != 0);
  }
  *in_ECX = 1.0;
  in_ECX[1] = 0.0;
  in_ECX[2] = 0.0;
  in_ECX[3] = 0.0;
  in_ECX[4] = 0.0;
  in_ECX[6] = 0.0;
  in_ECX[7] = 0.0;
  in_ECX[8] = 0.0;
  in_ECX[9] = 0.0;
  in_ECX[0xb] = 0.0;
  in_ECX[0xc] = 0.0;
  in_ECX[0xd] = 0.0;
  in_ECX[0xe] = 0.0;
  in_ECX[5] = 1.0;
  in_ECX[10] = 1.0;
  in_ECX[0xf] = 1.0;
  *in_ECX = local_28;
  in_ECX[1] = local_24;
  in_ECX[2] = local_20;
  in_ECX[4] = local_1c;
  in_ECX[5] = local_18;
  in_ECX[6] = local_14;
  in_ECX[8] = local_10;
  in_ECX[9] = local_c;
  in_ECX[10] = local_8;
  in_ECX[0x10] = (fVar5 - local_40) * 0.5;
  in_ECX[0x11] = (fVar4 - local_3c) * 0.5;
  in_ECX[0x12] = (fVar1 - local_38) * 0.5;
  __security_check_cookie(local_4 ^ (uint)&local_4c);
  return;
}

