// FUN_004b2610 @ 004b2610 body=[[004b2610, 004b2708] [004b2712, 004b293e] [004b2940, 004b2a1c] [004b2a20, 004b2c31] [004b2c35, 004b2c6c] [004b2c70, 004b2f18] [004b2f20, 004b3156] [004b3160, 004b31c6] [004b31d0, 004b3478] [004b3480, 004b3814] [004b381e, 004b399a]]


void FUN_004b2610(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int unaff_EDI;
  undefined8 uVar12;
  int local_24;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5b159;
  pvStack_14 = ExceptionList;
  if ((*(int *)(DAT_012588e8 + 0xb60) == *(int *)(unaff_EDI + 0x134)) ||
     (DAT_012586f0 = '\0', *(int *)(DAT_012588e8 + 0xb60) == *(int *)(unaff_EDI + 300))) {
    DAT_012586f0 = '\x01';
  }
  iVar9 = 0;
  ExceptionList = &pvStack_14;
  if (DAT_0125a69c == 0) {
    ExceptionList = &pvStack_14;
    iVar3 = FUN_00aae9af();
    local_c = 0;
    if (iVar3 != 0) {
      FUN_008b0060();
    }
    local_c = 0xffffffff;
    FUN_0044ec00();
  }
  iVar3 = DAT_0125a69c;
  iVar10 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  if (0 < iVar10) {
    FUN_00401000();
    uVar4 = FUN_00b31c00();
    do {
      iVar11 = iVar9 * 8;
      iVar9 = iVar9 + 1;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x9c) + iVar11) = uVar4;
    } while (iVar9 < iVar10);
  }
  if (*(int *)(unaff_EDI + 0x8c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  *(undefined4 *)(unaff_EDI + 0x8c) = 0;
  *(undefined4 *)(unaff_EDI + 0x90) = 0;
  *(undefined4 *)(unaff_EDI + 0x94) = 0;
  FUN_008601b0();
  iVar9 = *(int *)(*(int *)(unaff_EDI + 0x5c) + 0x14);
  iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  iVar10 = 0;
  if (0 < iVar11) {
    do {
      piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
      *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  if (DAT_012586f0 != '\0') {
    iVar10 = *(int *)(unaff_EDI + 0x90);
    piVar5 = (int *)FUN_00aae9af();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = iVar9;
      piVar5[1] = iVar10;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar9 = *(int *)(unaff_EDI + 0x94);
    *(int **)(unaff_EDI + 0x90) = piVar5;
    *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
    if (iVar9 == 0) {
      *(int **)(unaff_EDI + 0x8c) = piVar5;
    }
    else {
      *(int **)(iVar10 + 8) = piVar5;
    }
  }
  iVar9 = *(int *)(*(int *)(unaff_EDI + 0x5c) + 0xc);
  iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  iVar10 = 0;
  if (0 < iVar11) {
    do {
      piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
      *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar11);
  }
  if (DAT_012586f0 != '\0') {
    iVar10 = *(int *)(unaff_EDI + 0x90);
    piVar5 = (int *)FUN_00aae9af();
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      *piVar5 = iVar9;
      piVar5[1] = iVar10;
      piVar5[2] = 0;
      *(undefined1 *)(piVar5 + 3) = 0;
    }
    iVar9 = *(int *)(unaff_EDI + 0x94);
    *(int **)(unaff_EDI + 0x90) = piVar5;
    *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
    if (iVar9 == 0) {
      *(int **)(unaff_EDI + 0x8c) = piVar5;
    }
    else {
      *(int **)(iVar10 + 8) = piVar5;
    }
  }
  iVar9 = *(int *)(unaff_EDI + 0x16c);
  if (iVar9 != 0) {
    iVar10 = 0;
    iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar11) {
      do {
        piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
        *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
    if (DAT_012586f0 != '\0') {
      iVar10 = *(int *)(unaff_EDI + 0x90);
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar9;
        piVar5[1] = iVar10;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar9 = *(int *)(unaff_EDI + 0x94);
      *(int **)(unaff_EDI + 0x90) = piVar5;
      *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
      if (iVar9 == 0) {
        *(int **)(unaff_EDI + 0x8c) = piVar5;
      }
      else {
        *(int **)(iVar10 + 8) = piVar5;
      }
    }
  }
  if ((*(int *)(unaff_EDI + 0x110) != 0) && (iVar9 = *(int *)(iVar3 + 0x4c), iVar9 != 0)) {
    iVar10 = 0;
    iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar11) {
      do {
        piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
        *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
    if (DAT_012586f0 != '\0') {
      iVar10 = *(int *)(unaff_EDI + 0x90);
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar9;
        piVar5[1] = iVar10;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar9 = *(int *)(unaff_EDI + 0x94);
      *(int **)(unaff_EDI + 0x90) = piVar5;
      *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
      if (iVar9 == 0) {
        *(int **)(unaff_EDI + 0x8c) = piVar5;
      }
      else {
        *(int **)(iVar10 + 8) = piVar5;
      }
    }
  }
  if ((*(int *)(unaff_EDI + 0x164) != 0) && (**(int **)(unaff_EDI + 0x15c) != 0)) {
    piVar5 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(unaff_EDI + 300) * 0x10) +
                      *(int *)(**(int **)(unaff_EDI + 0x15c) + 0x6c) * 4);
    cVar2 = (**(code **)(*piVar5 + 0x34))();
    if (cVar2 != '\0') {
      iVar9 = 0;
      iVar10 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar10) {
        do {
          piVar6 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar9 * 8);
          *piVar6 = *piVar6 + *(int *)(piVar5[6] + iVar9 * 8);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar10);
      }
      if (DAT_012586f0 != '\0') {
        iVar9 = *(int *)(unaff_EDI + 0x90);
        piVar6 = (int *)FUN_00aae9af();
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = (int)piVar5;
          piVar6[1] = iVar9;
          piVar6[2] = 0;
          *(undefined1 *)(piVar6 + 3) = 0;
        }
        iVar10 = *(int *)(unaff_EDI + 0x94);
        *(int **)(unaff_EDI + 0x90) = piVar6;
        *(int *)(unaff_EDI + 0x94) = iVar10 + 1;
        if (iVar10 == 0) {
          *(int **)(unaff_EDI + 0x8c) = piVar6;
        }
        else {
          *(int **)(iVar9 + 8) = piVar6;
        }
      }
    }
  }
  iVar9 = *(int *)(unaff_EDI + 0x2b8);
  iVar10 = 0;
  *(undefined4 *)(unaff_EDI + 0x2b8) = 0;
  if (0 < (int)(*(int *)(unaff_EDI + 0x11c) - *(int *)(unaff_EDI + 0x118) & 0xfffffffcU)) {
    do {
      piVar5 = (int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4);
      if (DAT_0125ceac < *(int *)(*(int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4) + 0x20)) {
        *(undefined4 *)(*piVar5 + 0x10) = *(undefined4 *)(*(int *)(*piVar5 + 0x18) + 8);
        iVar11 = *(int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4);
        uVar4 = __alldiv((longlong)
                         *(int *)(*(int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4) + 0x24) *
                         (longlong)*(int *)(iVar11 + 0x10),1000);
        *(undefined4 *)(iVar11 + 0x10) = uVar4;
        iVar11 = *(int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4);
        if (iVar11 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)(iVar11 + 0x10);
        }
        piVar6 = (int *)(*(int *)(unaff_EDI + 0x9c) + *(int *)(piVar5[1] + 0x24) * 8);
        *piVar6 = *piVar6 + *piVar5;
        iVar11 = __alldiv((longlong)
                          *(int *)(*(int *)(*(int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4) +
                                           0x18) + 0x13c) *
                          (longlong)
                          *(int *)(*(int *)(*(int *)(unaff_EDI + 0x118) + iVar10 * 4) + 0x24),1000);
        *(int *)(unaff_EDI + 0x2b8) = *(int *)(unaff_EDI + 0x2b8) + iVar11;
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(unaff_EDI + 0x11c) - *(int *)(unaff_EDI + 0x118) >> 2);
  }
  if (((iVar9 != *(int *)(unaff_EDI + 0x2b8)) && (*(int *)(unaff_EDI + 300) != 0)) &&
     ((*(char *)(unaff_EDI + 0x128) != 'R' ||
      ((*(char *)(unaff_EDI + 0x129) != 'E' || (*(char *)(unaff_EDI + 0x12a) != 'B')))))) {
    *(undefined1 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(unaff_EDI + 300) * 4) + 0x15bc) =
         1;
  }
  if (DAT_0125a69c == 0) {
    iVar9 = FUN_00aae9af();
    local_c = 1;
    if (iVar9 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_008b0060();
    }
    local_c = 2;
    if ((iVar9 != DAT_0125a69c) && (DAT_0125a69c != 0)) {
      FUN_005c1a70();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c = 0xffffffff;
    DAT_0125a69c = iVar9;
  }
  iVar9 = *(int *)(DAT_0125a69c + 0xc0);
  if (iVar9 != 0) {
    iVar10 = 0;
    iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar11) {
      do {
        puVar7 = (undefined4 *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
        puVar8 = (undefined4 *)(*(int *)(unaff_EDI + 0x2d4) + iVar10 * 8);
        *puVar8 = *puVar7;
        iVar10 = iVar10 + 1;
        puVar8[1] = puVar7[1];
      } while (iVar10 < iVar11);
    }
    FUN_00408ed0();
    uVar4 = *(undefined4 *)(unaff_EDI + 0x2b8);
    iVar9 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        piVar5 = (int *)(*(int *)(unaff_EDI + 0x2d4) + iVar10 * 8);
        iVar11 = *piVar5;
        uVar12 = __allmul(iVar11,iVar11 >> 0x1f,uVar4);
        iVar11 = __alldiv(uVar12,1000);
        iVar10 = iVar10 + 1;
        *piVar5 = iVar11;
      } while (iVar10 < iVar9);
    }
    iVar9 = 0;
    iVar10 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar10) {
      do {
        piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar9 * 8);
        *piVar5 = *piVar5 + *(int *)(*(int *)(unaff_EDI + 0x2d4) + iVar9 * 8);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iVar10);
    }
    if (DAT_012586f0 != '\0') {
      iVar9 = *(int *)(unaff_EDI + 0x90);
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = unaff_EDI + 700;
        piVar5[1] = iVar9;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar10 = *(int *)(unaff_EDI + 0x94);
      *(int **)(unaff_EDI + 0x90) = piVar5;
      *(int *)(unaff_EDI + 0x94) = iVar10 + 1;
      if (iVar10 == 0) {
        *(int **)(unaff_EDI + 0x8c) = piVar5;
      }
      else {
        *(int **)(iVar9 + 8) = piVar5;
      }
    }
  }
  if (*(int *)(unaff_EDI + 0xe8) != 0) {
    if ((*(int *)(unaff_EDI + 0xe8) !=
         *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(unaff_EDI + 0x134) * 4) + 0xbe4) * 4) + 0xe8))
       && (*(int *)(unaff_EDI + 0x16c) !=
           *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                            *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(unaff_EDI + 0x134) * 4) + 0xbe4) * 4) + 0x16c)
          )) {
      iVar9 = *(int *)(iVar3 + 0x1c);
      if (iVar9 != 0) {
        iVar10 = 0;
        iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
        if (0 < iVar11) {
          do {
            piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
            *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
        if (DAT_012586f0 != '\0') {
          iVar10 = *(int *)(unaff_EDI + 0x90);
          piVar5 = (int *)FUN_00aae9af();
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = iVar9;
            piVar5[1] = iVar10;
            piVar5[2] = 0;
            *(undefined1 *)(piVar5 + 3) = 0;
          }
          iVar9 = *(int *)(unaff_EDI + 0x94);
          *(int **)(unaff_EDI + 0x90) = piVar5;
          *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
          if (iVar9 == 0) {
            *(int **)(unaff_EDI + 0x8c) = piVar5;
          }
          else {
            *(int **)(iVar10 + 8) = piVar5;
          }
        }
      }
      if ((((*(int *)(unaff_EDI + 300) == 0) || (*(int *)(unaff_EDI + 0x158) == 0)) &&
          (iVar9 = FUN_0048dfb0(*(undefined4 *)(unaff_EDI + 0x130)), iVar9 == 0)) &&
         (iVar9 = *(int *)(iVar3 + 0x34), iVar9 != 0)) {
        iVar10 = 0;
        iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
        if (0 < iVar11) {
          do {
            piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
            *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
        if (DAT_012586f0 != '\0') {
          iVar10 = *(int *)(unaff_EDI + 0x90);
          piVar5 = (int *)FUN_00aae9af();
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = iVar9;
            piVar5[1] = iVar10;
            piVar5[2] = 0;
            *(undefined1 *)(piVar5 + 3) = 0;
          }
          iVar9 = *(int *)(unaff_EDI + 0x94);
          *(int **)(unaff_EDI + 0x90) = piVar5;
          *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
          if (iVar9 == 0) {
            *(int **)(unaff_EDI + 0x8c) = piVar5;
          }
          else {
            *(int **)(iVar10 + 8) = piVar5;
          }
        }
      }
    }
  }
  iVar9 = *(int *)(unaff_EDI + 0x14c);
  iVar10 = *(int *)(unaff_EDI + 0x148);
  if (iVar10 != iVar9) {
    do {
      if (*(int *)(iVar10 + 4) == *(int *)(unaff_EDI + 300)) break;
      iVar10 = iVar10 + 8;
    } while (iVar10 != iVar9);
    if (((iVar10 != iVar9) && (iVar9 = *(int *)(iVar3 + 0x48), iVar9 != 0)) &&
       (*(char *)(iVar9 + 0x2c) == '\0')) {
      iVar10 = 0;
      iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar11) {
        do {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
          *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
      }
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_EDI + 0x90);
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = iVar9;
          piVar5[1] = iVar10;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar9 = *(int *)(unaff_EDI + 0x94);
        *(int **)(unaff_EDI + 0x90) = piVar5;
        *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
        if (iVar9 == 0) {
          *(int **)(unaff_EDI + 0x8c) = piVar5;
        }
        else {
          *(int **)(iVar10 + 8) = piVar5;
        }
      }
    }
  }
  iVar9 = *(int *)(unaff_EDI + 0x5c);
  if (*(char *)(iVar9 + 0xd8) == '\0') {
    if (*(char *)(iVar9 + 0x2a) == '\0') {
      if (((*(char *)(iVar9 + 0xd9) != '\0') && (iVar9 = *(int *)(iVar3 + 0x28), iVar9 != 0)) &&
         (*(char *)(iVar9 + 0x2c) == '\0')) {
        iVar10 = 0;
        iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
        if (0 < iVar11) {
          do {
            piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
            *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
        if (DAT_012586f0 != '\0') {
          iVar10 = *(int *)(unaff_EDI + 0x90);
          piVar5 = (int *)FUN_00aae9af();
          if (piVar5 == (int *)0x0) goto LAB_004b3222;
          *piVar5 = iVar9;
          piVar5[1] = iVar10;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
          goto LAB_004b3224;
        }
      }
    }
    else {
      iVar9 = *(int *)(iVar3 + 0x24);
      if ((iVar9 != 0) && (*(char *)(iVar9 + 0x2c) == '\0')) {
        iVar10 = 0;
        iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
        if (0 < iVar11) {
          do {
            piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
            *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
        goto LAB_004b30e3;
      }
    }
  }
  else {
    iVar9 = *(int *)(iVar3 + 0x20);
    if ((iVar9 != 0) && (*(char *)(iVar9 + 0x2c) == '\0')) {
      iVar10 = 0;
      iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar11) {
        do {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
          *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
      }
LAB_004b30e3:
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_EDI + 0x90);
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) {
LAB_004b3222:
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = iVar9;
          piVar5[1] = iVar10;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
LAB_004b3224:
        iVar9 = *(int *)(unaff_EDI + 0x94);
        *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
        *(int **)(unaff_EDI + 0x90) = piVar5;
        if (iVar9 == 0) {
          *(int **)(unaff_EDI + 0x8c) = piVar5;
        }
        else {
          *(int **)(iVar10 + 8) = piVar5;
        }
      }
    }
  }
  bVar1 = false;
  if (*(int *)(unaff_EDI + 0x134) == 0) {
LAB_004b32c1:
    if (((*(int *)(unaff_EDI + 300) != 0) && (iVar9 = *(int *)(iVar3 + 0x2c), iVar9 != 0)) &&
       (*(char *)(iVar9 + 0x2c) == '\0')) {
      iVar10 = 0;
      iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar11) {
        do {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
          *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
      }
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_EDI + 0x90);
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) {
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = iVar9;
          piVar5[1] = iVar10;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
        iVar9 = *(int *)(unaff_EDI + 0x94);
        *(int **)(unaff_EDI + 0x90) = piVar5;
        *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
        if (iVar9 == 0) {
          *(int **)(unaff_EDI + 0x8c) = piVar5;
        }
        else {
          *(int **)(iVar10 + 8) = piVar5;
        }
      }
    }
  }
  else {
    iVar9 = *(int *)(unaff_EDI + 0x5c);
    local_24 = (*(int *)(iVar9 + 0xcc) - *(int *)(iVar9 + 200)) / 0x24;
    if (local_24 < 1) goto LAB_004b32c1;
    iVar10 = 0;
    do {
      if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                           *(int *)(*(int *)(iVar9 + 200) + 4 + iVar10) * 4) + 0x134) ==
          *(int *)(unaff_EDI + 0x134)) {
        bVar1 = true;
      }
      iVar10 = iVar10 + 0x24;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
    if (!bVar1) goto LAB_004b32c1;
  }
  if (((*(char *)(unaff_EDI + 0x170) != '\0') && (iVar9 = *(int *)(iVar3 + 0x34), iVar9 != 0)) &&
     (*(char *)(iVar9 + 0x2c) == '\0')) {
    iVar10 = 0;
    iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar11) {
      do {
        piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
        *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar11);
    }
    if (DAT_012586f0 != '\0') {
      iVar10 = *(int *)(unaff_EDI + 0x90);
      piVar5 = (int *)FUN_00aae9af();
      if (piVar5 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        *piVar5 = iVar9;
        piVar5[1] = iVar10;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
      }
      iVar9 = *(int *)(unaff_EDI + 0x94);
      *(int **)(unaff_EDI + 0x90) = piVar5;
      *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
      if (iVar9 == 0) {
        *(int **)(unaff_EDI + 0x8c) = piVar5;
      }
      else {
        *(int **)(iVar10 + 8) = piVar5;
      }
    }
  }
  if (*(char *)(*(int *)(unaff_EDI + 0x5c) + 0x2a) == '\0') {
    iVar9 = *(int *)(iVar3 + 0x3c);
    if ((iVar9 != 0) && (*(char *)(iVar9 + 0x2c) == '\0')) {
      iVar10 = 0;
      iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar11) {
        do {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
          *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
      }
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_EDI + 0x90);
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) goto LAB_004b3562;
        *piVar5 = iVar9;
        piVar5[1] = iVar10;
        piVar5[2] = 0;
        *(undefined1 *)(piVar5 + 3) = 0;
        goto LAB_004b3564;
      }
    }
  }
  else {
    iVar9 = *(int *)(iVar3 + 0x38);
    if ((iVar9 != 0) && (*(char *)(iVar9 + 0x2c) == '\0')) {
      iVar10 = 0;
      iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar11) {
        do {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
          *piVar5 = *piVar5 + *(int *)(*(int *)(iVar9 + 0x18) + iVar10 * 8);
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar11);
      }
      if (DAT_012586f0 != '\0') {
        iVar10 = *(int *)(unaff_EDI + 0x90);
        piVar5 = (int *)FUN_00aae9af();
        if (piVar5 == (int *)0x0) {
LAB_004b3562:
          piVar5 = (int *)0x0;
        }
        else {
          *piVar5 = iVar9;
          piVar5[1] = iVar10;
          piVar5[2] = 0;
          *(undefined1 *)(piVar5 + 3) = 0;
        }
LAB_004b3564:
        iVar9 = *(int *)(unaff_EDI + 0x94);
        *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
        *(int **)(unaff_EDI + 0x90) = piVar5;
        if (iVar9 == 0) {
          *(int **)(unaff_EDI + 0x8c) = piVar5;
        }
        else {
          *(int **)(iVar10 + 8) = piVar5;
        }
      }
    }
  }
  if (*(int *)(unaff_EDI + 0x38) != 0) {
    iVar9 = *(int *)(unaff_EDI + 0x14c);
    iVar10 = *(int *)(unaff_EDI + 0x148);
    if (iVar10 != iVar9) {
      do {
        if (*(int *)(iVar10 + 4) == *(int *)(unaff_EDI + 0x134)) break;
        iVar10 = iVar10 + 8;
      } while (iVar10 != iVar9);
      if (iVar10 != iVar9) goto LAB_004b3731;
    }
    if ((*(int *)(unaff_EDI + 300) == *(int *)(unaff_EDI + 0x134)) && (*(int *)(iVar3 + 0x40) != 0))
    {
      puVar7 = (undefined4 *)FUN_00aae9af();
      local_c = 3;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        FUN_0044bc60();
        *puVar7 = CStaticModifier::vftable;
        puVar7[0x11] = 0xf;
        puVar7[0x10] = 0;
        *(undefined1 *)(puVar7 + 0xc) = 0;
      }
      local_c = 0xffffffff;
      FUN_0044cab0();
      FUN_00408ed0();
      FUN_0044cb00(puVar7);
      iVar3 = 0;
      iVar9 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
      if (0 < iVar9) {
        do {
          piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar3 * 8);
          *piVar5 = *piVar5 + *(int *)(iVar3 * 8 + puVar7[6]);
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar9);
      }
      if (DAT_012586f0 != '\0') {
        iVar9 = *(int *)(unaff_EDI + 0x90);
        puVar8 = (undefined4 *)FUN_00aae9af();
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          *puVar8 = puVar7;
          puVar8[1] = iVar9;
          puVar8[2] = 0;
          *(undefined1 *)(puVar8 + 3) = 0;
        }
        iVar3 = *(int *)(unaff_EDI + 0x94);
        *(undefined4 **)(unaff_EDI + 0x90) = puVar8;
        *(int *)(unaff_EDI + 0x94) = iVar3 + 1;
        if (iVar3 == 0) {
          *(undefined4 **)(unaff_EDI + 0x8c) = puVar8;
        }
        else {
          *(undefined4 **)(iVar9 + 8) = puVar8;
        }
      }
      iVar9 = *(int *)(unaff_EDI + 0xbc);
      puVar8 = (undefined4 *)FUN_00aae9af();
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = puVar7;
        puVar8[1] = iVar9;
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
      }
      iVar3 = *(int *)(unaff_EDI + 0xc0);
      *(undefined4 **)(unaff_EDI + 0xbc) = puVar8;
      *(int *)(unaff_EDI + 0xc0) = iVar3 + 1;
      if (iVar3 == 0) {
        *(undefined4 **)(unaff_EDI + 0xb8) = puVar8;
      }
      else {
        *(undefined4 **)(iVar9 + 8) = puVar8;
      }
    }
  }
