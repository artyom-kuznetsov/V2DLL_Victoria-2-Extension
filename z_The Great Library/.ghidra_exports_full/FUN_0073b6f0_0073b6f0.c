// FUN_0073b6f0 @ 0073b6f0 body=[[0073b6f0, 0073b7c3]]


int FUN_0073b6f0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar4 = DAT_012588e8;
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar1 + 0x164) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(iVar1 + 0x15c);
  }
  iVar3 = 0;
  piVar5 = (int *)(iVar6 + 0x98);
  do {
    if (*piVar5 == *(int *)(param_1 + 0x2c)) {
      iVar6 = *(int *)(iVar6 + 0x9c + iVar3 * 0x1c);
      goto LAB_0073b733;
    }
    iVar3 = iVar3 + 1;
    piVar5 = piVar5 + 7;
  } while (iVar3 < 4);
  iVar6 = 0;
LAB_0073b733:
  if (*(int *)(DAT_012588e8 + 0xb60) == *(int *)(param_1 + 0x2c)) {
    iVar3 = DAT_012588e8 + 0xb5c;
    cVar2 = FUN_004bbd60(iVar1);
    if (cVar2 != '\0') {
      if ((*(int *)(*(int *)(param_1 + 0x30) + 0x164) != 0) &&
         (**(int **)(*(int *)(param_1 + 0x30) + 0x15c) != 0)) {
        iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar4 + 0xb60) * 4);
        iVar4 = FUN_004cd300(iVar3);
        cVar2 = iVar4 <= *(int *)(iVar1 + 0x15c4) - *(int *)(iVar1 + 0x15c0);
      }
      if (cVar2 != '\0') {
        return iVar6 + 1000;
      }
    }
  }
  return iVar6;
}

