// FUN_0068e100 @ 0068e100 body=[[0068e100, 0068e1d5]]


void FUN_0068e100(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_3 < 1) {
    return;
  }
LAB_0068e114:
  if (*(char *)(iVar5 + param_2) == '\0') {
LAB_0068e185:
    piVar3 = *(int **)(param_1 + 0x94);
    for (piVar4 = piVar3; piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      if (*piVar4 == iVar5) goto joined_r0x0068e1a8;
    }
  }
  else {
    for (piVar4 = *(int **)(param_1 + 0x94); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[2]) {
      if (*piVar4 == iVar5) {
        if (*(char *)(iVar5 + param_2) == '\0') goto LAB_0068e185;
        goto LAB_0068e1c5;
      }
    }
    iVar1 = *(int *)(param_1 + 0x98);
    piVar4 = (int *)FUN_00aae9af(0x10);
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      *piVar4 = iVar5;
      piVar4[1] = iVar1;
      piVar4[2] = 0;
      *(undefined1 *)(piVar4 + 3) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x9c);
    *(int **)(param_1 + 0x98) = piVar4;
    *(int *)(param_1 + 0x9c) = iVar2 + 1;
    if (iVar2 == 0) {
      *(int **)(param_1 + 0x94) = piVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar4;
    }
  }
  goto LAB_0068e1c5;
joined_r0x0068e1a8:
  for (; (piVar3 != (int *)0x0 && (*piVar3 != iVar5)); piVar3 = (int *)piVar3[2]) {
  }
  FUN_005f2ae0(piVar3);
LAB_0068e1c5:
  iVar5 = iVar5 + 1;
  if (param_3 <= iVar5) {
    return;
  }
  goto LAB_0068e114;
}

