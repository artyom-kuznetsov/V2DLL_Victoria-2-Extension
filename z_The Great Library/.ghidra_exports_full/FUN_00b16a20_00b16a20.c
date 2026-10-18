// FUN_00b16a20 @ 00b16a20 body=[[00b16a20, 00b16bda]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b16a20(int param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_1c;
  *param_2 = _DAT_00f02b18;
  param_2[1] = _DAT_00f02b1c;
  param_2[2] = _DAT_00f02b20;
  param_2[3] = _DAT_00f02b24;
  param_2[4] = _DAT_00f02b28;
  param_2[5] = _DAT_00f02b2c;
  param_2[6] = _DAT_00f02b30;
  param_2[7] = _DAT_00f02b34;
  param_2[8] = _DAT_00f02b38;
  param_2[9] = _DAT_00f02b3c;
  param_2[10] = _DAT_00f02b40;
  param_2[0xb] = _DAT_00f02b44;
  param_2[0xc] = _DAT_00f02b48;
  param_2[0xd] = _DAT_00f02b4c;
  param_2[0xe] = _DAT_00f02b50;
  param_2[0xf] = _DAT_00f02b54;
  iVar3 = FUN_00b16700(param_1);
  if (-1 < iVar3) {
    local_1c = *(float *)(param_1 + iVar3 * 4);
    local_18 = *(float *)(param_1 + 0x10 + iVar3 * 4);
    fVar1 = *(float *)(param_1 + 0x20 + iVar3 * 4);
    fVar2 = local_1c * local_1c + local_18 * local_18;
    local_14 = SQRT(fVar1 * fVar1 + fVar2);
    if (fVar1 < 0.0) {
      local_14 = -local_14;
    }
    local_14 = local_14 + fVar1;
    fVar1 = SQRT(2.0 / (local_14 * local_14 + fVar2));
    local_1c = fVar1 * local_1c;
    local_18 = fVar1 * local_18;
    local_14 = local_14 * fVar1;
    FUN_00b168c0(param_1,&local_1c);
    local_10 = *(float *)(param_1 + 0x20);
    local_c = *(float *)(param_1 + 0x24);
    fVar1 = *(float *)(param_1 + 0x28);
    fVar2 = local_10 * local_10 + local_c * local_c;
    local_8 = SQRT(fVar1 * fVar1 + fVar2);
    if (fVar1 < 0.0) {
      local_8 = -local_8;
    }
    local_8 = local_8 + fVar1;
    fVar1 = SQRT(2.0 / (local_8 * local_8 + fVar2));
    local_10 = fVar1 * local_10;
    local_c = fVar1 * local_c;
    local_8 = local_8 * fVar1;
    FUN_00b16970(param_1,&local_10);
    if (*(float *)(param_1 + 0x28) < 0.0) {
      param_2[10] = 0xbf800000;
    }
    FUN_00b168c0(param_2,&local_1c);
    FUN_00b16970(param_2,&local_10);
  }
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

