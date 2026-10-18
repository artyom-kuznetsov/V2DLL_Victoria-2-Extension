// FUN_008f8db0 @ 008f8db0 body=[[008f8db0, 008f8ed1]]


uint FUN_008f8db0(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  cVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar2 != '\0') {
    return CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                    *(char *)(in_ECX + 0x1c) == *(char *)(*(int *)(param_1 + 0x14) + 0x4c));
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    if (*(int *)(param_1 + 0x10) != 0) {
      iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4);
      iVar4 = FUN_009692c0();
      iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar3 + 300) * 4);
    }
  }
  else {
    iVar4 = FUN_009692c0();
    iVar3 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                    *(int *)(*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                              *(int *)(param_1 + 0x18) * 4) + 0x188) + 0x5c) * 4);
  }
  for (piVar1 = *(int **)(iVar3 + 0xe54); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == iVar4) goto LAB_008f8ebb;
  }
  if (iVar4 != *(int *)(iVar3 + 0xe64)) {
    return (uint)(*(char *)(in_ECX + 0x1c) == '\0');
  }
LAB_008f8ebb:
  return CONCAT31((int3)((uint)piVar1 >> 8),*(char *)(in_ECX + 0x1c) == '\x01');
}

