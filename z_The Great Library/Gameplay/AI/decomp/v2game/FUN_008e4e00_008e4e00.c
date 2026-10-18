// FUN_008e4e00 @ 008e4e00 body=[[008e4e00, 008e4ead]]


bool FUN_008e4e00(int param_1)

{
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    return *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                            0x1338) + *(int *)(*(int *)(in_ECX + 0x1c) + 0x28) * 4) != 0;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    return *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4)
                            + 0x1f8) + *(int *)(*(int *)(in_ECX + 0x1c) + 0x28) * 4) != 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    return *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                              *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x118) +
                   *(int *)(*(int *)(in_ECX + 0x1c) + 0x28) * 4) != 0;
  }
  return false;
}

