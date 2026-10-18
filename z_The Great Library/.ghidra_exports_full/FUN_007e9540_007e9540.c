// FUN_007e9540 @ 007e9540 body=[[007e9540, 007e958a]]


uint FUN_007e9540(ushort *param_1,short *param_2)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = (uint)*param_1;
  if (((int)*param_2 < (int)uVar1) && ((int)uVar1 < *(int *)(in_ECX + 0x1e4) + (int)*param_2)) {
    uVar1 = (uint)param_1[1];
    if (((int)param_2[1] < (int)uVar1) && ((int)uVar1 < *(int *)(in_ECX + 0x1e8) + (int)param_2[1]))
    {
      return CONCAT31((uint3)(byte)(param_1[1] >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}

