// FUN_004c7870 @ 004c7870 body=[[004c7870, 004c7ca6] [004c7cb0, 004c811b] [004c811f, 004c8131]]


/* WARNING: Removing unreachable block (ram,0x004c8116) */

void FUN_004c7870(uint param_1,char param_2)

{
  void *_Dst;
  int *piVar1;
  int **ppiVar2;
  int iVar3;
  char cVar4;
  int **ppiVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  int **ppiVar11;
  uint *puVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  int **local_3c;
  int **local_38;
  uint local_20;
  int *local_1c;
  undefined4 local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar7 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f818;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar4 = FUN_00443890();
  if (cVar4 == '\0') {
    ExceptionList = local_10;
    return;
  }
  local_20 = *(uint *)(uVar7 + 0x18);
  local_3c = (int **)0x0;
  local_38 = (int **)0x0;
  local_8 = 0;
  FUN_004bf300(4);
  local_1c = (int *)(uVar7 + 0x168);
  local_14 = (int *)0x6;
  do {
    iVar15 = *local_1c;
    if (iVar15 != 0) {
      _Dst = *(void **)(iVar15 + 0x94);
      if (_Dst != *(void **)(iVar15 + 0x98)) {
        FID_conflict__memcpy(_Dst,*(void **)(iVar15 + 0x98),0);
        *(void **)(iVar15 + 0x98) = _Dst;
        uVar7 = param_1;
      }
      FUN_00440250(iVar15);
    }
    local_1c = local_1c + 1;
    local_14 = (int *)((int)local_14 + -1);
  } while (local_14 != (int *)0x0);
  piVar14 = (int *)(uVar7 + 0x180);
  iVar15 = 4;
  local_14 = (int *)0x0;
  do {
    iVar6 = *piVar14;
    if ((iVar6 != 0) &&
       (iVar10 = *(int *)(iVar6 + 0x24), *(undefined4 *)(iVar6 + 0x24) = 0, iVar10 != 0)) {
      FUN_004412a0();
    }
    piVar14 = piVar14 + 1;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  piVar14 = (int *)(uVar7 + 400);
  local_1c = (int *)0x4;
  piVar13 = piVar14;
  do {
    iVar15 = *piVar13;
    if (iVar15 != 0) {
      iVar6 = *(int *)(iVar15 + 0x28);
      local_18 = 0x2d2d2d;
      *(undefined4 *)(iVar15 + 0x24) = 0x2d2d2d;
      *(undefined4 *)(iVar15 + 0x28) = 0;
      if (iVar6 != 0) {
        FUN_00442ab0();
      }
    }
    piVar13 = piVar13 + 1;
    local_1c = (int *)((int)local_1c + -1);
  } while (local_1c != (int *)0x0);
  local_1c = (int *)0x0;
  if ((0 < *(int *)(local_20 + 0x104)) &&
     ((DAT_00f092fb == '\0' || (0 < *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x5c) + 0x360)))))
  {
    piVar13 = *(int **)(local_20 + 0xfc);
    ppiVar11 = local_38;
joined_r0x004c79d9:
    if (piVar13 != (int *)0x0) {
      piVar8 = (int *)*piVar13;
      local_1c = (int *)piVar13[2];
      cVar4 = (**(code **)(*piVar8 + 0x38))();
      if ((cVar4 == '\0') ||
         (iVar15 = (**(code **)(*piVar8 + 0x2c))(), piVar13 = local_1c,
         *(int *)(iVar15 + 0x1b4) == 0)) {
        iVar15 = 0;
        cVar4 = (**(code **)(*piVar8 + 0x40))();
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(*piVar8 + 0x3c))();
          if ((cVar4 == '\0') || (*(char *)(*(int *)(piVar8[0x37] + 0x5c) + 0x2a) == '\0')) {
            piVar1 = (int *)piVar8[0x1d];
            if (piVar1 != (int *)0x0) {
              local_14 = piVar1;
              cVar4 = FUN_0059c160(piVar1);
              piVar13 = local_1c;
              if (cVar4 != '\0') {
                ppiVar5 = local_3c;
                if (ppiVar11 != (int **)0x0) {
                  do {
                    if (*ppiVar5 == piVar1) {
                      if (ppiVar5 != ppiVar11) goto joined_r0x004c79d9;
                      break;
                    }
                    ppiVar5 = ppiVar5 + 1;
                  } while (ppiVar5 != ppiVar11);
                }
                if (&local_14 < ppiVar11) {
                  if (ppiVar11 == (int **)0x0) {
                    FUN_00a513f0();
                    ppiVar11 = local_38;
                  }
                  if (ppiVar11 != (int **)0x0) {
                    *ppiVar11 = *(int **)(((int)&local_14 >> 2) * 4);
                  }
                  ppiVar11 = ppiVar11 + 1;
                  piVar13 = local_1c;
                  local_38 = ppiVar11;
                }
                else {
                  if (ppiVar11 == (int **)0x0) {
                    FUN_00a513f0();
                    ppiVar11 = local_38;
                  }
                  if (ppiVar11 != (int **)0x0) {
                    *ppiVar11 = piVar1;
                  }
                  ppiVar11 = ppiVar11 + 1;
                  piVar13 = local_1c;
                  local_38 = ppiVar11;
                }
              }
              goto joined_r0x004c79d9;
            }
            if ((0 < piVar8[0x3b]) && (cVar4 = (**(code **)(*piVar8 + 0x3c))(), cVar4 == '\0')) {
              iVar15 = 1;
            }
          }
          else {
            iVar15 = 5;
          }
        }
        else {
          iVar15 = 4;
        }
        if (*(int *)(param_1 + 0x168 + iVar15 * 4) == 0) {
          iVar10 = param_1 + 8;
          iVar6 = FUN_00443b10(DAT_012586e8,0);
          if (iVar6 != 0) {
            *(int *)(iVar6 + 0x14) = iVar10;
          }
          *(int *)(param_1 + 0x168 + iVar15 * 4) = iVar6;
          ppiVar11 = local_38;
        }
        iVar6 = *(int *)(param_1 + 0x168 + iVar15 * 4);
        piVar13 = local_1c;
        if (iVar6 != 0) {
          *(int *)(iVar6 + 0xb8) = iVar15;
          iVar15 = *(int *)(param_1 + 0x168 + iVar15 * 4);
          ppiVar5 = *(int ***)(iVar15 + 0x98);
          puVar12 = (uint *)(iVar15 + 0x94);
          local_14 = piVar8;
          if ((&local_14 < ppiVar5) && (ppiVar2 = (int **)*puVar12, ppiVar2 <= &local_14)) {
            if (ppiVar5 == *(int ***)(iVar15 + 0x9c)) {
              uVar7 = (int)ppiVar5 - (int)ppiVar2 >> 2;
              if (0x3ffffffe < uVar7) {
LAB_004c7cca:
                    /* WARNING: Subroutine does not return */
                FUN_00aad3ad("vector<T> too long");
              }
              uVar7 = uVar7 + 1;
              uVar9 = (int)*(int ***)(iVar15 + 0x9c) - (int)ppiVar2 >> 2;
              if (uVar9 < uVar7) {
                if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar7) {
                  uVar9 = uVar7;
                }
                FUN_004bf300(uVar9);
                ppiVar11 = local_38;
              }
            }
            if (*(undefined4 **)(iVar15 + 0x98) != (undefined4 *)0x0) {
              **(undefined4 **)(iVar15 + 0x98) =
                   *(undefined4 *)(*puVar12 + ((int)&local_14 - (int)ppiVar2 >> 2) * 4);
            }
          }
          else {
            if (ppiVar5 == *(int ***)(iVar15 + 0x9c)) {
              uVar7 = (int)((int)ppiVar5 - *puVar12) >> 2;
              if (0x3ffffffe < uVar7) goto LAB_004c7cca;
              uVar7 = uVar7 + 1;
              uVar9 = (int)((int)*(int ***)(iVar15 + 0x9c) - *puVar12) >> 2;
              if (uVar9 < uVar7) {
                if (0x3fffffff - (uVar9 >> 1) < uVar9) {
                  uVar9 = 0;
                }
                else {
                  uVar9 = uVar9 + (uVar9 >> 1);
                }
                if (uVar9 < uVar7) {
                  uVar9 = uVar7;
                }
                FUN_004bf300(uVar9);
                ppiVar11 = local_38;
              }
            }
            if (*(int **)(iVar15 + 0x98) != (int *)0x0) {
              **(int **)(iVar15 + 0x98) = (int)piVar8;
            }
          }
          *(int *)(iVar15 + 0x98) = *(int *)(iVar15 + 0x98) + 4;
          piVar13 = local_1c;
        }
      }
      goto joined_r0x004c79d9;
    }
    piVar13 = (int *)(param_1 + 0x168);
    iVar15 = 6;
    do {
      iVar6 = *piVar13;
      if ((iVar6 != 0) && (0 < (int)(*(int *)(iVar6 + 0x98) - *(int *)(iVar6 + 0x94) & 0xfffffffcU))
         ) {
        FUN_00440250(iVar6);
      }
      piVar13 = piVar13 + 1;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  if (((*(int *)(*(int *)(param_1 + 0x18) + 0x164) != 0) &&
      (local_14 = (int *)**(int **)(*(int *)(param_1 + 0x18) + 0x15c), local_14 != (int *)0x0)) &&
     (piVar13 = (int *)local_14[2], piVar13 != (int *)0x0)) {
    do {
      iVar15 = *piVar13;
      piVar13 = (int *)piVar13[2];
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar15 * 4) + 300) == 0) {
        if (iVar15 == *(int *)(param_1 + 0xb4)) {
          local_20 = (uint)(local_14[0x26] != 0);
          if (local_14[0x2d] != 0) {
            local_20 = local_20 + 1;
          }
          if (local_14[0x34] != 0) {
            local_20 = local_20 + 1;
          }
          if (local_14[0x3b] != 0) {
            local_20 = local_20 + 1;
          }
          if (3 < local_20) {
            local_20 = 4;
          }
          local_1c = (int *)0x0;
          if (local_20 != 0) {
            piVar8 = local_14 + 0x25;
            piVar13 = piVar14;
            goto LAB_004c7d3f;
          }
        }
        break;
      }
    } while (piVar13 != (int *)0x0);
  }
  goto LAB_004c7dca;
