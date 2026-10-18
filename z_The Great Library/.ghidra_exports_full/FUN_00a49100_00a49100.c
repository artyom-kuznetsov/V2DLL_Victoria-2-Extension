// FUN_00a49100 @ 00a49100 body=[[00a49100, 00a4914a]]


uint FUN_00a49100(ushort *param_1,short *param_2)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = (uint)*param_1;
  if (((int)*param_2 < (int)uVar1) && ((int)uVar1 < *(int *)(in_ECX + 0x8c) + (int)*param_2)) {
    uVar1 = (uint)param_1[1];
    if (((int)param_2[1] < (int)uVar1) && ((int)uVar1 < *(int *)(in_ECX + 0x90) + (int)param_2[1]))
    {
      return CONCAT31((uint3)(byte)(param_1[1] >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

