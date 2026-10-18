// FUN_00503020 @ 00503020 body=[[00503020, 005030a0] [005030a4, 00503138] [00503142, 0050316c] [00503170, 005032c8] [005032d2, 0050340f] [00503413, 005034cc] [005034d6, 0050351d] [00503527, 005035b9] [005035c0, 005036f9] [00503700, 0050389c] [005038ab, 00503986] [0050398a, 00503bf9] [00503c00, 00503c2e] [00503c38, 00503c7c] [00503c80, 00503cee] [00503cf9, 00503d1c] [00503d20, 00503d28] [00503d32, 00503d58] [00503d62, 00503d88] [00503d92, 00503db8] [00503dc2, 00503df8] [00503e02, 00503e8c] [00503e90, 00503eb8] [00503ec4, 00503f1c] [00503f20, 00503f48] [00503f54, 00504338] [00504340, 005043b5] [005043c0, 0050453c] [00504540, 00504639] [0050463d, 0050469c] [005046a0, 005046fe]]


/* WARNING: Removing unreachable block (ram,0x00504130) */
/* WARNING: Removing unreachable block (ram,0x005040d0) */
/* WARNING: Removing unreachable block (ram,0x00504070) */
/* WARNING: Removing unreachable block (ram,0x00504010) */
/* WARNING: Removing unreachable block (ram,0x005031a7) */
/* WARNING: Removing unreachable block (ram,0x00504040) */
/* WARNING: Removing unreachable block (ram,0x005040a0) */
/* WARNING: Removing unreachable block (ram,0x00504100) */
/* WARNING: Removing unreachable block (ram,0x00504160) */
/* WARNING: Removing unreachable block (ram,0x00503c7b) */
/* WARNING: Removing unreachable block (ram,0x00503c80) */
/* WARNING: Removing unreachable block (ram,0x00503fd9) */
/* WARNING: Removing unreachable block (ram,0x00503fe0) */
/* WARNING: Removing unreachable block (ram,0x0050397e) */
/* WARNING: Removing unreachable block (ram,0x00503407) */

