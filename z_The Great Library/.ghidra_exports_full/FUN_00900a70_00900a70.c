// FUN_00900a70 @ 00900a70 body=[[00900a70, 00900af1]]


uint FUN_00900a70(int param_1)

{
  char cVar1;
  uint uVar2;
  int in_ECX;
  
  cVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
    if (*(int *)(in_ECX + 0x1c) <= *(int *)(uVar2 + 0x1ac)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  else {
    uVar2 = *(uint *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300);
    if (*(int *)(in_ECX + 0x1c) <=
        *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar2 * 4) + 0x1ac)) {
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}

