// FUN_004e5dd0 @ 004e5dd0 body=[[004e5dd0, 004e5ed2] [004e5edc, 004e614a] [004e614e, 004e6212]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e5dd0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 *puVar12;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined4 uStack_68;
  int iStack_64;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar13;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb42a0;
  local_10 = ExceptionList;
  iStack_64 = 0x4e5e03;
  iVar7 = -(*(int *)(param_1 + 0x88) * 4 + 4);
  piVar11 = (int *)(&stack0xffffffa0 + iVar7);
  *(undefined1 **)((int)&iStack_64 + iVar7) = &stack0xffffffa0 + iVar7;
  *(undefined4 *)((int)&uStack_68 + iVar7) = 0x4e5e0d;
  ExceptionList = &local_10;
  FUN_004e3850();
  puVar12 = &stack0xffffffa0 + iVar7;
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x125) == '\0') {
    iVar1 = *(int *)(&stack0xffffffa0 + iVar7);
    puVar15 = &stack0xffffffa0 + iVar7;
    while (iVar1 != 0) {
      iVar1 = *piVar11;
      piVar11 = piVar11 + 1;
      if ((*(int *)(*(int *)(iVar1 + 0xdc) + 300) == param_3) ||
         (((iVar2 = *(int *)(*(int *)(param_1 + 0x30) + 0xf8), iVar2 == 0 || (iVar2 == 3)) &&
          (*(int *)(param_1 + 0x3c) == param_3)))) {
        piVar3 = *(int **)(iVar1 + 0x14);
        local_24 = *(undefined4 *)(iVar1 + 0x10);
        uVar10 = *(undefined4 *)(param_1 + 0x80);
        *(int **)((int)&iStack_64 + iVar7) = piVar3;
        local_20 = piVar3;
        *(undefined4 *)((int)&iStack_64 + iVar7) = uVar10;
        *(undefined4 *)((int)&uStack_68 + iVar7) = 0x4e5e87;
        FUN_004e9470();
        if (param_1 != 0) {
          if (*(char *)(param_1 + 0x8c) == '\0') {
            iVar1 = *(int *)(param_1 + 8);
            iVar2 = *(int *)(param_1 + 0xc);
            if (iVar1 != 0) {
              *(int *)(iVar1 + 0xc) = iVar2;
            }
            if (iVar2 != 0) {
              *(int *)(iVar2 + 8) = iVar1;
            }
            if (param_1 == *(int *)(param_1 + 0x80)) {
              *(int *)(param_1 + 0x80) = iVar2;
            }
            if (param_1 == *(int *)(param_1 + 0x84)) {
              *(int *)(param_1 + 0x84) = iVar1;
            }
            *(int *)((int)&iStack_64 + iVar7) = param_1;
                    /* WARNING: Subroutine does not return */
            *(undefined **)((int)&uStack_68 + iVar7) = &UNK_004e5ed3;
            FUN_00aae91b();
          }
          *(undefined1 *)(param_1 + 0x10) = 1;
        }
        *(int *)((int)&iStack_64 + iVar7) = iVar1;
        *(undefined4 *)((int)&uStack_68 + iVar7) = 0x4e5ee8;
        FUN_0068aa10();
      }
      puVar15 = &stack0xffffffa0 + iVar7;
      iVar1 = *piVar11;
    }
  }
  else {
    puVar15 = &stack0xffffffa0 + iVar7;
    if ((param_5 != 0) &&
       (iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4),
       puVar15 = &stack0xffffffa0 + iVar7,
       0 < (int)(*(int *)(iVar1 + 0x9dc) - *(int *)(iVar1 + 0x9d8) & 0xfffffffcU))) {
      iVar1 = *(int *)(&stack0xffffffa0 + iVar7);
      piVar11 = (int *)(&stack0xffffffa0 + iVar7);
      puVar15 = &stack0xffffffa0 + iVar7;
      while (iVar1 != 0) {
        iVar7 = *piVar11;
        uVar4 = *(uint *)(iVar7 + 0x14);
        local_20 = piVar11 + 1;
        uVar10 = *(undefined4 *)(iVar7 + 0x10);
        *(uint *)(puVar12 + -4) = uVar4;
        uVar5 = *(undefined4 *)(param_1 + 0x80);
        local_2c = uVar10;
        local_28 = uVar4;
        *(undefined4 *)(puVar12 + -8) = uVar5;
        *(undefined4 *)(puVar12 + -8) = uVar5;
        *(undefined4 *)(puVar12 + -0xc) = 0x4e5f61;
        FUN_004e9470();
        *(undefined4 *)(puVar12 + -8) = 0x4e5f66;
        FUN_0099e580();
        iVar1 = *(int *)(iVar7 + 0x70);
        if (iVar1 != 0) {
          pcVar6 = *(code **)(**(int **)(iVar1 + 0x10) + 0x30);
          *(undefined4 *)(puVar12 + -4) = 0;
          *(int *)(puVar12 + -8) = iVar7;
          puVar13 = (undefined4 *)(puVar12 + -0xc);
          puVar12 = puVar12 + -0xc;
          *puVar13 = 0x4e5f7b;
          (*pcVar6)();
          if ((*(int *)(*(int *)(iVar1 + 0x10) + 0x38) - *(int *)(*(int *)(iVar1 + 0x10) + 0x34) &
              0xfffffff8U) == 0) {
            *(int *)(puVar12 + -4) = DAT_012588e8 + 0xab4;
            *(undefined4 *)(puVar12 + -8) = 0x4e5f9e;
            FUN_005b5980();
          }
          *(undefined4 *)(iVar7 + 0x70) = 0;
        }
        if (*(int *)(iVar7 + 0x74) != 0) {
          *(undefined4 *)(puVar12 + -4) = 0x4e5fad;
          cVar8 = FUN_005cbec0();
          if (cVar8 != '\0') {
            *(undefined1 *)(iVar7 + 0x104) = 1;
          }
          if (*(int *)(iVar7 + 0x74) != 0) {
            *(undefined4 *)(puVar12 + -4) = 0x4e5fc6;
            FUN_005a9640();
          }
          *(undefined4 *)(iVar7 + 0x74) = 0;
        }
        pcVar6 = *(code **)(**(int **)(iVar7 + 0xd8) + 0x20);
        puVar14 = puVar12 + -4;
        *(undefined4 *)(puVar12 + -4) = 0x4e5fd6;
        cVar8 = (*pcVar6)();
        if (cVar8 != '\0') {
          local_1c = *(undefined4 *)(iVar7 + 0xc0);
          iVar1 = *(int *)(iVar7 + 0xd8);
          iVar2 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xc4) * 4);
          piVar11 = *(int **)(iVar2 + 0xbd4);
          *(int *)(puVar14 + -4) = iVar2 + 0xbd4;
          for (; (piVar11 != (int *)0x0 && (*piVar11 != iVar1)); piVar11 = (int *)piVar11[2]) {
          }
          *(int **)(puVar14 + -4) = piVar11;
          *(undefined4 *)(puVar14 + -8) = 0x4e6024;
          FUN_005f2ae0();
        }
        local_1c = *(undefined4 *)(iVar7 + 0xc0);
        piVar11 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar7 + 0xc4) * 4) +
                           0x7b4);
        *(int *)(puVar14 + -4) = DAT_012587e4;
        for (; (piVar11 != (int *)0x0 && (*piVar11 != iVar7)); piVar11 = (int *)piVar11[2]) {
        }
        *(int **)(puVar14 + -4) = piVar11;
        *(undefined4 *)(puVar14 + -8) = 0x4e6064;
        FUN_005f2ae0();
        *(int *)(puVar14 + -4) = param_5;
        *(undefined4 *)(puVar14 + -8) = param_4;
        *(undefined4 *)(puVar14 + -0xc) = 0x4e6073;
        FUN_005c93b0();
        *(undefined4 *)(puVar14 + -4) = 0x4e6089;
        FUN_00513c80();
        pcVar6 = *(code **)(**(int **)(iVar7 + 0xd8) + 0x20);
        puVar12 = puVar14 + -4;
        *(undefined4 *)(puVar14 + -4) = 0x4e6096;
        cVar8 = (*pcVar6)();
        if (cVar8 != '\0') {
          iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4);
          iVar2 = *(int *)(iVar1 + 0xbd4);
          uVar10 = *(undefined4 *)(iVar7 + 0xd8);
          *(undefined4 *)(puVar12 + -4) = 0x10;
          local_18 = iVar2;
          *(undefined4 *)(puVar12 + -8) = 0x4e60bf;
          puVar9 = (undefined4 *)FUN_00aae9af();
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = (undefined4 *)0x0;
          }
          else {
            *puVar9 = uVar10;
            puVar9[1] = 0;
            puVar9[2] = local_18;
            *(undefined1 *)(puVar9 + 3) = 0;
          }
          iVar2 = *(int *)(iVar1 + 0xbdc);
          *(undefined4 **)(iVar1 + 0xbd4) = puVar9;
          *(int *)(iVar1 + 0xbdc) = iVar2 + 1;
          if (iVar2 == 0) {
            *(undefined4 **)(iVar1 + 0xbd8) = puVar9;
          }
          else {
            *(undefined4 **)(local_18 + 4) = puVar9;
          }
        }
        uVar10 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + param_5 * 4);
        *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(iVar7 + 0xdc);
        *(undefined4 *)(puVar12 + -8) = 0;
        *(uint **)(puVar12 + -0xc) = local_50;
        *(undefined4 *)(puVar12 + -0x10) = uVar10;
        *(undefined4 *)(puVar12 + -0x14) = 0x4e6126;
        uVar10 = FUN_004f9d10();
        *(undefined4 *)(puVar12 + -4) = uVar10;
        local_8 = 8;
        *(undefined4 *)(puVar12 + -8) = 0x4e6135;
        FUN_005cdc70();
        local_8 = 0xffffffff;
        if (0xf < local_3c) {
          *(uint *)(puVar12 + -4) = local_50[0];
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar12 + -8) = &UNK_004e614b;
          FUN_00aae91b();
        }
        *(int *)(puVar12 + -4) = iVar7;
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = local_50[0] & 0xffffff00;
        *(undefined4 *)(puVar12 + -8) = 0x4e6166;
        FUN_005cae80();
        *(undefined4 *)(puVar12 + -4) = *(undefined4 *)(iVar7 + 0xdc);
        *(undefined4 *)(puVar12 + -8) = 0x4e6174;
        FUN_005cb2c0();
        piVar11 = local_20;
        puVar15 = puVar12;
        iVar1 = *local_20;
      }
    }
  }
  local_34 = (int *)0x0;
  local_30 = 0;
  local_2c = 0;
  local_28 = local_28 & 0xffffff00;
  local_8 = 9;
  *(int *)(puVar15 + -4) = param_3;
  *(undefined4 *)(puVar15 + -8) = param_2;
  *(undefined4 *)(puVar15 + -0xc) = 0x4e61aa;
  FUN_004e5180();
  piVar11 = local_34;
  while (piVar11 != (int *)0x0) {
    iVar7 = *piVar11;
    piVar11 = (int *)piVar11[2];
    *(undefined4 *)(puVar15 + -4) = 1;
    iVar1 = *(int *)(DAT_012588e8 + 0xacc);
    *(int *)(puVar15 + -8) = DAT_012588e8 + 0xb0c;
    *(undefined4 **)(puVar15 + -0xc) = &param_2;
    *(undefined4 *)(puVar15 + -0x10) = *(undefined4 *)(iVar1 + iVar7 * 4);
    *(undefined4 *)(puVar15 + -0x14) = 0x4e61d8;
    FUN_004b5730();
  }
  if ((*(int *)(param_1 + 0x88) == 0) && (*(int *)(param_1 + 0x9c) == 0)) {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  *(undefined4 *)(puVar15 + -4) = 0x4e61fd;
  FUN_00849e90();
  ExceptionList = local_10;
  return;
}

