// FUN_00900fc0 @ 00900fc0 body=[[00900fc0, 00900ff2]]


undefined4 FUN_00900fc0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  return CONCAT31((int3)((uint)iVar1 >> 8),
                  *(int *)(iVar1 + 0xe40) == *(int *)(*(int *)(in_ECX + 0x1c) + 0x4c));
}

