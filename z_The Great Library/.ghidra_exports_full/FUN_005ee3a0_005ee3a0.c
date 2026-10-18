// FUN_005ee3a0 @ 005ee3a0 body=[[005ee3a0, 005ee5a5]]


void FUN_005ee3a0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  iVar3 = DAT_012588e8;
  piVar8 = (int *)*param_1;
  iVar5 = param_1[1] - (int)piVar8 >> 2;
  if (0 < iVar5) {
    do {
      for (iVar1 = *(int *)(*piVar8 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piVar8 = (int *)param_1[4];
  iVar5 = param_1[5] - (int)piVar8 >> 2;
  if (0 < iVar5) {
    do {
      for (iVar1 = *(int *)(*piVar8 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      }
      piVar8 = piVar8 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  piVar8 = *(int **)(param_1[8] + 0xc);
  while (piVar8 != (int *)0x0) {
    iVar5 = *piVar8;
    iVar1 = *(int *)(iVar5 + 8);
    piVar8 = (int *)piVar8[2];
    if (iVar1 <= *param_2) {
      cVar4 = (**(code **)(*(int *)(iVar3 + 0xa94) + 0x20))();
      if (cVar4 == '\0') {
        piVar7 = *(int **)(iVar3 + 0xaa0);
        while (piVar7 != (int *)0x0) {
          iVar2 = *piVar7;
          piVar7 = (int *)piVar7[2];
          *(int *)(iVar2 + 8) = iVar1;
        }
      }
      *(int *)(iVar3 + 0xa9c) = iVar1;
      (**(code **)(*(int *)(iVar3 + 0xa94) + 0x18))(iVar5);
    }
  }
  piVar8 = (int *)param_1[0xe];
  while (piVar8 != (int *)0x0) {
    piVar7 = (int *)piVar8[2];
    iVar3 = *piVar8;
    piVar6 = (int *)FUN_00936640();
    piVar8 = piVar7;
    if (*piVar6 <= *param_2) {
      if (*(int *)(iVar3 + 0x20) == 0) {
        FUN_00931c30(iVar3,1);
      }
      iVar1 = DAT_012588e8;
      iVar5 = *(int *)(DAT_012588e8 + 0xb50);
      piVar7 = (int *)FUN_00aae9af(0x10);
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        *piVar7 = iVar3;
        piVar7[1] = iVar5;
        piVar7[2] = 0;
        *(undefined1 *)(piVar7 + 3) = 0;
      }
      iVar3 = *(int *)(iVar1 + 0xb54);
      *(int **)(iVar1 + 0xb50) = piVar7;
      *(int *)(iVar1 + 0xb54) = iVar3 + 1;
      if (iVar3 == 0) {
        *(int **)(iVar1 + 0xb4c) = piVar7;
      }
      else {
        *(int **)(iVar5 + 8) = piVar7;
      }
    }
  }
  piVar8 = (int *)param_1[10];
  while (piVar8 != (int *)0x0) {
    iVar3 = *piVar8;
    piVar8 = (int *)piVar8[2];
    if (*(int *)(iVar3 + 0x20) == 0) {
      FUN_00931c30(iVar3,1);
    }
    FUN_009340a0(iVar3);
    iVar1 = DAT_012588e8;
    iVar5 = *(int *)(DAT_012588e8 + 0xb40);
    piVar7 = (int *)FUN_00aae9af(0x10);
    if (piVar7 == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      *piVar7 = iVar3;
      piVar7[1] = iVar5;
      piVar7[2] = 0;
      *(undefined1 *)(piVar7 + 3) = 0;
    }
    iVar3 = *(int *)(iVar1 + 0xb44);
    *(int **)(iVar1 + 0xb40) = piVar7;
    *(int *)(iVar1 + 0xb44) = iVar3 + 1;
    if (iVar3 == 0) {
      *(int **)(iVar1 + 0xb3c) = piVar7;
    }
    else {
      *(int **)(iVar5 + 8) = piVar7;
    }
  }
  return;
}

