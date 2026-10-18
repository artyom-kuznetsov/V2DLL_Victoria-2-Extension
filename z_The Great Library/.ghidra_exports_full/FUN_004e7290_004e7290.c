// FUN_004e7290 @ 004e7290 body=[[004e7290, 004e730c] [004e7310, 004e7563] [004e756d, 004e76ac] [004e76b6, 004e78d3] [004e78d7, 004e78e0] [004e78e4, 004e790f]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_004e7290(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int *piVar7;
  char cVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined1 *puVar15;
  int iVar16;
  int iStack_78;
  int *piStack_74;
  int *local_60;
  undefined4 local_5c;
  int local_58;
  undefined1 local_54;
  int *local_50;
  int *local_4c;
  undefined4 local_48;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  int *local_1c;
  int local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar14;
  
  puStack_c = &LAB_00bb8123;
  local_10 = ExceptionList;
  if (param_1[0x12] != 0) {
    local_60 = (int *)0x0;
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_8 = 0;
    piStack_74 = param_3;
    iStack_78 = param_2;
    ExceptionList = &local_10;
    FUN_004e6e50(param_1,&local_60);
    if (0 < local_58) {
      local_50 = (int *)0x0;
      local_4c = (int *)0x0;
      local_48 = 0;
      local_40 = (int *)0x0;
      local_3c = (int *)0x0;
      local_38 = (int *)0x0;
      local_8 = CONCAT31(local_8._1_3_,2);
      piVar7 = (int *)0x0;
      piVar12 = local_3c;
      piVar10 = local_60;
joined_r0x004e7305:
      do {
        local_3c = piVar7;
        if (piVar10 == (int *)0x0) {
          piStack_74 = param_1;
          iStack_78 = 0x4e73c6;
          local_3c = piVar12;
          local_1c = piVar10;
          FUN_004e18f0();
          local_28 = 0x2d2d2d;
          local_24 = (undefined1 *)0x0;
          piStack_74 = (int *)0x4e73d9;
          FUN_004ec520();
          piStack_74 = (int *)param_1[0x12];
          iStack_78 = param_1[0x11];
          FUN_004ecb50(&local_40,param_1,&local_28);
          piVar12 = local_1c;
          if (((local_1c != (int *)0x0) &&
              (iVar16 = *(int *)(*(int *)(DAT_012587e4 + 4) + (int)local_1c * 4),
              0 < (int)(*(int *)(iVar16 + 0x9dc) - *(int *)(iVar16 + 0x9d8) & 0xfffffffcU))) &&
             (local_30 = (int *)param_1[0x11],
             *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x12] * 4) +
                                       0xbe8) + (int)local_1c * 4) + 0x34) == 0)) {
            piStack_74 = (int *)0x28;
            iStack_78 = 0x4e7444;
            iVar16 = FUN_00aae9af();
            if (iVar16 == 0) {
              piVar10 = (int *)0x0;
            }
            else {
              piStack_74 = (int *)0x4e7450;
              piVar10 = (int *)FUN_0092c990();
            }
            local_2c = param_1[0x12];
            iVar16 = *(int *)(DAT_012588e8 + 0xb0c);
            piVar10[4] = param_1[0x11];
            piVar10[3] = (int)piVar12;
            piVar10[2] = local_20;
            piVar10[5] = local_2c;
            piVar10[6] = iVar16;
            iStack_78 = 0x4e748b;
            piStack_74 = piVar10;
            FUN_004a7bc0();
            piStack_74 = (int *)0x4e7494;
            (**(code **)(*piVar10 + 0x28))();
            local_24 = (undefined1 *)&piStack_74;
            piStack_74 = (int *)0x61a80;
            local_30 = (int *)param_1[0x11];
            iStack_78 = 0x4e74c0;
            FUN_005179e0();
          }
          piStack_74 = (int *)0x4e74d2;
          iVar1 = -(param_1[0x22] * 4 + 4);
          puVar13 = &stack0xffffff90 + iVar1;
          *(undefined1 **)((int)&piStack_74 + iVar1) = &stack0xffffff90 + iVar1;
          *(undefined4 *)((int)&iStack_78 + iVar1) = 0x4e74dc;
          FUN_004e3850();
          iVar16 = *(int *)(&stack0xffffff90 + iVar1);
          local_1c = (int *)(&stack0xffffff90 + iVar1);
          puVar5 = &stack0xffffff90 + iVar1;
          do {
            if (iVar16 == 0) {
              local_30 = (int *)param_1[0x11];
              *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x12] * 4) + 0xe68) =
                   param_1[0x14];
              iVar16 = param_1[0x10];
              if (iVar16 != 0) {
                piVar12 = (int *)param_1[0x11];
                *(undefined4 *)(puVar5 + -4) = 0;
                *(undefined4 *)(puVar5 + -8) = 0;
                local_30 = piVar12;
                *(undefined4 *)(puVar5 + -0xc) = 0;
                *(int *)(puVar5 + -0x10) = iVar16;
                *(undefined4 *)(puVar5 + -0x14) = 0x4e77ca;
                FUN_00513a90();
              }
              piVar12 = local_50;
              if (param_3 == (int *)0x0) {
                while ((local_50 <= piVar12 && (piVar12 < local_4c))) {
                  puVar13 = (undefined1 *)piVar12[1];
                  local_30 = piVar12 + 2;
                  iVar16 = *piVar12;
                  *(undefined4 *)(puVar5 + -4) = 0x10c;
                  local_28 = iVar16;
                  local_24 = puVar13;
                  *(undefined4 *)(puVar5 + -8) = 0x4e780e;
                  iVar16 = FUN_00aae9af();
                  local_8._0_1_ = 9;
                  if (iVar16 == 0) {
                    iVar16 = 0;
                  }
                  else {
                    *(int *)(puVar5 + -4) = iVar16;
                    *(undefined4 *)(puVar5 + -8) = 0x4e7822;
                    iVar16 = FUN_00931620();
                  }
                  iVar2 = DAT_012588e8;
                  local_8 = CONCAT31(local_8._1_3_,2);
                  piVar12 = (int *)(DAT_012588e8 + 0xb3c);
                  *(undefined4 *)(iVar16 + 0xc) = *(undefined4 *)(DAT_012588e8 + 0xb0c);
                  iVar1 = *(int *)(iVar2 + 0xb40);
                  *(undefined4 *)(puVar5 + -4) = 0x10;
                  *(undefined4 *)(puVar5 + -8) = 0x4e784d;
                  piVar10 = (int *)FUN_00aae9af();
                  if (piVar10 == (int *)0x0) {
                    piVar10 = (int *)0x0;
                  }
                  else {
                    *piVar10 = iVar16;
                    piVar10[1] = iVar1;
                    piVar10[2] = 0;
                    *(undefined1 *)(piVar10 + 3) = 0;
                  }
                  iVar6 = *(int *)(iVar2 + 0xb44);
                  *(int **)(iVar2 + 0xb40) = piVar10;
                  *(int *)(iVar2 + 0xb44) = iVar6 + 1;
                  if (iVar6 == 0) {
                    *piVar12 = (int)piVar10;
                  }
                  else {
                    *(int **)(iVar1 + 8) = piVar10;
                  }
                  iVar1 = param_1[0x11];
                  *(int *)(puVar5 + -4) = param_1[0x12];
                  *(int *)(puVar5 + -8) = iVar1;
                  *(undefined4 *)(puVar5 + -0xc) = 0;
                  *(undefined4 *)(puVar5 + -0x10) = 0;
                  *(int *)(puVar5 + -0x14) = iVar16;
                  *(undefined4 *)(puVar5 + -0x18) = 0x4e7897;
                  FUN_00934280();
                  iVar1 = local_28;
                  *(undefined1 **)(puVar5 + -4) = local_24;
                  *(int *)(puVar5 + -8) = iVar1;
                  *(undefined4 *)(puVar5 + -0xc) = 0;
                  *(undefined4 *)(puVar5 + -0x10) = 0;
                  *(int *)(puVar5 + -0x14) = iVar16;
                  *(undefined4 *)(puVar5 + -0x18) = 0x4e78a9;
                  FUN_00935390();
                  *(undefined4 *)(puVar5 + -4) = 1;
                  *(int *)(puVar5 + -8) = iVar16;
                  *(undefined1 *)(iVar16 + 8) = 1;
                  *(undefined4 *)(puVar5 + -0xc) = 0x4e78b5;
                  FUN_00931c30();
                  piVar12 = local_30;
                }
              }
              *(undefined1 *)((int)param_1 + 0x91) = 1;
              if (local_40 == (int *)0x0) {
                if (local_50 == (int *)0x0) {
                  *(undefined4 *)(puVar5 + -4) = 0x4e78ec;
                  FUN_009a63f0();
                  ExceptionList = local_10;
                  return 1;
                }
                *(int **)(puVar5 + -4) = local_50;
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar5 + -8) = &UNK_004e78e1;
                FUN_00aae91b();
              }
              *(int **)(puVar5 + -4) = local_40;
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar5 + -8) = &UNK_004e78d4;
              FUN_00aae91b();
            }
            iVar16 = *local_1c;
            iVar1 = *(int *)(iVar16 + 0x14);
            local_1c = local_1c + 1;
            local_30 = *(int **)(iVar16 + 0x10);
            iVar2 = param_1[0x20];
            *(int *)(puVar13 + -4) = iVar1;
            local_2c = iVar1;
            *(int *)(puVar13 + -4) = iVar2;
            *(undefined4 *)(puVar13 + -8) = 0x4e7518;
            FUN_004e9470();
            if (local_18[0] != 0) {
              if ((char)param_1[0x23] == '\0') {
                iVar16 = *(int *)(local_18[0] + 8);
                iVar1 = *(int *)(local_18[0] + 0xc);
                if (iVar16 != 0) {
                  *(int *)(iVar16 + 0xc) = iVar1;
                }
                if (iVar1 != 0) {
                  *(int *)(iVar1 + 8) = iVar16;
                }
                if (local_18[0] == param_1[0x20]) {
                  param_1[0x20] = iVar1;
                }
                if (local_18[0] == param_1[0x21]) {
                  param_1[0x21] = iVar16;
                }
                *(int *)(puVar13 + -4) = local_18[0];
                    /* WARNING: Subroutine does not return */
                *(undefined **)(puVar13 + -8) = &UNK_004e7564;
                FUN_00aae91b();
              }
              *(undefined1 *)(local_18[0] + 0x10) = 1;
            }
            iVar1 = *(int *)(iVar16 + 0x70);
            if (iVar1 != 0) {
              pcVar3 = *(code **)(**(int **)(iVar1 + 0x10) + 0x30);
              *(undefined4 *)(puVar13 + -4) = 0;
              *(int *)(puVar13 + -8) = iVar16;
              puVar14 = (undefined4 *)(puVar13 + -0xc);
              puVar13 = puVar13 + -0xc;
              *puVar14 = 0x4e7581;
              (*pcVar3)();
              if ((*(int *)(*(int *)(iVar1 + 0x10) + 0x38) - *(int *)(*(int *)(iVar1 + 0x10) + 0x34)
                  & 0xfffffff8U) == 0) {
                *(int *)(puVar13 + -4) = DAT_012588e8 + 0xab4;
                *(undefined4 *)(puVar13 + -8) = 0x4e75a4;
                FUN_005b5980();
              }
              *(undefined4 *)(iVar16 + 0x70) = 0;
            }
            if (*(int *)(iVar16 + 0x74) != 0) {
              *(undefined4 *)(puVar13 + -4) = 0x4e75b8;
              cVar8 = FUN_005cbec0();
              if (cVar8 != '\0') {
                *(undefined1 *)(iVar16 + 0x104) = 1;
              }
              if (*(int *)(iVar16 + 0x74) != 0) {
                *(undefined4 *)(puVar13 + -4) = 0x4e75d1;
                FUN_005a9640();
              }
              *(undefined4 *)(iVar16 + 0x74) = 0;
            }
            pcVar3 = *(code **)(**(int **)(iVar16 + 0xd8) + 0x20);
            puVar15 = puVar13 + -4;
            *(undefined4 *)(puVar13 + -4) = 0x4e75e5;
            cVar8 = (*pcVar3)();
            if (cVar8 != '\0') {
              local_28 = *(int *)(iVar16 + 0xc0);
              iVar1 = *(int *)(iVar16 + 0xd8);
              piVar12 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar16 + 0xc4) * 4)
                                 + 0xbd4);
              *(int *)(puVar15 + -4) = iVar1;
              for (; (piVar12 != (int *)0x0 && (*piVar12 != iVar1)); piVar12 = (int *)piVar12[2]) {
              }
              *(int **)(puVar15 + -4) = piVar12;
              *(undefined4 *)(puVar15 + -8) = 0x4e7632;
              FUN_005f2ae0();
            }
            local_28 = *(int *)(iVar16 + 0xc0);
            iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar16 + 0xc4) * 4);
            for (piVar12 = *(int **)(iVar1 + 0x7b4); piVar12 != (int *)0x0;
                piVar12 = (int *)piVar12[2]) {
              if (*piVar12 == iVar16) {
                if (piVar12 != (int *)0x0) {
                  if (*(char *)(iVar1 + 0x7c0) == '\0') {
                    iVar16 = piVar12[1];
                    iVar2 = piVar12[2];
                    if (iVar16 != 0) {
                      *(int *)(iVar16 + 8) = iVar2;
                    }
                    if (iVar2 != 0) {
                      *(int *)(iVar2 + 4) = iVar16;
                    }
                    if (piVar12 == *(int **)(iVar1 + 0x7b4)) {
                      *(int *)(iVar1 + 0x7b4) = iVar2;
                    }
                    if (piVar12 == *(int **)(iVar1 + 0x7b8)) {
                      *(int *)(iVar1 + 0x7b8) = iVar16;
                    }
                    *(int **)(puVar15 + -4) = piVar12;
                    /* WARNING: Subroutine does not return */
                    *(undefined **)(puVar15 + -8) = &UNK_004e76ad;
                    FUN_00aae91b();
                  }
                  *(undefined1 *)(piVar12 + 3) = 1;
                }
                break;
              }
            }
            iVar1 = param_1[0x11];
            *(int *)(puVar15 + -4) = param_1[0x12];
            *(int *)(puVar15 + -8) = iVar1;
            *(undefined4 *)(puVar15 + -0xc) = 0x4e76c8;
            FUN_005c93b0();
            local_28 = param_1[0x11];
            *(undefined4 *)(puVar15 + -4) = 0x4e76e3;
            FUN_00513c80();
            pcVar3 = *(code **)(**(int **)(iVar16 + 0xd8) + 0x20);
            puVar13 = puVar15 + -4;
            *(undefined4 *)(puVar15 + -4) = 0x4e76f0;
            cVar8 = (*pcVar3)();
            if (cVar8 != '\0') {
              local_28 = param_1[0x11];
              uVar4 = *(undefined4 *)(iVar16 + 0xd8);
              iVar1 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x12] * 4);
              puVar5 = *(undefined1 **)(iVar1 + 0xbd4);
              *(undefined4 *)(puVar13 + -4) = 0x10;
              local_24 = puVar5;
              *(undefined4 *)(puVar13 + -8) = 0x4e7722;
              puVar11 = (undefined4 *)FUN_00aae9af();
              if (puVar11 == (undefined4 *)0x0) {
                puVar11 = (undefined4 *)0x0;
              }
              else {
                *puVar11 = uVar4;
                puVar11[1] = 0;
                puVar11[2] = local_24;
                *(undefined1 *)(puVar11 + 3) = 0;
              }
              iVar2 = *(int *)(iVar1 + 0xbdc);
              *(undefined4 **)(iVar1 + 0xbd4) = puVar11;
              *(int *)(iVar1 + 0xbdc) = iVar2 + 1;
              if (iVar2 == 0) {
                *(undefined4 **)(iVar1 + 0xbd8) = puVar11;
              }
              else {
                *(undefined4 **)(local_24 + 4) = puVar11;
              }
            }
            *(int *)(puVar13 + -4) = iVar16;
            *(undefined4 *)(puVar13 + -8) = 0x4e776d;
            FUN_005cae80();
            *(undefined4 *)(puVar13 + -4) = *(undefined4 *)(iVar16 + 0xdc);
            *(undefined4 *)(puVar13 + -8) = 0x4e777b;
            FUN_005cb2c0();
            iVar16 = *local_1c;
            puVar5 = puVar13;
          } while( true );
        }
        local_1c = (int *)piVar10[2];
        local_24 = (undefined1 *)*piVar10;
        iVar16 = *(int *)((int)local_24 + 0x58);
        local_18[0] = iVar16;
        if ((local_18 < local_3c) && (local_40 <= local_18)) {
          iVar16 = (int)local_18 - (int)local_40;
          if (local_3c == local_38) {
            piStack_74 = (int *)0x4e734c;
            local_3c = piVar12;
            FUN_007b94a0();
          }
          if (local_3c != (int *)0x0) {
            *local_3c = local_40[iVar16 >> 2];
          }
        }
        else {
          if (local_3c == local_38) {
            piStack_74 = (int *)0x4e736f;
            local_3c = piVar12;
            FUN_007b94a0();
          }
          if (local_3c != (int *)0x0) {
            *local_3c = iVar16;
          }
        }
        piVar12 = local_3c + 1;
        piVar7 = piVar12;
        if (local_50 != local_4c) {
          piVar9 = local_50;
          do {
            if (piVar9[1] == *(int *)((int)local_24 + 300)) {
              piVar10 = local_1c;
              if (piVar9 != local_4c) goto joined_r0x004e7305;
              break;
            }
            piVar9 = piVar9 + 2;
          } while (piVar9 != local_4c);
        }
        piStack_74 = (int *)0x4e73b3;
        local_3c = piVar12;
        FUN_004d61d0();
        piVar12 = local_3c;
        piVar10 = local_1c;
      } while( true );
    }
    piStack_74 = (int *)0x4e78f8;
    FUN_009a63f0();
  }
  ExceptionList = local_10;
  return 0;
}

