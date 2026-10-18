// FUN_004d04b0 @ 004d04b0 body=[[004d04b0, 004d0694]]


undefined4 FUN_004d04b0(int param_1,int param_2,char param_3)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(int *)(param_1 + 0x84) < 1) && (iVar6 = 8 - *(int *)(param_1 + 0x68), 0 < iVar6)) {
    if (param_3 != '\0') {
      bVar3 = false;
      iVar8 = 0;
      bVar4 = false;
      for (iVar7 = *(int *)(param_1 + 0x60); iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x224)) {
        iVar1 = *(int *)(iVar7 + 0x18);
        if (*(char *)(iVar1 + 0x13a) != '\0') {
          bVar3 = true;
        }
        if (*(char *)(iVar1 + 0x13b) != '\0') {
          bVar4 = true;
        }
        if (*(int *)(iVar1 + 0x58) == *(int *)(param_2 + 0x58)) {
          iVar8 = *(int *)(iVar7 + 0x20);
        }
      }
      if ((*(char *)(param_2 + 0x13b) != '\0') && (bVar4)) {
        return 0;
      }
      if ((*(char *)(param_2 + 0x13a) != '\0') && (bVar3)) {
        return 0;
      }
      if ((iVar8 == 0) && (iVar6 < 3)) {
        if ((*(char *)(param_2 + 0x13a) == '\0') && (!bVar3)) {
          return 0;
        }
        if ((*(char *)(param_2 + 0x13b) == '\0') && (!bVar4)) {
          return 0;
        }
      }
      if (*(char *)(param_2 + 0xd8) != '\0') {
        iVar6 = FUN_004dad40();
        iVar8 = 0;
        iVar7 = *(int *)(iVar6 + 0x10) - *(int *)(iVar6 + 0xc) >> 2;
        if (0 < iVar7) {
          do {
            piVar2 = *(int **)(*(int *)(iVar6 + 0xc) + iVar8 * 4);
            cVar5 = (**(code **)(*piVar2 + 0x24))();
            if (((cVar5 != '\0') && ((char)piVar2[0x36] == '\0')) &&
               (*(char *)((int)piVar2 + 0xd9) != '\0')) {
              iVar1 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x5c) * 4) +
                              0xbcc);
              if ((*(char *)(piVar2[0x16] + *(int *)(iVar1 + 0x2fc)) == '\0') &&
                 ((char)piVar2[0x4c] == '\0')) {
                return 0;
              }
              if (((char)piVar2[0x4c] == '\0') &&
                 (*(int *)(*(int *)(iVar1 + 8) + piVar2[0x16] * 4) < 1)) {
                return 0;
              }
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar7);
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x60);
    do {
      if (iVar6 == 0) {
        if (*(int *)(param_2 + 300) != 0) {
          cVar5 = FUN_004d0e70(param_1,*(int *)(param_2 + 300));
          if (cVar5 == '\0') {
            return 0;
          }
          if ((*(char *)(*(int *)(param_2 + 300) + 0x7c) != '\0') &&
             (cVar5 = FUN_004d0fd0(), cVar5 == '\0')) {
            return 0;
          }
        }
        return 1;
      }
      piVar2 = (int *)(iVar6 + 0x18);
      iVar6 = *(int *)(iVar6 + 0x224);
    } while (*piVar2 != param_2);
  }
  return 0;
}

