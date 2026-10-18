// FUN_004ba780 @ 004ba780 body=[[004ba780, 004bad97]]


void FUN_004ba780(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  int local_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b5856b;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_0131bb34 == 0) {
    ExceptionList = &pvStack_14;
    local_1c = FUN_00aae9af(0x188);
    local_c = 0;
    if (local_1c == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_0041a160();
    }
    local_c = 0xffffffff;
    FUN_00423700(uVar5);
  }
  iVar3 = DAT_012588e8;
  iVar8 = *(int *)(param_1 + 0x30c);
  local_2c = (int *)(DAT_0131bb34 + 0xc);
  iVar9 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_30 = 0;
  local_34 = iVar9;
  if ((*(int *)(param_1 + 0x310) - iVar8) / 0x278 < 1) {
LAB_004bad2f:
    if (0 < iVar9) {
      iVar8 = 0;
      local_30 = iVar9;
      do {
        if (*(int *)(iVar8 + 8 + *(int *)(param_1 + 0x194)) != 0) {
          iVar3 = *(int *)(iVar8 + *(int *)(param_1 + 0x194));
          while (iVar3 != 0) {
            piVar1 = (int *)(iVar3 + 0x58);
            iVar3 = *(int *)(iVar3 + 0x27c);
            if (*piVar1 < 1) {
              FUN_004b9250(param_1);
            }
          }
        }
        iVar8 = iVar8 + 0x10;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
    ExceptionList = pvStack_14;
    return;
  }
LAB_004ba830:
  iVar8 = local_30 * 0x278 + iVar8;
  if (0 < *(int *)(iVar8 + 0x58)) {
    iVar9 = *(int *)(iVar8 + 0x68);
    if ((*(char *)(iVar9 + 0x3d8) != '\0') &&
       (*(int *)(*(int *)(iVar8 + 100) + 300) != *(int *)(param_1 + 300))) {
      iVar9 = *(int *)(*(int *)(param_1 + 0x194) + *(int *)(iVar9 + 0x28) * 0x10);
      do {
        local_38 = iVar9;
        if (local_38 == 0) goto LAB_004baa33;
        iVar7 = *(int *)(local_38 + 0x68);
        iVar9 = *(int *)(local_38 + 0x27c);
      } while (((((*(int *)(iVar7 + 0x30) != -1) &&
                 (*(int *)(iVar7 + 0x30) <= *(int *)(local_38 + 0x58))) ||
                (*(char *)(iVar7 + 0x3d9) != '\0')) ||
               ((*(int *)(*(int *)(iVar8 + 0x68) + 0x3c) <= *(int *)(iVar7 + 0x3c) ||
                (*(int *)(local_38 + 0x6c) != *(int *)(iVar8 + 0x6c))))) ||
              (*(int *)(local_38 + 0x70) != *(int *)(iVar8 + 0x70)));
      FUN_00964370(iVar8,1);
      uVar5 = *(undefined4 *)(iVar8 + 0x58);
      uVar12 = *(undefined4 *)(param_1 + 0x58);
      uVar11 = *(undefined4 *)(*(int *)(iVar8 + 100) + 0x58);
      goto LAB_004baa1f;
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x194) + *(int *)(iVar9 + 0x28) * 0x10);
    iVar7 = iVar9;
    do {
      iVar10 = iVar7;
      iVar7 = iVar9;
      if (iVar10 == 0) goto LAB_004ba959;
      iVar2 = *(int *)(*(int *)(iVar10 + 0x68) + 0x30);
      iVar7 = *(int *)(iVar10 + 0x27c);
    } while (((iVar2 != -1) && (iVar2 <= *(int *)(iVar10 + 0x58))) ||
            ((*(int *)(iVar10 + 0x68) != *(int *)(iVar8 + 0x68) ||
             ((*(int *)(iVar10 + 0x6c) != *(int *)(iVar8 + 0x6c) ||
              (*(int *)(iVar10 + 0x70) != *(int *)(iVar8 + 0x70)))))));
    FUN_00964370(iVar8,1);
    FUN_0068dea0(*(undefined4 *)(*(int *)(iVar8 + 100) + 0x58),*(undefined4 *)(param_1 + 0x58),
                 *(undefined4 *)(iVar8 + 0x58));
    goto LAB_004bac60;
  }
  goto LAB_004bad00;
  while( true ) {
    iVar2 = *(int *)(iVar10 + 0x68);
    iVar7 = *(int *)(iVar10 + 0x27c);
    if ((((*(int *)(iVar2 + 0x30) == -1) || (*(int *)(iVar10 + 0x58) < *(int *)(iVar2 + 0x30))) &&
        (*(char *)(iVar2 + 0x3d9) == '\0')) &&
       ((*(int *)(iVar2 + 0x3c) == *(int *)(*(int *)(iVar8 + 0x68) + 0x3c) &&
        (*(int *)(iVar10 + 0x6c) == *(int *)(iVar8 + 0x6c))))) break;
LAB_004ba959:
    iVar10 = iVar7;
    if (iVar10 == 0) goto LAB_004ba9c2;
  }
  FUN_00964370(iVar8,1);
  FUN_0068dea0(*(undefined4 *)(*(int *)(iVar8 + 100) + 0x58),*(undefined4 *)(param_1 + 0x58),
               *(undefined4 *)(iVar8 + 0x58));
  goto LAB_004bac60;
  while( true ) {
    iVar7 = *(int *)(local_38 + 0x68);
    iVar9 = *(int *)(local_38 + 0x27c);
    if (((*(int *)(iVar7 + 0x30) == -1) || (*(int *)(local_38 + 0x58) < *(int *)(iVar7 + 0x30))) &&
       ((*(char *)(iVar7 + 0x3d9) == '\0' &&
        ((iVar7 == *(int *)(iVar8 + 0x68) &&
         (*(int *)(*(int *)(local_38 + 0x6c) + 0x50) == *(int *)(*(int *)(iVar8 + 0x6c) + 0x50))))))
       ) break;
LAB_004ba9c2:
    local_38 = iVar9;
    if (local_38 == 0) goto LAB_004baa33;
  }
  FUN_00964370(iVar8,1);
  uVar5 = *(undefined4 *)(iVar8 + 0x58);
  uVar12 = *(undefined4 *)(param_1 + 0x58);
  uVar11 = *(undefined4 *)(*(int *)(iVar8 + 100) + 0x58);
LAB_004baa1f:
  FUN_0068dea0(uVar11,uVar12,uVar5);
  if (local_38 == 0) {
LAB_004baa33:
    piVar1 = local_2c;
    local_38 = *(int *)(iVar8 + 0x68);
    if ((*(char *)(local_38 + 0x3d8) != '\0') && (iVar9 = 0, 0 < local_34)) {
      do {
        if (piVar1[1] - *piVar1 >> 2 < iVar9) {
          piVar6 = (int *)FUN_0096bb70();
        }
        else {
          piVar6 = *(int **)(*piVar1 + iVar9 * 4);
        }
        cVar4 = (**(code **)(*piVar6 + 0x18))();
        if (cVar4 != '\0') {
          if (piVar1[1] - *piVar1 >> 2 < iVar9) {
            iVar7 = FUN_0096bb70();
          }
          else {
            iVar7 = *(int *)(*piVar1 + iVar9 * 4);
          }
          if (*(char *)(iVar7 + 0x3d9) == '\0') {
            if (piVar1[1] - *piVar1 >> 2 < iVar9) {
              iVar7 = FUN_0096bb70();
            }
            else {
              iVar7 = *(int *)(*piVar1 + iVar9 * 4);
            }
            if (*(int *)(iVar7 + 0x3c) < *(int *)(*(int *)(iVar8 + 0x68) + 0x3c)) {
              if (piVar1[1] - *piVar1 >> 2 < iVar9) {
                local_38 = FUN_0096bb70();
              }
              else {
                local_38 = *(int *)(*piVar1 + iVar9 * 4);
              }
            }
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_34);
    }
    iVar9 = FUN_004b8d30(param_1,local_38);
    FUN_00955a00();
    local_38 = 1;
    if ((*(int *)(iVar8 + 100) != 0) &&
       (*(int *)(*(int *)(iVar8 + 100) + 300) != *(int *)(param_1 + 300))) {
      local_38 = 2;
    }
    iVar7 = *(int *)(iVar8 + 0x58);
    iStack_28 = *(int *)(iVar9 + 0x58);
    FUN_00955fd0();
    if (local_38 < 9) {
      piVar1 = (int *)(iVar9 + 0x158 + local_38 * 4);
      *piVar1 = *piVar1 + (iVar7 - iStack_28);
    }
    iVar7 = *(int *)(iVar8 + 0x184);
    if (iVar7 < 0) {
      *(undefined4 *)(iVar9 + 0x180) = 0;
      *(undefined4 *)(iVar9 + 0x184) = 0;
    }
    else {
      *(undefined4 *)(iVar9 + 0x180) = *(undefined4 *)(iVar8 + 0x180);
      *(int *)(iVar9 + 0x184) = iVar7;
    }
    local_1c = *(int *)(iVar8 + 0x58);
    local_38 = *(int *)(param_1 + 0x58);
    uStack_20 = *(undefined4 *)(*(int *)(iVar8 + 100) + 0x58);
    piVar1 = *(int **)(iVar3 + 0xc10);
    iStack_24 = piVar1[6];
    iVar9 = iStack_24;
    if ((piVar1[4] != DAT_0125a35c) && (piVar1[4] != *(int *)(iVar3 + 0xb0c))) {
      iStack_28 = iStack_24 + 1;
      piVar1[6] = iStack_28;
      if ((piVar1[1] - *piVar1) / 0x1c <= iStack_28) {
        piVar1[6] = 0;
      }
      iVar9 = piVar1[6];
      if (piVar1[5] < iVar9) {
        piVar1[5] = iVar9;
      }
    }
    iVar7 = *piVar1;
    piVar1[4] = *(int *)(iVar3 + 0xb0c);
    if (iVar9 != iStack_24) {
      FUN_004449f0((char)piVar1[7],iVar3 + 0xb0c);
    }
    FUN_00444da0(iVar7 + iVar9 * 0x1c,uStack_20,local_38);
    if (*(int *)(*(int *)(iVar3 + 0xacc) + local_38 * 4) != 0) {
      *(undefined4 *)(*(int *)(*(int *)(iVar3 + 0xacc) + local_38 * 4) + 0x354) =
           *(undefined4 *)(DAT_012588e8 + 0xb0c);
    }
  }
LAB_004bac60:
  if (*(char *)(*(int *)(iVar8 + 0x68) + 0x40) == '\0') {
    *(undefined4 *)(iVar8 + 0x60) = 0;
  }
  else {
    iVar9 = *(int *)(iVar8 + 0x60);
    if (0 < iVar9) {
      iVar7 = *(int *)(*(int *)(iVar8 + 100) + 0x58);
      local_38 = iVar9;
      if (DAT_01258728 == (int *)0x0) {
        DAT_01258728 = (int *)FUN_00aae9af(0x14);
        if (DAT_01258728 == (int *)0x0) {
          DAT_01258728 = (int *)0x0;
        }
        else {
          *DAT_01258728 = 0;
          DAT_01258728[1] = 0;
          DAT_01258728[2] = 0;
          *(undefined1 *)(DAT_01258728 + 4) = 0;
        }
      }
      FUN_004ee550(iVar7 * 0xb0 + 0x10 + *DAT_01258728,&local_38);
      FUN_004d1020(iVar8,&local_38);
    }
  }
  iVar9 = *(int *)(iVar8 + 0x58);
  *(int *)(iVar8 + 0x5c) = iVar9;
  *(undefined4 *)(iVar8 + 0x58) = 0;
  if (iVar9 == 0) {
    *(undefined4 *)(iVar8 + 0x5c) = 0;
  }
  *(undefined4 *)(iVar8 + 0x180) = 0;
  *(undefined4 *)(iVar8 + 0x184) = 0;
  iVar9 = local_34;
LAB_004bad00:
  iVar8 = *(int *)(param_1 + 0x30c);
  local_30 = local_30 + 1;
  if ((*(int *)(param_1 + 0x310) - iVar8) / 0x278 <= local_30) goto LAB_004bad2f;
  goto LAB_004ba830;
}