void FUN_00503020(int *param_1)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint local_30;
  int local_2c;
  int local_28 [2];
  undefined8 local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba79ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1[0x43] == 0) {
    ExceptionList = &local_10;
    param_1 = (int *)FUN_00aae9af();
    local_8 = 0;
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00456490();
    }
    piVar3[0x43] = iVar5;
  }
  local_8 = 0xffffffff;
  (*(code *)**(undefined4 **)piVar3[0x43])();
  piVar8 = piVar3 + 0x56b;
  if (piVar8 != local_28) {
    if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *piVar8 = 0;
    piVar3[0x56c] = 0;
    piVar3[0x56d] = 0;
  }
  local_8 = 0xffffffff;
  piVar8 = (int *)piVar3[0x1a];
  iVar5 = piVar3[0x1b] - (int)piVar8 >> 2;
  if ((iVar5 != 0) && (piVar10 = piVar8 + iVar5, param_1 = piVar10, piVar8 != piVar10)) {
    do {
      if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar8)();
        piVar10 = param_1;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar10);
  }
  pvVar1 = (void *)piVar3[0x1a];
  if (pvVar1 != (void *)piVar3[0x1b]) {
    param_1 = (int *)0x0;
    FID_conflict__memcpy(pvVar1,(void *)piVar3[0x1b],0);
    piVar3[0x1b] = (int)pvVar1 + (int)param_1;
  }
  piVar3[0x1e] = DAT_0125dbf0;
  piVar3[0x1f] = DAT_0125dbf0;
  if (piVar3[0x21] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x21] = 0;
  piVar3[0x22] = 0;
  piVar3[0x23] = 0;
  piVar8 = piVar3 + 0x577;
  if (piVar8 != local_28) {
    if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    *piVar8 = 0;
    piVar3[0x578] = 0;
    piVar3[0x579] = 0;
  }
  local_8 = 0xffffffff;
  FUN_0051fef0();
  FUN_0051fd10();
  if (piVar3[0x560] != piVar3[0x561]) {
    piVar3[0x561] = piVar3[0x560];
  }
  param_1 = (int *)&stack0xfffffef8;
  FUN_004bea40();
  piVar3[0x4e] = 0;
  piVar3[0x4f] = 0;
  FUN_004138b0(piVar3 + 0x61,&param_1);
  FUN_00409350();
  piVar3[0x505] = 0;
  piVar3[0x135] = 0;
  *(undefined1 *)((int)piVar3 + 0x31) = 0;
  piVar3[0x1f6] = 0;
  piVar3[0x1f7] = 0;
  piVar3[0x4b] = 0;
  piVar3[0x536] = 0;
  piVar3[0x537] = 0;
  piVar3[0x26] = 0;
  piVar3[0x4b1] = 0;
  piVar3[0x4b0] = 0x10000;
  piVar3[0x4b2] = 0x10000;
  piVar3[0x4b3] = 0;
  piVar3[0x4fa] = 0;
  piVar3[0x4fb] = 0;
  piVar3[0x58] = 0;
  piVar3[0x59] = 0;
  piVar3[0x5a] = 0;
  piVar3[0x5b] = 0;
  piVar3[0x5c] = 0;
  piVar3[0x12f] = DAT_01259abc;
  piVar3[0x130] = DAT_01259abc;
  piVar3[0x520] = 0;
  piVar3[0x521] = 0;
  if (piVar3[0x523] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x523] = 0;
  piVar3[0x524] = 0;
  piVar3[0x525] = 0;
  piVar3[0x522] = 0;
  piVar3[0x534] = 0x8000;
  piVar3[0x535] = 0;
  *(undefined1 *)(piVar3 + 0x55a) = 0;
  pvVar1 = (void *)piVar3[0x553];
  if (pvVar1 != (void *)piVar3[0x554]) {
    param_1 = (undefined4 *)0x0;
    FID_conflict__memcpy(pvVar1,(void *)piVar3[0x554],0);
    piVar3[0x554] = (int)pvVar1 + (int)param_1;
  }
  if (piVar3[0x554] - piVar3[0x553] >> 2 != 0) {
    FUN_0054ab90(piVar3 + 0x553);
  }
  if (DAT_0131bd5c == 0) {
    param_1 = (int *)FUN_00aae9af();
    local_8 = 3;
    if (param_1 != (undefined4 *)0x0) {
      FUN_008b0060();
    }
    local_8 = 0xffffffff;
    FUN_00972090();
  }
  iVar5 = *(int *)(DAT_0131bd5c + 0x10) - *(int *)(DAT_0131bd5c + 0xc) >> 2;
  if (0 < iVar5) {
    do {
      local_2c = iVar5;
      if (DAT_01258a30 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)FUN_00aae9af();
        local_8 = 4;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          param_1 = puVar6;
          FUN_00409350();
          local_8 = CONCAT31(local_8._1_3_,5);
          FUN_009705a0(puVar6);
          *puVar6 = CNullGovernment::vftable;
        }
        local_8 = 0xffffffff;
        DAT_01258a30 = puVar6;
      }
      puVar6 = (undefined4 *)piVar3[0x554];
      param_1 = DAT_01258a30;
      if (&param_1 < puVar6) {
        if (&param_1 < (undefined4 *)piVar3[0x553]) goto LAB_00503483;
        local_20._4_4_ = (int *)((int)&param_1 - piVar3[0x553] >> 2);
        if (puVar6 == (undefined4 *)piVar3[0x555]) {
          FUN_007b94a0();
        }
        if ((undefined4 *)piVar3[0x554] != (undefined4 *)0x0) {
          *(undefined4 *)piVar3[0x554] = *(undefined4 *)(piVar3[0x553] + (int)local_20._4_4_ * 4);
        }
      }
      else {
LAB_00503483:
        if (puVar6 == (undefined4 *)piVar3[0x555]) {
          FUN_007b94a0();
        }
        if ((undefined4 *)piVar3[0x554] != (undefined4 *)0x0) {
          *(undefined4 *)piVar3[0x554] = param_1;
        }
      }
      piVar3[0x554] = piVar3[0x554] + 4;
      local_2c = local_2c + -1;
      iVar5 = local_2c;
    } while (local_2c != 0);
  }
  if (piVar3[0x527] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x527] = 0;
  piVar3[0x528] = 0;
  piVar3[0x529] = 0;
  piVar8 = (int *)piVar3[0x391];
  while (piVar8 != (int *)0x0) {
    piVar10 = (int *)piVar8[2];
    puVar6 = (undefined4 *)*piVar8;
    piVar8 = piVar10;
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)();
    }
  }
  if (piVar3[0x391] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x391] = 0;
  piVar3[0x392] = 0;
  piVar3[0x393] = 0;
  iVar5 = 0;
  if (0 < (int)(piVar3[0x231] - piVar3[0x230] & 0xfffffff8U)) {
    do {
      puVar6 = (undefined4 *)(piVar3[0x230] + iVar5 * 8);
      *puVar6 = 0;
      puVar6[1] = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[0x231] - piVar3[0x230] >> 3);
  }
  FUN_00979430();
  local_20 = FUN_00b31c36();
  *(undefined8 *)(piVar3 + 0x4ae) = local_20;
  uVar13 = FUN_00b31c36();
  *(undefined8 *)(piVar3 + 0x51e) = uVar13;
  iVar5 = 0;
  if (0 < (int)(piVar3[0x2d] - piVar3[0x2c] & 0xfffffff8U)) {
    do {
      iVar2 = piVar3[0x2c];
      iVar11 = iVar5 * 8;
      *(undefined4 *)(iVar2 + iVar11) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar11) = 0;
      iVar2 = piVar3[0x30];
      *(undefined4 *)(iVar2 + iVar11) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar11) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[0x2d] - piVar3[0x2c] >> 3);
  }
  iVar5 = 0;
  if (0 < (int)(piVar3[0x35] - piVar3[0x34] & 0xfffffff8U)) {
    do {
      iVar2 = piVar3[0x34];
      iVar11 = iVar5 * 8;
      *(undefined4 *)(iVar2 + iVar11) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar11) = 0;
      iVar2 = piVar3[0x38];
      *(undefined4 *)(iVar2 + iVar11) = 0;
      *(undefined4 *)(iVar2 + 4 + iVar11) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[0x35] - piVar3[0x34] >> 3);
  }
  iVar5 = 0;
  if (0 < (int)(piVar3[0x48e] - piVar3[0x48d] & 0xfffffffcU)) {
    do {
      if (*(int *)(piVar3[0x48d] + iVar5 * 4) != 0) {
        iVar11 = *(int *)(piVar3[0x48d] + iVar5 * 4);
        *(undefined4 *)(iVar11 + 0x30) = 0;
        *(undefined4 *)(iVar11 + 0x34) = 0;
        param_1 = (int *)DAT_00f17898;
        if (iVar5 == 2) {
          param_1 = (int *)DAT_00f092fc;
        }
        uVar13 = FUN_00b31c36();
        local_2c = (int)((ulonglong)uVar13 >> 0x20);
        *(undefined8 *)(*(int *)(piVar3[0x48d] + iVar5 * 4) + 0x10) = uVar13;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[0x48e] - piVar3[0x48d] >> 2);
  }
  iVar5 = 0;
  if (0 < (int)(piVar3[0x29] - piVar3[0x28] & 0xfffffffcU)) {
    do {
      *(undefined8 *)(*(int *)(piVar3[0x28] + iVar5 * 4) + 0x10) = local_20;
      iVar5 = iVar5 + 1;
    } while (iVar5 < piVar3[0x29] - piVar3[0x28] >> 2);
  }
  piVar3[0x510] = 0;
  piVar3[0x511] = 0;
  local_2c = piVar3[0x519];
  local_30 = piVar3[0x518];
  local_20._0_4_ = 0x8000;
  local_20._4_4_ = (int *)0x0;
  if ((local_2c < 1) && ((local_2c < 0 || ((uint)piVar3[0x518] < 0x8000)))) {
    puVar7 = (uint *)&local_20;
  }
  else {
    puVar7 = &local_30;
  }
  uVar12 = puVar7[1];
  piVar3[0x512] = *puVar7;
  piVar3[0x513] = uVar12;
  local_2c = piVar3[0x51b];
  local_30 = piVar3[0x51a];
  local_20._0_4_ = 0x8000;
  local_20._4_4_ = (int *)0x0;
  if ((local_2c < 1) && ((local_2c < 0 || ((uint)piVar3[0x51a] < 0x8000)))) {
    puVar7 = (uint *)&local_20;
  }
  else {
    puVar7 = &local_30;
  }
  uVar12 = puVar7[1];
  piVar3[0x514] = *puVar7;
  piVar3[0x515] = uVar12;
  local_2c = piVar3[0x51d];
  local_30 = piVar3[0x51c];
  local_20._0_4_ = 0x8000;
  local_20._4_4_ = (int *)0x0;
  if ((local_2c < 1) && ((local_2c < 0 || ((uint)piVar3[0x51c] < 0x8000)))) {
    puVar7 = (uint *)&local_20;
  }
  else {
    puVar7 = &local_30;
  }
  uVar12 = *puVar7;
  piVar3[0x517] = puVar7[1];
  local_2c = DAT_01258a3c;
  piVar3[0x516] = uVar12;
  iVar5 = 0;
  if (0 < (int)(*(int *)(local_2c + 0x10) - *(int *)(local_2c + 0xc) & 0xfffffffcU)) {
    do {
      param_1 = *(int **)(*(int *)(local_2c + 0xc) + iVar5 * 4);
      cVar4 = (**(code **)(*param_1 + 0x20))();
      iVar11 = param_1[2];
      puVar6 = (undefined4 *)(piVar3[0x236] + iVar5 * 8);
      puVar6[1] = 0;
      if (cVar4 == '\0') {
        *puVar6 = 0;
      }
      else {
        *puVar6 = 0x8000;
      }
      *(int *)(piVar3[0x23a] + iVar5 * 4) = iVar11;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_2c + 0x10) - *(int *)(local_2c + 0xc) >> 2);
  }
  iVar5 = DAT_01258a48;
  iVar11 = 0;
  param_1 = (int *)(*(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2);
  if (0 < (int)param_1) {
    do {
      uVar9 = *(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x18) + iVar11 * 4) + 0x30);
      puVar6 = (undefined4 *)(piVar3[0x240] + iVar11 * 8);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(piVar3[0x244] + iVar11 * 4) = uVar9;
      iVar11 = iVar11 + 1;
    } while (iVar11 < (int)param_1);
  }
  iVar11 = DAT_01258a50;
  if (piVar3[0x20f] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x20f] = 0;
  piVar3[0x210] = 0;
  piVar3[0x211] = 0;
  if (iVar11 == 0) {
    param_1 = (int *)FUN_00aae9af();
    local_8 = 6;
    if (param_1 == (int *)0x0) {
      iVar11 = 0;
    }
    else {
      iVar11 = FUN_00979190();
    }
    local_8 = 0xffffffff;
    iVar5 = DAT_01258a48;
    DAT_01258a50 = iVar11;
  }
  piVar3[0x213] = iVar11;
  param_1 = (int *)0x0;
  piVar8 = DAT_01258a40;
  if (0 < (int)(*(int *)(iVar5 + 0x4c) - *(int *)(iVar5 + 0x48) & 0xfffffffcU)) {
    do {
      if (piVar8 == (int *)0x0) {
        piVar8 = (int *)FUN_00aae9af();
        local_8 = 7;
        local_20._4_4_ = piVar8;
        if (piVar8 == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          FUN_00409350();
          local_8 = CONCAT31(local_8._1_3_,8);
          FUN_009740b0(piVar8,DAT_0131be94);
          *piVar8 = (int)CNullIssue::vftable;
        }
        local_8 = 0xffffffff;
        iVar5 = DAT_01258a48;
        DAT_01258a40 = piVar8;
      }
      *(int **)(piVar3[0x214] + (int)param_1 * 4) = piVar8;
      param_1 = (int *)((int)param_1 + 1);
    } while ((int)param_1 < *(int *)(iVar5 + 0x4c) - *(int *)(iVar5 + 0x48) >> 2);
  }
  param_1 = (int *)0x0;
  if (0 < (int)(*(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x38) & 0xfffffffcU)) {
    do {
      iVar11 = (int)param_1;
      if (piVar8 == (int *)0x0) {
        local_20._4_4_ = (int *)FUN_00aae9af();
        local_8 = 9;
        if (local_20._4_4_ == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_009747a0();
          iVar11 = (int)param_1;
        }
        local_8 = 0xffffffff;
        iVar5 = DAT_01258a48;
        DAT_01258a40 = piVar8;
      }
      *(int **)(piVar3[0x218] + iVar11 * 4) = piVar8;
      param_1 = (int *)(iVar11 + 1);
    } while ((int)param_1 < *(int *)(iVar5 + 0x3c) - *(int *)(iVar5 + 0x38) >> 2);
  }
  param_1 = (int *)0x0;
  if (0 < (int)(*(int *)(iVar5 + 0x6c) - *(int *)(iVar5 + 0x68) & 0xfffffffcU)) {
    do {
      iVar11 = (int)param_1;
      if (piVar8 == (int *)0x0) {
        local_20._4_4_ = (int *)FUN_00aae9af();
        local_8 = 10;
        if (local_20._4_4_ == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_009747a0();
          iVar11 = (int)param_1;
        }
        local_8 = 0xffffffff;
        iVar5 = DAT_01258a48;
        DAT_01258a40 = piVar8;
      }
      *(int **)(piVar3[0x220] + iVar11 * 4) = piVar8;
      param_1 = (int *)(iVar11 + 1);
    } while ((int)param_1 < *(int *)(iVar5 + 0x6c) - *(int *)(iVar5 + 0x68) >> 2);
  }
  param_1 = (int *)0x0;
  if (0 < (int)(*(int *)(iVar5 + 0x5c) - *(int *)(iVar5 + 0x58) & 0xfffffffcU)) {
    do {
      piVar10 = param_1;
      if (piVar8 == (int *)0x0) {
        local_20._4_4_ = (int *)FUN_00aae9af();
        local_8 = 0xb;
        if (local_20._4_4_ == (int *)0x0) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_009747a0();
          piVar10 = param_1;
        }
        local_8 = 0xffffffff;
        iVar5 = DAT_01258a48;
        DAT_01258a40 = piVar8;
      }
      *(int **)(piVar3[0x21c] + (int)piVar10 * 4) = piVar8;
      param_1 = (int *)((int)piVar10 + 1);
    } while ((int)param_1 < *(int *)(iVar5 + 0x5c) - *(int *)(iVar5 + 0x58) >> 2);
  }
  iVar5 = DAT_0125880c;
  piVar3[0x38f] = 0;
  piVar3[0x390] = 1;
  if (iVar5 == 0) {
    param_1 = (int *)FUN_00aae9af();
    local_8 = 0xc;
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00567560();
    }
    local_8 = 0xffffffff;
    DAT_0125880c = iVar5;
  }
  piVar3[0x39a] = iVar5;
  pvVar1 = (void *)piVar3[2];
  if (pvVar1 != (void *)piVar3[3]) {
    param_1 = (int *)0x0;
    FID_conflict__memcpy(pvVar1,(void *)piVar3[3],0);
    piVar3[3] = (int)param_1 + (int)pvVar1;
  }
  FUN_00409350();
  piVar3[0x27] = DAT_01259abc;
  piVar3[0x37a] = 0;
  *(undefined1 *)(piVar3 + 0x48) = 0;
  piVar3[0x4c] = 0;
  FUN_00401000();
  iVar5 = FUN_00b31c00();
  piVar3[0x6a] = iVar5;
  piVar3[0x6b] = 0;
  iVar5 = piVar3[0x1ef];
  while (iVar5 != 0) {
    FUN_0068aa10();
    iVar5 = piVar3[0x1ef];
  }
  if (piVar3[0x1ed] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x1ed] = 0;
  piVar3[0x1ee] = 0;
  piVar3[0x1ef] = 0;
  FUN_008601b0();
  FUN_004097a0();
  if (piVar3[0x385] != piVar3[0x386]) {
    piVar3[0x386] = piVar3[0x385];
  }
  *(undefined1 *)(piVar3 + 900) = 0;
  piVar3[0x82] = 0;
  *(undefined2 *)(piVar3 + 0x196) = 0x101;
  FUN_0043c390();
  (**(code **)(piVar3[0x77] + 0x1c))();
  piVar3[0x78] = 0;
  if (piVar3[0x7c] != 0) {
    param_1 = *(int **)(piVar3[0x7c] + 8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x7c] = 0;
  piVar3[0x7d] = 0;
  piVar3[0x7e] = 0;
  piVar3[0x7a] = 0;
  if (piVar3[0x13e] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x13e] = 0;
  piVar3[0x13f] = 0;
  piVar3[0x140] = 0;
  if (piVar3[0x142] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x142] = 0;
  piVar3[0x143] = 0;
  piVar3[0x144] = 0;
  if (piVar3[0x146] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x146] = 0;
  piVar3[0x147] = 0;
  piVar3[0x148] = 0;
  if (piVar3[0x395] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x395] = 0;
  piVar3[0x396] = 0;
  piVar3[0x397] = 0;
  iVar5 = FUN_00561180();
  piVar3[0x399] = iVar5;
  if (piVar3[0x131] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  piVar3[0x131] = 0;
  piVar3[0x132] = 0;
  piVar3[0x133] = 0;
  FUN_008b1a40();
  FUN_00504700();
  FUN_0085ac70();
  FUN_0085ac70();
  iVar5 = 0;
  iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
  if (0 < iVar11) {
    FUN_00401000();
    uVar9 = FUN_00b31c00();
    do {
      iVar2 = iVar5 * 8;
      iVar5 = iVar5 + 1;
      *(undefined4 *)(piVar3[0x298] + iVar2) = uVar9;
    } while (iVar5 < iVar11);
  }
  iVar5 = 0;
  if (piVar3[0x294] == 0) {
    piVar3[0x294] = 0;
    piVar3[0x295] = 0;
    piVar3[0x296] = 0;
    iVar11 = DAT_0125a5b8 - DAT_0125a5b4 >> 2;
    if (0 < iVar11) {
      FUN_00401000();
      uVar9 = FUN_00b31c00();
      do {
        iVar2 = iVar5 * 8;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(piVar3[0x2a4] + iVar2) = uVar9;
      } while (iVar5 < iVar11);
    }
    if (piVar3[0x2a0] == 0) {
      piVar3[0x2a0] = 0;
      piVar3[0x2a1] = 0;
      piVar3[0x2a2] = 0;
      FUN_004740a0();
      piVar3[0x1f2] = 0;
      piVar3[499] = 0;
      local_20._0_4_ = 0x2d2d2d;
      piVar3[0x4a] = 0;
      piVar3[0x49] = 0;
      piVar3[0x197] = 0;
      *(undefined2 *)(piVar3 + 0x33d) = 0;
      piVar3[0x33e] = 0x2d2d2d;
      piVar3[0x33f] = 0;
      FUN_005165c0();
      piVar3[0x379] = 0;
      piVar3[0x552] = 0;
      if (piVar3[0x362] != piVar3[0x363]) {
        piVar3[0x363] = piVar3[0x362];
      }
      if (piVar3[0x356] != piVar3[0x357]) {
        piVar3[0x357] = piVar3[0x356];
      }
      if (piVar3[0x35a] != piVar3[0x35b]) {
        piVar3[0x35b] = piVar3[0x35a];
      }
      if (piVar3[0x35e] != piVar3[0x35f]) {
        piVar3[0x35f] = piVar3[0x35e];
      }
      if (piVar3[0x366] != piVar3[0x367]) {
        piVar3[0x367] = piVar3[0x366];
      }
      if (piVar3[0x36a] != piVar3[0x36b]) {
        piVar3[0x36b] = piVar3[0x36a];
      }
      if (piVar3[0x34e] != piVar3[0x34f]) {
        piVar3[0x34f] = piVar3[0x34e];
      }
      if (piVar3[0x352] != piVar3[0x353]) {
        piVar3[0x353] = piVar3[0x352];
      }
      if (piVar3[0x506] != piVar3[0x507]) {
        piVar3[0x507] = piVar3[0x506];
      }
      local_20._0_4_ = 0x2d2d2d;
      piVar3[0x50a] = 0x2d2d2d;
      piVar3[0x50b] = 0;
      piVar3[0x340] = 0;
      piVar3[0x341] = 0;
      uVar12 = 0;
      if (piVar3[0x343] != piVar3[0x342]) {
        FUN_00401000();
        uVar9 = FUN_00b31c00();
        do {
          *(undefined1 *)(uVar12 + piVar3[0x342]) = 0;
          *(undefined4 *)(piVar3[0x36e] + uVar12 * 4) = uVar9;
          *(undefined1 *)(uVar12 + piVar3[0x346]) = 0;
          *(undefined1 *)(uVar12 + piVar3[0x34a]) = 0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < (uint)(piVar3[0x343] - piVar3[0x342]));
      }
      piVar3[0x374] = 0;
      piVar3[0x373] = 0;
      piVar3[0x372] = 0;
      piVar3[0x375] = 0;
      piVar3[0x376] = 0;
      piVar3[0x377] = 0;
      piVar3[0x378] = 0;
      piVar3[0x1a0] = 0;
      piVar3[0x2f9] = 0;
      piVar3[0x337] = 0;
      *(undefined1 *)(piVar3 + 0x19f) = 0;
      FUN_009a63f0();
      FUN_00409350(&DAT_00ded94d);
      FUN_00409350(&DAT_00ded94d);
      FUN_008601b0();
      FUN_008601b0();
      FUN_008601b0();
      FUN_009a63f0();
      piVar3[0x55b] = 0;
      FUN_005edbc0();
      iVar5 = DAT_012588e8;
      piVar3[0x328] = DAT_01259abc;
      piVar3[0x198] = *(int *)(iVar5 + 0xb10);
      piVar3[0x198] = piVar3[0x198] + -0x48;
      piVar3[0x199] = DAT_01259abc;
      piVar3[0x19a] = DAT_01259abc;
      FUN_00568680();
      FUN_00568460();
      iVar5 = 0;
      if (0 < (int)(piVar3[0x2fb] - piVar3[0x2fa] & 0xfffffffcU)) {
        do {
          FUN_0092d620();
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar3[0x2fb] - piVar3[0x2fa] >> 2);
      }
      if (DAT_0125fdd8 == 0) {
        param_1 = (int *)FUN_00aae9af();
        local_8 = 0xf;
        if (param_1 != (int *)0x0) {
          FUN_008b0060();
        }
        local_8 = 0xffffffff;
        FUN_005c2810();
      }
      iVar5 = DAT_0125fdd8;
      piVar8 = (int *)(DAT_0125fdd8 + 0xc);
      iVar11 = 0;
      if (0 < (int)(*(int *)(DAT_0125fdd8 + 0x10) - *(int *)(DAT_0125fdd8 + 0xc) & 0xfffffffcU)) {
        do {
          *(undefined4 *)(piVar3[0x269] + iVar11 * 4) = 0;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(iVar5 + 0x10) - *piVar8 >> 2);
      }
      uVar15 = 0;
      uVar14 = 0;
      uVar9 = FUN_009718a0(piVar8,0,0);
      FUN_00513a90(uVar9,uVar14,uVar15);
      FUN_0054ab90(piVar3 + 0x276,piVar3[0x276]);
      FUN_009a63f0();
      FUN_009a63f0();
      FUN_00549a80();
      FUN_0057afc0();
      piVar3[0x39e] = 0;
      piVar3[0x39f] = 0;
      piVar3[0x3a0] = 0;
      piVar3[0x3a1] = 0;
      if ((undefined4 *)piVar3[0x3a2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[0x3a2])();
      }
      puVar6 = (undefined4 *)FUN_00aae9af();
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6[1] = 0x18d;
        *puVar6 = CBank::vftable;
        puVar6[2] = piVar3;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = 0;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
      }
      piVar3[0x3a2] = (int)puVar6;
      piVar8 = (int *)piVar3[0x3a3];
      iVar5 = piVar3[0x3a4] - (int)piVar8 >> 2;
      if ((iVar5 != 0) &&
         (piVar10 = piVar8 + iVar5, param_1 = piVar8, local_20._4_4_ = piVar10, piVar8 != piVar10))
      {
        do {
          param_1 = piVar8;
          if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
            (*(code *)**(undefined4 **)*piVar8)();
            piVar10 = local_20._4_4_;
          }
          piVar8 = param_1 + 1;
          param_1 = piVar8;
        } while (piVar8 != piVar10);
      }
      FUN_0054ab90(piVar3 + 0x3a3,piVar3[0x3a3]);
      piVar3[0x3a7] = DAT_01259abc;
      FUN_00561c40();
      FUN_00561c40();
      iVar5 = 0;
      if (0 < (piVar3[0x4a9] - piVar3[0x4a8]) / 0x18) {
        param_1 = (int *)0x0;
        do {
          iVar11 = piVar3[0x4a8];
          *(undefined4 *)((int)param_1 + iVar11 + 8) = 0;
          *(undefined4 *)((int)param_1 + iVar11 + 0xc) = 0;
          *(undefined2 *)((int)param_1 + iVar11 + 0x10) = 0x101;
          param_1 = param_1 + 6;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (piVar3[0x4a9] - piVar3[0x4a8]) / 0x18);
      }
      iVar5 = FUN_00976450();
      piVar3[0x4ac] = iVar5;
      *(undefined1 *)(piVar3 + 0x4b4) = 0;
      iVar5 = 0;
      iVar11 = piVar3[0x4fd] - piVar3[0x4fc] >> 2;
      if (0 < iVar11) {
        do {
          *(undefined4 *)(piVar3[0x4fc] + iVar5 * 4) = 0;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar11);
      }
      piVar3[0x3a8] = 0;
      piVar3[0x501] = 0;
      piVar3[0x502] = 0;
      piVar3[0x503] = 0;
      piVar3[0x504] = 0;
      piVar3[0x500] = DAT_01259abc;
      piVar3[0x50c] = 0;
      piVar3[0x54e] = 0;
      piVar3[0x54f] = 0;
      piVar3[0x550] = 0;
      *(undefined1 *)(piVar3 + 0x4a7) = 0;
      piVar3[0x538] = 0;
      *(undefined1 *)(piVar3 + 0x551) = 1;
      if ((undefined4 *)piVar3[0x55b] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[0x55b])();
      }
      piVar3[0x55b] = 0;
      piVar8 = piVar3 + 0x55c;
      if (piVar8 != local_28) {
        if (*piVar8 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        *piVar8 = 0;
        piVar3[0x55d] = 0;
        piVar3[0x55e] = 0;
      }
      local_8 = 0xffffffff;
      iVar5 = piVar3[0x565] - piVar3[0x564] >> 2;
      param_1 = (int *)0x0;
      if (0 < iVar5) {
        do {
          puVar6 = *(undefined4 **)(piVar3[0x564] + (int)param_1 * 4);
          if (puVar6 != (undefined4 *)0x0) {
            (**(code **)*puVar6)();
          }
          param_1 = (int *)((int)param_1 + 1);
        } while ((int)param_1 < iVar5);
      }
      if (piVar3 + 0x564 != local_28) {
        if (piVar3[0x564] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        piVar3[0x564] = 0;
        piVar3[0x565] = 0;
        piVar3[0x566] = 0;
      }
      piVar3[0x568] = 0;
      piVar3[0x569] = 0;
      piVar3[0x56a] = 0;
      piVar3[0x570] = 0;
      piVar3[0x571] = 0;
      piVar3[0x572] = 0;
      if (piVar3[8] == *(int *)(DAT_012588e8 + 0xb60)) {
        FUN_0067f000();
      }
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

