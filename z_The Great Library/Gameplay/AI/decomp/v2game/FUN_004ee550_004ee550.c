// FUN_004ee550 @ 004ee550 body=[[004ee550, 004ee64c]]


int FUN_004ee550(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_EDX;
  int iVar6;
  
  iVar1 = param_1;
  piVar4 = (int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 4;
  iVar6 = 0;
  if (0 < iVar2) {
    piVar5 = (int *)(*piVar4 + 8);
    while (*piVar5 != in_EDX) {
      iVar6 = iVar6 + 1;
      piVar5 = piVar5 + 4;
      if (iVar2 <= iVar6) {
        return iVar2;
      }
    }
    iVar2 = *param_2;
    iVar6 = iVar6 * 0x10;
    iVar3 = *(int *)(*piVar4 + 0xc + iVar6);
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    *param_2 = iVar2 - iVar3;
    piVar5 = (int *)(iVar6 + 0xc + *piVar4);
    *piVar5 = *piVar5 - iVar3;
    piVar5 = (int *)(*(int *)(iVar6 + 8 + *piVar4) + 0x60);
    *piVar5 = *piVar5 - iVar3;
    iVar2 = *piVar4;
    if (*(int *)(iVar6 + 0xc + iVar2) < 1) {
      param_1 = *(undefined4 *)(iVar6 + 8 + iVar2);
      FUN_004f2680(&param_1);
      if (param_2 != *(int **)(iVar1 + 0x50)) {
        *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) - param_2[4];
        piVar4 = (int *)(*(int *)(iVar1 + 0x5c) + *(int *)(*(int *)(param_2[3] + 0x68) + 0x28) * 4);
        *piVar4 = *piVar4 - param_2[4];
        param_2[4] = 0;
      }
      iVar2 = FUN_004f2760();
      return iVar2;
    }
    iVar2 = *(int *)(iVar6 + 8 + iVar2);
    iVar3 = -iVar3;
    param_1 = iVar2;
    piVar4 = (int *)FUN_004c8d10();
    *piVar4 = *piVar4 + iVar3;
    *(int *)(iVar1 + 0x48) = *(int *)(iVar1 + 0x48) + iVar3;
    iVar6 = *(int *)(*(int *)(iVar2 + 0x68) + 0x28);
    iVar2 = *(int *)(iVar1 + 0x5c);
    piVar4 = (int *)(iVar2 + iVar6 * 4);
    *piVar4 = *piVar4 + iVar3;
    iVar2 = iVar2 + iVar6 * 4;
  }
  return iVar2;
}

