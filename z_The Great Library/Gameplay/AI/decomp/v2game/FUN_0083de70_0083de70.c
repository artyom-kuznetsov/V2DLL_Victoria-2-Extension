// FUN_0083de70 @ 0083de70  (requested 0083DE70, first bytes: 55 8B EC 83 E4 F8 81 EC)


undefined4 FUN_0083de70(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  double dVar17;
  undefined8 uVar18;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a0;
  int local_94;
  undefined4 local_90;
  int local_8c;
  int local_88;
  int *local_84;
  int *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  undefined **local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar5 = FUN_00911760(0);
  if (cVar5 == '\0') {
    return 0;
  }
  if (param_3 == '\0') {
    local_6c = *(undefined4 *)(in_EAX + 0x10);
    local_68 = *(int *)(in_EAX + 0x14);
  }
  else {
    local_6c = *(undefined4 *)(in_EAX + 8);
    local_68 = *(int *)(in_EAX + 0xc);
  }
  local_90 = local_6c;
  local_8c = local_68;
  if (param_3 == '\0') {
    local_5c = *(undefined4 *)(in_EAX + 8);
    local_70 = *(int *)(in_EAX + 0xc);
  }
  else {
    local_5c = *(undefined4 *)(in_EAX + 0x10);
    local_70 = *(int *)(in_EAX + 0x14);
  }
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_68 * 4) + 0xbe8) +
                       local_70 * 4) + 0x34) == 0) {
    return 0;
  }
  iVar13 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + local_68 * 4) + 0xbe8) +
                            local_70 * 4) + 0x34);
  local_74 = iVar13;
  local_58 = local_70;
  local_54 = FUN_00936fc0(iVar13,&local_90,&local_5c,0);
  local_6c = FUN_00936fc0(iVar13,&local_5c,&local_90,0);
  local_94 = *(int *)(iVar13 + 0x100);
  piVar8 = (int *)(iVar13 + 0x2c);
  iVar6 = *piVar8;
  iVar9 = *(int *)(iVar13 + 0x30);
  if (iVar6 == iVar9) {
LAB_0083df96:
    local_94 = -local_94;
    local_84 = (int *)(iVar13 + 0x3c);
    local_7c = piVar8;
  }
  else {
    do {
      if (*(int *)(iVar6 + 4) == local_8c) break;
      iVar6 = iVar6 + 8;
    } while (iVar6 != iVar9);
    local_84 = piVar8;
    local_7c = (int *)(iVar13 + 0x3c);
    if (iVar6 == iVar9) goto LAB_0083df96;
  }
  bVar15 = *(int *)(*local_84 + 4) == local_8c;
  bVar16 = *(int *)(*local_7c + 4) == local_58;
  local_60 = FUN_009293c0();
  iVar13 = *(int *)(in_EAX + 0x58) - *(int *)(in_EAX + 0x54) >> 6;
  local_a0 = 0;
  local_88 = 0;
  local_a8 = 0;
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  local_b0 = 0;
  if (0 < iVar13) {
    do {
      FUN_0094be20();
      iVar6 = *(int *)(*(int *)(in_EAX + 0x34) + local_b0 * 4);
      iVar9 = *(int *)(in_EAX + 0x78);
      iVar7 = *(int *)(in_EAX + 0x74);
      if (iVar7 == iVar9) {
LAB_0083e0da:
        if ((*(char *)(local_44 + 0x1d4) != '\0') && (iVar6 != 0)) {
          bVar3 = true;
        }
      }
      else {
        do {
          if (*(int *)(iVar7 + 4) == local_8c) break;
          iVar7 = iVar7 + 8;
        } while (iVar7 != iVar9);
        if (iVar7 == iVar9) goto LAB_0083e0da;
        if ((local_34 == local_8c) || (bVar15)) {
          piVar8 = (int *)FUN_00951920();
          local_a8 = local_a8 + *piVar8 / 1000;
          if (local_a8 < 100) {
            if (iVar6 != 0) goto LAB_0083e0b2;
          }
          else {
            if (iVar6 == 0) goto LAB_0083e0ba;
LAB_0083e0b2:
            local_88 = local_88 + 1;
          }
          local_a0 = local_a0 + 1;
        }
LAB_0083e0ba:
        if ((*(char *)(local_44 + 0x1d4) != '\0') &&
           (*(int *)(*(int *)(in_EAX + 0x34) + local_b0 * 4) != 0)) {
          bVar4 = true;
        }
      }
      for (piVar8 = *(int **)(local_44 + 0x120); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*piVar8 == 0x8a1) {
          if ((*(int *)(*(int *)(in_EAX + 0x34) + local_b0 * 4) != 0) && (local_2c == local_8c)) {
            bVar2 = true;
          }
          break;
        }
      }
      local_b0 = local_b0 + 1;
    } while (local_b0 < iVar13);
  }
  local_b0 = 0;
  iVar13 = *(int *)(in_EAX + 0x68) - *(int *)(in_EAX + 100) >> 6;
  if (0 < iVar13) {
    local_ac = 0;
    do {
      iVar6 = *(int *)(in_EAX + 100) + local_ac;
      local_4c = 0x18d;
      local_48 = *(undefined4 *)(iVar6 + 8);
      local_44 = *(int *)(iVar6 + 0xc);
      local_34 = *(int *)(iVar6 + 0x1c);
      local_40 = *(undefined4 *)(iVar6 + 0x10);
      local_3c = *(undefined4 *)(iVar6 + 0x14);
      local_38 = *(undefined4 *)(iVar6 + 0x18);
      local_30 = *(undefined4 *)(iVar6 + 0x20);
      local_2c = *(int *)(iVar6 + 0x24);
      local_28 = *(undefined4 *)(iVar6 + 0x28);
      local_24 = *(undefined4 *)(iVar6 + 0x2c);
      local_20 = *(undefined4 *)(iVar6 + 0x30);
      local_1c = *(undefined4 *)(iVar6 + 0x34);
      local_18 = *(undefined1 *)(iVar6 + 0x38);
      local_14 = *(undefined4 *)(iVar6 + 0x3c);
      iVar6 = *(int *)(*(int *)(in_EAX + 0x44) + local_b0 * 4);
      iVar9 = *(int *)(in_EAX + 0x88);
      iVar7 = *(int *)(in_EAX + 0x84);
      local_50 = CWarGoal::vftable;
      if (iVar7 == iVar9) {
LAB_0083e2c5:
        if ((*(char *)(local_44 + 0x1d4) != '\0') && (iVar6 != 0)) {
          bVar3 = true;
        }
      }
      else {
        do {
          if (*(int *)(iVar7 + 4) == local_8c) break;
          iVar7 = iVar7 + 8;
        } while (iVar7 != iVar9);
        if (iVar7 == iVar9) goto LAB_0083e2c5;
        if ((local_34 == local_8c) || (bVar15)) {
          piVar8 = (int *)FUN_00951920();
          local_a8 = local_a8 + *piVar8 / 1000;
          if (local_a8 < 100) {
            if (iVar6 != 0) goto LAB_0083e299;
          }
          else {
            if (iVar6 == 0) goto LAB_0083e2a1;
LAB_0083e299:
            local_88 = local_88 + 1;
          }
          local_a0 = local_a0 + 1;
        }
LAB_0083e2a1:
        if ((*(char *)(local_44 + 0x1d4) != '\0') &&
           (*(int *)(*(int *)(in_EAX + 0x44) + local_b0 * 4) != 0)) {
          bVar4 = true;
        }
      }
      for (piVar8 = *(int **)(local_44 + 0x120); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[2]) {
        if (*piVar8 == 0x8a1) {
          if ((*(int *)(*(int *)(in_EAX + 0x44) + local_b0 * 4) != 0) && (local_2c == local_8c)) {
            bVar2 = true;
          }
          break;
        }
      }
      local_ac = local_ac + 0x40;
      local_b0 = local_b0 + 1;
    } while (local_b0 < iVar13);
  }
  piVar8 = local_84;
  iVar13 = local_84[1] - *local_84 >> 3;
  iVar6 = 0;
  local_64 = 1000;
  local_78 = 1000;
  if (0 < iVar13) {
    do {
      local_84 = *(int **)(*piVar8 + iVar6 * 8);
      FUN_005dcbd0();
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar13);
  }
  iVar13 = 0;
  iVar6 = local_7c[1] - *local_7c >> 3;
  if (0 < iVar6) {
    do {
      local_84 = *(int **)(*local_7c + iVar13 * 8);
      FUN_005dcbd0();
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar6);
  }
  local_84 = (int *)0x3e8;
  iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_8c * 4);
  puVar12 = *(undefined4 **)(iVar13 + 0xda8);
