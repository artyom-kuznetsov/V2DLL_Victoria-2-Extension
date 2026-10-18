// FUN_00ae6fb0 @ 00ae6fb0 body=[[00ae6fb0, 00ae7047]]


void FUN_00ae6fb0(float param_1,uint *param_2,uint *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  float10 fVar3;
  undefined4 local_10;
  
  fVar1 = *(float *)(*(int *)(in_ECX + 0x18) + 0x90);
  param_1 = param_1 - *(float *)(in_ECX + 8);
  fVar3 = (float10)FUN_00b31840((double)(param_1 / fVar1));
  local_10 = (uint)(longlong)ROUND(fVar3);
  *param_2 = local_10;
  *param_3 = local_10 + 1;
  if (*(int *)(in_ECX + 0x10) - 1U < local_10 + 1) {
    *param_3 = *param_2;
  }
  fVar2 = (float)(int)*param_2;
  if ((int)*param_2 < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  *param_4 = (param_1 - fVar2 * fVar1) / fVar1;
  return;
}

