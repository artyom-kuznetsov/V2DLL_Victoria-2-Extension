// FUN_0084e740 @ 0084e740 body=[[0084e740, 0084e83a] [0084e840, 0084e9e3]]


undefined4 FUN_0084e740(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  
  if (param_2[0x38] != 0) {
    iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + param_2[0x38] * 4);
    iVar8 = *(int *)(iVar6 + 0x110);
    if ((iVar8 == 0) ||
       (iVar1 = *(int *)(iVar8 + 0x10),
       (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 1)) {
      pcVar9 = (char *)(iVar6 + 0x130);
    }
    else {
      pcVar9 = *(char **)(iVar1 + 0x34);
    }
    iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
    if (*(int *)(pcVar9 + 4) != *(int *)(iVar1 + 0x20)) {
      if (*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(pcVar9 + 4) * 4) + 0x34) != 0) {
        return 1;
      }
      if (((*pcVar9 == 'R') && (pcVar9[1] == 'E')) && (pcVar9[2] == 'B')) {
        return 1;
      }
      if (((*(char *)(iVar1 + 0x1c) == 'R') && (*(char *)(iVar1 + 0x1d) == 'E')) &&
         (*(char *)(iVar1 + 0x1e) == 'B')) {
        return 1;
      }
    }
    if ((iVar8 == 0) ||
       (iVar8 = *(int *)(iVar8 + 0x10),
       (int)(*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34) & 0xfffffff8U) < 1)) {
      iVar8 = iVar6 + 0x130;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x34);
    }
    if ((*(int *)(iVar8 + 4) == *(int *)(param_1 + 0x38)) &&
       (cVar4 = FUN_0048f070(*(undefined4 *)(iVar6 + 0xe8),1), cVar4 != '\0')) {
      return 1;
    }
  }
  piVar5 = *(int **)(param_1 + 0x214);
  if (piVar5 == (int *)0x0) {
    return 1;
  }
  do {
    piVar2 = (int *)*piVar5;
    piVar5 = (int *)piVar5[2];
    if ((param_2 != piVar2) && (0 < piVar2[0x38])) {
      iVar6 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + piVar2[0x38] * 4);
      iVar8 = *(int *)(iVar6 + 0x110);
      if ((iVar8 == 0) ||
         (iVar1 = *(int *)(iVar8 + 0x10),
         (int)(*(int *)(iVar1 + 0x38) - *(int *)(iVar1 + 0x34) & 0xfffffff8U) < 1)) {
        pcVar9 = (char *)(iVar6 + 0x130);
      }
      else {
        pcVar9 = *(char **)(iVar1 + 0x34);
      }
      iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
      if ((*(int *)(pcVar9 + 4) == *(int *)(iVar1 + 0x20)) ||
         (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(pcVar9 + 4) * 4) + 0x34) == 0 &&
           (((*pcVar9 != 'R' || (pcVar9[1] != 'E')) || (pcVar9[2] != 'B')))) &&
          (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
           (*(char *)(iVar1 + 0x1e) != 'B')))))) {
        if ((iVar8 == 0) ||
           (iVar8 = *(int *)(iVar8 + 0x10),
           (int)(*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34) & 0xfffffff8U) < 1)) {
          iVar8 = iVar6 + 0x130;
        }
        else {
          iVar8 = *(int *)(iVar8 + 0x34);
        }
        if ((*(int *)(iVar8 + 4) != *(int *)(param_1 + 0x38)) ||
           (cVar4 = FUN_0048f070(*(undefined4 *)(iVar6 + 0xe8),1), cVar4 == '\0'))
        goto LAB_0084e9c4;
      }
      iVar6 = (**(code **)(*piVar2 + 0x1b4))();
      if ((iVar6 != 0) || ((char)piVar2[0x39] != '\0')) {
        puVar7 = (undefined4 *)(**(code **)(*piVar2 + 0x1a4))();
        iVar6 = 0;
        for (piVar3 = (int *)*puVar7; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[2]) {
          iVar6 = iVar6 + *(int *)(*piVar3 + 0x98);
        }
        (**(code **)(*piVar2 + 0x1b4))();
        iVar8 = FUN_005dc590();
        if (iVar8 < iVar6) {
          return 0;
        }
      }
      if (((0 < piVar2[0x2d]) && (iVar6 = *(int *)piVar2[0x2b], iVar6 != 0)) &&
         ((*(int *)(iVar6 + 0xec) < 1 ||
          (*(int *)(*(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar6 + 0xe8) * 4) + 0x58)
           != piVar2[0x38])))) {
        return 0;
      }
    }
LAB_0084e9c4:
    if (piVar5 == (int *)0x0) {
      return 1;
    }
  } while( true );
}

