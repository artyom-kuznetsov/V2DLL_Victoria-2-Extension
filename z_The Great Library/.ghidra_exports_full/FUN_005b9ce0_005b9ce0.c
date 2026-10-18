// FUN_005b9ce0 @ 005b9ce0 body=[[005b9ce0, 005b9d8d]]


uint FUN_005b9ce0(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  bool bVar8;
  
  if ((*(char *)(in_ECX + 8) != '\0') ||
     ((0 < *(int *)(param_1 + 0x2b8) && (0 < *(int *)(param_2 + 0x2b8))))) {
    piVar1 = (int *)(param_2 + 0x58);
    iVar2 = *(int *)(param_1 + 0x5c);
    iVar4 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24;
    if (0 < iVar4) {
      piVar6 = (int *)(*(int *)(iVar2 + 200) + 4);
      iVar7 = 0;
      do {
        if (*piVar1 == *piVar6) goto LAB_005b9d4f;
        iVar7 = iVar7 + 1;
        piVar6 = piVar6 + 9;
      } while (iVar7 < iVar4);
    }
    iVar7 = -1;
LAB_005b9d4f:
    param_2 = iVar7 * 9;
    if (*(int *)(*(int *)(iVar2 + 200) + iVar7 * 0x24) != 1) {
      piVar6 = *(int **)(in_ECX + 4);
      uVar5 = CONCAT31((int3)(param_2 >> 8),1);
      if (piVar6 != (int *)0x0) {
        piVar3 = (int *)piVar6[1];
        piVar6 = (int *)*piVar6;
        bVar8 = piVar6 == piVar3;
        if (!bVar8) {
          do {
            if (*piVar6 == *piVar1) break;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar3);
          bVar8 = piVar6 == piVar3;
        }
        uVar5 = CONCAT31((int3)((uint)piVar6 >> 8),bVar8);
      }
      return uVar5;
    }
  }
  return param_2 & 0xffffff00;
}

