// FUN_008da5c0 @ 008da5c0 body=[[008da5c0, 008da640]]


uint FUN_008da5c0(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return param_1 & 0xffffff00;
  }
  iVar1 = (**(code **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                               0x1dc) + 4))(in_ECX + 0x1c);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)*(int *)(iVar1 + 0x1c) >> 8),
                    *(int *)(in_ECX + 0x38) <= *(int *)(iVar1 + 0x1c));
  }
  FUN_0047d7b0(in_ECX + 0x1c,0);
  return (uint)(*(int *)(in_ECX + 0x38) < 1);
}

