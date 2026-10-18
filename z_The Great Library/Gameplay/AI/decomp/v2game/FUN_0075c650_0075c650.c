// FUN_0075c650 @ 0075c650 body=[[0075c650, 0075cc4a]]


void FUN_0075c650(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int local_88;
  int local_64;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b97a63;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_0075d4b0();
  iVar3 = FUN_00475500();
  piVar9 = *(int **)(iVar3 + 0x14);
  iVar4 = (*(int *)(iVar3 + 0x18) - (int)piVar9) / 0x18;
  iVar8 = 0;
  local_64 = 0;
  iVar7 = local_64;
  if (0 < iVar4) {
    do {
      if ((*piVar9 == *(int *)(*(int *)(in_ECX + 0x180) + 0x6b9bc)) &&
         (iVar7 = iVar8, piVar9[1] == *(int *)(*(int *)(in_ECX + 0x180) + 0x6b9c0))) break;
      iVar8 = iVar8 + 1;
      piVar9 = piVar9 + 6;
      iVar7 = local_64;
    } while (iVar8 < iVar4);
  }
  local_64 = iVar7;
  local_88 = 0;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar4 = FUN_00aae9af(0x180);
    local_8 = 0;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00475150(iVar4);
    }
    local_8 = 1;
    if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
    local_8 = 0xffffffff;
    DAT_0125b5e0 = puVar5;
  }
  piVar9 = (int *)(*(int *)(iVar3 + 0x14) + 8 + *(int *)(in_ECX + 0x168) * 0x18);
  iVar7 = 0;
  iVar4 = local_88;
  if (0 < (int)(piVar9[1] - *piVar9 & 0xfffffffcU)) {
    piVar10 = *(int **)(*(int *)(iVar3 + 0x14) + 8);
    do {
      iVar4 = iVar7;
      if (*piVar10 == DAT_0125b5e0[0x12]) break;
      iVar7 = iVar7 + 1;
      piVar10 = piVar10 + 1;
      iVar4 = local_88;
    } while (iVar7 < piVar9[1] - *piVar9 >> 2);
  }
  local_88 = iVar4;
  if ((*(int *)(in_ECX + 0x16c) == 0) &&
     ((*(char *)(DAT_0125b5e0 + 0x13) != '\0' || (*(char *)((int)DAT_0125b5e0 + 0x4d) != '\0')))) {
    *(undefined1 *)((int)DAT_0125b5e0 + 0x4d) = 0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af(0x180);
      local_8 = 8;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150(iVar4);
      }
      local_8 = 9;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
      local_8 = 0xffffffff;
      DAT_0125b5e0 = puVar5;
    }
    *(undefined1 *)(DAT_0125b5e0 + 0x13) = 0;
  }
  if (*(int *)(in_ECX + 0x16c) == 1) {
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af(0x180);
      local_8 = 10;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150(iVar4);
      }
      local_8 = 0xb;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
      local_8 = 0xffffffff;
      DAT_0125b5e0 = puVar5;
    }
    if (*(char *)(DAT_0125b5e0 + 0x13) == '\0') {
      *(undefined1 *)((int)DAT_0125b5e0 + 0x4d) = 0;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        iVar4 = FUN_00aae9af(0x180);
        local_8 = 0xe;
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)FUN_00475150(iVar4);
        }
        local_8 = 0xf;
        if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)(1);
        }
        local_8 = 0xffffffff;
        DAT_0125b5e0 = puVar5;
      }
      *(undefined1 *)(DAT_0125b5e0 + 0x13) = 1;
    }
  }
  if (*(int *)(in_ECX + 0x16c) == 2) {
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af(0x180);
      local_8 = 0x10;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150(iVar4);
      }
      local_8 = 0x11;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
      local_8 = 0xffffffff;
      DAT_0125b5e0 = puVar5;
    }
    if (*(char *)((int)DAT_0125b5e0 + 0x4d) == '\0') {
      *(undefined1 *)((int)DAT_0125b5e0 + 0x4d) = 1;
      if (DAT_0125b5e0 == (undefined4 *)0x0) {
        iVar4 = FUN_00aae9af(0x180);
        local_8 = 0x14;
        if (iVar4 == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)FUN_00475150(iVar4);
        }
        local_8 = 0x15;
        if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
          (**(code **)*DAT_0125b5e0)(1);
        }
        local_8 = 0xffffffff;
        DAT_0125b5e0 = puVar5;
      }
      *(undefined1 *)(DAT_0125b5e0 + 0x13) = 0;
    }
  }
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar4 = FUN_00aae9af(0x180);
    local_8 = 0x16;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00475150(iVar4);
    }
    local_8 = 0x17;
    if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
    local_8 = 0xffffffff;
    DAT_0125b5e0 = puVar5;
  }
  uVar6 = DAT_0125b5e0[0x15];
  if ((int)uVar6 < 2) {
    uVar6 = 0;
  }
  else {
    uVar6 = -(uint)((&DAT_00f086c4)[(uVar6 * 3 + -6) * 4] != '\0') & uVar6;
  }
  if (uVar6 != *(uint *)(in_ECX + 0x174)) {
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af(0x180);
      local_8 = 0x18;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150(iVar4);
      }
      local_8 = 0x19;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
      local_8 = 0xffffffff;
      DAT_0125b5e0 = puVar5;
    }
    DAT_0125b5e0[0x15] = *(undefined4 *)(in_ECX + 0x174);
  }
  if ((local_88 != *(int *)(in_ECX + 0x170)) || (local_64 != *(int *)(in_ECX + 0x168))) {
    uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0x14) + 4 + *(int *)(in_ECX + 0x168) * 0x18);
    uVar2 = *(undefined4 *)(*(int *)(iVar3 + 0x14) + *(int *)(in_ECX + 0x168) * 0x18);
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar4 = FUN_00aae9af(0x180);
      local_8 = 0x1a;
      if (iVar4 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150(iVar4);
      }
      local_8 = 0x1b;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
      local_8 = 0xffffffff;
      DAT_0125b5e0 = puVar5;
    }
    puVar5 = DAT_0125b5e0;
    DAT_0125b5e0[0x10] = uVar2;
    puVar5[0x11] = uVar1;
    iVar4 = *(int *)(in_ECX + 0x170);
    iVar7 = *(int *)(*(int *)(iVar3 + 0x14) + *(int *)(in_ECX + 0x168) * 0x18 + 8);
    puVar5 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar3 = FUN_00aae9af(0x180);
      local_8 = 0x1c;
      if (iVar3 == 0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)FUN_00475150(iVar3);
      }
      local_8 = 0x1d;
      if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)(1);
      }
    }
    DAT_0125b5e0 = puVar5;
    DAT_0125b5e0[0x12] = *(undefined4 *)(iVar7 + iVar4 * 4);
  }
  local_8 = 0x1e;
  if (DAT_0125b5e0 == (undefined4 *)0x0) {
    iVar4 = FUN_00aae9af(0x180);
    local_8._0_1_ = 0x1f;
    if (iVar4 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)FUN_00475150(iVar4);
    }
    local_8._0_1_ = 0x20;
    if ((puVar5 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
      (**(code **)*DAT_0125b5e0)(1);
    }
    local_8 = CONCAT31(local_8._1_3_,0x1e);
    DAT_0125b5e0 = puVar5;
  }
  FUN_009d7fa0();
  local_8 = 0xffffffff;
  FUN_0075cc5e();
  return;
}

