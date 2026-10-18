// FUN_008569a0 @ 008569a0 body=[[008569a0, 00856c82] [00856c86, 00856d88] [00856d8c, 00857079] [00857080, 00857193]]


void FUN_008569a0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  void *_Dst;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined8 uVar16;
  int local_3c;
  int *piStack_38;
  int local_34;
  int local_28;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  iVar5 = DAT_012588e8;
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b90c11;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  iVar4 = FUN_009b7610();
  *(int *)(in_ECX + 0x30) = iVar4 % 0x11 + 10;
  iVar13 = DAT_012587e4;
  iVar5 = (*(int *)(iVar5 + 0xb0c) + -43800000) / 0x18;
  iVar4 = 0;
  for (iVar9 = (iVar5 - (int)((float)(int)((double)iVar5 / 365.0) * 365.0)) - DAT_00f1027c;
      -1 < iVar9; iVar9 = iVar9 - (&DAT_00f1027c)[iVar4]) {
    iVar4 = iVar4 + 1;
  }
  iVar12 = 0;
  iVar9 = 0;
  local_3c = 0;
  if (1 < iVar4) {
    iVar9 = 0;
    do {
      iVar12 = iVar12 + (&DAT_00f1027c)[iVar9];
      local_3c = local_3c + (&DAT_00f10280)[iVar9];
      iVar9 = iVar9 + 2;
    } while (iVar9 < iVar4 + -1);
  }
  iVar7 = 0;
  if (iVar9 < iVar4) {
    iVar7 = (&DAT_00f1027c)[iVar9];
  }
  iVar5 = (iVar5 - (int)((float)(int)((double)iVar5 / 365.0) * 365.0)) - (iVar7 + iVar12 + local_3c)
  ;
  if (*(int *)(in_ECX + 0x68) != iVar5) {
    *(int *)(in_ECX + 0x68) = iVar5;
    *(undefined1 *)(in_ECX + 0x6c) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xac8);
    *(undefined1 *)(in_ECX + 0x6d) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xad0);
    *(undefined1 *)(in_ECX + 0x6e) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xad8);
    *(undefined1 *)(in_ECX + 0x6f) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xae8);
    *(undefined1 *)(in_ECX + 0x70) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xae0);
    if ((*(char *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x31) == '\0') ||
       (*(char *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xb20) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(in_ECX + 0x71) = uVar3;
    if ((*(char *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0x31) == '\0') ||
       (*(char *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xb28) == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(in_ECX + 0x72) = uVar3;
    *(undefined1 *)(in_ECX + 0x73) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xb40);
    *(undefined1 *)(in_ECX + 0x74) =
         *(undefined1 *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) + 0xb38);
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar5 = FUN_004dad40();
      piVar14 = *(int **)(iVar5 + 0x1c);
      iVar5 = *(int *)(iVar5 + 0x20) - (int)piVar14 >> 2;
      iVar4 = 0;
      piVar10 = piVar14;
      iVar13 = DAT_012587e4;
      if (0 < iVar5) {
        do {
          if (*(int *)(*piVar10 + 0x10) == 2) {
            *(int *)(in_ECX + 0x78) = piVar14[iVar4];
            iVar13 = DAT_012587e4;
            break;
          }
          iVar4 = iVar4 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar4 < iVar5);
      }
    }
    if (*(int *)(in_ECX + 0x7c) == 0) {
      if (DAT_0125ce80 == (undefined4 *)0x0) {
        iVar5 = FUN_00aae9af(0x3c);
        local_c = 0;
        if (iVar5 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)FUN_004dada0();
        }
        puVar2 = DAT_0125ce80;
        local_c = 1;
        if ((puVar6 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
          FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar2);
        }
        local_c = 0xffffffff;
        iVar13 = DAT_012587e4;
        DAT_0125ce80 = puVar6;
      }
      piVar14 = (int *)DAT_0125ce80[7];
      iVar5 = DAT_0125ce80[8] - (int)piVar14 >> 2;
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          if (*(int *)(*piVar14 + 0x10) == 4) {
            *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(DAT_0125ce80[7] + iVar4 * 4);
            break;
          }
          iVar4 = iVar4 + 1;
          piVar14 = piVar14 + 1;
        } while (iVar4 < iVar5);
      }
    }
    if (*(int *)(in_ECX + 0x80) == 0) {
      if (DAT_0125ce80 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_00aae9af(0x3c);
        local_c = 2;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = 0x1ff;
          *puVar6 = 0;
          _Dst = (void *)FUN_00aad56b(0x7fc);
          puVar6[2] = _Dst;
          _memset(_Dst,0,puVar6[1] * 4);
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[7] = 0;
          puVar6[8] = 0;
          puVar6[9] = 0;
        }
        puVar2 = DAT_0125ce80;
        local_c = 3;
        if ((puVar6 != DAT_0125ce80) && (DAT_0125ce80 != (undefined4 *)0x0)) {
          FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(puVar2);
        }
        local_c = 0xffffffff;
        iVar13 = DAT_012587e4;
        DAT_0125ce80 = puVar6;
      }
      piVar14 = (int *)DAT_0125ce80[7];
      iVar5 = DAT_0125ce80[8] - (int)piVar14 >> 2;
      iVar4 = 0;
      piVar10 = piVar14;
      if (0 < iVar5) {
        do {
          if (*(int *)(*piVar10 + 0x10) == 3) {
            *(int *)(in_ECX + 0x80) = piVar14[iVar4];
            break;
          }
          iVar4 = iVar4 + 1;
          piVar10 = piVar10 + 1;
        } while (iVar4 < iVar5);
      }
    }
    iVar5 = *(int *)(iVar13 + 4);
    if (*(char *)(*(int *)(iVar5 + *(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x38) * 4) + 0x370) *
                                   4) + 0x67c) == '\0') {
      iVar4 = *(int *)(DAT_012586dc + 0x60);
      iVar9 = *(int *)(iVar4 + 0x34);
      iVar12 = *(int *)(iVar4 + 0x3c);
      local_34 = *(int *)(iVar4 + 0x38);
      iVar7 = *(int *)(iVar4 + 0x40);
      iVar4 = *(int *)(iVar4 + 0x44);
      if ((*(int *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x38) * 4) + 0x7d8) < 1) &&
         (*(char *)(*(int *)(iVar5 + *(int *)(in_ECX + 0x38) * 4) + 0x31) == '\0')) {
        uVar16 = __allmul(local_34,local_34 >> 0x1f,1000,0);
        local_34 = __alldiv(uVar16,3000,0);
      }
      iVar5 = DAT_012588e8;
      iVar15 = DAT_012588e8 + 0xb4;
      if (*(int *)(DAT_012588e8 + 0xa74) == 0) {
        FUN_009b7700();
      }
      iVar1 = *(int *)(iVar5 + 0xa74);
      uVar11 = *(uint *)(iVar15 + iVar1 * 4);
      uVar11 = uVar11 ^ (int)uVar11 >> 0xb;
      uVar11 = uVar11 ^ (uVar11 & 0xff3a58ad) << 7;
      uVar11 = uVar11 ^ (uVar11 & 0xffffdf8c) << 0xf;
      *(int *)(iVar5 + 0xa74) = (iVar1 + 1) % 0x270;
      iVar5 = ((int)(uVar11 ^ (int)uVar11 >> 0x12) % 1000) * 1000;
      uVar16 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
      iVar5 = __alldiv(uVar16,1000000,0);
      if (*(char *)(*(int *)(*(int *)(iVar13 + 4) +
                            *(int *)(*(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4) +
                                    0x370) * 4) + 0x67c) == '\0') {
        if (iVar5 <= iVar12) {
          FUN_00858560();
          iVar13 = DAT_012587e4;
        }
        if (iVar5 <= local_34) {
          FUN_00858460();
          iVar13 = DAT_012587e4;
        }
      }
      if (((*(char *)(in_ECX + 0x6c) != '\0') || (*(char *)(in_ECX + 0x6d) != '\0')) ||
         (*(char *)(in_ECX + 0x6e) != '\0')) {
        FUN_00858670(in_ECX);
        iVar13 = DAT_012587e4;
      }
      if ((*(char *)(in_ECX + 0x6f) != '\0') && (iVar5 <= iVar9)) {
        FUN_008582d0();
        iVar13 = DAT_012587e4;
      }
      if ((((*(char *)(in_ECX + 0x71) != '\0') || (*(char *)(in_ECX + 0x72) != '\0')) ||
          (*(char *)(in_ECX + 0x74) != '\0')) && (iVar5 <= iVar4)) {
        FUN_008589b0(in_ECX);
        iVar13 = DAT_012587e4;
      }
      if ((*(char *)(in_ECX + 0x73) != '\0') && (iVar5 <= iVar7)) {
        FUN_00859180(in_ECX);
        iVar13 = DAT_012587e4;
      }
    }
    if ((*(char *)(in_ECX + 0x70) != '\0') &&
       (iVar5 = *(int *)(*(int *)(iVar13 + 4) + *(int *)(in_ECX + 0x38) * 4),
       *(char *)(iVar5 + 0x67c) == '\0')) {
      iVar4 = 0;
      local_28 = 0;
      local_34 = 0;
      piStack_38 = *(int **)(iVar5 + 0xe44);
      if (*(int **)(iVar5 + 0xe44) != (int *)0x0) {
        do {
          piVar14 = (int *)piStack_38[2];
          iVar9 = *piStack_38;
          if (6 < *(int *)(iVar9 + 0x68)) {
            iVar13 = *(int *)(iVar9 + 0x60);
            while (iVar12 = iVar13, iVar12 != 0) {
              iVar13 = *(int *)(iVar12 + 0x224);
              if ((((*(int *)(iVar12 + 0x20) < 1) || (10 < *(int *)(iVar12 + 0x184))) ||
                  (*(char *)(iVar12 + 0x188) != '\0')) &&
                 ((iVar7 = FUN_008571a0(*(undefined4 *)(iVar12 + 0x18),iVar5), iVar4 == 0 ||
                  (iVar7 < local_28)))) {
                iVar4 = iVar12;
                local_34 = iVar9;
                local_28 = iVar7;
              }
            }
          }
          piStack_38 = piVar14;
        } while (piVar14 != (int *)0x0);
        if ((iVar4 != 0) && (local_34 != 0)) {
          iVar5 = *(int *)(local_34 + 0x60);
          iVar9 = 0;
          if (iVar5 != 0) {
            while (iVar4 != iVar5) {
              iVar5 = *(int *)(iVar5 + 0x224);
              iVar9 = iVar9 + 1;
              if (iVar5 == 0) {
                ExceptionList = local_14;
                return;
              }
            }
            if ((iVar5 != 0) && (-1 < iVar9)) {
              iVar5 = FUN_00aae9af(0x50);
              local_c = 4;
              if (iVar5 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_0057cc60(iVar5,*(undefined4 *)(in_ECX + 0x34),
                                     *(undefined4 *)(in_ECX + 0x38),iVar9);
              }
              local_c = 0xffffffff;
              iVar5 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
              (**(code **)(**(int **)(iVar5 + 0x38) + 0x18))(uVar8);
            }
          }
        }
      }
    }
  }
  ExceptionList = local_14;
  return;
}

