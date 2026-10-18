// FUN_0068d250 @ 0068d250 body=[[0068d250, 0068d94d]]


void FUN_0068d250(int *param_1,char param_2)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  void *pvVar4;
  int **ppiVar5;
  int **ppiVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  bool bVar19;
  int local_18;
  int *piStack_14;
  int local_10;
  uint uStack_c;
  
  local_18 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x1c) / 1000;
  pvVar4 = (void *)param_1[0x2f4];
  puVar2 = (uint *)(param_1 + 0x2f4);
  if (pvVar4 != (void *)param_1[0x2f5]) {
    local_10 = 0;
    FID_conflict__memcpy(pvVar4,(void *)param_1[0x2f5],0);
    param_1[0x2f5] = local_10 + (int)pvVar4;
  }
  uVar10 = (**(code **)(*param_1 + 0x1c))();
  FUN_004bf300(uVar10);
  if (param_2 != '\0') {
    iVar17 = param_1[0x2f9] - param_1[0x2f8] >> 2;
    local_10 = 0;
    if (0 < iVar17) {
      do {
        if (*(int *)(param_1[0x2f8] + local_10 * 4) != 0) {
          *(undefined1 *)(*(int *)(param_1[0x2f8] + local_10 * 4) + 0x31) = 0;
          FUN_005340a0();
        }
        local_10 = local_10 + 1;
      } while (local_10 < iVar17);
    }
    pvVar4 = (void *)param_1[0x2f8];
    if (pvVar4 != (void *)param_1[0x2f9]) {
      local_10 = 0;
      FID_conflict__memcpy(pvVar4,(void *)param_1[0x2f9],0);
      param_1[0x2f9] = local_10 + (int)pvVar4;
    }
  }
  local_10 = 0;
  uStack_c = (**(code **)(*param_1 + 0x1c))();
  if (0 < (int)uStack_c) {
    do {
      piVar18 = *(int **)(param_1[0x2b7] + local_10 * 4);
      piStack_14 = piVar18;
      if ((int)(piVar18[0x277] - piVar18[0x276] & 0xfffffffcU) < 1) {
        if (*(char *)((int)piVar18 + 0x31) != '\0') {
          piVar11 = (int *)param_1[0x2f9];
          piVar3 = (int *)param_1[0x2f8];
          for (piVar14 = piVar3; (piVar14 != piVar11 && ((int *)*piVar14 != piVar18));
              piVar14 = piVar14 + 1) {
          }
          if (((((int)piVar11 - (int)piVar3 & 0xfffffffcU) != 0) && (piVar3 <= piVar14)) &&
             (piVar14 < piVar11)) {
            if (piVar14 == piVar11 + -1) {
              bVar19 = piVar3 == piVar11;
            }
            else {
              FID_conflict__memcpy(piVar14,piVar14 + 1,((int)piVar11 - (int)(piVar14 + 1) >> 2) * 4)
              ;
              piVar11 = (int *)param_1[0x2f9];
              if (((int)piVar11 - param_1[0x2f8] & 0xfffffffcU) == 0) goto LAB_0068d46d;
              bVar19 = (int *)param_1[0x2f8] == piVar11;
            }
            if (!bVar19) {
              param_1[0x2f9] = (int)(piVar11 + -1);
            }
          }
        }
      }
      else {
        ppiVar5 = (int **)param_1[0x2f5];
        if (&piStack_14 < ppiVar5) {
          ppiVar6 = (int **)*puVar2;
          if (ppiVar6 <= &piStack_14) {
            if (ppiVar5 == (int **)param_1[0x2f6]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)param_1[0x2f5] != (undefined4 *)0x0) {
              *(undefined4 *)param_1[0x2f5] =
                   *(undefined4 *)(*puVar2 + ((int)&piStack_14 - (int)ppiVar6 >> 2) * 4);
            }
            param_1[0x2f5] = param_1[0x2f5] + 4;
            goto LAB_0068d46d;
          }
        }
        if (ppiVar5 == (int **)param_1[0x2f6]) {
          FUN_007b94a0();
        }
        if ((int *)param_1[0x2f5] != (int *)0x0) {
          *(int *)param_1[0x2f5] = (int)piVar18;
        }
        param_1[0x2f5] = param_1[0x2f5] + 4;
      }
LAB_0068d46d:
      local_10 = local_10 + 1;
    } while (local_10 < (int)uStack_c);
  }
  iVar17 = (int)(param_1[0x2f5] - *puVar2) >> 2;
  if (iVar17 < local_18) {
    local_18 = iVar17;
  }
  uStack_c = uStack_c & 0xffffff00;
  FUN_0068fb80(*puVar2,param_1[0x2f5],(int)(param_1[0x2f5] - *puVar2) >> 2,uStack_c);
  iVar12 = (int)(param_1[0x2f5] - *puVar2) >> 2;
  iVar17 = 0;
  if (0 < iVar12) {
    do {
      iVar1 = iVar17 + 1;
      *(int *)(*(int *)(*puVar2 + iVar17 * 4) + 0x1408) = iVar1;
      iVar17 = iVar1;
    } while (iVar1 < iVar12);
  }
  uStack_c = uStack_c & 0xffffff00;
  FUN_0068fc60(*puVar2,param_1[0x2f5],(int)(param_1[0x2f5] - *puVar2) >> 2,uStack_c);
  iVar12 = (int)(param_1[0x2f5] - *puVar2) >> 2;
  iVar17 = 0;
  if (0 < iVar12) {
    do {
      iVar1 = iVar17 + 1;
      *(int *)(*(int *)(*puVar2 + iVar17 * 4) + 0x140c) = iVar1;
      iVar17 = iVar1;
    } while (iVar1 < iVar12);
  }
  uStack_c = uStack_c & 0xffffff00;
  FUN_0068fd40(*puVar2,param_1[0x2f5],(int)(param_1[0x2f5] - *puVar2) >> 2,uStack_c);
  iVar12 = (int)(param_1[0x2f5] - *puVar2) >> 2;
  iVar17 = 0;
  if (0 < iVar12) {
    do {
      iVar1 = iVar17 + 1;
      *(int *)(*(int *)(*puVar2 + iVar17 * 4) + 0x1410) = iVar1;
      iVar17 = iVar1;
    } while (iVar1 < iVar12);
  }
  uStack_c = uStack_c & 0xffffff00;
  FUN_0068fe20(*puVar2,param_1[0x2f5],(int)(param_1[0x2f5] - *puVar2) >> 2,uStack_c);
  iVar12 = (int)(param_1[0x2f5] - *puVar2) >> 2;
  iVar17 = 0;
  if (0 < iVar12) {
    do {
      iVar1 = iVar17 + 1;
      *(int *)(*(int *)(*puVar2 + iVar17 * 4) + 0x1404) = iVar1;
      iVar17 = iVar1;
    } while (iVar1 < iVar12);
  }
  if (param_2 == '\0') {
    piVar18 = param_1 + 0x2f8;
    iVar17 = param_1[0x2f9] - param_1[0x2f8] >> 2;
    piStack_14 = piVar18;
    if (iVar17 != 0) {
      while ((iVar17 < local_18 && (cVar9 = FUN_0068c660(param_1,0), cVar9 != '\0'))) {
        iVar17 = param_1[0x2f9] - *piVar18 >> 2;
      }
      local_10 = 0;
      if (0 < (int)(param_1[0x2f5] - *puVar2 & 0xfffffffc)) {
        do {
          iVar17 = *(int *)(*puVar2 + local_10 * 4);
          if ((((int)(*(int *)(iVar17 + 0x9dc) - *(int *)(iVar17 + 0x9d8) & 0xfffffffcU) < 1) ||
              (*(char *)(iVar17 + 0x12d0) == '\0')) || (*(int *)(iVar17 + 0xe4c) < 2)) {
            *(undefined4 *)(iVar17 + 0x1400) = DAT_01259abc;
            if (*(char *)(iVar17 + 0x31) == '\0') goto LAB_0068d78a;
LAB_0068d785:
            FUN_0068c660(param_1,iVar17);
          }
          else if (*(char *)(iVar17 + 0x31) == '\0') {
LAB_0068d768:
            local_18 = local_18 + -1;
          }
          else if (local_18 < 1) {
            if (*(char *)(iVar17 + 0x31) == '\0') goto LAB_0068d768;
            local_18 = local_18 + -1;
            if ((*(int *)(DAT_012588e8 + 0xb0c) <=
                 *(int *)(iVar17 + 0x1400) +
                 (*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x20) / 1000) * 0x18) ||
               (cVar9 = FUN_00539510(iVar17), cVar9 != '\0')) goto LAB_0068d78a;
            iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
            cVar9 = FUN_005395a0(iVar17);
            if (iVar12 == 0) {
LAB_0068d754:
              bVar19 = false;
            }
            else {
              iVar1 = *(int *)(iVar17 + 0x20);
              if ((*(int *)(iVar12 + 0x18) != iVar1) && (*(int *)(iVar12 + 0x20) != iVar1)) {
                iVar7 = *(int *)(iVar12 + 0x30);
                iVar15 = *(int *)(iVar12 + 0x2c);
                if (iVar15 != iVar7) {
                  do {
                    if (*(int *)(iVar15 + 4) == iVar1) break;
                    iVar15 = iVar15 + 8;
                  } while (iVar15 != iVar7);
                  if (iVar15 != iVar7) goto LAB_0068d750;
                }
                iVar7 = *(int *)(iVar12 + 0x40);
                iVar15 = *(int *)(iVar12 + 0x3c);
                if (iVar15 != iVar7) {
                  do {
                    if (*(int *)(iVar15 + 4) == iVar1) break;
                    iVar15 = iVar15 + 8;
                  } while (iVar15 != iVar7);
                  if (iVar15 != iVar7) goto LAB_0068d750;
                }
                iVar7 = *(int *)(iVar12 + 0x50);
                iVar12 = *(int *)(iVar12 + 0x4c);
                if (iVar12 != iVar7) {
                  do {
                    if (*(int *)(iVar12 + 4) == iVar1) break;
                    iVar12 = iVar12 + 8;
                  } while (iVar12 != iVar7);
                  if (iVar12 != iVar7) goto LAB_0068d750;
                }
                goto LAB_0068d754;
              }
LAB_0068d750:
              bVar19 = true;
            }
            if ((cVar9 == '\0') && (!bVar19)) goto LAB_0068d785;
          }
          else {
            local_18 = local_18 + -1;
            *(undefined4 *)(iVar17 + 0x1400) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
            FUN_0053d680(iVar17);
          }
LAB_0068d78a:
          local_10 = local_10 + 1;
          piVar18 = piStack_14;
        } while (local_10 < (int)(param_1[0x2f5] - *puVar2) >> 2);
      }
      goto LAB_0068d7ad;
    }
  }
  piVar18 = param_1 + 0x2f8;
  pvVar4 = (void *)*piVar18;
  piStack_14 = piVar18;
  if (pvVar4 != (void *)param_1[0x2f9]) {
    uStack_c = 0;
    FID_conflict__memcpy(pvVar4,(void *)param_1[0x2f9],0);
    param_1[0x2f9] = uStack_c + (int)pvVar4;
  }
  local_10 = local_18;
  local_18 = 0;
  if (0 < (int)(param_1[0x2f5] - *puVar2 & 0xfffffffc)) {
    do {
      piVar11 = piStack_14;
      piVar3 = (int *)(*puVar2 + local_18 * 4);
      if ((*(char *)(*piVar3 + 0x12d0) != '\0') && (1 < *(int *)(*piVar3 + 0xe4c))) {
        piVar14 = (int *)piVar18[1];
        if ((piVar3 < piVar14) && (piVar8 = (int *)*piVar18, piVar8 <= piVar3)) {
          if (piVar14 == (int *)piVar18[2]) {
            uVar13 = (int)piVar14 - (int)piVar8 >> 2;
            if (0x3ffffffe < uVar13) {
LAB_0068d944:
                    /* WARNING: Subroutine does not return */
              FUN_00aad3ad("vector<T> too long");
            }
            uVar13 = uVar13 + 1;
            uVar16 = piVar18[2] - (int)piVar8 >> 2;
            if (uVar16 < uVar13) {
              if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                uVar16 = 0;
              }
              else {
                uVar16 = uVar16 + (uVar16 >> 1);
              }
              if (uVar16 < uVar13) {
                uVar16 = uVar13;
              }
              FUN_004bf300(uVar16);
              piVar18 = piVar11;
            }
          }
          if ((undefined4 *)piVar18[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar18[1] =
                 *(undefined4 *)(*piVar18 + ((int)piVar3 - (int)piVar8 >> 2) * 4);
          }
        }
        else {
          if (piVar14 == (int *)piVar18[2]) {
            uVar13 = (int)piVar14 - *piVar18 >> 2;
            if (0x3ffffffe < uVar13) goto LAB_0068d944;
            uVar13 = uVar13 + 1;
            uVar16 = piVar18[2] - *piVar18 >> 2;
            if (uVar16 < uVar13) {
              if (0x3fffffff - (uVar16 >> 1) < uVar16) {
                uVar16 = 0;
              }
              else {
                uVar16 = uVar16 + (uVar16 >> 1);
              }
              if (uVar16 < uVar13) {
                uVar16 = uVar13;
              }
              FUN_004bf300(uVar16);
              piVar18 = piVar11;
            }
          }
          if ((int *)piVar18[1] != (int *)0x0) {
            *(int *)piVar18[1] = *piVar3;
          }
        }
        piVar18[1] = piVar18[1] + 4;
        FUN_0053d680(*(undefined4 *)(*puVar2 + local_18 * 4));
        local_10 = local_10 + -1;
        if (local_10 == 0) break;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)(param_1[0x2f5] - *puVar2) >> 2);
  }
LAB_0068d7ad:
  uStack_c = uStack_c & 0xffffff00;
  FUN_0068fe20(*piVar18,piVar18[1],piVar18[1] - *piVar18 >> 2,uStack_c);
  return;
}