LAB_0083e414:
  if ((*(undefined4 **)(iVar13 + 0xda8) <= puVar12) && (puVar12 < *(undefined4 **)(iVar13 + 0xdac)))
  {
    local_10 = *puVar12;
    piVar1 = puVar12 + 1;
    iVar6 = *piVar8;
    iVar9 = piVar8[1];
    puVar12 = puVar12 + 2;
    if (iVar6 != iVar9) goto LAB_0083e440;
    goto LAB_0083e450;
  }
  iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_58 * 4);
  puVar12 = *(undefined4 **)(iVar13 + 0xda8);
LAB_0083e488:
  if ((*(undefined4 **)(iVar13 + 0xda8) <= puVar12) && (puVar12 < *(undefined4 **)(iVar13 + 0xdac)))
  {
    local_10 = *puVar12;
    piVar1 = puVar12 + 1;
    iVar6 = *piVar8;
    iVar9 = piVar8[1];
    puVar12 = puVar12 + 2;
    if (iVar6 != iVar9) goto LAB_0083e4b2;
    goto LAB_0083e4c2;
  }
  FUN_00401000(0x43fa4001);
  iVar6 = FUN_00b31c00();
  iVar10 = iVar6 >> 0x1f;
  uVar18 = __allmul(local_84,(int)local_84 >> 0x1f,iVar6,iVar10);
  iVar13 = __alldiv(uVar18,1000,0);
  uVar18 = __allmul(1000,0,iVar6,iVar10);
  iVar7 = __alldiv(uVar18,1000,0);
  uVar18 = __allmul(1000,0,iVar6,iVar10);
  iVar9 = __alldiv(uVar18,1000,0);
  uVar18 = __allmul(1000,0,iVar6,iVar10);
  iVar6 = __alldiv(uVar18,1000,0);
  iVar9 = iVar9 + local_64;
  iVar13 = iVar13 + 1000;
  if (iVar9 == 0) {
    iVar9 = -1;
  }
  else if ((iVar13 < -0x189373) || (0x20c49a < iVar13)) {
    uVar18 = __allmul(iVar13,iVar13 >> 0x1f,1000,0);
    iVar9 = __alldiv(uVar18,iVar9,iVar9 >> 0x1f);
  }
  else {
    iVar9 = (iVar13 * 1000) / iVar9;
  }
  iVar6 = iVar6 + local_78;
  iVar7 = iVar7 + 1000;
  if (iVar6 == 0) {
    iVar6 = -1;
  }
  else if ((iVar7 < -0x189373) || (0x20c49a < iVar7)) {
    uVar18 = __allmul(iVar7,iVar7 >> 0x1f,1000,0);
    iVar6 = __alldiv(uVar18,iVar6,iVar6 >> 0x1f);
  }
  else {
    iVar6 = (iVar7 * 1000) / iVar6;
  }
  FUN_00401000(0x43488000);
  iVar13 = FUN_00b31c00();
  if (iVar13 <= iVar6) {
    FUN_00401000(0x44fa1000);
    iVar13 = FUN_00b31c00();
    if (iVar6 <= iVar13) goto LAB_0083e669;
  }
  iVar6 = iVar13;
