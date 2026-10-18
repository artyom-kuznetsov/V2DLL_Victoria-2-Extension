// FUN_009031a0 @ 009031a0 body=[[009031a0, 00903228]]


undefined4 FUN_009031a0(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) + 100);
  uVar3 = *(uint *)(iVar2 + 0x148);
  while ((*(uint *)(iVar2 + 0x148) <= uVar3 && (uVar3 < *(uint *)(iVar2 + 0x14c)))) {
    piVar1 = (int *)(uVar3 + 4);
    uVar3 = uVar3 + 8;
    if (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *piVar1 * 4) + 0xe64) ==
        *(int *)(*(int *)(param_1 + 0x14) + 0x6c)) {
      return CONCAT31((int3)(uVar3 >> 8),*(char *)(in_ECX + 0x1c) == '\x01');
    }
  }
  return CONCAT31((int3)(uVar3 >> 8),*(char *)(in_ECX + 0x1c) == '\0');
}

