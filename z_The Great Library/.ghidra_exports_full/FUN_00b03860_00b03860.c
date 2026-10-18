// FUN_00b03860 @ 00b03860 body=[[00b03860, 00b03965]]


int FUN_00b03860(float param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  
  if (*(ushort *)(param_2 + 1) == 0) {
    return 0xffff;
  }
  uVar7 = *(ushort *)(param_2 + 1) - 1;
  iVar3 = *param_2;
  fVar1 = *(float *)(iVar3 + 0xc);
  iVar8 = 0;
  fVar2 = *(float *)(iVar3 + 0xc + (uVar7 & 0xffff) * 0x10);
  if ((fVar1 <= param_1) && (param_1 < fVar2)) {
    while( true ) {
      while( true ) {
        fVar4 = (float)(int)(uVar7 - iVar8);
        if ((int)(uVar7 - iVar8) < 0) {
          fVar4 = fVar4 + 4.2949673e+09;
        }
        local_8 = (int)(longlong)ROUND(fVar4 * ((param_1 - fVar1) / (fVar2 - fVar1)));
        uVar6 = local_8 + iVar8;
        if (*(float *)(iVar3 + 0xc + (uVar6 & 0xffff) * 0x10) <= param_1) break;
        fVar2 = *(float *)(iVar3 + 0xc + (uVar6 - 1 & 0xffff) * 0x10);
        if (fVar2 < param_1 != (fVar2 == param_1)) {
          return uVar6 - 1;
        }
        uVar7 = uVar6 - 1;
      }
      uVar5 = uVar6 + 1 & 0xffff;
      fVar1 = *(float *)(iVar3 + 0xc + uVar5 * 0x10);
      if (param_1 < fVar1) break;
      iVar8 = uVar6 + 1;
    }
    return CONCAT22((short)(uVar5 * 2 >> 0x10),(short)uVar6);
  }
  return 0xffff;
}

