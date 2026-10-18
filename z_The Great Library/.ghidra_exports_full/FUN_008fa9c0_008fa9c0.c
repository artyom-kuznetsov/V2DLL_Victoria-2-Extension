// FUN_008fa9c0 @ 008fa9c0 body=[[008fa9c0, 008fa9fe]]


undefined4 FUN_008fa9c0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  (*(int *)(iVar1 + 0x142c) != 0) == (bool)*(char *)(in_ECX + 0x1c));
}

