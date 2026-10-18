// FUN_008e41c0 @ 008e41c0 body=[[008e41c0, 008e4223]]


uint FUN_008e41c0(int param_1)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    return (uint)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                            *(int *)(param_1 + 0x10) * 4) + 0x5c) + 0x14) ==
                 *(int *)(in_ECX + 0x1c));
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if ((char)uVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 0x5c) + 0x14);
    return CONCAT31((int3)((uint)iVar1 >> 8),iVar1 == *(int *)(in_ECX + 0x1c));
  }
  return uVar2 & 0xffffff00;
}

