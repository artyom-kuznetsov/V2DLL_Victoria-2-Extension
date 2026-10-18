// FUN_00b16be0 @ 00b16be0 body=[[00b16be0, 00b16d4e]]


void FUN_00b16be0(float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  local_4 = DAT_00ef259c ^ (uint)&local_1c;
  iVar5 = FUN_00b16700(param_2);
  if (iVar5 < 0) {
    FUN_00b16a20(param_1,param_3);
    __security_check_cookie(local_4 ^ (uint)&local_1c);
    return;
  }
  local_1c = *(undefined4 *)(param_2 + iVar5 * 4);
  local_18 = *(undefined4 *)(param_2 + 0x10 + iVar5 * 4);
  local_14 = *(undefined4 *)(param_2 + 0x20 + iVar5 * 4);
  FUN_00b16840(&local_1c,&local_1c);
  FUN_00b168c0(param_1,&local_1c);
  local_10 = param_1[6] * param_1[1] - param_1[2] * param_1[5];
  local_c = param_1[2] * param_1[4] - param_1[6] * *param_1;
  local_8 = *param_1 * param_1[5] - param_1[4] * param_1[1];
  FUN_00b16840(&local_10,&local_10);
  FUN_00b16970(param_1,&local_10);
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[4];
  fVar4 = param_1[5];
  if (fVar4 * fVar1 <= fVar3 * fVar2) {
    fVar4 = fVar4 - fVar1;
    fVar3 = fVar3 + fVar2;
    fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    fVar4 = fVar4 / fVar1;
    fVar3 = fVar3 / fVar1;
    param_3[5] = fVar4;
    *param_3 = -fVar4;
    param_3[4] = fVar3;
  }
  else {
    fVar4 = fVar4 + fVar1;
    fVar3 = fVar3 - fVar2;
    fVar1 = SQRT(fVar4 * fVar4 + fVar3 * fVar3);
    fVar4 = fVar4 / fVar1;
    fVar3 = fVar3 / fVar1;
    param_3[5] = fVar4;
    *param_3 = fVar4;
    param_3[4] = fVar3;
    fVar3 = -fVar3;
  }
  param_3[1] = fVar3;
  param_3[9] = 0.0;
  param_3[6] = 0.0;
  param_3[8] = 0.0;
  param_3[2] = 0.0;
  param_3[10] = 1.0;
  FUN_00b168c0(param_3,&local_1c);
  FUN_00b16970(param_3,&local_10);
  __security_check_cookie(local_4 ^ (uint)&local_1c);
  return;
}