LAB_004b3731:
  piVar5 = *(int **)(unaff_EDI + 200);
  iVar9 = *(int *)(DAT_012588e8 + 0xb0c);
joined_r0x004b3748:
  do {
    while( true ) {
      while( true ) {
        if (piVar5 == (int *)0x0) {
          cVar2 = (**(code **)(**(int **)(unaff_EDI + 800) + 0x38))();
          if (cVar2 != '\0') {
            iVar9 = *(int *)(unaff_EDI + 800);
            iVar10 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
            iVar3 = 0;
            if (0 < iVar10) {
              do {
                piVar5 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar3 * 8);
                *piVar5 = *piVar5 + *(int *)(iVar3 * 8 + *(int *)(iVar9 + 0x18));
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar10);
            }
            if (DAT_012586f0 != '\0') {
              iVar3 = *(int *)(unaff_EDI + 0x90);
              piVar5 = (int *)FUN_00aae9af();
              if (piVar5 == (int *)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                *piVar5 = iVar9;
                piVar5[1] = iVar3;
                piVar5[2] = 0;
                *(undefined1 *)(piVar5 + 3) = 0;
              }
              iVar9 = *(int *)(unaff_EDI + 0x94);
              *(int **)(unaff_EDI + 0x90) = piVar5;
              *(int *)(unaff_EDI + 0x94) = iVar9 + 1;
              if (iVar9 != 0) {
                *(int **)(iVar3 + 8) = piVar5;
                ExceptionList = pvStack_14;
                return;
              }
              *(int **)(unaff_EDI + 0x8c) = piVar5;
            }
          }
          ExceptionList = pvStack_14;
          return;
        }
        puVar7 = (undefined4 *)*piVar5;
        piVar5 = (int *)piVar5[2];
        if (((int)puVar7[3] < iVar9) &&
           (1 < (int)((double)((puVar7[3] + -43800000) / 0x18) / 365.0))) break;
        iVar3 = puVar7[2];
        iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
        iVar10 = 0;
        if (0 < iVar11) {
          do {
            piVar6 = (int *)(*(int *)(unaff_EDI + 0x9c) + iVar10 * 8);
            *piVar6 = *piVar6 + *(int *)(iVar10 * 8 + *(int *)(iVar3 + 0x18));
            iVar10 = iVar10 + 1;
          } while (iVar10 < iVar11);
        }
        if (DAT_012586f0 != '\0') {
          iVar10 = *(int *)(unaff_EDI + 0x90);
          piVar6 = (int *)FUN_00aae9af();
          if (piVar6 == (int *)0x0) {
            piVar6 = (int *)0x0;
          }
          else {
            *piVar6 = iVar3;
            piVar6[1] = iVar10;
            piVar6[2] = 0;
            *(undefined1 *)(piVar6 + 3) = 0;
          }
          iVar3 = *(int *)(unaff_EDI + 0x94);
          *(int **)(unaff_EDI + 0x90) = piVar6;
          *(int *)(unaff_EDI + 0x94) = iVar3 + 1;
          if (iVar3 == 0) {
            *(int **)(unaff_EDI + 0x8c) = piVar6;
          }
          else {
            *(int **)(iVar10 + 8) = piVar6;
          }
        }
      }
      piVar6 = *(int **)(unaff_EDI + 200);
      if (piVar6 != (int *)0x0) break;
LAB_004b381e:
      (**(code **)*puVar7)();
    }
    do {
      if ((undefined4 *)*piVar6 == puVar7) {
        if (piVar6 == (int *)0x0) goto LAB_004b381e;
        if (*(char *)(unaff_EDI + 0xd4) == '\0') {
          iVar9 = piVar6[1];
          iVar3 = piVar6[2];
          if (iVar9 != 0) {
            *(int *)(iVar9 + 8) = iVar3;
          }
          if (iVar3 != 0) {
            *(int *)(iVar3 + 4) = iVar9;
          }
          if (piVar6 == *(int **)(unaff_EDI + 200)) {
            *(int *)(unaff_EDI + 200) = iVar3;
          }
          if (piVar6 == *(int **)(unaff_EDI + 0xcc)) {
            *(int *)(unaff_EDI + 0xcc) = iVar9;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *(undefined1 *)(piVar6 + 3) = 1;
        (**(code **)*puVar7)();
        goto joined_r0x004b3748;
      }
      piVar6 = (int *)piVar6[2];
    } while (piVar6 != (int *)0x0);
    (**(code **)*puVar7)();
  } while( true );
}

