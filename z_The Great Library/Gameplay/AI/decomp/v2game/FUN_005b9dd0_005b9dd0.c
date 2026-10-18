// FUN_005b9dd0 @ 005b9dd0 body=[[005b9dd0, 005b9ebd]]


bool FUN_005b9dd0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c);
  iVar3 = (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24;
  iVar5 = 0;
  if (0 < iVar3) {
    piVar4 = (int *)(*(int *)(iVar2 + 200) + 4);
    do {
      if (*piVar4 == *(int *)(iVar1 + 0xb4)) {
        piVar4 = (int *)(*(int *)(iVar2 + 200) + iVar5 * 0x24);
        goto LAB_005b9e28;
      }
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 9;
    } while (iVar5 < iVar3);
  }
  piVar4 = *(int **)(iVar2 + 200);
LAB_005b9e28:
  if ((*piVar4 == 4) ||
     (((*piVar4 == 3 && (*(int *)(*(int *)(DAT_012588e8 + 8) + piVar4[3] * 4) == 0)) ||
      (param_1 == param_2)))) {
    return false;
  }
  if (*(char *)(iVar2 + 0x2a) == '\0') {
    if ((*(char *)(iVar1 + 0x2a) != '\0') && (*(int *)(iVar1 + 0xdc) != *(int *)(param_1 + 0x58))) {
      return false;
    }
  }
  else {
    if (*(char *)(iVar1 + 0x2a) != '\0') {
      return false;
    }
    if (*(int *)(iVar2 + 0xdc) != *(int *)(param_2 + 0x58)) {
      return false;
    }
  }
  FUN_0049b7f0(&param_1,*(undefined4 *)(param_2 + 0x58),0);
  return 0 < param_1;
}

