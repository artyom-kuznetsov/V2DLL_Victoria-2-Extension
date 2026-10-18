// FUN_008f4f40 @ 008f4f40 body=[[008f4f40, 008f4f77]]


undefined4 FUN_008f4f40(int param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x18) * 4);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(int *)(in_ECX + 0x1c) <= *(int *)(*(int *)(iVar1 + 0x188) + 0x280));
  }
  return 0;
}