LAB_004c7d3f:
  do {
    if (*piVar13 == 0) {
      iVar6 = param_1 + 8;
      iVar15 = FUN_00443b10(DAT_012586e8,3);
      if (iVar15 != 0) {
        *(int *)(iVar15 + 0x14) = iVar6;
      }
      *piVar13 = iVar15;
      if (iVar15 != 0) goto LAB_004c7d64;
    }
    else {
LAB_004c7d64:
      iVar15 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x13c))();
      *(bool *)(*piVar13 + 0x20) = iVar15 == 7;
      *(int **)(*piVar13 + 0x68) = local_1c;
      *(int **)(*piVar13 + 0x2c) = local_14;
      iVar15 = *piVar13;
      iVar6 = piVar8[1];
      iVar10 = *(int *)(iVar15 + 0x28);
      *(int *)(iVar15 + 0x24) = *piVar8;
      *(int *)(iVar15 + 0x28) = iVar6;
      if (iVar10 != iVar6) {
        FUN_00442ab0();
      }
    }
    local_1c = (int *)((int)local_1c + 1);
    piVar13 = piVar13 + 1;
    piVar8 = piVar8 + 7;
  } while ((int)local_1c < (int)local_20);
LAB_004c7dca:
  uVar7 = param_1;
  local_14 = (int *)((int)local_38 >> 2);
  if (3 < (int)local_14) {
    local_14 = (int *)0x4;
  }
  iVar15 = 0;
  if (0 < (int)local_14) {
    piVar13 = (int *)(param_1 + 0x180);
    do {
      iVar6 = *piVar13;
      if (iVar6 == 0) {
        iVar6 = FUN_00443b10(DAT_012586e8,1);
        if (iVar6 != 0) {
          *(uint *)(iVar6 + 0x14) = uVar7 + 8;
        }
        *piVar13 = iVar6;
        if (iVar6 != 0) goto LAB_004c7e15;
      }
      else {
LAB_004c7e15:
        iVar10 = *(int *)(iVar6 + 0x24);
        iVar3 = *(int *)(iVar15 * 4);
        *(int *)(iVar6 + 0x24) = iVar3;
        if (iVar10 != iVar3) {
          FUN_004412a0();
        }
        *(int *)(*piVar13 + 0xe0) = iVar15;
      }
      iVar15 = iVar15 + 1;
      piVar13 = piVar13 + 1;
    } while (iVar15 < (int)local_14);
  }
  piVar13 = (int *)(uVar7 + 0x180);
  iVar15 = 4;
  do {
    iVar6 = *piVar13;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x24) == 0)) {
      FUN_004c94b0(iVar6);
      *piVar13 = 0;
    }
    piVar13 = piVar13 + 1;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  piVar13 = (int *)(uVar7 + 0x168);
  iVar15 = 6;
  do {
    iVar6 = *piVar13;
    if ((iVar6 != 0) && ((*(int *)(iVar6 + 0x98) - *(int *)(iVar6 + 0x94) & 0xfffffffcU) == 0)) {
      FUN_004c94b0(iVar6);
      *piVar13 = 0;
    }
    piVar13 = piVar13 + 1;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  piVar13 = *(int **)(*(int *)(uVar7 + 0x18) + 0x110);
  if ((piVar13 == (int *)0x0) ||
     ((DAT_00f092fb != '\0' && (*(int *)(*(int *)(*(int *)(uVar7 + 0x18) + 0x5c) + 0x360) < 1)))) {
    if (*(int *)(uVar7 + 0x1a0) != 0) {
      FUN_004c94b0(*(int *)(uVar7 + 0x1a0));
      *(undefined4 *)(uVar7 + 0x1a0) = 0;
    }
  }
  else {
    if (*(int *)(uVar7 + 0x1a0) == 0) {
      iVar15 = FUN_00443b10(DAT_012586e8,2);
      if (iVar15 != 0) {
        *(uint *)(iVar15 + 0x14) = uVar7 + 8;
      }
      *(int *)(uVar7 + 0x1a0) = iVar15;
    }
    if (*(int *)(uVar7 + 0x1a0) != 0) {
      piVar8 = local_14;
      if ((int)local_14 < 2) {
        piVar8 = (int *)0x1;
      }
      *(int **)(*(int *)(uVar7 + 0x1a0) + 0x30) = piVar8;
      iVar15 = *(int *)(uVar7 + 0x1a0);
      piVar8 = *(int **)(iVar15 + 0x24);
      *(int **)(iVar15 + 0x24) = piVar13;
      if ((piVar8 != piVar13) &&
         ((**(code **)(*piVar13 + 0x1c))(&local_14), piVar13 = local_14,
         *(int **)(iVar15 + 0x2c) != local_14)) {
        *(int **)(iVar15 + 0x2c) = local_14;
        piVar8 = *(int **)(*(int *)(iVar15 + 0x28) + 0x94);
        FUN_00401000(0x47c35040);
        iVar15 = FUN_00b31c00();
        iVar15 = __alldiv((longlong)iVar15 * (longlong)(int)piVar13,1000,0);
        FUN_00401000(0x43fa4001);
        iVar6 = FUN_00b31c00();
        (**(code **)(*piVar8 + 0x5c))((iVar6 + iVar15) / 1000);
      }
    }
  }
  local_20 = 0;
  local_1c = (int *)0x0;
  param_1 = param_1 & 0xffffff;
  if ((param_2 == '\0') ||
     (((DAT_00f092fb != '\0' && (*(int *)(*(int *)(*(int *)(uVar7 + 0x18) + 0x5c) + 0x360) < 1)) ||
      (cVar4 = FUN_005153a0(*(undefined4 *)
                             (*(int *)(DAT_012587e4 + 4) +
                             *(int *)(*(int *)(uVar7 + 0x18) + 300) * 4),
                            *(undefined4 *)(uVar7 + 0xb4),&local_20,&local_1c,(int)&param_1 + 3),
      cVar4 == '\0')))) {
    if (*(int *)(uVar7 + 0x1a4) != 0) {
      FUN_004c94b0(*(int *)(uVar7 + 0x1a4));
      *(undefined4 *)(uVar7 + 0x1a4) = 0;
    }
  }
  else {
    if (*(int *)(uVar7 + 0x1a4) == 0) {
      iVar15 = FUN_00443b10(DAT_012586e8,4);
      if (iVar15 != 0) {
        *(uint *)(iVar15 + 0x14) = uVar7 + 8;
      }
      *(int *)(uVar7 + 0x1a4) = iVar15;
    }
    iVar15 = *(int *)(uVar7 + 0x1a4);
    if (iVar15 != 0) {
      iVar6 = *(int *)(uVar7 + 0x18);
      *(undefined4 *)(iVar15 + 0x24) = *(undefined4 *)(iVar6 + 0x128);
      *(undefined4 *)(iVar15 + 0x28) = *(undefined4 *)(iVar6 + 300);
      *(undefined4 *)(*(int *)(uVar7 + 0x1a4) + 0x2c) = *(undefined4 *)(uVar7 + 0x18);
      *(uint *)(*(int *)(uVar7 + 0x1a4) + 0x3c) = local_20;
      *(int **)(*(int *)(uVar7 + 0x1a4) + 0x40) = local_1c;
      *(undefined1 *)(*(int *)(uVar7 + 0x1a4) + 0x44) = param_1._3_1_;
    }
  }
  iVar15 = 4;
  do {
    iVar6 = *piVar14;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x28) == 0)) {
      FUN_004c94b0(iVar6);
      *piVar14 = 0;
    }
    piVar14 = piVar14 + 1;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  ExceptionList = local_10;
  return;
}

