// FUN_00515490 @ 00515490 body=[[00515490, 005156fc] [00515700, 00515708] [00515712, 00515738] [00515742, 0051587c] [00515880, 00515952] [00515960, 0051620a] [00516210, 005163ba]]


/* WARNING: Removing unreachable block (ram,0x00515641) */
/* WARNING: Removing unreachable block (ram,0x005155e1) */
/* WARNING: Removing unreachable block (ram,0x00515581) */
/* WARNING: Removing unreachable block (ram,0x00515551) */
/* WARNING: Removing unreachable block (ram,0x005155b1) */
/* WARNING: Removing unreachable block (ram,0x00515611) */
/* WARNING: Removing unreachable block (ram,0x00515671) */

void FUN_00515490(int param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  int local_5c;
  int *local_58;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int *local_28;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b93450;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(undefined1 *)(param_1 + 0x1434) = 0;
  *(undefined4 *)(param_1 + 0x1414) = 0;
  FUN_00541ec0(param_1);
  iVar13 = DAT_012588e8;
  piVar3 = DAT_012587e4;
  FUN_00401000(0x3f000000);
  iVar5 = FUN_00b31c00();
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0xd00) = 0;
  *(undefined4 *)(param_1 + 0xd04) = 0;
  *(undefined4 *)(param_1 + 0xde8) = 0;
  if (*(int *)(param_1 + 0xd88) != *(int *)(param_1 + 0xd8c)) {
    *(int *)(param_1 + 0xd8c) = *(int *)(param_1 + 0xd88);
  }
  if (*(int *)(param_1 + 0xd58) != *(int *)(param_1 + 0xd5c)) {
    *(int *)(param_1 + 0xd5c) = *(int *)(param_1 + 0xd58);
  }
  if (*(int *)(param_1 + 0xd68) != *(int *)(param_1 + 0xd6c)) {
    *(int *)(param_1 + 0xd6c) = *(int *)(param_1 + 0xd68);
  }
  if (*(int *)(param_1 + 0xd38) != *(int *)(param_1 + 0xd3c)) {
    *(int *)(param_1 + 0xd3c) = *(int *)(param_1 + 0xd38);
  }
  if (*(int *)(param_1 + 0xd48) != *(int *)(param_1 + 0xd4c)) {
    *(int *)(param_1 + 0xd4c) = *(int *)(param_1 + 0xd48);
  }
  if (*(int *)(param_1 + 0xd78) != *(int *)(param_1 + 0xd7c)) {
    *(int *)(param_1 + 0xd7c) = *(int *)(param_1 + 0xd78);
  }
  if (*(int *)(param_1 + 0xd98) != *(int *)(param_1 + 0xd9c)) {
    *(int *)(param_1 + 0xd9c) = *(int *)(param_1 + 0xd98);
  }
  pvVar1 = *(void **)(param_1 + 0xea4);
  if (pvVar1 != *(void **)(param_1 + 0xea8)) {
    FID_conflict__memcpy(pvVar1,*(void **)(param_1 + 0xea8),0);
    *(void **)(param_1 + 0xea8) = pvVar1;
  }
  pvVar1 = *(void **)(param_1 + 0xeb4);
  if (pvVar1 != *(void **)(param_1 + 0xeb8)) {
    FID_conflict__memcpy(pvVar1,*(void **)(param_1 + 0xeb8),0);
    *(void **)(param_1 + 0xeb8) = pvVar1;
  }
  if (*(int *)(param_1 + 0xa28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xa28));
  }
  *(undefined4 *)(param_1 + 0xa28) = 0;
  *(undefined4 *)(param_1 + 0xa2c) = 0;
  *(undefined4 *)(param_1 + 0xa30) = 0;
  if (*(int *)(param_1 + 0xa38) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(*(int *)(param_1 + 0xa38));
  }
  *(undefined4 *)(param_1 + 0xa38) = 0;
  *(undefined4 *)(param_1 + 0xa3c) = 0;
  *(undefined4 *)(param_1 + 0xa40) = 0;
  *(undefined1 *)(param_1 + 0xe10) = 0;
  iVar14 = *(int *)(param_1 + 0xd0c) - *(int *)(param_1 + 0xd08);
  iVar6 = 0;
  if (0 < iVar14) {
    do {
      *(undefined1 *)(iVar6 + *(int *)(param_1 + 0xd08)) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0xdb8) + iVar6 * 4) = 0;
      *(undefined1 *)(iVar6 + *(int *)(param_1 + 0xd18)) = 0;
      *(undefined1 *)(iVar6 + *(int *)(param_1 + 0xd28)) = 0;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar14);
  }
  piVar12 = *(int **)(param_1 + 0xe44);
  *(undefined4 *)(param_1 + 0xdd0) = 0;
  *(undefined4 *)(param_1 + 0xdcc) = 0;
  *(undefined4 *)(param_1 + 0xdc8) = 0;
  *(undefined4 *)(param_1 + 0xdd4) = 0;
  *(undefined4 *)(param_1 + 0x7d8) = 0;
  *(undefined4 *)(param_1 + 0x7dc) = 0;
  *(undefined4 *)(param_1 + 0xdd8) = 0;
  *(undefined4 *)(param_1 + 0xddc) = 0;
  *(undefined4 *)(param_1 + 0xde0) = 0;
  *(undefined4 *)(param_1 + 0xde4) = 0;
  while (piVar12 != (int *)0x0) {
    iVar6 = *piVar12;
    piVar12 = (int *)piVar12[2];
    if (0 < *(int *)(iVar6 + 0x84)) {
      *(int *)(param_1 + 0x7d8) = *(int *)(param_1 + 0x7d8) + 1;
    }
  }
  uVar7 = FUN_005dba50();
  iVar6 = DAT_012588e8;
  *(undefined4 *)(param_1 + 0x7dc) = uVar7;
  local_4c = 0;
  piVar12 = *(int **)(*(int *)(iVar6 + 0xb98) + *(int *)(iVar6 + 0xb60) * 0x10);
  while (piVar12 != (int *)0x0) {
    piVar10 = (int *)piVar12[2];
    iVar6 = *piVar12;
    piVar12 = *(int **)(iVar6 + 0xa4);
    while (piVar12 != (int *)0x0) {
      iVar14 = *piVar12;
      piVar12 = (int *)piVar12[2];
      iVar15 = 0;
      local_5c = 0;
      if (0 < (int)(*(int *)(iVar14 + 0x40) - *(int *)(iVar14 + 0x3c) & 0xfffffffcU)) {
        local_58 = *(int **)(iVar14 + 0x3c);
        do {
          uVar7 = *(undefined4 *)(*local_58 + 0x60);
          if ((((char)uVar7 == 'R') && ((char)((uint)uVar7 >> 8) == 'E')) &&
             ((char)((uint)uVar7 >> 0x10) == 'B')) {
            local_5c = local_5c + 1;
          }
          local_58 = local_58 + 1;
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(int *)(iVar14 + 0x40) - *(int *)(iVar14 + 0x3c) >> 2);
      }
      *(int *)(param_1 + 0x1414) = *(int *)(param_1 + 0x1414) + local_5c * 1000;
    }
    lVar16 = __allmul(*(undefined4 *)(iVar6 + 0xb8),*(undefined4 *)(iVar6 + 0xbc),0x1f40000,0);
    iVar6 = FUN_004e9360(iVar6);
    iVar6 = __alldiv((longlong)
                     (int)((uint)(lVar16 >> 0xf) >> 0xf |
                          (int)((ulonglong)(lVar16 >> 0xf) >> 0x20) << 0x11) *
                     (longlong)(iVar6 * 1000),1000,0);
    *(int *)(param_1 + 0x1414) = *(int *)(param_1 + 0x1414) + iVar6;
    piVar12 = piVar10;
  }
  *(undefined4 *)(param_1 + 0x1540) = 0;
  local_50 = 0;
  local_58 = (int *)0x0;
  local_48 = iVar5;
  local_28 = *(int **)(param_1 + 0x9d8);
  while ((*(int **)(param_1 + 0x9d8) <= local_28 && (local_28 < *(int **)(param_1 + 0x9dc)))) {
    piVar12 = local_28 + 1;
    iVar6 = *(int *)(*(int *)(iVar13 + 0xacc) + *local_28 * 4);
    iVar14 = FUN_004b8870(iVar6);
    local_50 = local_50 + iVar14;
    local_4c = local_4c + iVar14 * 1000;
    if ((*(int *)(iVar6 + 0x16c) !=
         *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                          *(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0x20) * 4) + 0xbe4)
                          * 4) + 0x16c)) &&
       (*(int *)(iVar6 + 0xe8) !=
        *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                         *(int *)(*(int *)(DAT_012587e4[1] + *(int *)(param_1 + 0x20) * 4) + 0xbe4)
                         * 4) + 0xe8))) {
      *(int *)(param_1 + 0x1540) = *(int *)(param_1 + 0x1540) + 1;
    }
    if (((*(char *)(iVar6 + 0x130) == 'R') && (*(char *)(iVar6 + 0x131) == 'E')) &&
       (*(char *)(iVar6 + 0x132) == 'B')) {
      *(int *)(param_1 + 0xd00) = *(int *)(param_1 + 0xd00) + 1;
    }
    if ((*(int *)(iVar6 + 0x110) == 0) ||
       (iVar14 = *(int *)(*(int *)(iVar6 + 0x110) + 0x10),
       (int)(*(int *)(iVar14 + 0x38) - *(int *)(iVar14 + 0x34) & 0xfffffff8U) < 1)) {
      pcVar8 = (char *)(iVar6 + 0x130);
    }
    else {
      pcVar8 = *(char **)(iVar14 + 0x34);
    }
    if (((*pcVar8 == 'R') && (pcVar8[1] == 'E')) && (pcVar8[2] == 'B')) {
      *(int *)(param_1 + 0xd04) = *(int *)(param_1 + 0xd04) + 1;
    }
    iVar14 = FUN_004b7ae0();
    *(int *)(param_1 + 0xde4) = *(int *)(param_1 + 0xde4) + iVar14;
    if ((*(int *)(iVar6 + 300) != 0) && (*(int *)(iVar6 + 0x158) != 0)) {
      *(int *)(param_1 + 0xdd4) = *(int *)(param_1 + 0xdd4) + 1;
      iVar14 = *(int *)(param_1 + 0xbe4) * 4;
      iVar15 = 1000;
      if (*(int *)(iVar6 + 0xe8) ==
          *(int *)(*(int *)(iVar14 + *(int *)(DAT_012588e8 + 0xacc)) + 0xe8)) {
        *(int *)(param_1 + 0xdd0) = *(int *)(param_1 + 0xdd0) + 1;
      }
      iVar14 = *(int *)(iVar14 + *(int *)(DAT_012588e8 + 0xacc));
      if ((*(int *)(iVar6 + 0x16c) != *(int *)(iVar14 + 0x16c)) &&
         (*(int *)(iVar6 + 0xe8) == *(int *)(iVar14 + 0xe8))) {
        iVar15 = 0x32;
      }
      if (*(int *)(iVar6 + 0xe8) != *(int *)(iVar14 + 0xe8)) {
        uVar17 = __allmul(iVar15,0,1000,0);
        iVar15 = __alldiv(uVar17,4000,0);
      }
      if (iVar15 + 0x189373U < 0x39580e) {
        iVar14 = (iVar15 * 1000) / 2000;
      }
      else {
        uVar17 = __allmul(iVar15,iVar15 >> 0x1f,1000,0);
        iVar14 = __alldiv(uVar17,2000,0);
      }
      *(int *)(param_1 + 0xdc8) = *(int *)(param_1 + 0xdc8) + iVar14;
    }
    cVar4 = (**(code **)(**(int **)(iVar6 + 800) + 0x38))();
    if (cVar4 != '\0') {
      *(int *)(param_1 + 0xdcc) = *(int *)(param_1 + 0xdcc) + 1000;
    }
    local_44 = (*(int *)(*(int *)(iVar6 + 0x5c) + 0xcc) - *(int *)(*(int *)(iVar6 + 0x5c) + 200)) /
               0x24;
    local_28 = piVar12;
    if (0 < local_44) {
      local_5c = 0;
      do {
        iVar14 = *(int *)(*(int *)(iVar13 + 0xacc) +
                         *(int *)(*(int *)(*(int *)(iVar6 + 0x5c) + 200) + 4 + local_5c) * 4);
        iVar15 = *(int *)(iVar14 + 300);
        if ((iVar15 != *(int *)(param_1 + 0x20)) && (iVar15 != 0)) {
          if (*(char *)(iVar15 + *(int *)(param_1 + 0xd08)) == '\0') {
            FUN_004d61d0();
          }
          *(undefined1 *)(iVar15 + *(int *)(param_1 + 0xd08)) = 1;
          piVar12 = (int *)(*(int *)(param_1 + 0xdb8) + iVar15 * 4);
          FUN_00401000(0x447a1fff);
          iVar9 = FUN_00b31c00();
          *piVar12 = *piVar12 + iVar9;
          local_48 = local_48 + iVar9;
          if ((*(int *)(local_5c + *(int *)(*(int *)(iVar6 + 0x5c) + 200)) != 4) &&
             ((*(undefined1 *)(iVar15 + *(int *)(param_1 + 0xd18)) = 1,
              *(int *)(*(int *)(iVar6 + 0x188) + 0x84) < 1 ||
              (*(int *)(*(int *)(iVar14 + 0x188) + 0x84) < 1)))) {
            *(undefined1 *)(iVar15 + *(int *)(param_1 + 0xd28)) = 1;
          }
        }
        local_5c = local_5c + 0x24;
        local_44 = local_44 + -1;
      } while (local_44 != 0);
    }
  }
  if (0 < local_4c) {
    uVar17 = __allmul(*(int *)(param_1 + 0x1414),*(int *)(param_1 + 0x1414) >> 0x1f,1000,0);
    uVar7 = __alldiv(uVar17,local_4c,local_4c >> 0x1f);
    *(undefined4 *)(param_1 + 0x1414) = uVar7;
  }
  if (*(int *)(param_1 + 0xde4) < 1) {
    *(undefined4 *)(param_1 + 0xde4) = 1;
  }
  if ((*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU) != 0) {
    iVar6 = (*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) >> 2) * 1000;
    uVar17 = __allmul(*(int *)(param_1 + 0xdcc),*(int *)(param_1 + 0xdcc) >> 0x1f,1000,0);
    uVar7 = __alldiv(uVar17,iVar6,iVar6 >> 0x1f);
    *(undefined4 *)(param_1 + 0xdcc) = uVar7;
  }
  piVar12 = *(int **)(param_1 + 0x7b4);
  while (piVar12 != (int *)0x0) {
    piVar10 = (int *)*piVar12;
    piVar12 = (int *)piVar12[2];
    cVar4 = (**(code **)(*piVar10 + 0x38))();
    if (cVar4 != '\0') {
      piVar10 = (int *)piVar10[0xe];
      while (piVar10 != (int *)0x0) {
        iVar6 = *piVar10;
        piVar10 = (int *)piVar10[2];
        if ((*(int *)(iVar6 + 0x30) != 0) &&
           (*(char *)(*(int *)(*(int *)(iVar6 + 0x30) + 0x68) + 0x42) != '\0')) {
          local_58 = (int *)((int)local_58 + 1);
        }
      }
    }
  }
  if (local_50 != 0) {
    local_50 = local_50 * 1000;
    iVar6 = (int)local_58 * 1000;
    if (local_50 == 0) {
      local_50 = -1;
    }
    else if (iVar6 + 0x189373U < 0x39580e) {
      local_50 = ((int)local_58 * 1000000) / local_50;
    }
    else {
      uVar17 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
      local_50 = __alldiv(uVar17,local_50,local_50 >> 0x1f);
    }
    *(int *)(param_1 + 0x4d4) = local_50;
  }
  piVar12 = *(int **)(param_1 + 0x9e8);
  while (piVar12 != (int *)0x0) {
    iVar6 = *(int *)(*(int *)(iVar13 + 0xacc) + *piVar12 * 4);
    piVar12 = (int *)piVar12[2];
    if (0 < *(int *)(*(int *)(*(int *)(iVar6 + 0x118) + DAT_01258720 * 4) + 0x20)) {
      iVar14 = *(int *)(param_1 + 0xa3c);
      piVar10 = (int *)FUN_00aae9af(0x10);
      if (piVar10 == (int *)0x0) {
        piVar10 = (int *)0x0;
      }
      else {
        *piVar10 = iVar6;
        piVar10[1] = iVar14;
        piVar10[2] = 0;
        *(undefined1 *)(piVar10 + 3) = 0;
      }
      iVar6 = *(int *)(param_1 + 0xa40);
      *(int **)(param_1 + 0xa3c) = piVar10;
      *(int *)(param_1 + 0xa40) = iVar6 + 1;
      if (iVar6 == 0) {
        *(int **)(param_1 + 0xa38) = piVar10;
      }
      else {
        *(int **)(iVar14 + 8) = piVar10;
      }
    }
  }
  iVar6 = *piVar3;
  local_4c = 0;
  if (0 < iVar6) {
    do {
      iVar14 = *(int *)(piVar3[1] + local_4c * 4);
      iVar15 = *(int *)(iVar14 + 0x20);
      iVar9 = *(int *)(iVar14 + 0x1c);
      if ((((iVar15 != *(int *)(param_1 + 0x20)) && (iVar15 != 0)) &&
          (((char)iVar9 != 'R' ||
           (((char)((uint)iVar9 >> 8) != 'E' || ((char)((uint)iVar9 >> 0x10) != 'B')))))) &&
         (iVar14 = *(int *)(DAT_012587e4[1] + *(int *)(iVar14 + 0x20) * 4),
         0 < (int)(*(int *)(iVar14 + 0x9dc) - *(int *)(iVar14 + 0x9d8) & 0xfffffffcU))) {
        iVar14 = *(int *)(*(int *)(param_1 + 0xbe8) + iVar15 * 4);
        cVar4 = FUN_004a8300();
        if ((cVar4 == '\0') || (*(int *)(param_1 + 0xcfc) != iVar15)) {
LAB_00515fcb:
          if (*(int *)(iVar14 + 0x20) != 0) goto LAB_00515fd1;
        }
        else {
          if (*(int *)(iVar14 + 0x20) == 0) {
            iVar11 = FUN_00aae9af(0x24);
            if (iVar11 == 0) {
              piVar12 = (int *)0x0;
            }
            else {
              piVar12 = (int *)FUN_005163c0();
            }
            iVar11 = *(int *)(DAT_012588e8 + 0xb0c);
            iVar2 = *(int *)(param_1 + 0x1c);
            piVar12[3] = *(int *)(param_1 + 0x20);
            piVar12[2] = iVar2;
            piVar12[4] = iVar9;
            piVar12[5] = iVar15;
            piVar12[6] = iVar11;
            (**(code **)(*piVar12 + 0x28))();
            FUN_004a7bc0(piVar12);
            goto LAB_00515fcb;
          }
LAB_00515fd1:
          *(int *)(param_1 + 0xdd8) = *(int *)(param_1 + 0xdd8) + 1;
          FUN_004d61d0();
        }
        if ((*(int *)(iVar14 + 0x28) != 0) &&
           (*(int *)(*(int *)(iVar14 + 0x28) + 0xc) == *(int *)(iVar14 + 0xc))) {
          FUN_004d61d0();
        }
        if ((*(int **)(iVar14 + 0x24) != (int *)0x0) &&
           (((iVar9 = (**(code **)(**(int **)(iVar14 + 0x24) + 0x1c))(), iVar9 == 0x336 ||
             (iVar9 = (**(code **)(**(int **)(iVar14 + 0x24) + 0x1c))(), iVar9 == 0x93a)) &&
            (*(int *)(*(int *)(iVar14 + 0x24) + 0x14) == *(int *)(iVar14 + 0xc))))) {
          *(int *)(param_1 + 0xddc) = *(int *)(param_1 + 0xddc) + 1;
          FUN_004d61d0();
        }
        if (((*(int **)(iVar14 + 0x24) != (int *)0x0) &&
            (iVar9 = (**(code **)(**(int **)(iVar14 + 0x24) + 0x1c))(), iVar9 == 0x93a)) &&
           (*(int *)(*(int *)(iVar14 + 0x24) + 0x14) == *(int *)(iVar14 + 0xc))) {
          *(int *)(param_1 + 0xde0) = *(int *)(param_1 + 0xde0) + 1;
          FUN_004d61d0();
        }
        if (((*(int *)(iVar14 + 0x20) != 0) || (*(int *)(iVar14 + 0x24) != 0)) ||
           ((*(int *)(param_1 + 0x142c) == iVar15 ||
            ((((iVar9 = *(int *)(DAT_012587e4[1] + iVar15 * 4), *(char *)(iVar9 + 0xcf4) != '\0' &&
               (*(char *)(param_1 + 0xcf4) != '\0')) &&
              (*(int *)(iVar9 + 0xcfc) == *(int *)(param_1 + 0xcfc))) ||
             (*(char *)(iVar14 + 0x70) != '\0')))))) {
          FUN_004d61d0();
        }
        piVar12 = *(int **)(iVar14 + 0x38);
        if (piVar12 != (int *)0x0) {
          if ((*(char *)(*(int *)(DAT_012587e4[1] + iVar15 * 4) + 0x67c) == '\0') ||
             (*(int *)(iVar14 + 0x34) != 0)) {
            for (piVar10 = *(int **)(DAT_012588e8 + 0xa84);
                (piVar10 != (int *)0x0 && ((int *)*piVar10 != piVar12)); piVar10 = (int *)piVar10[2]
                ) {
            }
            FUN_005f2ae0(piVar10);
            (**(code **)(*piVar12 + 0x2c))();
            *(undefined1 *)(iVar14 + 0x71) = 1;
            *(undefined4 *)(iVar14 + 0x38) = 0;
            (**(code **)*piVar12)(1);
          }
          else {
            FUN_004e9b90();
          }
        }
        cVar4 = FUN_00511140(*(undefined4 *)(DAT_012587e4[1] + iVar15 * 4));
        if (cVar4 != '\0') {
          FUN_004e9b90();
        }
        piVar12 = *(int **)(param_1 + 0x9f8);
        while (piVar12 != (int *)0x0) {
          iVar14 = *piVar12;
          piVar12 = (int *)piVar12[2];
          if (*(int *)(*(int *)(*(int *)(iVar13 + 0xacc) + iVar14 * 4) + 300) == iVar15) {
            iVar14 = *(int *)(param_1 + 0xe64);
            iVar9 = FUN_009692c0();
            if (iVar9 == iVar14) {
              *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1000;
            }
            else {
              FUN_00401000(0x437a8000);
              iVar14 = FUN_00b31c00();
              *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + iVar14;
            }
          }
        }
      }
      local_4c = local_4c + 1;
    } while (local_4c < iVar6);
  }
  if (*(int *)(param_1 + 0xa00) != 0) {
    iVar13 = *(int *)(param_1 + 0xa00) * 1000;
    uVar17 = __allmul(*(int *)(param_1 + 0x1ac),*(int *)(param_1 + 0x1ac) >> 0x1f,1000,0);
    uVar7 = __alldiv(uVar17,iVar13,iVar13 >> 0x1f);
    *(undefined4 *)(param_1 + 0x1ac) = uVar7;
  }
  if ((iVar5 < local_48) && (iVar13 = 0, 0 < iVar6)) {
    do {
      iVar14 = *(int *)(param_1 + 0xdb8);
      iVar15 = *(int *)(iVar14 + iVar13 * 4);
      iVar5 = iVar13 * 4;
      uVar17 = __allmul(iVar15,iVar15 >> 0x1f,1000,0);
      uVar7 = __alldiv(uVar17,local_48,local_48 >> 0x1f);
      iVar13 = iVar13 + 1;
      *(undefined4 *)(iVar14 + iVar5) = uVar7;
    } while (iVar13 < iVar6);
  }
  piVar3 = *(int **)(param_1 + 0x9f8);
  iVar13 = 0;
  *(undefined4 *)(param_1 + 0xe28) = 0;
  iVar5 = DAT_012588e8;
  while (piVar3 != (int *)0x0) {
    iVar6 = *(int *)(*(int *)(iVar5 + 0xacc) + *piVar3 * 4);
    piVar3 = (int *)piVar3[2];
    if ((*(int *)(iVar6 + 300) == *(int *)(param_1 + 0x20)) &&
       (iVar13 = iVar13 + 1000, *(int *)(iVar6 + 0x134) == *(int *)(param_1 + 0x20))) {
      *(int *)(param_1 + 0xe28) = *(int *)(param_1 + 0xe28) + 1000;
    }
  }
  if (0 < iVar13) {
    uVar17 = __allmul(*(int *)(param_1 + 0xe28),*(int *)(param_1 + 0xe28) >> 0x1f,1000,0);
    uVar7 = __alldiv(uVar17,iVar13,iVar13 >> 0x1f);
    *(undefined4 *)(param_1 + 0xe28) = uVar7;
  }
  FUN_0051f4d0(param_1);
  FUN_0051f990();
  FUN_00545be0(param_1);
  ExceptionList = pvStack_14;
  return;
}