LAB_0083e669:
  FUN_00401000(0x453b8800);
  iVar13 = FUN_00b31c00();
  if (iVar13 < iVar9) {
    iVar9 = iVar13;
  }
  FUN_00401000(0x437a8000);
  iVar13 = FUN_00b31c00();
  iVar13 = __alldiv((longlong)iVar13 * (longlong)iVar6,1000,0);
  FUN_00401000(0x443ba000);
  iVar6 = FUN_00b31c00();
  local_78 = __alldiv((longlong)iVar6 * (longlong)iVar9,1000,0);
  iVar7 = DAT_00f1027c;
  dVar17 = 365.0;
  iVar6 = (*(int *)(DAT_012588e8 + 0xb0c) + -43800000) / 0x18;
  iVar10 = (int)((double)iVar6 / 365.0);
  iVar9 = 0;
  for (iVar6 = (iVar6 - (int)((float)iVar10 * 365.0)) - DAT_00f1027c; -1 < iVar6;
      iVar6 = iVar6 - (&DAT_00f1027c)[iVar9]) {
    iVar9 = iVar9 + 1;
  }
  piVar8 = (int *)FUN_00936640();
  iVar6 = (*piVar8 + -43800000) / 0x18;
  iVar11 = (int)((double)iVar6 / dVar17);
  iVar14 = 0;
  for (iVar7 = (iVar6 - (int)((double)iVar11 * dVar17)) - iVar7; -1 < iVar7;
      iVar7 = iVar7 - (&DAT_00f1027c)[iVar14]) {
    iVar14 = iVar14 + 1;
  }
  iVar6 = *(int *)(DAT_012586dc + 0x60);
  local_ac = *(int *)(iVar6 + 0x50) / 1000;
  iVar10 = (*(int *)(iVar6 + 0x54) / 1000 - (iVar10 * 0xc + iVar9)) + iVar14 + iVar11 * 0xc;
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + local_8c * 4);
  iVar7 = __alldiv((longlong)*(int *)(iVar6 + 0x60) * (longlong)*(int *)(iVar9 + 0x680),1000,0);
  local_84 = (int *)(iVar7 / 1000);
  iVar7 = __alldiv((longlong)*(int *)(iVar6 + 100) * (longlong)(local_94 * 1000),1000,0);
  iVar7 = iVar7 / 1000;
  if (0 < iVar7) {
    iVar7 = __alldiv((longlong)*(int *)(iVar6 + 0x68) * (longlong)(iVar7 * 1000),1000,0);
    iVar7 = iVar7 / 1000;
  }
  if (iVar10 < 0) {
    iVar10 = __alldiv((longlong)*(int *)(iVar6 + 0x58) * (longlong)(iVar10 * 1000),1000,0);
    iVar10 = iVar10 / 1000;
    if (local_a0 == 0) {
      iVar10 = __alldiv((longlong)*(int *)(iVar6 + 0x5c) * (longlong)(iVar10 * 1000),1000,0);
      iVar10 = iVar10 / 1000;
    }
  }
  iVar13 = local_78 + -1000 + iVar13;
  uVar18 = __allmul(iVar13,iVar13 >> 0x1f,100000,0);
  iVar13 = __alldiv(uVar18,1000,0);
  local_94 = __alldiv((longlong)*(int *)(iVar6 + 0x6c) * (longlong)iVar13,1000,0);
  local_94 = local_94 / 1000;
  if (!bVar15) {
    local_ac = __alldiv((longlong)*(int *)(iVar6 + 0x70) * (longlong)(local_ac * 1000),1000,0);
    local_ac = local_ac / 1000;
    iVar13 = __alldiv((longlong)*(int *)(iVar6 + 0x78) * (longlong)((int)local_84 * 1000),1000,0);
    local_84 = (int *)(iVar13 / 1000);
    if (iVar10 < 0) {
      iVar10 = __alldiv((longlong)*(int *)(iVar6 + 0x74) * (longlong)(iVar10 * 1000),1000,0);
      iVar10 = iVar10 / 1000;
    }
    iVar7 = __alldiv((longlong)*(int *)(iVar6 + 0x7c) * (longlong)(iVar7 * 1000),1000,0);
    iVar7 = iVar7 / 1000;
    local_94 = __alldiv((longlong)*(int *)(iVar6 + 0x80) * (longlong)(local_94 * 1000),1000,0);
    local_94 = local_94 / 1000;
  }
  iVar13 = local_60;
  local_a8 = ((((int)local_84 - local_94) - iVar7) - iVar10) - local_ac;
  if (bVar2) {
    local_a8 = local_a8 + -100;
  }
  if ((((!bVar3) || (local_a8 = local_a8 + -100, !bVar15)) || (bVar16)) || (local_88 != 0)) {
    if (bVar4) {
      local_a8 = local_a8 + 0x32;
    }
    if (local_88 < 1) {
      if ((local_60 < 1) || (-1 < local_6c)) {
        if (local_60 == 0) {
          if (local_a8 < 1) {
            if (((local_a0 == 0) && (bVar15)) && (!bVar3)) {
              if (0x32 < local_54) {
                return 100;
              }
              if ((iVar10 < 0) &&
                 ((10000 < *(int *)(iVar9 + 0x1430) || (cVar5 = FUN_00538af0(0), cVar5 == '\0')))) {
                iVar6 = 0;
                iVar9 = local_7c[1] - *local_7c >> 3;
                if (0 < iVar9) {
                  do {
                    cVar5 = FUN_0092ede0();
                    iVar13 = local_60;
                    if (cVar5 != '\0') goto LAB_0083ebdf;
                    iVar6 = iVar6 + 1;
                  } while (iVar6 < iVar9);
                }
                return 100;
              }
            }
          }
          else if (local_a0 == 0) {
            return 100;
          }
        }
LAB_0083ebdf:
        iVar6 = local_a8 / 2 + local_6c;
        if ((0x65 < iVar6) || (local_6c == 100)) {
          iVar6 = 0x65;
        }
        if (iVar13 <= iVar6) {
          return 100;
        }
      }
    }
    else {
      if ((local_a0 == local_88) && (bVar15)) {
        return 100;
      }
      if (0 < local_a8) {
        local_54 = local_54 - local_a8 / 2;
        if (0x65 < local_54) {
          local_54 = 0x65;
        }
        if (local_54 <= local_60) {
          return 100;
        }
      }
    }
  }
  return 0;
LAB_0083e440:
  do {
    if (*(int *)(iVar6 + 4) == *piVar1) break;
    iVar6 = iVar6 + 8;
  } while (iVar6 != iVar9);
  if (iVar6 == iVar9) {
LAB_0083e450:
    FUN_005dcbd0();
  }
  goto LAB_0083e414;
LAB_0083e4b2:
  do {
    if (*(int *)(iVar6 + 4) == *piVar1) break;
    iVar6 = iVar6 + 8;
  } while (iVar6 != iVar9);
  if (iVar6 == iVar9) {
LAB_0083e4c2:
    FUN_005dcbd0();
  }
  goto LAB_0083e488;
}

