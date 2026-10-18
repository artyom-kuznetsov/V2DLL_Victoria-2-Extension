// FUN_00a4e640 @ 00a4e640 body=[[00a4e640, 00a4e68a]]


uint FUN_00a4e640(ushort *param_1,short *param_2)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = (uint)*param_1;
  if (((int)*param_2 < (int)uVar1) && ((int)uVar1 < *(int *)(in_ECX + 0x98) + (int)*param_2)) {
    uVar1 = (uint)param_1[1];
    if (((int)param_2[1] < (int)uVar1) && ((int)uVar1 < *(int *)(in_ECX + 0x9c) + (int)param_2[1]))
    {
      return CONCAT31((uint3)(byte)(param_1[1] >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

