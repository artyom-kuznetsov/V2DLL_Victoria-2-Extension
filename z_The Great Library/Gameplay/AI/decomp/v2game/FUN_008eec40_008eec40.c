// FUN_008eec40 @ 008eec40 body=[[008eec40, 008eece0]]


undefined4 FUN_008eec40(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    iVar2 = *(int *)(DAT_012587e4 + 4);
    iVar3 = *(int *)(iVar2 + *(int *)(param_1 + 0xc) * 4);
  }
  else {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300);
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4);
  }
  if ((*(char *)(iVar3 + 0x12d0) != '\0') && (*(char *)(iVar3 + 0x31) == '\0')) {
    iVar2 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x50) / 1000;
    if (*(int *)(iVar3 + 0x1404) <= iVar2) {
      return CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(in_ECX + 0x1c) == '\x01');
    }
  }
  return CONCAT31((int3)((uint)iVar2 >> 8),*(char *)(in_ECX + 0x1c) == '\0');
}

