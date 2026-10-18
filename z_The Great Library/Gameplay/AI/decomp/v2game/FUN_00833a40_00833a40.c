// FUN_00833a40 @ 00833a40 body=[[00833a40, 00833c3b] [00833c40, 00833fec] [00833ff0, 0083413a]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_00833a40(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  void **ppvVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined4 *puVar21;
  undefined1 *puVar22;
  undefined4 *puVar23;
  int iVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined **local_78 [2];
  undefined **local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_48 [2];
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined4 local_38;
  int local_34;
  code *local_30 [3];
  int *local_24;
  int local_20;
  int local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  undefined4 *puVar17;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb4fb7;
  local_10 = ExceptionList;
  local_48[1] = *(undefined4 *)(param_1 + 0x34);
  iVar9 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  local_34 = DAT_012588e8;
  local_1c = 5000;
  if (DAT_0125873e == '\0') {
    local_1c = *(int *)(iVar9 + 0x65c);
  }
  local_1c = local_1c / 1000;
  iVar24 = local_1c * -8;
  puVar20 = &stack0xffffff7c + iVar24;
  local_3c = &stack0xffffff7c + iVar24;
  puVar16 = &stack0xffffff7c + iVar24;
  local_38 = 0;
  if (1 < local_1c) {
    local_1c = 2;
  }
  ExceptionList = &local_10;
  local_18 = iVar9;
  if (*(char *)(iVar9 + 0x67c) != '\0') goto LAB_00833d9e;
  piVar12 = (int *)(*(int *)(iVar9 + 0xeb8) - *(int *)(iVar9 + 0xeb4) >> 2);
  local_20 = 0;
  puVar20 = &stack0xffffff7c + iVar24;
  ExceptionList = &local_10;
  ppvVar3 = &local_10;
  local_3c = &stack0xffffff7c + iVar24;
  puVar4 = &stack0xffffff7c + iVar24;
  local_24 = piVar12;
  if (0 < (int)piVar12) {
    do {
      local_8 = 0xffffffff;
      if (*(int *)(*(int *)(iVar9 + 0xeb4) + local_20 * 4) == iVar9) {
        iVar9 = *(int *)(*(int *)(iVar9 + 0xeb4) + local_20 * 4);
        uVar8 = *(undefined4 *)(iVar9 + 0x1c);
        *(undefined4 *)(puVar16 + -4) = *(undefined4 *)(iVar9 + 0x20);
        uVar1 = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(puVar16 + -8) = uVar8;
        uVar8 = *(undefined4 *)(param_1 + 0x34);
        *(undefined4 *)(puVar16 + -0xc) = uVar1;
        *(undefined4 *)(puVar16 + -0x10) = uVar8;
        *(undefined4 *)(puVar16 + -0x14) = 0x833b2f;
        FUN_00788d70();
        local_8 = 0;
        *(undefined4 *)(puVar16 + -4) = 0x833b41;
        uVar25 = FUN_00b31c36();
        *(undefined ****)(puVar16 + -4) = local_78;
        *(undefined4 *)(puVar16 + -8) = 0x833b51;
        puVar6 = (undefined4 *)FUN_009269a0();
        uVar8 = *puVar6;
        uVar1 = puVar6[1];
        *(undefined8 *)(puVar16 + -8) = uVar25;
        *(undefined4 *)(puVar16 + -0xc) = uVar1;
        *(undefined4 *)(puVar16 + -0x10) = uVar8;
        *(undefined4 *)(puVar16 + -0x14) = 0x833b5f;
        lVar26 = __allmul();
        *(undefined4 *)(puVar16 + -4) = 0;
        local_50 = lVar26 >> 0xf;
        *(undefined4 *)(puVar16 + -8) = 0x833b76;
        cVar5 = FUN_00911760();
        if (cVar5 != '\0') {
          local_30[1] = *(code **)(param_1 + 0x34);
          piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                             0xcdc);
          uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
          *(undefined4 *)(puVar16 + -4) = 0x40;
          local_5c = uVar8;
          *(undefined4 *)(puVar16 + -8) = 0x833bae;
          pcVar7 = (code *)FUN_00aae9af();
          local_8._0_1_ = 1;
          local_30[2] = pcVar7;
          if (pcVar7 == (code *)0x0) {
            uVar8 = 0;
          }
          else {
            pcVar2 = (code *)local_78[0][0xc];
            puVar17 = (undefined4 *)(puVar16 + -4);
            puVar16 = puVar16 + -4;
            *puVar17 = 0x833bc9;
            uVar8 = (*pcVar2)();
            *(undefined4 *)(puVar16 + -4) = uVar8;
            *(code **)(puVar16 + -8) = pcVar7;
            *(undefined4 *)(puVar16 + -0xc) = 0x833bd0;
            uVar8 = FUN_0090f620();
          }
          local_8 = (uint)local_8._1_3_ << 8;
          pcVar7 = *(code **)(*piVar12 + 0x44);
          puVar18 = puVar16 + -4;
          *(undefined4 *)(puVar16 + -4) = 0x833be3;
          iVar9 = (*pcVar7)();
          pcVar7 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
          *(undefined4 *)(puVar18 + -4) = uVar8;
          puVar16 = puVar18 + -8;
          *(undefined4 *)(puVar18 + -8) = 0x833bee;
          (*pcVar7)();
        }
        local_78[0] = CDiplomaticAction::vftable;
        piVar12 = local_24;
        iVar9 = local_18;
      }
      local_20 = local_20 + 1;
      puVar20 = puVar16;
      ppvVar3 = ExceptionList;
      puVar4 = local_3c;
    } while (local_20 < (int)piVar12);
  }
  local_3c = puVar4;
  ExceptionList = ppvVar3;
  local_8 = 0xffffffff;
  local_24 = (int *)(*(int *)(DAT_012588e8 + 0xae0) - *(int *)(DAT_012588e8 + 0xadc) >> 2);
  local_11 = '\0';
  local_20 = 0;
  if ((int)local_24 < 1) {
LAB_00833d17:
    if (*(char *)(iVar9 + 0x120) == '\0') goto LAB_00833d9e;
    *(undefined4 *)(puVar20 + -4) = 0x48;
    *(undefined4 *)(puVar20 + -8) = 0x833d27;
    pcVar7 = (code *)FUN_00aae9af();
    local_8 = 2;
    local_30[2] = pcVar7;
    if (pcVar7 != (code *)0x0) {
      *(undefined4 *)(puVar20 + -4) = 0;
      goto LAB_00833d68;
    }
LAB_00833d7d:
    uVar8 = 0;
  }
  else {
    do {
      iVar24 = *(int *)(*(int *)(DAT_012588e8 + 0xadc) + local_20 * 4);
      local_48[1] = *(undefined4 *)(iVar24 + 0x1c);
      iVar15 = *(int *)(iVar24 + 0x20);
      if (((((*(char *)(iVar24 + 0x120) != '\0') && (*(char *)(iVar24 + 0x67c) == '\0')) &&
           (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar24 + 0xbe4) * 4) + 0x16c
                    ) ==
            *(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar9 + 0xbe4) * 4) + 0x16c)
           )) && ((iVar13 = *(int *)(iVar24 + 0x156c), iVar13 != 0 &&
                  (*(char *)(iVar13 + 0x18) != '\0')))) &&
         (*(int *)(iVar13 + 0x14) == *(int *)(param_1 + 0x38))) {
        iVar10 = 0;
        if (iVar13 != 0) {
          uVar8 = *(undefined4 *)(*(int *)(iVar24 + 0x156c) + 0xc);
          *(int *)(puVar20 + -4) = iVar13;
          *(undefined4 *)(puVar20 + -4) = uVar8;
          uVar8 = *(undefined4 *)(*(int *)(iVar24 + 0x156c) + 8);
          *(int *)(puVar20 + -8) = *(int *)(iVar24 + 0x156c) + 0x10;
          *(undefined4 *)(puVar20 + -0xc) = uVar8;
          *(undefined4 *)(puVar20 + -0x10) = 0x833cd8;
          iVar10 = FUN_0050d540();
        }
        if (iVar10 < iVar15 % 0xf + 0x19) {
          local_11 = '\x01';
        }
      }
      local_20 = local_20 + 1;
    } while (local_20 < (int)local_24);
    if (local_11 == '\0') goto LAB_00833d17;
    if ((*(char *)(iVar9 + 0x120) != '\0') || (*(int *)(iVar9 + 0x14e0) < 1)) goto LAB_00833d9e;
    *(undefined4 *)(puVar20 + -4) = 0x48;
    *(undefined4 *)(puVar20 + -8) = 0x833d55;
    pcVar7 = (code *)FUN_00aae9af();
    local_8 = 3;
    local_30[2] = pcVar7;
    if (pcVar7 == (code *)0x0) goto LAB_00833d7d;
    *(undefined4 *)(puVar20 + -4) = 1;
