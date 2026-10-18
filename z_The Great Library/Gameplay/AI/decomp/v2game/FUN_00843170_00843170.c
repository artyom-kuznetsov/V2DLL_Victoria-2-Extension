// FUN_00843170 @ 00843170  (requested 00843170, first bytes: 55 8B EC 6A FF 68 80 BA)


undefined4 FUN_00843170(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  int *local_30;
  undefined4 local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00baba80;
  local_10 = ExceptionList;
  iVar4 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  ExceptionList = &local_10;
  local_14 = iVar4;
  cVar1 = FUN_00911760(0);
  if (cVar1 == '\0') {
    ExceptionList = local_10;
    return 0;
  }
  if (iVar4 == 0) {
    ExceptionList = local_10;
    return 0;
  }
  if (param_2 == '\0') {
    local_4c = *(undefined4 *)(param_1 + 0x10);
    local_48 = *(int *)(param_1 + 0x14);
  }
  else {
    local_4c = *(undefined4 *)(param_1 + 8);
    local_48 = *(int *)(param_1 + 0xc);
  }
  local_50 = local_48;
  local_54 = local_4c;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_8 = 1;
  FUN_0043a750(iVar4 + 0x2c);
  FUN_0043a750(iVar4 + 0x3c);
  if (local_64 != local_60) {
    iVar2 = local_64;
    do {
      if (*(int *)(iVar2 + 4) == *(int *)(iVar4 + 0x18)) {
        if (iVar2 != local_60) goto LAB_00843259;
        break;
      }
      iVar2 = iVar2 + 8;
    } while (iVar2 != local_60);
  }
  FUN_004d61d0();
  iVar4 = local_14;
LAB_00843259:
  iVar5 = local_60;
  iVar2 = local_64;
  if (local_74 != local_70) {
    iVar3 = local_74;
    do {
      if (*(int *)(iVar3 + 4) == *(int *)(iVar4 + 0x20)) {
        if (iVar3 != local_70) goto LAB_00843286;
        break;
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != local_70);
  }
  FUN_004d61d0();
LAB_00843286:
  local_28 = &local_64;
  local_30 = &local_74;
  for (; iVar2 != iVar5; iVar2 = iVar2 + 8) {
    if (*(int *)(iVar2 + 4) == local_50) {
      if (iVar2 != iVar5) goto LAB_008432be;
      break;
    }
  }
  local_28 = &local_74;
  local_30 = &local_64;
LAB_008432be:
  local_24 = FUN_009293c0();
  iVar4 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54) >> 6;
  local_18 = 0;
  local_1c = 0;
  if (0 < iVar4) {
    iVar2 = *(int *)(param_1 + 0x78);
    piVar6 = *(int **)(param_1 + 0x34);
    local_20 = iVar4;
    do {
      iVar4 = *(int *)(param_1 + 0x74);
      if (iVar4 != iVar2) {
        do {
          if (*(int *)(iVar4 + 4) == local_50) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != iVar2);
        if (iVar4 != iVar2) {
          if (*piVar6 != 0) {
            local_1c = local_1c + 1;
          }
          local_18 = local_18 + 1;
        }
      }
      piVar6 = piVar6 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 6;
  if (0 < iVar4) {
    iVar2 = *(int *)(param_1 + 0x88);
    piVar6 = *(int **)(param_1 + 0x44);
    local_20 = iVar4;
    do {
      iVar4 = *(int *)(param_1 + 0x84);
      if (*(int *)(param_1 + 0x84) != iVar2) {
        do {
          if (*(int *)(iVar4 + 4) == local_50) break;
          iVar4 = iVar4 + 8;
        } while (iVar4 != iVar2);
        if (iVar4 != iVar2) {
          if (*piVar6 != 0) {
            local_1c = local_1c + 1;
          }
          local_18 = local_18 + 1;
        }
      }
      piVar6 = piVar6 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  puVar7 = (undefined4 *)*local_28;
  iVar4 = local_28[1] - (int)puVar7 >> 3;
  local_44 = 1000;
  local_50 = 1000;
  local_40 = 1000;
  local_48 = 1000;
  local_38 = 1000;
  local_3c = 1000;
  if (0 < iVar4) {
    do {
      local_2c = *puVar7;
      FUN_005dcbd0();
      puVar7 = puVar7 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  puVar7 = (undefined4 *)*local_30;
  iVar4 = local_30[1] - (int)puVar7 >> 3;
  if (0 < iVar4) {
    do {
      local_34 = *puVar7;
      FUN_005dcbd0();
      puVar7 = puVar7 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  iVar4 = local_14;
  for (puVar7 = *(undefined4 **)(local_14 + 0x4c);
      (*(undefined4 **)(iVar4 + 0x4c) <= puVar7 && (puVar7 < *(undefined4 **)(iVar4 + 0x50)));
      puVar7 = puVar7 + 2) {
    local_34 = *puVar7;
    FUN_005dcbd0();
  }
  FUN_00401000(((float)*(int *)(iVar4 + 0x10) / 1000.0 + 0.0005) * 1000.0);
  iVar4 = FUN_00b31c00();
  local_20 = iVar4;
  FUN_00401000(0x44bb9000);
  iVar2 = FUN_00b31c00();
  iVar4 = __alldiv((longlong)iVar2 * (longlong)iVar4,1000,0);
  FUN_00401000(0x48435020);
  iVar2 = FUN_00b31c00();
  iVar2 = iVar2 - iVar4;
  if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
    uVar8 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
    iVar4 = __alldiv(uVar8,100000,0);
  }
  else {
    iVar4 = (iVar2 * 1000) / 100000;
  }
  iVar4 = __alldiv((longlong)iVar4 * (longlong)local_38,1000,0);
  if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
    uVar8 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar8,100000,0);
  }
  else {
    iVar2 = (iVar2 * 1000) / 100000;
  }
  iVar5 = __alldiv((longlong)iVar2 * (longlong)local_3c,1000,0);
  iVar2 = iVar4 + local_40;
  iVar4 = iVar4 + local_44;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  else if ((iVar4 < -0x189373) || (0x20c49a < iVar4)) {
    uVar8 = __allmul(iVar4,iVar4 >> 0x1f,1000,0);
    iVar2 = __alldiv(uVar8,iVar2,iVar2 >> 0x1f);
  }
  else {
    iVar2 = (iVar4 * 1000) / iVar2;
  }
  iVar4 = iVar5 + local_48;
  iVar5 = local_50 + iVar5;
  if (iVar4 == 0) {
    iVar4 = -1;
  }
  else if ((iVar5 < -0x189373) || (0x20c49a < iVar5)) {
    uVar8 = __allmul(iVar5,iVar5 >> 0x1f,1000,0);
    iVar4 = __alldiv(uVar8,iVar4,iVar4 >> 0x1f);
  }
  else {
    iVar4 = (iVar5 * 1000) / iVar4;
  }
  FUN_00401000(0x43488000);
  iVar5 = FUN_00b31c00();
  if (iVar4 < iVar5) {
LAB_0084366f:
    iVar4 = iVar5;
  }
  else {
    FUN_00401000(0x459c4400);
    iVar5 = FUN_00b31c00();
    if (iVar5 < iVar4) goto LAB_0084366f;
  }
  FUN_00401000(0x461c4200);
  iVar5 = FUN_00b31c00();
  if (iVar5 < iVar2) {
    iVar2 = iVar5;
  }
  FUN_00401000(0x437a8000);
  iVar5 = FUN_00b31c00();
  iVar5 = __alldiv((longlong)iVar4 * (longlong)iVar5,1000,0);
  FUN_00401000(0x443ba000);
  iVar4 = FUN_00b31c00();
  iVar2 = __alldiv((longlong)iVar2 * (longlong)iVar4,1000,0);
  iVar4 = local_1c;
  iVar5 = iVar5 + iVar2;
  FUN_00401000(0x42c90000);
  iVar3 = FUN_00b31c00();
  iVar2 = local_18;
  if (iVar4 < 1) {
    if (iVar3 <= local_20) {
      uVar8 = __allmul(iVar5,iVar5 >> 0x1f,100000,0);
      iVar2 = __alldiv(uVar8,1000,0);
      iVar4 = local_18;
      iVar2 = 100 - iVar2 / 1000;
      if ((local_18 < 1) || (-0x1a < iVar2)) {
        if (iVar2 < 0x19) {
          iVar2 = 0;
        }
        else {
          if (0x4b < iVar2) {
            iVar2 = iVar2 + iVar2 / 2;
          }
          if (0x8c < iVar2) {
            iVar2 = 0x96;
          }
        }
        if (local_24 == 0) {
          if (iVar2 == 0) {
            FUN_00401000(0x47435080);
            iVar5 = FUN_00b31c00();
            if ((local_20 < iVar5) &&
               (0 < (int)(*(int *)(local_14 + 0x50) - *(int *)(local_14 + 0x4c) & 0xfffffff8U)))
            goto LAB_0084391d;
          }
          iVar5 = local_14;
          if (iVar4 == 0) {
            FUN_00401000(0x47435080);
            iVar4 = FUN_00b31c00();
            if ((iVar4 <= local_20) ||
               ((*(int *)(iVar5 + 0x50) - *(int *)(iVar5 + 0x4c) & 0xfffffff8U) == 0)) {
              if (local_74 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b(local_74);
              }
              if (local_64 == 0) {
                ExceptionList = local_10;
                return 100;
              }
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_64);
            }
          }
        }
        if (local_24 <= iVar2) {
          if (local_74 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_74);
          }
          if (local_64 == 0) {
            ExceptionList = local_10;
            return 100;
          }
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_64);
        }
      }
    }
  }
  else if ((iVar3 <= local_20) || (local_18 == iVar4)) {
    if (iVar5 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = (int)(100000000 / (longlong)iVar5);
    }
    iVar5 = 100 - iVar5 / 1000;
    iVar3 = local_18 * 1000 + iVar4 * -1000;
    if ((iVar3 < -0x189373) || (0x20c49a < iVar3)) {
      uVar8 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
      iVar3 = __alldiv(uVar8,2000,0);
    }
    else {
      iVar3 = (iVar3 * 1000) / 2000;
    }
    if (1000 < iVar3 + 1000) {
      iVar5 = __alldiv((longlong)(iVar5 * 1000) * (longlong)(iVar3 + 1000),1000,0);
      iVar5 = iVar5 / 1000;
    }
    if (0x8c < iVar5) {
      iVar5 = 0x96;
    }
    if (iVar5 <= local_24) {
LAB_00843836:
      if (local_74 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_74);
      }
      if (local_64 == 0) {
        ExceptionList = local_10;
        return 100;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64);
    }
    if (iVar2 == iVar4) {
      FUN_00401000(0x47435080);
      iVar4 = FUN_00b31c00();
      if ((iVar4 <= local_20) ||
         ((*(int *)(local_14 + 0x50) - *(int *)(local_14 + 0x4c) & 0xfffffff8U) == 0))
      goto LAB_00843836;
    }
  }
LAB_0084391d:
  if (local_74 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_74);
  }
  if (local_64 == 0) {
    ExceptionList = local_10;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_64);
}

