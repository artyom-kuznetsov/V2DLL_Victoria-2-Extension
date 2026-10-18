// FUN_004c8580 @ 004c8580  (requested 004C8580, first bytes: 55 8B EC 8B 4D 0C 8B 81)


void FUN_004c8580(int param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  if (((*(char *)(*(int *)(param_2[0x37] + 0x5c) + 0x2a) != '\0') &&
      (cVar2 = (**(code **)(*param_2 + 0x3c))(), cVar2 != '\0')) ||
     (piVar3 = (int *)FUN_004f2680(&param_2), *piVar3 == *(int *)(param_1 + 0x14c))) {
    return;
  }
  piVar3 = (int *)FUN_004c8d10();
  iVar1 = *piVar3;
  iVar6 = 0;
  if (param_2[0x1d] == 0) {
    if ((0 < param_2[0x3b]) && (cVar2 = (**(code **)(*param_2 + 0x3c))(), cVar2 == '\0')) {
      iVar6 = 1;
    }
  }
  else {
    cVar2 = FUN_005cf260();
    if (cVar2 == '\0') {
      iVar6 = 3;
    }
    else {
      iVar6 = 2;
    }
  }
  piVar3 = (int *)FUN_004c8d10();
  *piVar3 = iVar6;
  local_8 = param_1 + 0x158;
  piVar3 = (int *)FUN_004f2680(&param_2);
  if (*piVar3 == *(int *)(param_1 + 0x15c)) {
LAB_004c87a0:
    FUN_004c83e0(param_1);
    return;
  }
  piVar3 = (int *)FUN_004c8d10();
  piVar3 = (int *)*piVar3;
  if ((char)param_2[0x41] == '\0') {
    uVar7 = 1;
  }
  else {
    uVar7 = 2;
  }
  (**(code **)(*piVar3 + 0x60))(uVar7);
  iVar4 = -1;
  if (*(int **)(param_1 + 0x1e4 + iVar1 * 0x38) == piVar3) {
    iVar4 = 0;
  }
  if (*(int **)(param_1 + 0x1ec + iVar1 * 0x38) == piVar3) {
    iVar4 = 1;
  }
  if (*(int **)(param_1 + 500 + iVar1 * 0x38) == piVar3) {
    iVar4 = 2;
  }
  if (*(int **)(param_1 + 0x1fc + iVar1 * 0x38) == piVar3) {
    iVar4 = 3;
  }
  if (*(int **)(param_1 + 0x204 + iVar1 * 0x38) == piVar3) {
    iVar4 = 4;
  }
  if (*(int **)(param_1 + 0x20c + iVar1 * 0x38) == piVar3) {
    iVar4 = 5;
  }
  if (*(int **)(param_1 + 0x214 + iVar1 * 0x38) == piVar3) {
    iVar4 = 6;
  }
  else if (iVar4 < 0) goto LAB_004c870c;
  iVar4 = iVar1 * 7 + iVar4;
  *(undefined4 *)(param_1 + 0x1e4 + iVar4 * 8) = 0;
  *(undefined4 *)(param_1 + 0x1e0 + iVar4 * 8) = 0;
LAB_004c870c:
  iVar4 = 0;
  piVar5 = (int *)(param_1 + 0x1e0 + iVar6 * 0x38);
  do {
    if (*piVar5 == 0) {
      if (-1 < iVar4) {
        iVar4 = iVar4 + iVar6 * 7;
        *(int **)(param_1 + 0x1e4 + iVar4 * 8) = piVar3;
        *(int **)(param_1 + 0x1e0 + iVar4 * 8) = param_2;
        FUN_004c87b0(iVar6);
        FUN_004c87b0(iVar1);
        goto LAB_004c87a0;
      }
      break;
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 2;
  } while (iVar4 < 7);
  FUN_009962f0(*(int *)(param_1 + 0x24) + 0x11dc);
  FUN_004c9400(&local_10,&param_2);
  FUN_00445600(local_10,local_c);
  return;
}