LAB_00833d68:
    uVar8 = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(puVar20 + -8) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(puVar20 + -0xc) = uVar8;
    *(code **)(puVar20 + -0x10) = pcVar7;
    *(undefined4 *)(puVar20 + -0x14) = 0x833d79;
    uVar8 = FUN_005803e0();
  }
  local_8 = 0xffffffff;
  pcVar7 = *(code **)(**(int **)(iVar9 + 0xcdc) + 0x44);
  puVar19 = puVar20 + -4;
  *(undefined4 *)(puVar20 + -4) = 0x833d93;
  iVar9 = (*pcVar7)();
  pcVar7 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
  *(undefined4 *)(puVar19 + -4) = uVar8;
  puVar20 = puVar19 + -8;
  *(undefined4 *)(puVar19 + -8) = 0x833d9e;
  (*pcVar7)();
LAB_00833d9e:
  *(undefined4 *)(puVar20 + -4) = 0x833da9;
  cVar5 = FUN_0085cbd0();
  if (cVar5 != '\0') {
    local_20 = 0;
    local_30[2] = (code *)(*(int *)(local_18 + 0xea8) - *(int *)(local_18 + 0xea4) >> 2);
    if (0 < (int)local_30[2]) {
      do {
        iVar24 = local_20;
        local_58 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
        local_68 = *(undefined4 *)(param_1 + 0x34);
        iVar9 = *(int *)(*(int *)(local_18 + 0xea4) + local_20 * 4);
        local_60 = *(undefined4 *)(iVar9 + 0x1c);
        local_5c = *(undefined4 *)(iVar9 + 0x20);
        local_64 = *(undefined4 *)(param_1 + 0x38);
        local_6c = 0x18d;
        local_50._0_4_ = (uint)local_50 & 0xffffff00;
        local_50._4_4_ = 0;
        local_70 = CCancelWarSubsidiesAction::vftable;
        local_54 = local_58;
        *(undefined4 *)(puVar20 + -4) = 0;
        local_8 = 4;
        *(undefined4 *)(puVar20 + -8) = 0x833e3d;
        cVar5 = FUN_00911760();
        if (cVar5 != '\0') {
          local_48[1] = *(undefined4 *)(param_1 + 0x34);
          piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                             0xcdc);
          uVar8 = *(undefined4 *)(DAT_012588e8 + 0xb0c);
          *(undefined4 *)(puVar20 + -4) = 0x40;
          local_54 = uVar8;
          local_24 = piVar12;
          *(undefined4 *)(puVar20 + -8) = 0x833e79;
          puVar6 = (undefined4 *)FUN_00aae9af();
          local_8._0_1_ = 5;
          local_40 = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            pcVar7 = (code *)local_70[0xc];
            puVar21 = (undefined4 *)(puVar20 + -4);
            puVar20 = puVar20 + -4;
            *puVar21 = 0x833e94;
            uVar8 = (*pcVar7)();
            puVar6[1] = 0x18d;
            *puVar6 = CCommand::vftable;
            puVar6[7] = 0xf;
            puVar6[6] = 0;
            *(undefined1 *)(puVar6 + 2) = 0;
            local_8._0_1_ = 6;
            puVar6[0xb] = 900;
            puVar6[0xc] = 900;
            *(undefined4 *)(puVar20 + -4) = 0;
            *(undefined1 **)(puVar20 + -8) = &DAT_00ded94d;
            *(undefined2 *)(puVar6 + 0xd) = 0xffff;
            *(undefined4 *)(puVar20 + -0xc) = 0x833edb;
            FUN_00409350();
            puVar6[0xf] = uVar8;
            puVar6[9] = 0;
            *(undefined2 *)(puVar6 + 10) = 0;
            *(undefined2 *)((int)puVar6 + 0x36) = 0;
            puVar6[0xe] = 0;
            *puVar6 = CDiplomaticActionCommand::vftable;
            iVar24 = local_20;
          }
          local_8 = CONCAT31(local_8._1_3_,4);
          pcVar7 = *(code **)(*local_24 + 0x44);
          puVar22 = puVar20 + -4;
          *(undefined4 *)(puVar20 + -4) = 0x833f0b;
          iVar9 = (*pcVar7)();
          pcVar7 = *(code **)(**(int **)(iVar9 + 0x38) + 0x18);
          *(undefined4 **)(puVar22 + -4) = puVar6;
          puVar20 = puVar22 + -8;
          *(undefined4 *)(puVar22 + -8) = 0x833f16;
          (*pcVar7)();
        }
        local_20 = iVar24 + 1;
        local_8 = 0xffffffff;
        local_70 = CDiplomaticAction::vftable;
      } while (local_20 < (int)local_30[2]);
    }
  }
  iVar9 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
  if (iVar9 != 0) {
    *(undefined4 *)(puVar20 + -4) = 0x833f4b;
    cVar5 = FUN_00429b30();
    if (cVar5 != '\0') {
      *(int *)(puVar20 + -4) = iVar9;
      *(int *)(puVar20 + -8) = param_1;
      *(undefined4 *)(puVar20 + -0xc) = 0x833f59;
      FUN_0083b3d0();
    }
  }
  iVar9 = local_34;
  local_48[1] = *(undefined4 *)(param_1 + 0x34);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x67c) == '\0'
     ) {
    if (0 < local_1c) {
      iVar24 = 0;
      for (piVar12 = *(int **)(local_18 + 0x3a4); piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]
          ) {
        iVar24 = iVar24 + *(int *)(*piVar12 + 0x10);
      }
      iVar15 = 0;
      for (piVar12 = *(int **)(local_18 + 0x3f8); piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]
          ) {
        iVar15 = iVar15 + *(int *)(*piVar12 + 0x10);
      }
      iVar13 = 0;
      for (piVar12 = *(int **)(local_18 + 0x3c0); piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]
          ) {
        iVar13 = iVar13 + *(int *)(*piVar12 + 0x10);
      }
      iVar10 = 0;
      for (piVar12 = *(int **)(local_18 + 0x3dc); piVar12 != (int *)0x0; piVar12 = (int *)piVar12[2]
          ) {
        iVar10 = iVar10 + *(int *)(*piVar12 + 0x10);
      }
      local_30[0] = FUN_00838090;
      local_30[1] = FUN_008386e0;
      local_30[2] = FUN_008384d0;
      local_48[0] = iVar15 + iVar24;
      if ((*(int *)(local_18 + 0xd5c) - *(int *)(local_18 + 0xd58) & 0xfffffff8U) == 0) {
        local_48[1] = (int)((iVar13 + iVar24 >> 0x1f & 3U) + iVar13 + iVar24) >> 2;
        local_40 = (undefined4 *)((int)(iVar10 + iVar13 + (iVar10 + iVar13 >> 0x1f & 3U)) >> 2);
      }
      else {
        local_48[1] = iVar24 + iVar13;
        local_40 = (undefined4 *)(iVar10 + iVar13);
      }
      iVar24 = (int)local_40 + iVar15 + iVar24 + local_48[1];
      if ((iVar24 != 0) && (0 < local_1c)) {
        iVar15 = local_34 + 0xb4;
        local_20 = local_1c;
        do {
          if (*(int *)(iVar9 + 0xa74) == 0) {
            *(undefined4 *)(puVar20 + -4) = 0x83408e;
            FUN_009b7700();
          }
          puVar4 = local_3c;
          uVar14 = *(uint *)(iVar15 + *(int *)(iVar9 + 0xa74) * 4);
          uVar14 = uVar14 ^ (int)uVar14 >> 0xb;
          uVar14 = uVar14 ^ (uVar14 & 0xff3a58ad) << 7;
          uVar14 = uVar14 ^ (uVar14 & 0xffffdf8c) << 0xf;
          iVar13 = 0;
          *(int *)(iVar9 + 0xa74) = (*(int *)(iVar9 + 0xa74) + 1) % 0x270;
          uVar11 = 0;
          do {
            iVar13 = iVar13 + local_48[uVar11];
            if ((int)((int)uVar14 >> 0x12 ^ uVar14) % iVar24 < iVar13) {
              pcVar7 = local_30[uVar11];
              *(undefined4 **)(puVar20 + -4) = &local_38;
              *(undefined1 **)(puVar20 + -8) = puVar4;
              puVar23 = (undefined4 *)(puVar20 + -0xc);
              puVar20 = puVar20 + -0xc;
              *puVar23 = 0x8340f6;
              (*pcVar7)();
              break;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < 3);
          local_20 = local_20 + -1;
        } while (local_20 != 0);
      }
    }
  }
  else {
    *(int *)(puVar20 + -4) = param_1;
    *(undefined4 *)(puVar20 + -8) = 0x833f82;
    FUN_0083c7d0();
  }
  local_48[1] = *(undefined4 *)(param_1 + 0x34);
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x31) != '\0')
  {
    *(int *)(puVar20 + -4) = param_1;
    *(undefined4 *)(puVar20 + -8) = 0x83411f;
    FUN_00836e70();
    *(int *)(puVar20 + -4) = param_1;
    *(undefined4 *)(puVar20 + -8) = 0x834125;
    FUN_008363f0();
  }
  ExceptionList = local_10;
  return;
}

