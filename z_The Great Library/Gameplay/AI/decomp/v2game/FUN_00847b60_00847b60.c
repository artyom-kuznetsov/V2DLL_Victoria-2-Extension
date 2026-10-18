// FUN_00847b60 @ 00847b60  (requested 00847B60, first bytes: 55 8B EC 6A FF 68 49 0C)


void FUN_00847b60(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *in_ECX;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined8 uVar15;
  int *local_68;
  int local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  char local_16;
  char local_15;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b90c49;
  local_10 = ExceptionList;
  if ((*(int *)(param_4 + 0x4c) - *(int *)(param_4 + 0x48) & 0xfffffffcU) == 0) {
    *param_1 = 0;
    return;
  }
  local_68 = *(int **)(param_4 + 0x48);
  local_2c = DAT_012588e8;
  ExceptionList = &local_10;
  if (DAT_01258728 == (int *)0x0) {
    ExceptionList = &local_10;
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
  if (in_ECX[1] == 0) {
    in_ECX = (undefined4 *)(param_2 + 0x1c);
  }
  local_20 = *in_ECX;
  local_1c = in_ECX[1];
  local_58 = *(int *)(DAT_012587e4 + 4);
  iVar4 = *(int *)(*(int *)(*(int *)(local_58 + local_1c * 4) + 0xe64) + 0x50);
  local_50 = *(int *)(iVar4 + 0x20);
  local_54 = *(undefined4 *)(iVar4 + 0x1c);
  iVar4 = *(int *)(param_4 + 0x60);
  local_30 = (int *)0x0;
  local_13 = '\0';
  local_15 = '\0';
  local_12 = '\0';
  local_24 = 0;
  local_14 = '\0';
  local_11 = '\0';
  for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x224)) {
    local_30 = (int *)((int)local_30 + *(int *)(iVar4 + 0x20));
  }
  do {
    if ((local_68 < *(int **)(param_4 + 0x48)) || (*(int **)(param_4 + 0x4c) <= local_68)) {
      bVar14 = local_24 != 0;
      if (((0 < *(int *)(param_2 + 0x7d8)) && ((local_13 != '\0' && (local_11 != '\0')))) ||
         (local_16 = '\0', local_24 != 0)) {
        local_16 = '\x01';
      }
      local_48 = (-(uint)(local_15 != '\0') & (-(uint)(local_24 != 0) & 0x3b6) + 0x32) * 1000;
      local_44 = (-(uint)(local_12 != '\0') & (-(uint)(local_24 != 0) & 0x352) + 0x32) * 1000;
      local_38 = (-(uint)(local_14 != '\0') & 0x14) * 1000;
      local_40 = (-(uint)(local_11 != '\0') & (-(uint)(local_24 != 0) & 0xffffffec) + 0x19) * 1000;
      local_34 = (int)local_30 * 3000;
      if (*(char *)(param_2 + 0x12d0) == '\0') {
        iVar4 = 200;
      }
      else {
        iVar4 = 100;
      }
      local_3c = local_24 * iVar4 * 1000;
      if ((local_13 == '\0') || (*(char *)(param_2 + 0x12d0) == '\0')) {
        iVar4 = 0;
      }
      else {
        iVar4 = 200;
      }
      uVar5 = 0;
      uVar13 = 0;
      uVar12 = 0;
      if (DAT_01258a20 != 0) {
        do {
          uVar1 = *(uint *)(*(int *)(param_4 + 0x110) + uVar5 * 4);
          if (uVar12 < uVar1) {
            uVar12 = uVar1;
            uVar13 = uVar5;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < DAT_01258a20);
      }
      if ((int)uVar13 < *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2) {
        iVar3 = *(int *)(*(int *)(DAT_012587e8 + 0xc) + uVar13 * 4);
      }
      else {
        iVar3 = DAT_012587ec;
        if (DAT_012587ec == 0) {
          iVar3 = FUN_00aae9af(0x98);
          local_8 = 0;
          if (iVar3 == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_00561080(iVar3);
          }
          local_8 = 0xffffffff;
          DAT_012587ec = iVar3;
        }
      }
      iVar2 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_1c * 4) + 0xe64);
      FUN_004a0e80(DAT_0125870c,&local_58);
      iVar6 = local_58 + *(int *)(param_2 + 0xe4c) * -10000;
      uVar15 = __allmul(iVar6,iVar6 >> 0x1f,1000,0);
      iVar6 = __alldiv(uVar15,750000,0);
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      else if (1000 < iVar6) {
        iVar6 = 1000;
      }
      iVar7 = __alldiv((longlong)iVar6 * (longlong)DAT_01317d08,1000,0);
      iVar7 = 1000 - iVar7;
      iVar6 = 1000;
      local_1c = 1000;
      local_58 = iVar7;
      piVar11 = *(int **)(param_5 + 0x120);
      do {
        if (piVar11 == (int *)0x0) {
          *param_1 = iVar6;
          ExceptionList = local_10;
          return;
        }
        local_30 = (int *)piVar11[2];
        iVar8 = *piVar11;
        if (iVar8 < 0xa30) {
          if (iVar8 == 0xa2f) {
            if (local_24 != 0) {
              iVar6 = 0;
              if (DAT_0125ce80 == 0) {
                local_50 = FUN_00aae9af(0x3c);
                local_8 = 1;
                if (local_50 == 0) {
                  iVar7 = 0;
                }
                else {
                  iVar7 = FUN_004dada0();
                }
                iVar8 = DAT_0125ce80;
                local_8 = 2;
                local_50 = 0;
                if ((iVar7 != DAT_0125ce80) && (DAT_0125ce80 != 0)) {
                  FUN_004dadf0(DAT_0125ce80);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(iVar8);
                }
                local_8 = 0xffffffff;
                DAT_0125ce80 = iVar7;
              }
              piVar11 = *(int **)(param_4 + 0x48);
              iVar7 = *(int *)(param_4 + 0x4c) - (int)piVar11 >> 2;
              if (0 < iVar7) {
                local_28 = *(int *)(local_2c + 0xacc);
                local_14 = *(char *)(*(int *)(DAT_0125ce80 + 0x38) + 0x131);
                local_50 = iVar7;
                do {
                  if ((local_14 != '\0') &&
                     (iVar7 = *(int *)(*(int *)(*(int *)(local_28 + *piVar11 * 4) + 0x118) +
                                      *(int *)(*(int *)(DAT_0125ce80 + 0x38) + 0x134) * 4),
                     DAT_0125ceac < *(int *)(iVar7 + 0x20))) {
                    iVar6 = iVar6 + (*(int *)(iVar7 + 0x24) / 1000) * 2;
                  }
                  piVar11 = piVar11 + 1;
                  local_50 = local_50 + -1;
                } while (local_50 != 0);
              }
              if (param_3 == 0) {
                iVar6 = iVar6 / 3;
              }
              iVar6 = local_1c + iVar6 * 1000;
              iVar7 = local_58;
              local_1c = iVar6;
            }
          }
          else {
            switch(iVar8) {
            case 0x8a1:
            case 0x8a3:
            case 0x8a6:
              if ((local_16 == '\0') &&
                 (((local_11 == '\0' || (local_15 == '\0')) || (local_12 == '\0')))) {
                iVar6 = 0;
                local_1c = 0;
              }
              else {
                iVar6 = __alldiv((longlong)
                                 (int)(local_44 + local_48 + local_3c + local_40 + iVar4 * 1000 +
                                       (-(uint)(iVar3 == iVar2) & (-(uint)bVar14 & 0x2d) + 5) * 1000
                                       + local_34 + local_38 + iVar6) * (longlong)iVar7,1000,0);
                local_1c = iVar6;
              }
              break;
            case 0x8a7:
              if ((local_16 == '\0') &&
                 (((local_11 == '\0' || (local_15 == '\0')) || (local_12 == '\0')))) {
                iVar6 = 0;
                local_1c = 0;
              }
              else {
                iVar8 = local_34 + local_38 + local_3c + local_40;
                if (iVar8 + 0x189373U < 0x39580e) {
                  iVar8 = (iVar8 * 1000) / 2000;
                }
                else {
                  uVar15 = __allmul(iVar8,iVar8 >> 0x1f,1000,0);
                  iVar8 = __alldiv(uVar15,2000,0);
                }
                iVar9 = local_44 + local_48;
                if (iVar9 + 0x189373U < 0x39580e) {
                  iVar9 = (iVar9 * 1000) / 5000;
                }
                else {
                  uVar15 = __allmul(iVar9,iVar9 >> 0x1f,1000,0);
                  iVar9 = __alldiv(uVar15,5000,0);
                }
                iVar6 = __alldiv((longlong)(iVar9 + iVar6 + iVar8) * (longlong)iVar7,1000,0);
                local_1c = iVar6;
              }
            }
          }
        }
        else if (((iVar8 == 0xa30) && (0 < *(int *)(param_2 + 0x7d8))) &&
                (local_54 = *(undefined4 *)(param_4 + 0x58),
                0 < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_4 + 0x5c) * 4) +
                            0x7d8))) {
          iVar6 = 0;
          if (DAT_0125ce80 == 0) {
            local_50 = FUN_00aae9af(0x3c);
            local_8 = 3;
            if (local_50 == 0) {
              uVar10 = 0;
            }
            else {
              uVar10 = FUN_004dada0();
            }
            local_8 = 0xffffffff;
            FUN_004dc340(uVar10);
          }
          piVar11 = *(int **)(param_4 + 0x48);
          iVar7 = *(int *)(param_4 + 0x4c) - (int)piVar11 >> 2;
          if (0 < iVar7) {
            local_28 = *(int *)(local_2c + 0xacc);
            local_14 = *(char *)(*(int *)(DAT_0125ce80 + 0x30) + 0x131);
            local_50 = iVar7;
            do {
              if ((local_14 != '\0') &&
                 (iVar7 = *(int *)(*(int *)(*(int *)(local_28 + *piVar11 * 4) + 0x118) +
                                  *(int *)(*(int *)(DAT_0125ce80 + 0x30) + 0x134) * 4),
                 DAT_0125ceac < *(int *)(iVar7 + 0x20))) {
                iVar6 = (*(int *)(iVar7 + 0x24) / 1000) * 3 + iVar6;
              }
              piVar11 = piVar11 + 1;
              local_50 = local_50 + -1;
            } while (local_50 != 0);
          }
          if (param_3 == 0) {
            iVar6 = iVar6 / 3;
          }
          iVar6 = local_1c + iVar6 * 1000;
          iVar7 = local_58;
          local_1c = iVar6;
        }
        piVar11 = local_30;
      } while( true );
    }
    iVar4 = *local_68;
    local_68 = local_68 + 1;
    local_28 = *(int *)(local_2c + 0xacc);
    iVar4 = *(int *)(local_28 + iVar4 * 4);
    if (local_15 == '\0') {
      iVar3 = *(int *)(iVar4 + 0x14c);
      iVar2 = *(int *)(iVar4 + 0x148);
      if (iVar2 != iVar3) {
        do {
          if (*(int *)(iVar2 + 4) == local_1c) break;
          iVar2 = iVar2 + 8;
        } while (iVar2 != iVar3);
        if (iVar2 != iVar3) goto LAB_00847cc4;
      }
      local_15 = '\0';
    }
    else {
LAB_00847cc4:
      local_15 = '\x01';
    }
    if (local_12 == '\0') {
      iVar3 = *(int *)(iVar4 + 0x14c);
      iVar2 = *(int *)(iVar4 + 0x148);
      if (iVar2 != iVar3) {
        do {
          if (*(int *)(iVar2 + 4) == local_50) break;
          iVar2 = iVar2 + 8;
        } while (iVar2 != iVar3);
        if (iVar2 != iVar3) goto LAB_00847cf8;
      }
      local_12 = '\0';
    }
    else {
LAB_00847cf8:
      local_12 = '\x01';
    }
    if ((local_14 != '\0') ||
       (local_14 = '\0',
       *(char *)(*(int *)(*(int *)(iVar4 + 0x58) * 0xb0 + 0xc + *DAT_01258728) + 0x3c) != '\0')) {
      local_14 = '\x01';
    }
    if ((local_11 != '\0') || (local_11 = '\0', *(int *)(*(int *)(iVar4 + 0x5c) + 0xdc) != 0)) {
      local_11 = '\x01';
    }
    if (local_13 == '\0') {
      local_4c = *(undefined4 *)(iVar4 + 0x128);
      local_13 = '\0';
      if (*(char *)(*(int *)(local_58 + *(int *)(iVar4 + 300) * 4) + 0x12d0) == '\0')
      goto LAB_00847d67;
    }
    else {
LAB_00847d67:
      local_13 = '\x01';
    }
    iVar4 = *(int *)(iVar4 + 0x5c);
    iVar3 = (*(int *)(iVar4 + 0xcc) - *(int *)(iVar4 + 200)) / 0x24;
    if (0 < iVar3) {
      piVar11 = (int *)(*(int *)(iVar4 + 200) + 4);
      do {
        if (*(int *)(*(int *)(local_28 + *piVar11 * 4) + 300) == local_1c) {
          local_24 = local_24 + 1;
        }
        piVar11 = piVar11 + 9;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  } while( true );
}

