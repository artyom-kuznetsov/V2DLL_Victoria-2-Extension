// FUN_008f1320 @ 008f1320 body=[[008f1320, 008f13ce]]


bool FUN_008f1320(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    iVar1 = FUN_00969210(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) + 0x12e8
                        );
    return iVar1 == *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = FUN_00969210(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                          *(int *)(param_1 + 0x18) * 4) + 0x188) + 200);
    return iVar1 == *(int *)(in_ECX + 0x1c);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = FUN_00969210(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) +
                         0x1a8);
    return iVar1 == *(int *)(in_ECX + 0x1c);
  }
  return false;
}

