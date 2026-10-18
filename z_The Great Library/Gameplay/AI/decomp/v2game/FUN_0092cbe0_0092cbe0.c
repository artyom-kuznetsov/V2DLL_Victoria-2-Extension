// FUN_0092cbe0 @ 0092cbe0 body=[[0092cbe0, 0092cc41]]


uint FUN_0092cbe0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x14) * 4);
  piVar2 = *(int **)(iVar1 + 0xe8c);
  piVar4 = piVar2;
  while ((piVar2 <= piVar4 && (piVar4 < *(int **)(iVar1 + 0xe90)))) {
    iVar3 = *piVar4;
    piVar4 = piVar4 + 1;
    if (*(int *)(iVar3 + 0xc) == *(int *)(in_ECX + 0xc)) {
      return (uint)piVar4 & 0xffffff00;
    }
  }
  return CONCAT31((int3)((uint)piVar4 >> 8),1);
}

