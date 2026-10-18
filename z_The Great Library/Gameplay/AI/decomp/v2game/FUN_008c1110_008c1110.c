// FUN_008c1110 @ 008c1110 body=[[008c1110, 008c114f]]


undefined4 FUN_008c1110(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  *(int *)(in_ECX + 0x1c) <=
                  *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                          0xddc) - *(int *)(iVar1 + 0xde0));
}

