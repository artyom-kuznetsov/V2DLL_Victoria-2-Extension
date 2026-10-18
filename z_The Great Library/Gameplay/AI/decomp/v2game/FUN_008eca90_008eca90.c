// FUN_008eca90 @ 008eca90 body=[[008eca90, 008ecb49]]


uint FUN_008eca90(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  bool bVar4;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x20))();
    if ((char)uVar3 != '\0') {
      uVar3 = *(uint *)(*(int *)(DAT_012587e4 + 4) +
                       *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 100) + 300) * 4);
      goto LAB_008ecabc;
    }
    if (*(int *)(param_1 + 0x10) == 0) goto LAB_008ecb40;
    iVar2 = *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(param_1 + 0x10) * 4) + 300);
    cVar1 = *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar2 * 4) + 0x12d0);
    uVar3 = CONCAT31((int3)((uint)iVar2 >> 8),cVar1);
    bVar4 = cVar1 == *(char *)(in_ECX + 0x1c);
  }
  else {
    uVar3 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
LAB_008ecabc:
    bVar4 = *(char *)(uVar3 + 0x12d0) == *(char *)(in_ECX + 0x1c);
  }
  if (bVar4) {
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
LAB_008ecb40:
  return uVar3 & 0xffffff00;
}

