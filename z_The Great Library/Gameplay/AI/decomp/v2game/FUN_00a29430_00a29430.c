// FUN_00a29430 @ 00a29430 body=[[00a29430, 00a294cd]]


uint FUN_00a29430(ushort *param_1,short *param_2,float param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  
  uVar2 = (uint)*param_1;
  uVar3 = uVar2;
  if ((int)*param_2 <= (int)uVar2) {
    uVar3 = *(uint *)(in_ECX + 0x94);
    fVar1 = (float)*(int *)(in_ECX + 0x94);
    if ((int)uVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if ((float)uVar2 < ((float)*(int *)(in_ECX + 0xa4) * param_3) / fVar1 + (float)(int)*param_2) {
      uVar3 = (uint)param_1[1];
      if (((int)param_2[1] <= (int)uVar3) &&
         ((float)uVar3 < (float)*(int *)(in_ECX + 0xa8) * param_3 + (float)(int)param_2[1])) {
        return CONCAT31((uint3)(byte)(param_1[1] >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffff00;
}

