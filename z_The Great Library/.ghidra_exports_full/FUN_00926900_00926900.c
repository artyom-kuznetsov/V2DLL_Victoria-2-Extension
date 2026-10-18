// FUN_00926900 @ 00926900 body=[[00926900, 00926936] [00926940, 00926991]]


int FUN_00926900(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 4) * 4) + 0x9f8);
  iVar2 = 0;
  if (piVar4 != (int *)0x0) {
    do {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
      piVar4 = (int *)piVar4[2];
      if ((((*(int *)(iVar1 + 300) != 0) && (iVar1 = *(int *)(iVar1 + 0x158), iVar1 != 0)) &&
          (iVar1 = *(int *)(iVar1 + 0x18), iVar1 != 0)) &&
         (piVar3 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar1 * 4) + 0xec),
         piVar3 != (int *)0x0)) {
        do {
          iVar1 = *piVar3;
          piVar3 = (int *)piVar3[2];
          if (*(int *)(iVar1 + 0xc4) == *(int *)(param_1 + 4)) {
            iVar2 = iVar2 + 1;
          }
        } while (piVar3 != (int *)0x0);
      }
    } while (piVar4 != (int *)0x0);
  }
  return iVar2;
}

