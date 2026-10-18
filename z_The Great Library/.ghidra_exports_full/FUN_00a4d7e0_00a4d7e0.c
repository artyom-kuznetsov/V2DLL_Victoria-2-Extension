// FUN_00a4d7e0 @ 00a4d7e0 body=[[00a4d7e0, 00a4da90]]


undefined4
FUN_00a4d7e0(int param_1,undefined4 *param_2,float param_3,float param_4,float param_5,char param_6)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  undefined1 local_74 [4];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  float local_64 [4];
  float local_54;
  float local_50;
  float local_4c;
  float local_44;
  float local_40;
  float local_3c;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  iVar1 = param_1;
  pfVar2 = (float *)(param_1 + 0x50);
  pfVar4 = local_64;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  pfVar2 = (float *)FUN_007eb4f0(local_64);
  pfVar4 = local_64;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + 1;
    pfVar4 = pfVar4 + 1;
  }
  D3DXMatrixInverse(local_64,0,local_64);
  if (param_6 == '\0') {
    local_1c = local_54 * param_4 + local_64[0] * param_3 + local_44 * param_5;
    local_18 = local_50 * param_4 + local_64[1] * param_3 + local_40 * param_5;
    local_14 = local_4c * param_4 + local_64[2] * param_3 + local_3c * param_5;
    local_10 = local_34;
    local_c = local_30;
    local_8 = local_2c;
  }
  else {
    local_10 = local_54 * param_4 + local_64[0] * param_3 + local_44 * param_5 + local_34;
    local_c = local_64[1] * param_3 + local_50 * param_4 + local_40 * param_5 + local_30;
    param_5 = local_4c * param_4 + local_64[2] * param_3 + local_3c * param_5 + local_2c;
    local_8 = -10.0;
    local_1c = 0.0;
    local_18 = 0.0;
    local_14 = DAT_00f092fc;
    param_3 = local_10;
    param_4 = local_c;
  }
  D3DXIntersect(*(undefined4 *)(*(int *)(iVar1 + 0x44) + 8),&local_10,&local_1c,&param_1,local_68,
                local_6c,local_74,&local_20,0,local_70);
  if (param_1 != 0) {
    *param_2 = local_20;
    return 1;
  }
  return 0;
}

