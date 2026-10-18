// FUN_00aed370 @ 00aed370 body=[[00aed370, 00aed3ef]]


void FUN_00aed370(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *in_ECX;
  float *pfVar4;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  pfVar4 = &local_30;
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = 0;
  local_30 = -*in_ECX;
  local_2c = -in_ECX[1];
  local_28 = -in_ECX[2];
  local_24 = in_ECX[3];
  uVar2 = FUN_00aed250(local_10);
  puVar3 = (undefined4 *)FUN_00aed250(&local_20,uVar2,pfVar4);
  uVar2 = puVar3[1];
  uVar1 = puVar3[2];
  *param_1 = *puVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return;
}

