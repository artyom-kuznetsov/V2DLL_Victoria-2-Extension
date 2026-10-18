// FUN_0048f070 @ 0048f070  (requested 0048F070, first bytes: 55 8B EC 83 EC 24 53 56)


undefined4 FUN_0048f070(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char cStack_22;
  int local_18;
  undefined4 local_14;
  
  FUN_0048e120();
  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_18 * 4);
  puVar7 = *(undefined4 **)(param_1 + 0x14);
  if (puVar7 != (undefined4 *)0x0) {
    do {
      piVar2 = (int *)*puVar7;
      iVar4 = *piVar2;
      puVar7 = (undefined4 *)puVar7[2];
      if (*(int *)(iVar4 + 0xc) == 0) {
        local_14 = 0x2d2d2d;
        iVar4 = 0;
      }
      else {
        iVar4 = **(int **)(iVar4 + 4);
        iVar3 = *(int *)(iVar4 + 0x110);
        if ((iVar3 == 0) ||
           (iVar3 = *(int *)(iVar3 + 0x10),
           (int)(*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34) & 0xfffffff8U) < 1)) {
          puVar5 = (undefined4 *)(iVar4 + 0x130);
        }
        else {
          puVar5 = *(undefined4 **)(iVar3 + 0x34);
        }
        local_14 = *puVar5;
        iVar4 = puVar5[1];
      }
      if ((iVar4 != *(int *)(iVar1 + 0x20)) &&
         (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + iVar4 * 4) + 0x34) != 0 ||
           ((((char)local_14 == 'R' && ((char)((uint)local_14 >> 8) == 'E')) &&
            (cStack_22 = (char)((uint)local_14 >> 0x10), cStack_22 == 'B')))) ||
          (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
           (*(char *)(iVar1 + 0x1e) == 'B')))))) {
        if (param_2 == '\0') {
          return 1;
        }
        iVar4 = *piVar2;
        pcVar6 = (char *)FUN_0048e120();
        if (*pcVar6 != 'R') {
          return 1;
        }
        if (pcVar6[1] != 'E') {
          return 1;
        }
        if (pcVar6[2] != 'B') {
          return 1;
        }
        piVar2 = *(int **)(iVar4 + 4);
        while (piVar2 != (int *)0x0) {
          iVar4 = *piVar2;
          piVar2 = (int *)piVar2[2];
          if (*(int *)(iVar4 + 300) == local_18) {
            return 1;
          }
        }
        break;
      }
    } while (puVar7 != (undefined4 *)0x0);
  }
  piVar2 = *(int **)(param_1 + 4);
  while( true ) {
    do {
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      iVar4 = *piVar2;
      piVar2 = (int *)piVar2[2];
      if ((*(int *)(iVar4 + 0x110) == 0) ||
         (iVar3 = *(int *)(*(int *)(iVar4 + 0x110) + 0x10),
         (int)(*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34) & 0xfffffff8U) < 1)) {
        pcVar6 = (char *)(iVar4 + 0x130);
      }
      else {
        pcVar6 = *(char **)(iVar3 + 0x34);
      }
    } while ((*(int *)(pcVar6 + 4) == *(int *)(iVar1 + 0x20)) ||
            (((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + *(int *)(pcVar6 + 4) * 4) + 0x34) == 0 &&
              (((*pcVar6 != 'R' || (pcVar6[1] != 'E')) || (pcVar6[2] != 'B')))) &&
             (((*(char *)(iVar1 + 0x1c) != 'R' || (*(char *)(iVar1 + 0x1d) != 'E')) ||
              (*(char *)(iVar1 + 0x1e) != 'B'))))));
    if (param_2 != '\0') {
      return 0;
    }
    if (*pcVar6 != 'R') {
      return 0;
    }
    if (pcVar6[1] != 'E') break;
    if (pcVar6[2] != 'B') {
      return 0;
    }
    iVar4 = FUN_0068bb30(iVar4);
    if ((iVar4 != 0) && (*(int *)(iVar4 + 0x3c) == local_18)) {
      return 0;
    }
  }
  return 0;
}

