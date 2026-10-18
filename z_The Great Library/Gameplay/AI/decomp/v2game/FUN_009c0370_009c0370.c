// FUN_009c0370 @ 009c0370 body=[[009c0370, 009c0843]]


void FUN_009c0370(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int unaff_ESI;
  bool bVar5;
  float10 fVar6;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  fVar6 = (float10)FUN_00401030(param_5 * param_5 + param_4 * param_4 + param_6 * param_6);
  fVar1 = (float)((float10)1 / fVar6);
  param_5 = fVar1 * param_5;
  fVar2 = -param_2 / param_5;
  local_20 = fVar1 * param_4 * fVar2 + param_1;
  local_1c = param_5 * fVar2 + param_2;
  local_18 = fVar1 * param_6 * fVar2 + param_3;
  fVar2 = (1000.0 - param_2) / param_5;
  local_2c = fVar2 * fVar1 * param_4 + param_1;
  local_28 = fVar2 * param_5 + param_2;
  local_24 = fVar2 * fVar1 * param_6 + param_3;
  local_14 = local_20 - local_2c;
  local_10 = local_1c - local_28;
  local_c = local_18 - local_24;
  fVar1 = 1.0 / SQRT(local_14 * local_14 + local_10 * local_10 + local_c * local_c);
  local_14 = local_14 * fVar1;
  local_10 = local_10 * fVar1;
  local_c = local_c * fVar1;
  if (*(char *)(*(int *)(unaff_ESI + 0x140) + 0x15f) == '\0') {
    cVar3 = FUN_009c0e20();
    bVar5 = cVar3 == '\0';
  }
  else {
    iVar4 = FUN_00acea90(0,&local_2c);
    bVar5 = iVar4 == 0;
  }
  if (!bVar5) {
    return;
  }
  return;
}

