// FUN_0040f040 @ 0040f040 body=[[0040f040, 0040f331] [0040f335, 0040f388] [0040f38c, 0040f3b5] [0040f3b9, 0040f3e8] [0040f3ec, 0040f442] [0040f446, 0040f477] [0040f47b, 0040f4c0]]


void FUN_0040f040(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  int iVar10;
  int iStack_b4;
  int local_b0 [4];
  int iStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_90;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  uint uStack_74;
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_48;
  uint uStack_44;
  uint uStack_3c;
  undefined4 uStack_2c;
  uint uStack_28;
  void *pvStack_1c;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6306a;
  pvStack_14 = ExceptionList;
  local_b0[0] = *(int *)(param_1 + 0x24);
  local_b0[1] = *(undefined4 *)(param_1 + 0x28);
  local_b0[2] = *(undefined4 *)(param_1 + 0x2c);
  iVar10 = 0;
  ExceptionList = &pvStack_14;
  do {
    if (((iVar10 == *(int *)(param_1 + 0x34c)) && (*(char *)(param_1 + 0x39c) == '\0')) &&
       (*(char *)(param_1 + 0x39d) == '\0')) {
      pcVar9 = *(code **)(*(int *)(local_b0[iVar10] + 0x18) + 0x34);
    }
    else {
      pcVar9 = *(code **)(*(int *)(local_b0[iVar10] + 0x18) + 0x38);
    }
    (*pcVar9)();
    iVar10 = iVar10 + 1;
  } while (iVar10 < 3);
  if (*(char *)(param_1 + 0x39c) == '\0') {
    if (*(char *)(param_1 + 0x39d) == '\0') {
      (**(code **)(**(int **)(param_1 + 100) + 0x38))();
      (**(code **)(**(int **)(param_1 + 0x68) + 0x38))();
      (**(code **)(**(int **)(param_1 + 0x78) + 0x38))();
      ExceptionList = pvStack_14;
      return;
    }
    uStack_58 = 0xf;
    uStack_5c = 0;
    auStack_6c[0] = 0;
    FUN_00409350("SM_APPLY",8);
    uStack_c = 5;
    FUN_009a8ee0(local_b0,auStack_6c);
    uStack_c = 6;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar10 = FUN_00aae9af();
      uStack_c = 7;
      if (iVar10 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_00475150();
      }
      uStack_c = 8;
      iStack_b4 = 0;
      if ((puVar7 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
      uStack_c = CONCAT31(uStack_c._1_3_,6);
      DAT_0125b5e0 = puVar7;
    }
    uVar8 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    uStack_c = 9;
    bVar6 = true;
    bVar5 = true;
    bVar4 = true;
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
  }
  else {
    uStack_74 = 0xf;
    uStack_78 = 0;
    auStack_88[0] = 0;
    FUN_00409350("BP_SAVE_PLAN_CONFIRM",0x14);
    uStack_c = 0;
    FUN_009a8ee0(&uStack_9c,auStack_88);
    uStack_c = 1;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      iVar10 = FUN_00aae9af();
      uStack_c = 2;
      if (iVar10 == 0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        puVar7 = (undefined4 *)FUN_00475150();
      }
      uStack_c = 3;
      iStack_b4 = 0;
      if ((puVar7 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
      uStack_c = CONCAT31(uStack_c._1_3_,1);
      DAT_0125b5e0 = puVar7;
    }
    uVar8 = FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    uStack_c = 4;
    bVar6 = false;
    bVar5 = false;
    bVar4 = false;
    bVar3 = true;
    bVar2 = true;
    bVar1 = true;
  }
  (**(code **)(**(int **)(param_1 + 100) + 0xcc))(uVar8,0);
  if (bVar4) {
    if (0xf < uStack_44) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_44 = 0xf;
    uStack_48 = 0;
    uStack_58 = uStack_58 & 0xffffff00;
  }
  if (bVar5) {
    pvStack_14 = (void *)0xa;
    FUN_009adb70();
    if (iStack_b4 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0[0] = 0;
    local_b0[1] = 0;
  }
  if (bVar6) {
    if (0xf < uStack_60) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_60 = 0xf;
    uStack_64 = 0;
    uStack_74 = uStack_74 & 0xffffff00;
  }
  if (bVar1) {
    if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_28 = 0xf;
    uStack_2c = 0;
    uStack_3c = uStack_3c & 0xffffff00;
  }
  if (bVar2) {
    pvStack_14 = (void *)0xb;
    FUN_009adb70();
    if (iStack_a0 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    iStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
  }
  pvStack_14 = (void *)0xffffffff;
  if (bVar3) {
    if (0xf < uStack_7c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    uStack_7c = 0xf;
    uStack_80 = 0;
    uStack_90 = uStack_90 & 0xffffff00;
  }
  (**(code **)(**(int **)(param_1 + 100) + 0x34))();
  (**(code **)(**(int **)(param_1 + 0x68) + 0x34))();
  (**(code **)(**(int **)(param_1 + 0x78) + 0x34))();
  ExceptionList = pvStack_1c;
  return;
}

