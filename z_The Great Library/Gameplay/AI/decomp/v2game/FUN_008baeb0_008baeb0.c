// FUN_008baeb0 @ 008baeb0 body=[[008baeb0, 008baf22]]


undefined4 FUN_008baeb0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar2 != '\0') {
    iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300);
    return CONCAT31((int3)((uint)iVar1 >> 8),
                    *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar1 * 4) + 0x67c) ==
                    *(char *)(in_ECX + 0x1c));
  }
  return CONCAT31((int3)((uint)*(int *)(DAT_012587e4 + 4) >> 8),
                  *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4) +
                           0x67c) == *(char *)(in_ECX + 0x1c));
}

