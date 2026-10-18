// FUN_0068c040 @ 0068c040 body=[[0068c040, 0068c0b9] [0068c0c0, 0068c33d] [0068c340, 0068c54d]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_0068c040(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined4 uStack_44;
  int local_2c;
  int local_20;
  int local_10;
  
  cVar9 = DAT_00f092fb;
  iVar15 = *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2;
  uStack_44 = 0x68c06a;
  iVar11 = iVar15 * -4;
  piVar14 = (int *)(&stack0xffffffc0 + iVar11);
  iVar16 = 0;
  if (0 < iVar15) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0xacc) + iVar16 * 4);
      iVar13 = *(int *)(iVar3 + 0x178);
      iVar10 = 0;
      if (cVar9 == '\0') {
        if (0 < iVar13) {
          do {
            *(undefined4 *)(*(int *)(iVar3 + 0x174) + iVar10 * 4) = 2;
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar13);
        }
      }
      else if (0 < iVar13) {
        do {
          *(undefined4 *)(*(int *)(iVar3 + 0x174) + iVar10 * 4) = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar13);
      }
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0xacc) + iVar16 * 4) + 0x5c);
      *(undefined4 *)(&stack0xffffffc0 + iVar16 * 4 + iVar11) = *(undefined4 *)(iVar3 + 0x360);
      iVar16 = iVar16 + 1;
      *(undefined4 *)(iVar3 + 0x360) = 0;
    } while (iVar16 < iVar15);
  }
  if (cVar9 == '\0') {
    if (*(int *)(param_1 + 0xb24) != 0) {
      pcVar4 = *(code **)(**(int **)(param_1 + 0xb24) + 0x38);
      (&uStack_44)[-iVar15] = 0x68c11a;
      iVar11 = (*pcVar4)();
      *(undefined1 *)(*(int *)(iVar11 + 0x3648) + 0x3d) = 1;
    }
    iVar11 = 0;
    if (0 < (int)(*(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) & 0xfffffffcU)) {
      do {
        iVar15 = *(int *)(param_1 + 0xadc);
        iVar16 = 0;
        if (0 < (int)(*(int *)(param_1 + 0xae0) - iVar15 & 0xfffffffcU)) {
          do {
            *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(param_1 + 0xacc) + iVar11 * 4) + 0x174) +
             *(int *)(*(int *)(iVar15 + iVar16 * 4) + 0x20) * 4) = 2;
            iVar15 = *(int *)(*(int *)(*(int *)(param_1 + 0xacc) + iVar11 * 4) + 0x5c);
            if (*(int *)(iVar15 + 0x360) < 2) {
              *(undefined4 *)(iVar15 + 0x360) = 2;
            }
            iVar15 = *(int *)(param_1 + 0xadc);
            iVar16 = iVar16 + 1;
          } while (iVar16 < *(int *)(param_1 + 0xae0) - iVar15 >> 2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0xad0) - *(int *)(param_1 + 0xacc) >> 2);
      return;
    }
  }
  else {
    iVar16 = *(int *)(param_1 + 0xacc);
    local_10 = 0;
    if (0 < (int)(*(int *)(param_1 + 0xad0) - iVar16 & 0xfffffffcU)) {
      do {
        iVar16 = *(int *)(iVar16 + local_10 * 4);
        iVar3 = *(int *)(iVar16 + 0x5c);
        local_2c = *(int *)(iVar16 + 0x134);
        uVar5 = *(undefined4 *)(iVar16 + 0x130);
        if ((((char)uVar5 == 'R') && ((char)((uint)uVar5 >> 8) == 'E')) &&
           ((char)((uint)uVar5 >> 0x10) == 'B')) {
          local_2c = *(int *)(iVar16 + 300);
        }
        iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_2c * 4);
        if (local_2c == *(int *)(param_1 + 0xb60)) {
          bVar18 = true;
        }
        else {
          iVar10 = *(int *)(iVar13 + 0xd6c);
          iVar17 = *(int *)(iVar13 + 0xd68);
          bVar18 = iVar17 == iVar10;
          if (!bVar18) {
            do {
              if (*(int *)(iVar17 + 4) == *(int *)(param_1 + 0xb60)) break;
              iVar17 = iVar17 + 8;
            } while (iVar17 != iVar10);
            bVar18 = iVar17 == iVar10;
          }
          bVar18 = !bVar18;
        }
        *(undefined4 *)(*(int *)(iVar16 + 0x174) + local_2c * 4) = 2;
        if ((bVar18) && (*(int *)(iVar3 + 0x360) < 2)) {
          *(undefined4 *)(iVar3 + 0x360) = 2;
        }
        for (uVar12 = *(uint *)(iVar13 + 0xd68);
            (*(uint *)(iVar13 + 0xd68) <= uVar12 && (uVar12 < *(uint *)(iVar13 + 0xd6c)));
            uVar12 = uVar12 + 8) {
          *(undefined4 *)(*(int *)(iVar16 + 0x174) + *(int *)(uVar12 + 4) * 4) = 2;
        }
        local_20 = (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24;
        if (0 < local_20) {
          iVar10 = 0;
          do {
            iVar17 = *(int *)(*(int *)(param_1 + 0xacc) +
                             *(int *)(iVar10 + 4 + *(int *)(iVar3 + 200)) * 4);
            if (*(int *)(*(int *)(iVar17 + 0x174) + local_2c * 4) < 1) {
              *(undefined4 *)(*(int *)(iVar17 + 0x174) + local_2c * 4) = 1;
            }
            if ((bVar18) && (*(int *)(*(int *)(iVar17 + 0x5c) + 0x360) < 1)) {
              *(undefined4 *)(*(int *)(iVar17 + 0x5c) + 0x360) = 1;
            }
            uVar12 = *(uint *)(iVar13 + 0xd68);
            while ((*(uint *)(iVar13 + 0xd68) <= uVar12 && (uVar12 < *(uint *)(iVar13 + 0xd6c)))) {
              piVar2 = (int *)(*(int *)(iVar17 + 0x174) + *(int *)(uVar12 + 4) * 4);
              uVar12 = uVar12 + 8;
              if (*piVar2 < 1) {
                *piVar2 = 1;
              }
              if ((bVar18) && (*(int *)(*(int *)(iVar17 + 0x5c) + 0x360) < 1)) {
                *(undefined4 *)(*(int *)(iVar17 + 0x5c) + 0x360) = 1;
              }
            }
            iVar10 = iVar10 + 0x24;
            local_20 = local_20 + -1;
          } while (local_20 != 0);
        }
        piVar2 = *(int **)(iVar16 + 0xec);
        while (piVar2 != (int *)0x0) {
          piVar6 = (int *)piVar2[2];
          iVar13 = *piVar2;
          iVar10 = *(int *)(iVar13 + 0xc4);
          if (iVar10 == *(int *)(param_1 + 0xb60)) {
            bVar18 = true;
          }
          else {
            iVar17 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar10 * 4);
            iVar7 = *(int *)(iVar17 + 0xd6c);
            iVar17 = *(int *)(iVar17 + 0xd68);
            bVar18 = iVar17 == iVar7;
            if (!bVar18) {
              do {
                if (*(int *)(iVar17 + 4) == *(int *)(param_1 + 0xb60)) break;
                iVar17 = iVar17 + 8;
              } while (iVar17 != iVar7);
              bVar18 = iVar17 == iVar7;
            }
            bVar18 = !bVar18;
          }
          piVar2 = piVar6;
          if (iVar10 != local_2c) {
            *(undefined4 *)(*(int *)(iVar16 + 0x174) + iVar10 * 4) = 2;
            if ((bVar18) && (*(int *)(iVar3 + 0x360) < 2)) {
              *(undefined4 *)(iVar3 + 0x360) = 2;
            }
            if ((*(char *)(iVar13 + 0x164) == '\0') &&
               (iVar13 = (*(int *)(iVar3 + 0xcc) - *(int *)(iVar3 + 200)) / 0x24, 0 < iVar13)) {
              iVar17 = 0;
              do {
                iVar7 = *(int *)(*(int *)(param_1 + 0xacc) +
                                *(int *)(iVar17 + 4 + *(int *)(iVar3 + 200)) * 4);
                iVar8 = *(int *)(iVar7 + 0x174);
                if (*(int *)(iVar8 + iVar10 * 4) < 2) {
                  *(undefined4 *)(iVar8 + iVar10 * 4) = 2;
                }
                if ((bVar18) && (iVar7 = *(int *)(iVar7 + 0x5c), *(int *)(iVar7 + 0x360) < 2)) {
                  *(undefined4 *)(iVar7 + 0x360) = 2;
                }
                iVar17 = iVar17 + 0x24;
                iVar13 = iVar13 + -1;
              } while (iVar13 != 0);
            }
          }
        }
        iVar16 = *(int *)(param_1 + 0xacc);
        local_10 = local_10 + 1;
      } while (local_10 < *(int *)(param_1 + 0xad0) - iVar16 >> 2);
    }
    iVar16 = 0;
    if (0 < iVar15) {
      while (*piVar14 ==
             *(int *)(*(int *)(*(int *)((*(int *)(param_1 + 0xacc) -
                                        (int)(&stack0xffffffc0 + iVar11)) + (int)piVar14) + 0x5c) +
                     0x360)) {
        iVar16 = iVar16 + 1;
        piVar14 = piVar14 + 1;
        if (iVar15 <= iVar16) {
          return;
        }
      }
      if (*(int *)(param_1 + 0xb24) != 0) {
        pcVar4 = *(code **)(**(int **)(param_1 + 0xb24) + 0x38);
        (&uStack_44)[-iVar15] = 0x68c52b;
        iVar11 = (*pcVar4)();
        *(undefined1 *)(*(int *)(iVar11 + 0x3648) + 0x3d) = 1;
        puVar1 = (uint *)(*(int *)(param_1 + 0xb24) + 0x74);
        *puVar1 = *puVar1 | 0x100;
      }
    }
  }
  return;
}

