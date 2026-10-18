// FUN_008cd8c0 @ 008cd8c0 body=[[008cd8c0, 008cd924]]


undefined4 FUN_008cd8c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  piVar3 = *(int **)(iVar1 + 0x4d8);
  while (piVar3 != (int *)0x0) {
    iVar2 = *piVar3;
    piVar3 = (int *)piVar3[2];
    if (*(int *)(iVar2 + 8) == *(int *)(in_ECX + 0x1c)) goto LAB_008cd91c;
  }
  piVar3 = *(int **)(iVar1 + 0x4e8);
  do {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    iVar1 = *piVar3;
    piVar3 = (int *)piVar3[2];
  } while (iVar1 != *(int *)(in_ECX + 0x1c));
LAB_008cd91c:
  return CONCAT31((int3)((uint)piVar3 >> 8),1);
}

