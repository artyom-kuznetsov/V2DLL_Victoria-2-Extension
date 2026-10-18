// FUN_008ee1f0 @ 008ee1f0 body=[[008ee1f0, 008ee25c]]


undefined4 FUN_008ee1f0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x31) ==
                    *(char *)(in_ECX + 0x1c));
  }
  return CONCAT31((int3)((uint)*(int *)(DAT_012587e4 + 4) >> 8),
                  *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0x31) == *(char *)(in_ECX + 0x1c));
}

