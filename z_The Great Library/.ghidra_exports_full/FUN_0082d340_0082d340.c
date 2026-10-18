// FUN_0082d340 @ 0082d340 body=[[0082d340, 0082d5ce] [0082d5d0, 0082d838] [0082d840, 0082d89a]]


undefined4 FUN_0082d340(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  int local_10;
  
  if ((*(int *)(param_2 + 0x70) != 0) && (param_3 == *(int *)(param_2 + 0xdc))) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_3 + 300) != iVar1) {
    if ((*(int *)(param_3 + 0x110) == 0) ||
       (iVar8 = *(int *)(*(int *)(param_3 + 0x110) + 0x10),
       (int)(*(int *)(iVar8 + 0x38) - *(int *)(iVar8 + 0x34) & 0xfffffff8U) < 1)) {
      iVar8 = param_3 + 0x130;
    }
    else {
      iVar8 = *(int *)(iVar8 + 0x34);
    }
    if (*(int *)(iVar8 + 4) != iVar1) {
      iVar8 = *(int *)(DAT_012587e4 + 4);
      cVar7 = FUN_0051b040(*(undefined4 *)(iVar8 + *(int *)(param_1 + 0x38) * 4));
      if ((cVar7 != '\0') && (*(char *)(param_1 + 0xf7) == '\0')) {
        cVar7 = FUN_0051af10(0);
        if (cVar7 != '\0') {
          return 1;
        }
        cVar7 = FUN_00533fd0();
        if (cVar7 != '\0') {
          return 1;
        }
        cVar7 = FUN_0051af10(0);
        if (cVar7 != '\0') {
          return 1;
        }
        cVar7 = FUN_00533fd0();
        if (cVar7 != '\0') {
          return 1;
        }
        iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0x38) * 4);
        if ((*(int *)(param_3 + 300) != *(int *)(iVar2 + 0x20)) &&
           (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(param_3 + 300) * 4) + 0x34) != 0
             || (((*(char *)(param_3 + 0x128) == 'R' && (*(char *)(param_3 + 0x129) == 'E')) &&
                 (*(char *)(param_3 + 0x12a) == 'B')))) ||
            (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
             (*(char *)(iVar2 + 0x1e) == 'B')))))) {
          if ((*(int *)(param_3 + 0x110) == 0) ||
             (iVar2 = *(int *)(*(int *)(param_3 + 0x110) + 0x10),
             (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
            pcVar11 = (char *)(param_3 + 0x130);
          }
          else {
            pcVar11 = *(char **)(iVar2 + 0x34);
          }
          iVar2 = *(int *)(iVar8 + *(int *)(param_1 + 0x38) * 4);
          if ((*(int *)(pcVar11 + 4) != *(int *)(iVar2 + 0x20)) &&
             (((*(int *)(*(int *)(*(int *)(iVar2 + 0xbe8) + *(int *)(pcVar11 + 4) * 4) + 0x34) != 0
               || (((*pcVar11 == 'R' && (pcVar11[1] == 'E')) && (pcVar11[2] == 'B')))) ||
              (((*(char *)(iVar2 + 0x1c) == 'R' && (*(char *)(iVar2 + 0x1d) == 'E')) &&
               (*(char *)(iVar2 + 0x1e) == 'B')))))) {
            iVar2 = *(int *)(param_3 + 0x5c);
            local_10 = 0;
            if (0 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24) {
              iVar3 = *(int *)(DAT_012588e8 + 0xacc);
              piVar9 = *(int **)(iVar2 + 200);
              do {
                iVar10 = *(int *)(iVar3 + piVar9[1] * 4);
                if ((*(char *)(*(int *)(iVar10 + 0x5c) + 0x2a) != '\0') && (*piVar9 != 4)) {
                  iVar4 = *(int *)(iVar10 + 0x134);
                  if (iVar4 == iVar1) {
                    return 1;
                  }
                  if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x38) * 4) +
                                                 0xbe8) + iVar4 * 4) + 0x20) != 0) &&
                     (*(char *)(*(int *)(*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x38) * 4) +
                                                 0xbe8) + iVar4 * 4) + 0x70) != '\0')) {
                    return 1;
                  }
                  iVar4 = *(int *)(iVar10 + 0x110);
                  if ((iVar4 == 0) ||
                     (iVar12 = *(int *)(iVar4 + 0x10),
                     (int)(*(int *)(iVar12 + 0x38) - *(int *)(iVar12 + 0x34) & 0xfffffff8U) < 1)) {
                    iVar12 = iVar10 + 0x130;
                  }
                  else {
                    iVar12 = *(int *)(iVar12 + 0x34);
                  }
                  if (*(int *)(iVar12 + 4) == iVar1) {
LAB_0082d6f0:
                    cVar7 = FUN_004b7e30(param_1 + 0x34);
                    if (cVar7 != '\0') {
                      return 1;
                    }
                  }
                  else {
                    if ((iVar4 == 0) ||
                       (iVar12 = *(int *)(iVar4 + 0x10),
                       (int)(*(int *)(iVar12 + 0x38) - *(int *)(iVar12 + 0x34) & 0xfffffff8U) < 1))
                    {
                      iVar12 = iVar10 + 0x130;
                    }
                    else {
                      iVar12 = *(int *)(iVar12 + 0x34);
                    }
                    if (*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x38) * 4) +
                                                  0xbe8) + *(int *)(iVar12 + 4) * 4) + 0x20) != 0) {
                      if ((iVar4 == 0) ||
                         (iVar4 = *(int *)(iVar4 + 0x10),
                         (int)(*(int *)(iVar4 + 0x38) - *(int *)(iVar4 + 0x34) & 0xfffffff8U) < 1))
                      {
                        iVar10 = iVar10 + 0x130;
                      }
                      else {
                        iVar10 = *(int *)(iVar4 + 0x34);
                      }
                      if (*(char *)(*(int *)(*(int *)(*(int *)(iVar8 + *(int *)(param_1 + 0x38) * 4)
                                                     + 0xbe8) + *(int *)(iVar10 + 4) * 4) + 0x70) !=
                          '\0') goto LAB_0082d6f0;
                    }
                  }
                }
                local_10 = local_10 + 1;
                piVar9 = piVar9 + 9;
              } while (local_10 < (*(int *)(iVar2 + 0xcc) - *(int *)(iVar2 + 200)) / 0x24);
            }
            if (*(char *)(param_1 + 0xf4) != '\0') {
              piVar9 = *(int **)(*(int *)(param_2 + 0xdc) + 0xec);
              while (piVar9 != (int *)0x0) {
                piVar5 = (int *)*piVar9;
                piVar9 = (int *)piVar9[2];
                cVar7 = (**(code **)(*piVar5 + 0x38))();
                if (cVar7 != '\0') {
                  iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
                  if ((piVar5[0x31] != *(int *)(iVar1 + 0x20)) &&
                     ((((*(int *)(*(int *)(*(int *)(iVar1 + 0xbe8) + piVar5[0x31] * 4) + 0x34) != 0
                        || ((((char)piVar5[0x30] == 'R' && (*(char *)((int)piVar5 + 0xc1) == 'E'))
                            && (*(char *)((int)piVar5 + 0xc2) == 'B')))) ||
                       (((*(char *)(iVar1 + 0x1c) == 'R' && (*(char *)(iVar1 + 0x1d) == 'E')) &&
                        (*(char *)(iVar1 + 0x1e) == 'B')))) &&
                      ((0 < piVar5[0x3b] &&
                       (*(int *)(*(int *)(DAT_0125870c + 0x2238) + *(int *)piVar5[0x39] * 4) ==
                        param_3)))))) {
                    return 1;
                  }
                }
              }
            }
            cVar7 = (**(code **)(**(int **)(param_3 + 0x188) + 0x24))();
            if (cVar7 == '\0') {
              return 0;
            }
            iVar1 = *(int *)(DAT_012587e4 + 4);
            iVar8 = *(int *)(iVar1 + *(int *)(param_1 + 0x38) * 4);
            uVar6 = *(uint *)(iVar8 + 0xda8);
            uVar13 = uVar6;
            while( true ) {
              if (uVar13 < uVar6) {
                return 0;
              }
              if (*(uint *)(iVar8 + 0xdac) <= uVar13) break;
              piVar9 = (int *)(uVar13 + 4);
              uVar13 = uVar13 + 8;
              if ((*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + *(int *)(param_1 + 0x38) * 4) + 0xbe8
                                             ) + *piVar9 * 4) + 0x34) != 0) &&
                 (cVar7 = FUN_0093c7c0(*(undefined4 *)(param_3 + 0x188)), cVar7 != '\0')) {
                return 1;
              }
            }
            return 0;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}

