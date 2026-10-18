// FUN_0057dbf0 @ 0057dbf0 body=[[0057dbf0, 0057dd8b] [0057dd8f, 0057df3c] [0057df40, 0057e283]]


void FUN_0057dbf0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int *unaff_EBX;
  int iVar12;
  undefined4 unaff_ESI;
  int iVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  int iStack_74;
  int local_70;
  int *piStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int *local_3c [4];
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00ba6999;
  pvStack_14 = ExceptionList;
  iVar13 = *(int *)(in_ECX + 0x58);
  DAT_01258a66 = 1;
  if (iVar13 == 0) {
    ExceptionList = &pvStack_14;
    local_3c[0] = (int *)FUN_00aae9af(0x1b8);
    local_c = 0;
    if (local_3c[0] == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_004460d0();
    }
  }
  else if (iVar13 == 1) {
    ExceptionList = &pvStack_14;
    local_3c[0] = (int *)FUN_00aae9af(0x1c0);
    local_c = 1;
    if (local_3c[0] == (int *)0x0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)FUN_005d75b0();
    }
  }
  else {
    piVar7 = (int *)0x0;
    ExceptionList = &pvStack_14;
    if (iVar13 == 2) {
      ExceptionList = &pvStack_14;
      piVar7 = (int *)FUN_00aae9af(0x1a4);
      local_c = 2;
      local_3c[0] = piVar7;
      if (piVar7 == (int *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        FUN_005c5e00(piVar7);
        *piVar7 = (int)CAir::vftable;
        piVar7[2] = (int)CAir::vftable;
      }
    }
  }
  local_c = 0xffffffff;
  (**(code **)(piVar7[2] + 0x18))((int *)(in_ECX + 0x48));
  FUN_005c93b0(*(undefined4 *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40));
  (**(code **)(*piVar7 + 0x6c))(*(undefined4 *)(DAT_012588e8 + 0xb24));
  uVar8 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  uVar15 = 0;
  uVar4 = (**(code **)(*piVar7 + 0x3c))(0);
  uVar8 = FUN_004f9d10(uVar8,local_3c,uVar4,uVar15);
  pvStack_14 = (void *)0x5;
  FUN_005cdc70(uVar8);
  pvStack_14 = (void *)0xffffffff;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_3c[0]);
  }
  uStack_28 = 0xf;
  uStack_2c = 0;
  local_3c[0] = (int *)((uint)local_3c[0] & 0xffffff00);
  FUN_00513c80();
  FUN_005cb2c0(iStack_4c);
  if ((*(char *)(iStack_48 + 0x5d) != '\0') &&
     ((*(int *)(in_ECX + 0x4c) != *(int *)(iStack_48 + 0x54) ||
      (*(int *)(in_ECX + 0x48) != *(int *)(iStack_48 + 0x50))))) {
    piVar7 = *(int **)(iStack_4c + 0xec);
    piStack_68 = (int *)0x0;
    do {
      piVar1 = piStack_68;
      if (piVar7 == (int *)0x0) break;
      piVar1 = (int *)*piVar7;
      piVar7 = (int *)piVar7[2];
    } while ((piVar1[5] != *(int *)(iStack_48 + 0x54)) || (piVar1[4] != *(int *)(iStack_48 + 0x50)))
    ;
    piStack_68 = piVar1;
    cVar5 = (**(code **)(*(int *)piStack_68[0x36] + 0x20))();
    if (cVar5 != '\0') {
      FUN_005cbcc0(piStack_68[0x36]);
      uVar8 = FUN_005b6140();
      FUN_005cbcc0(uVar8);
    }
    if (1 < piStack_68[0x10]) {
      cVar5 = (**(code **)(*piStack_68 + 0x38))();
      cVar6 = (**(code **)(*unaff_EBX + 0x38))();
      if (cVar5 == cVar6) {
        piVar7 = (int *)piStack_68[0xe];
        iStack_5c = 0;
        local_60 = 0;
        iStack_74 = 0;
        iStack_54 = 0;
        iStack_58 = 0;
        iStack_50 = 0;
        local_70 = 0;
        iStack_64 = 0;
        while (piVar7 != (int *)0x0) {
          iVar13 = *(int *)(*(int *)(*piVar7 + 0x38) + 0x34);
          piVar7 = (int *)piVar7[2];
          if ((iVar13 == 3) || (iVar13 == 4)) {
            iStack_64 = iStack_64 + 1;
          }
          else if ((iVar13 == 1) || (iVar13 == 5)) {
            local_60 = local_60 + 1;
          }
          else {
            iStack_5c = iStack_5c + 1;
          }
          iStack_74 = iStack_74 + 1;
        }
        iVar13 = 3;
        do {
          iVar13 = iVar13 + -1;
          if (iVar13 == 0) {
            if ((local_70 < iStack_74) &&
               (puVar9 = (undefined4 *)FUN_005cb1b0(), 0 < (int)puVar9[2])) {
              uVar8 = *(undefined4 *)*puVar9;
              FUN_005cb230(uVar8);
              FUN_005cb1d0(uVar8);
            }
            break;
          }
          iVar10 = 1000;
          do {
            if ((iStack_74 <= local_70) ||
               (((iStack_64 <= iStack_50 || (iVar13 != 1)) &&
                ((iStack_64 + -1 <= iStack_50 || (iVar13 != 2)))))) break;
            iVar11 = iVar10 + -1;
            uVar14 = FUN_005cb1b0();
            piVar7 = (int *)*(undefined4 *)uVar14;
            do {
              iVar10 = (int)((ulonglong)uVar14 >> 0x20);
              if (piVar7 == (int *)0x0) goto LAB_0057df8a;
              iVar10 = *piVar7;
              iVar12 = *(int *)(*(int *)(iVar10 + 0x38) + 0x34);
              piVar7 = (int *)piVar7[2];
            } while ((iVar12 != 3) && (iVar12 != 4));
            FUN_005cb230(iVar10);
            FUN_005cb1d0(iVar10);
            iStack_50 = iStack_50 + 1;
            iStack_64 = iStack_64 + -1;
            local_70 = local_70 + 1;
            iStack_74 = iStack_74 + -1;
            iVar10 = iVar11;
LAB_0057df8a:
          } while (0 < iVar10);
          iVar12 = 1000;
          iVar10 = iStack_58;
          iVar11 = local_60;
          do {
            if ((iStack_74 <= local_70) ||
               (((iVar11 <= iVar10 || (iVar13 != 1)) && ((iVar11 + -1 <= iVar10 || (iVar13 != 2)))))
               ) break;
            iVar12 = iVar12 + -1;
            uVar14 = FUN_005cb1b0();
            iVar10 = (int)((ulonglong)uVar14 >> 0x20);
            piVar7 = (int *)*(undefined4 *)uVar14;
            do {
              if (piVar7 == (int *)0x0) goto LAB_0057e022;
              iVar2 = *piVar7;
              iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + 0x34);
              piVar7 = (int *)piVar7[2];
            } while ((iVar3 != 1) && (iVar3 != 5));
            FUN_005cb230(iVar2);
            FUN_005cb1d0(iVar2);
            iVar10 = iStack_58 + 1;
            iVar11 = local_60 + -1;
            local_70 = local_70 + 1;
            iStack_74 = iStack_74 + -1;
            local_60 = iVar11;
            iStack_58 = iVar10;
LAB_0057e022:
          } while (0 < iVar12);
          iVar12 = 1000;
          iVar10 = iStack_54;
          iVar11 = iStack_5c;
          do {
            if ((iStack_74 <= local_70) ||
               (((iVar11 <= iVar10 || (iVar13 != 1)) && ((iVar11 + -1 <= iVar10 || (iVar13 != 2)))))
               ) break;
            iVar12 = iVar12 + -1;
            uVar14 = FUN_005cb1b0();
            iVar10 = (int)((ulonglong)uVar14 >> 0x20);
            piVar7 = (int *)*(undefined4 *)uVar14;
            do {
              if (piVar7 == (int *)0x0) goto LAB_0057e0c6;
              iVar2 = *piVar7;
              iVar3 = *(int *)(*(int *)(iVar2 + 0x38) + 0x34);
              piVar7 = (int *)piVar7[2];
            } while ((((iVar3 == 3) || (iVar3 == 4)) || (iVar3 == 1)) || (iVar3 == 5));
            FUN_005cb230(iVar2);
            FUN_005cb1d0(iVar2);
            iVar10 = iStack_54 + 1;
            iVar11 = iStack_5c + -1;
            local_70 = local_70 + 1;
            iStack_74 = iStack_74 + -1;
            iStack_5c = iVar11;
            iStack_54 = iVar10;
LAB_0057e0c6:
          } while (0 < iVar12);
        } while (0 < iVar13);
      }
      FUN_005c68c0(piStack_68);
      FUN_005c68c0(unaff_EBX);
    }
  }
  uVar4 = (undefined1)((uint)unaff_ESI >> 0x18);
  *(undefined1 *)(unaff_EBX + 0x2f) = 1;
  FUN_005cae80(unaff_EBX);
  FUN_005cb2c0(iStack_4c);
  FUN_005c81e0();
  *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  cVar5 = (**(code **)(*unaff_EBX + 0x38))();
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(*unaff_EBX + 0x3c))();
    if (cVar5 == '\0') {
      uVar8 = (**(code **)(*unaff_EBX + 0x34))();
      FUN_00859ef0(&LAB_0085a120,uVar8);
    }
    else {
      (**(code **)(*unaff_EBX + 0x30))();
      FUN_00859e60();
      uVar8 = (**(code **)(*unaff_EBX + 0x30))();
      FUN_00859ef0(&LAB_009e6d30,uVar8);
    }
  }
  else {
    (**(code **)(*unaff_EBX + 0x2c))();
    FUN_00859dd0();
    uVar8 = (**(code **)(*unaff_EBX + 0x2c))();
    FUN_00859ef0(&LAB_0057e9e0,uVar8);
  }
  *(undefined1 *)(DAT_012588dc + 0x3a28) = 1;
  DAT_01258a66 = uVar4;
  if (*(int *)(iStack_48 + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))(7);
    iVar13 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
    if ((iVar13 != 0) &&
       (iVar13 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))(),
       *(char *)(*(int *)(iVar13 + 0x20) + 0x67) != '\0')) {
      uVar8 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x124))();
      FUN_00740050(uVar8);
    }
  }
  ExceptionList = pvStack_1c;
  return;
}

