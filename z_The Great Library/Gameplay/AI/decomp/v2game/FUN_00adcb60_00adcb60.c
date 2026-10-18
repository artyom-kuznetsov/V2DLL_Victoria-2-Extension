// FUN_00adcb60 @ 00adcb60 body=[[00adcb60, 00adcc5d]]


uint FUN_00adcb60(float param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  
  if (*(ushort *)(param_2 + 1) == 0) {
    return 0xffff;
  }
  uVar6 = *(ushort *)(param_2 + 1) - 1;
  iVar3 = *param_2;
  fVar1 = *(float *)(iVar3 + 4);
  iVar7 = 0;
  fVar2 = *(float *)(iVar3 + 4 + (uVar6 & 0xffff) * 8);
  if ((fVar1 <= param_1) && (param_1 < fVar2)) {
    while( true ) {
      while( true ) {
        fVar4 = (float)(int)(uVar6 - iVar7);
        if ((int)(uVar6 - iVar7) < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        local_8 = (int)(longlong)ROUND(fVar4 * ((param_1 - fVar1) / (fVar2 - fVar1)));
        uVar5 = local_8 + iVar7;
        if (*(float *)(iVar3 + 4 + (uVar5 & 0xffff) * 8) <= param_1) break;
        fVar2 = *(float *)(iVar3 + 4 + (uVar5 - 1 & 0xffff) * 8);
        if (fVar2 < param_1 != (fVar2 == param_1)) {
          return uVar5 - 1;
        }
        uVar6 = uVar5 - 1;
      }
      fVar1 = *(float *)(iVar3 + 4 + (uVar5 + 1 & 0xffff) * 8);
      if (param_1 < fVar1) break;
      iVar7 = uVar5 + 1;
    }
    return uVar5 & 0xffff;
  }
  return 0xffff;
}

