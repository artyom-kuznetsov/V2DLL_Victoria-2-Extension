// FUN_004a5170 @ 004a5170  (requested 004A5170, first bytes: 55 8B EC 83 EC 40 8B 55)


void FUN_004a5170(int param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  code *local_40 [4];
  int local_30;
  undefined8 local_2c;
  int local_24;
  int local_20 [2];
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = DAT_012587e4;
  iVar6 = *(int *)(param_1 + 0x6c);
  local_18 = *(undefined4 *)(iVar6 + 0x58);
  local_14 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar6 + 0x5c) * 4);
  local_c = 0;
  local_10 = 0;
  iVar6 = *(int *)(iVar6 + 0x60);
  while (iVar6 != 0) {
    local_20[0] = *(int *)(*(int *)(param_1 + 0x6c) + 0x58);
    iVar7 = *(int *)(iVar6 + 0x224);
    if ((*(char *)(*(int *)(*(int *)(iVar2 + 4) + *(int *)(*(int *)(param_1 + 0x6c) + 0x5c) * 4) +
                  0xb10) != '\0') &&
       ((10 < *(int *)(iVar6 + 0x184) || (*(char *)(iVar6 + 0x188) != '\0')))) {
      local_c = local_c + 1;
    }
    cVar1 = FUN_004a75b0();
    iVar6 = iVar7;
    if (cVar1 != '\0') {
      local_10 = local_10 + 1;
    }
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x68);
  iVar7 = 0;
  iVar6 = iVar2 + 1;
  local_40[0] = FUN_004a5420;
  local_40[1] = FUN_004a5e00;
  local_40[2] = FUN_004a60b0;
  local_40[3] = FUN_004a5c40;
  local_30 = 0;
  local_2c = CONCAT44(local_10,local_c);
  local_24 = iVar6;
  if (iVar2 < 8) {
    iVar7 = 1;
    local_30 = 1;
    cVar1 = FUN_004a50e0();
    if (cVar1 == '\0') {
      iVar7 = 0;
      local_30 = 0;
      local_2c = local_2c & 0xffffffff;
    }
  }
  iVar2 = *(int *)(param_1 + 0x6c);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x250) != 0)) {
    piVar4 = *(int **)(*(int *)(*(int *)(DAT_012588e8 + 0xbf0) + *(int *)(iVar2 + 0x5c) * 0x10) +
                      *(int *)(*(int *)(iVar2 + 0x250) + 0x6c) * 4);
    cVar1 = (**(code **)(*piVar4 + 0x34))();
    if ((cVar1 == '\0') || (piVar4[0x15] < 1)) {
      cVar1 = (**(code **)(*piVar4 + 0x34))();
      if ((cVar1 != '\0') && (cVar1 = FUN_00561fe0(), cVar1 == '\0')) {
        puVar3 = (uint *)FUN_004a44b0();
        uVar8 = __allmul(iVar7 << 0xf,0,*puVar3 + 0x10000,puVar3[1] + (uint)(0xfffeffff < *puVar3));
        iVar7 = iVar7 * ((uint)uVar8 >> 0x1e | (int)((ulonglong)uVar8 >> 0x20) << 2);
        local_30 = iVar7;
      }
    }
    else {
      iVar2 = __alldiv((longlong)(iVar6 * 1000) * (longlong)(piVar4[0x15] + 2000),1000,0);
      iVar6 = iVar6 * (iVar2 / 1000);
      local_24 = iVar6;
    }
  }
  if (*(char *)(local_14 + 0xb00) == '\0') {
    iVar7 = 0;
    local_30 = 0;
  }
  if (*(char *)(local_14 + 0xb10) == '\0') {
    local_2c = local_2c & 0xffffffff00000000;
  }
  if (*(char *)(local_14 + 0xb08) == '\0') {
    local_2c = local_2c & 0xffffffff;
  }
  if (*(char *)(local_14 + 0xb00) == '\0') {
    iVar6 = 0;
    local_24 = 0;
  }
  iVar2 = 0;
  piVar4 = &local_30;
  do {
    iVar2 = iVar2 + *piVar4;
    piVar4 = piVar4 + 1;
  } while (piVar4 != local_20);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 4;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    return;
  }
  iVar5 = FUN_009b7950(0,0);
  iVar2 = 0;
  if (0 < iVar7) {
    iVar2 = iVar7;
  }
  if (0 < (int)local_2c) {
    iVar2 = iVar2 + (int)local_2c;
  }
  if (0 < local_2c._4_4_) {
    iVar2 = iVar2 + local_2c._4_4_;
  }
  if (0 < iVar6) {
    iVar2 = iVar2 + iVar6;
  }
  if (iVar2 != 0) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      if ((0 < (&local_30)[iVar6]) && (iVar7 = iVar7 + (&local_30)[iVar6], iVar5 % iVar2 < iVar7)) {
        if (iVar6 != -1) {
          (*local_40[iVar6])(local_14);
          return;
        }
        break;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 4);
  }
  *(undefined4 *)(param_1 + 0x7c) = 4;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}

