// FUN_008dbc00 @ 008dbc00 body=[[008dbc00, 008dbc2f]]


undefined4 FUN_008dbc00(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(in_ECX + 0x1c) == *(int *)(iVar1 + 0xc00));
}

