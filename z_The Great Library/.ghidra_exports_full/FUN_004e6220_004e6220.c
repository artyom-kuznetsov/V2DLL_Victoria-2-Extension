// FUN_004e6220 @ 004e6220 body=[[004e6220, 004e64d7] [004e64e0, 004e66ff] [004e6709, 004e6728] [004e6737, 004e674c] [004e6750, 004e6c0f] [004e6c19, 004e6c4e] [004e6c5a, 004e6c7c] [004e6c80, 004e6c88] [004e6c92, 004e6caa] [004e6cb4, 004e6cd0] [004e6cd4, 004e6d2c]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6220(int param_1)

{
  undefined4 uVar1;
  code *pcVar2;
  longlong lVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined4 *puVar15;
  undefined1 *puVar16;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined **ppuVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 auStack_a8 [2];
  int local_90;
  int local_8c;
  int local_88;
  char local_84;
  undefined4 local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  int *local_6c;
  int *local_68;
  int local_64;
  undefined1 local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  undefined1 local_50;
  undefined1 local_4c [4];
  undefined1 local_48 [4];
  int *local_44;
  undefined **local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  int local_2c;
  int *local_24 [2];
  int local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  undefined4 *puVar17;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bb69eb;
  local_10 = ExceptionList;
  if (*(char *)(*(int *)(param_1 + 0x30) + 0x122) != '\0') {
    auStack_a8[1] = 0x4e6267;
    iVar12 = -(*(int *)(param_1 + 0x88) * 4 + 4);
    puVar16 = &stack0xffffff60 + iVar12;
    local_44 = (int *)(&stack0xffffff60 + iVar12);
    ExceptionList = &local_10;
    if ((_DAT_013f3614 & 1) == 0) {
      _DAT_013f3614 = _DAT_013f3614 | 1;
      *(undefined1 **)((int)auStack_a8 + iVar12 + 4) = &LAB_00c7f730;
      DAT_013f3604 = (int **)0x0;
      DAT_013f3608 = (int **)0x0;
      DAT_013f360c = (int **)0x0;
      *(undefined4 *)((int)auStack_a8 + iVar12) = 0x4e6297;
      ExceptionList = &local_10;
      _atexit(*(_func_4879 **)((int)auStack_a8 + iVar12 + 4));
      puVar16 = &stack0xffffff60 + iVar12;
    }
    *(undefined4 *)(puVar16 + -4) = 0x200;
    *(undefined4 *)(puVar16 + -8) = 0x4e62a9;
    FUN_004bf300();
    *(undefined1 **)(puVar16 + -4) = &stack0xffffff60 + iVar12;
    *(undefined4 *)(puVar16 + -8) = 0x4e62b1;
    FUN_004e3850();
    iVar8 = *(int *)(&stack0xffffff60 + iVar12);
    local_34 = (int *)(&stack0xffffff60 + iVar12);
    ppiVar4 = DAT_013f3604;
    while (DAT_013f3604 = ppiVar4, iVar8 != 0) {
      local_24[1] = (int *)*local_34;
      iVar12 = local_24[1][0x1d];
      local_34 = local_34 + 1;
      if ((iVar12 != 0) && (local_24[1][0x37] != 0)) {
        iVar11 = 0;
        iVar8 = (int)DAT_013f3608 - (int)ppiVar4 >> 2;
        if (0 < iVar8) {
          do {
            if (ppiVar4[iVar11] == local_24[1]) goto LAB_004e6cdd;
            iVar11 = iVar11 + 1;
          } while (iVar11 < iVar8);
        }
        local_15 = '\0';
        local_7c = (undefined4 *)0x0;
        local_78 = (undefined4 *)0x0;
        local_74 = 0;
        *(int *)(puVar16 + -4) = *(int *)(iVar12 + 0x14) + 0x34;
        local_8 = 0;
        *(undefined4 *)(puVar16 + -8) = 0x4e6333;
        FUN_0043a750();
        local_8 = 1;
        local_5c = (int *)0x0;
        local_58 = (int *)0x0;
        local_54 = 0;
        local_50 = 0;
        iVar8 = *(int *)(*(int *)(iVar12 + 0x10) + 0x20);
        while (iVar8 != 0) {
          iVar11 = *(int *)(iVar8 + 8);
          *(int *)(puVar16 + -4) = iVar8;
          *(undefined4 *)(puVar16 + -8) = 0x4e635c;
          FUN_0057aab0();
          iVar8 = iVar11;
        }
        local_8._1_3_ = (undefined3)((uint)local_8 >> 8);
        local_8._0_1_ = 2;
        local_6c = (int *)0x0;
        local_68 = (int *)0x0;
        local_64 = 0;
        local_60 = 0;
        iVar8 = *(int *)(*(int *)(iVar12 + 0x14) + 0x20);
        while (iVar8 != 0) {
          iVar11 = *(int *)(iVar8 + 8);
          *(int *)(puVar16 + -4) = iVar8;
          *(undefined4 *)(puVar16 + -8) = 0x4e638c;
          FUN_0057aab0();
          iVar8 = iVar11;
        }
        local_8._0_1_ = 3;
        local_3c = *(undefined ***)(*(int *)(iVar12 + 0x10) + 0x30);
        iVar8 = *(int *)(iVar12 + 0x14);
        local_38 = *(int *)(iVar8 + 0x30);
        iVar11 = *(int *)(iVar8 + 0x38);
        iVar8 = *(int *)(iVar8 + 0x34);
        puVar15 = local_7c;
        if (iVar8 != iVar11) {
          do {
            if (*(int *)(iVar8 + 4) == *(int *)(param_1 + 0x58)) break;
            iVar8 = iVar8 + 8;
          } while (iVar8 != iVar11);
          if (iVar8 != iVar11) {
            *(int *)(puVar16 + -4) = *(int *)(iVar12 + 0x10) + 0x34;
            *(undefined4 *)(puVar16 + -8) = 0x4e63d4;
            FUN_0043a750();
            *(int *)(puVar16 + -4) = *(int *)(iVar12 + 0x14) + 0x20;
            *(undefined4 *)(puVar16 + -8) = 0x4e63e3;
            FUN_004e94a0();
            *(int *)(puVar16 + -4) = *(int *)(iVar12 + 0x10) + 0x20;
            *(undefined4 *)(puVar16 + -8) = 0x4e63f2;
            FUN_004e94a0();
            local_3c = *(undefined ***)(*(int *)(iVar12 + 0x14) + 0x30);
            local_38 = *(int *)(*(int *)(iVar12 + 0x10) + 0x30);
            puVar15 = local_7c;
          }
        }
        while ((local_7c <= puVar15 && (puVar15 < local_78))) {
          iVar12 = puVar15[1];
          uVar1 = *puVar15;
          *(int *)(puVar16 + -4) = iVar12;
          *(undefined4 *)(puVar16 + -8) = uVar1;
          puVar15 = puVar15 + 2;
          local_30 = uVar1;
          *(undefined4 *)(puVar16 + -0xc) = 0x4e642b;
          cVar7 = FUN_004e1970();
          if ((cVar7 != '\0') ||
             ((*(int *)(param_1 + 0x48) == 0 &&
              (((iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0xfc), iVar8 == 0 &&
                (*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar12 * 4) + 0xe64) ==
                 *(int *)(param_1 + 0x4c))) ||
               ((iVar8 == 3 &&
                (*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + iVar12 * 4) + 0x132c) +
                         *(int *)(*(int *)(param_1 + 0x50) + 8) * 4) != 0)))))))) {
            local_15 = '\x01';
          }
        }
        if (local_15 == '\0') {
          if (*(char *)(*(int *)(param_1 + 0x30) + 0x124) == '\0') goto LAB_004e6c72;
          iVar12 = local_24[1][0x37];
          local_2c = 0;
          if (0 < (*(int *)(*(int *)(iVar12 + 0x5c) + 0xcc) -
                  *(int *)(*(int *)(iVar12 + 0x5c) + 200)) / 0x24) {
            local_24[0] = (int *)0x0;
            do {
              iVar12 = *(int *)(*(int *)(iVar12 + 0x5c) + 200);
              if ((*(int *)((int)local_24[0] + iVar12) != 4) &&
                 (iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                   *(int *)(iVar12 + 4 + (int)local_24[0]) * 4),
                 *(char *)(*(int *)(iVar12 + 0x5c) + 0x2a) != '\0')) {
                piVar14 = *(int **)(iVar12 + 0xec);
                piVar21 = local_6c;
                piVar9 = local_5c;
                while (local_5c = piVar9, local_6c = piVar21, piVar14 != (int *)0x0) {
                  iVar12 = *piVar14;
                  piVar14 = (int *)piVar14[2];
                  if (*(int *)(iVar12 + 0xec) < 1) {
                    iVar8 = 0;
                  }
                  else {
                    iVar8 = *(int *)(*(int *)(DAT_0125870c + 0x2238) + **(int **)(iVar12 + 0xe8) * 4
                                    );
                  }
                  piVar21 = local_6c;
                  piVar9 = local_5c;
                  if (iVar8 == local_24[1][0x37]) {
                    iVar8 = *(int *)(iVar12 + 0xc4);
                    *(undefined4 *)(puVar16 + -4) = 0x10;
                    piVar6 = local_58;
                    piVar5 = local_68;
                    if (*(int *)(param_1 + 0x58) == iVar8) {
                      *(undefined4 *)(puVar16 + -8) = 0x4e6571;
                      local_58 = (int *)FUN_00aae9af();
                      if (local_58 == (int *)0x0) {
                        local_58 = (int *)0x0;
                      }
                      else {
                        *local_58 = iVar12;
                        local_58[1] = (int)piVar6;
                        local_58[2] = 0;
                        *(undefined1 *)(local_58 + 3) = 0;
                      }
                      iVar12 = local_54 + 1;
                      bVar23 = local_54 != 0;
                      piVar21 = local_6c;
                      piVar9 = local_58;
                      local_54 = iVar12;
                      if (bVar23) {
                        piVar6[2] = (int)local_58;
                        piVar9 = local_5c;
                      }
                    }
                    else {
                      *(undefined4 *)(puVar16 + -8) = 0x4e65ae;
                      local_68 = (int *)FUN_00aae9af();
                      if (local_68 == (int *)0x0) {
                        local_68 = (int *)0x0;
                      }
                      else {
                        *local_68 = iVar12;
                        local_68[1] = (int)piVar5;
                        local_68[2] = 0;
                        *(undefined1 *)(local_68 + 3) = 0;
                      }
                      iVar12 = local_64 + 1;
                      bVar23 = local_64 != 0;
                      piVar21 = local_68;
                      local_64 = iVar12;
                      piVar9 = local_5c;
                      if (bVar23) {
                        piVar5[2] = (int)local_68;
                        piVar21 = local_6c;
                      }
                    }
                  }
                }
              }
              iVar12 = local_24[1][0x37];
              local_2c = local_2c + 1;
              local_24[0] = local_24[0] + 9;
            } while (local_2c <
                     (*(int *)(*(int *)(iVar12 + 0x5c) + 0xcc) -
                     *(int *)(*(int *)(iVar12 + 0x5c) + 200)) / 0x24);
          }
          iVar12 = 0;
          piVar14 = local_5c;
          if (local_5c == (int *)0x0) {
LAB_004e6653:
            iVar12 = 1;
          }
          else {
            do {
              piVar21 = (int *)*piVar14;
              pcVar2 = *(code **)(*piVar21 + 0x38);
              piVar14 = (int *)piVar14[2];
              puVar17 = (undefined4 *)(puVar16 + -4);
              puVar16 = puVar16 + -4;
              *puVar17 = 0x4e6641;
              cVar7 = (*pcVar2)();
              if (cVar7 != '\0') {
                iVar12 = iVar12 + piVar21[0x10];
              }
            } while (piVar14 != (int *)0x0);
            if (iVar12 < 2) goto LAB_004e6653;
          }
          local_2c = iVar12 * 1000;
          iVar12 = 0;
          if (local_6c != (int *)0x0) {
            iVar12 = 0;
            piVar14 = local_6c;
            do {
              piVar21 = (int *)*piVar14;
              pcVar2 = *(code **)(*piVar21 + 0x38);
              piVar14 = (int *)piVar14[2];
              puVar18 = (undefined4 *)(puVar16 + -4);
              puVar16 = puVar16 + -4;
              *puVar18 = 0x4e667e;
              cVar7 = (*pcVar2)();
              if (cVar7 != '\0') {
                iVar12 = iVar12 + piVar21[0x10];
              }
            } while (piVar14 != (int *)0x0);
          }
          iVar8 = iVar12 * 1000;
          if (local_2c == 0) {
            local_2c = -1;
          }
          else {
            if (iVar8 + 0x189373U < 0x39580e) {
              local_2c = (iVar12 * 1000000) / local_2c;
            }
            else {
              *(undefined4 *)(puVar16 + -4) = 0;
              iVar12 = local_2c;
              *(undefined4 *)(puVar16 + -8) = 1000;
              *(int *)(puVar16 + -0xc) = iVar8 >> 0x1f;
              *(int *)(puVar16 + -0x10) = iVar8;
              *(undefined4 *)(puVar16 + -0x14) = 0x4e66d5;
              uVar24 = __allmul();
              *(int *)(puVar16 + -4) = iVar12 >> 0x1f;
              *(int *)(puVar16 + -8) = iVar12;
              *(undefined8 *)(puVar16 + -0x10) = uVar24;
              *(undefined4 *)(puVar16 + -0x14) = 0x4e66de;
              local_2c = __alldiv();
            }
          }
          if (DAT_0125d258 <= local_2c) {
            local_1c = 0;
            piVar14 = local_5c;
            while (piVar14 != (int *)0x0) {
              piVar21 = (int *)*piVar14;
              pcVar2 = *(code **)(*piVar21 + 0x5c);
              piVar14 = (int *)piVar14[2];
              *(undefined1 **)(puVar16 + -4) = local_48;
              puVar19 = (undefined4 *)(puVar16 + -8);
              puVar16 = puVar16 + -8;
              local_24[0] = piVar21;
              *puVar19 = 0x4e6765;
              piVar9 = (int *)(*pcVar2)();
              local_1c = local_1c + *piVar9;
              if ((local_24 < DAT_013f3608) && (DAT_013f3604 <= local_24)) {
                iVar12 = (int)local_24 - (int)DAT_013f3604;
                if (DAT_013f3608 == DAT_013f360c) {
                  uVar10 = (int)DAT_013f3608 - (int)DAT_013f3604 >> 2;
                  if (0x3ffffffe < uVar10) {
LAB_004e6d23:
                    *(char **)(puVar16 + -4) = "vector<T> too long";
                    /* WARNING: Subroutine does not return */
                    *(Alignment **)(puVar16 + -8) = &UNK_004e6d2d;
                    FUN_00aad3ad();
                  }
                  uVar10 = uVar10 + 1;
                  uVar13 = (int)DAT_013f360c - (int)DAT_013f3604 >> 2;
                  if (uVar13 < uVar10) {
                    if (0x3fffffff - (uVar13 >> 1) < uVar13) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = uVar13 + (uVar13 >> 1);
                    }
                    if (uVar13 < uVar10) {
                      uVar13 = uVar10;
                    }
                    *(uint *)(puVar16 + -4) = uVar13;
                    *(undefined4 *)(puVar16 + -8) = 0x4e67d5;
                    FUN_004bf300();
                  }
                }
                if (DAT_013f3608 != (int **)0x0) {
                  *DAT_013f3608 = DAT_013f3604[iVar12 >> 2];
                }
              }
              else {
                if (DAT_013f3608 == DAT_013f360c) {
                  uVar10 = (int)DAT_013f3608 - (int)DAT_013f3604 >> 2;
                  if (0x3ffffffe < uVar10) goto LAB_004e6d23;
                  uVar10 = uVar10 + 1;
                  uVar13 = (int)DAT_013f360c - (int)DAT_013f3604 >> 2;
                  if (uVar13 < uVar10) {
                    if (0x3fffffff - (uVar13 >> 1) < uVar13) {
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = uVar13 + (uVar13 >> 1);
                    }
                    if (uVar13 < uVar10) {
                      uVar13 = uVar10;
                    }
                    *(uint *)(puVar16 + -4) = uVar13;
                    *(undefined4 *)(puVar16 + -8) = 0x4e6837;
                    FUN_004bf300();
                  }
                }
                if (DAT_013f3608 != (int **)0x0) {
                  *DAT_013f3608 = piVar21;
                }
              }
              DAT_013f3608 = DAT_013f3608 + 1;
            }
            piVar21 = (int *)0x0;
            local_24[0] = (int *)0x0;
            piVar14 = local_6c;
            while (piVar14 != (int *)0x0) {
              pcVar2 = *(code **)(*(int *)*piVar14 + 0x5c);
              piVar14 = (int *)piVar14[2];
              *(undefined1 **)(puVar16 + -4) = local_4c;
              puVar20 = (undefined4 *)(puVar16 + -8);
              puVar16 = puVar16 + -8;
              *puVar20 = 0x4e6876;
              piVar9 = (int *)(*pcVar2)();
              piVar21 = (int *)((int)piVar21 + *piVar9);
            }
            if (local_1c == 0) {
              local_1c = DAT_0125d228;
            }
            iVar12 = local_1c;
            iVar8 = local_38 - (int)local_3c;
            iVar11 = iVar8 * 1000;
            local_24[0] = piVar21;
            if (iVar11 < 1) {
              if (iVar11 < 0) {
                iVar12 = DAT_0125d270 + 4000;
                if (iVar12 == 0) {
                  iVar12 = -1;
                }
                else if (iVar11 + 0x189373U < 0x39580e) {
                  iVar12 = (iVar8 * 1000000) / iVar12;
                }
                else {
                  *(undefined4 *)(puVar16 + -4) = 0;
                  *(undefined4 *)(puVar16 + -8) = 1000;
                  *(int *)(puVar16 + -0xc) = iVar11 >> 0x1f;
                  *(int *)(puVar16 + -0x10) = iVar11;
                  *(undefined4 *)(puVar16 + -0x14) = 0x4e6950;
                  uVar24 = __allmul();
                  *(int *)(puVar16 + -4) = iVar12 >> 0x1f;
                  *(int *)(puVar16 + -8) = iVar12;
                  *(undefined8 *)(puVar16 + -0x10) = uVar24;
                  *(undefined4 *)(puVar16 + -0x14) = 0x4e6959;
                  iVar12 = __alldiv();
                  local_3c = (undefined **)(iVar12 >> 0x1f);
                }
                piVar21 = local_24[0];
                lVar3 = (longlong)local_1c;
                *(undefined4 *)(puVar16 + -4) = 0;
                *(undefined4 *)(puVar16 + -8) = 1000;
                *(longlong *)(puVar16 + -0x10) = lVar3 * (1000 - iVar12);
                *(undefined4 *)(puVar16 + -0x14) = 0x4e697a;
                iVar12 = __alldiv();
                local_1c = iVar12;
              }
            }
            else {
              if (iVar11 + 0x189373U < 0x39580e) {
                iVar8 = (iVar8 * 1000000) / 18000;
              }
              else {
                *(undefined4 *)(puVar16 + -4) = 0;
                *(undefined4 *)(puVar16 + -8) = 1000;
                *(int *)(puVar16 + -0xc) = iVar11 >> 0x1f;
                *(int *)(puVar16 + -0x10) = iVar11;
                *(undefined4 *)(puVar16 + -0x14) = 0x4e68d7;
                uVar24 = __allmul();
                *(undefined4 *)(puVar16 + -4) = 0;
                *(undefined4 *)(puVar16 + -8) = 18000;
                *(undefined8 *)(puVar16 + -0x10) = uVar24;
                *(undefined4 *)(puVar16 + -0x14) = 0x4e68e5;
                iVar8 = __alldiv();
                local_3c = (undefined **)(iVar8 >> 0x1f);
              }
              *(undefined4 *)(puVar16 + -4) = 0;
              *(undefined4 *)(puVar16 + -8) = 1000;
              *(longlong *)(puVar16 + -0x10) = (longlong)(iVar8 + 1000) * (longlong)(int)piVar21;
              *(undefined4 *)(puVar16 + -0x14) = 0x4e68fe;
              piVar21 = (int *)__alldiv();
              local_24[0] = piVar21;
            }
            piVar14 = local_24[0];
            if (iVar12 == 0) {
              iVar12 = -1;
            }
            else if ((int)piVar21 + 0x189373U < 0x39580e) {
              iVar12 = ((int)piVar21 * 1000) / iVar12;
            }
            else {
              iVar8 = (int)local_24[0] >> 0x1f;
              *(undefined4 *)(puVar16 + -4) = 0;
              iVar12 = local_1c;
              *(undefined4 *)(puVar16 + -8) = 1000;
              *(int *)(puVar16 + -0xc) = iVar8;
              *(int **)(puVar16 + -0x10) = piVar14;
              *(undefined4 *)(puVar16 + -0x14) = 0x4e69c0;
              uVar24 = __allmul();
              *(int *)(puVar16 + -4) = iVar12 >> 0x1f;
              *(int *)(puVar16 + -8) = iVar12;
              *(undefined8 *)(puVar16 + -0x10) = uVar24;
              *(undefined4 *)(puVar16 + -0x14) = 0x4e69c9;
              iVar12 = __alldiv();
              local_3c = (undefined **)(iVar12 >> 0x1f);
            }
            lVar3 = (longlong)local_2c;
            *(undefined4 *)(puVar16 + -4) = 0;
            *(undefined4 *)(puVar16 + -8) = 1000;
            *(longlong *)(puVar16 + -0x10) = lVar3 * iVar12;
            *(undefined4 *)(puVar16 + -0x14) = 0x4e69e2;
            iVar12 = __alldiv();
            if (5000 < iVar12) goto LAB_004e69ed;
            goto LAB_004e6c72;
          }
          if (local_6c != (int *)0x0) {
            *(int **)(puVar16 + -4) = local_6c;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar16 + -8) = &UNK_004e6700;
            FUN_00aae91b();
          }
          local_6c = (int *)0x0;
          local_68 = (int *)0x0;
          local_64 = 0;
          if (local_5c != (int *)0x0) {
            *(int **)(puVar16 + -4) = local_5c;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar16 + -8) = &UNK_004e6729;
            FUN_00aae91b();
          }
        }
        else {
LAB_004e69ed:
          iVar12 = local_24[1][0x37];
          local_2c = 0;
          local_38 = 0;
          local_3c = (undefined **)0xfffffc18;
          if (0 < (*(int *)(*(int *)(iVar12 + 0x5c) + 0xcc) -
                  *(int *)(*(int *)(iVar12 + 0x5c) + 200)) / 0x24) {
            iVar8 = 0;
            do {
              iVar12 = *(int *)(*(int *)(iVar12 + 0x5c) + 200);
              if ((*(int *)(iVar8 + iVar12) != 4) &&
                 (iVar12 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                                   *(int *)(iVar12 + 4 + iVar8) * 4),
                 *(char *)(*(int *)(iVar12 + 0x5c) + 0x2a) != '\0')) {
                *(undefined4 *)(puVar16 + -4) = 0x4e6a6a;
                cVar7 = FUN_004e1a50();
                if (cVar7 != '\0') {
                  piVar14 = *(int **)(iVar12 + 0xec);
                  ppuVar22 = (undefined **)0x0;
                  if (piVar14 != (int *)0x0) {
                    ppuVar22 = (undefined **)0x0;
                    do {
                      iVar11 = *piVar14;
                      piVar14 = (int *)piVar14[2];
                      if (((*(char *)(iVar11 + 0xc0) == 'R') && (*(char *)(iVar11 + 0xc1) == 'E'))
                         && (*(char *)(iVar11 + 0xc2) == 'B')) {
                        iVar11 = *(int *)(iVar11 + 0x40) * 1000;
                      }
                      else {
                        iVar11 = *(int *)(iVar11 + 0x40) * -1000;
                      }
                      ppuVar22 = (undefined **)((int)ppuVar22 + iVar11);
                    } while (piVar14 != (int *)0x0);
                  }
                  if (((*(char *)(iVar12 + 0x130) == 'R') && (*(char *)(iVar12 + 0x131) == 'E')) &&
                     (*(char *)(iVar12 + 0x132) == 'B')) {
                    ppuVar22 = ppuVar22 + 1000;
                  }
                  uVar1 = *(undefined4 *)(iVar12 + 0x130);
                  *(undefined4 *)(puVar16 + -4) = *(undefined4 *)(iVar12 + 0x134);
                  *(undefined4 *)(puVar16 + -8) = uVar1;
                  *(undefined4 *)(puVar16 + -0xc) = 0x4e6af3;
                  cVar7 = FUN_004e19d0();
                  if (cVar7 != '\0') {
                    ppuVar22 = ppuVar22 + -0x9c4;
                  }
                  if ((int)local_3c < (int)ppuVar22) {
                    local_3c = ppuVar22;
                    local_2c = iVar12;
                  }
                }
              }
              iVar12 = local_24[1][0x37];
              local_38 = local_38 + 1;
              iVar8 = iVar8 + 0x24;
            } while (local_38 <
                     (*(int *)(*(int *)(iVar12 + 0x5c) + 0xcc) -
                     *(int *)(*(int *)(iVar12 + 0x5c) + 200)) / 0x24);
            piVar14 = local_5c;
            iVar12 = local_2c;
            if (local_2c != 0) {
joined_r0x004e6b54:
              local_2c = iVar12;
              if (piVar14 != (int *)0x0) {
                iVar8 = *piVar14;
                piVar14 = (int *)piVar14[2];
                iVar11 = *local_44;
                piVar21 = local_44;
                while (iVar11 != 0) {
                  iVar11 = *piVar21;
                  piVar21 = piVar21 + 1;
                  if (iVar11 == iVar8) {
                    if (*(int *)(iVar8 + 0xdc) == local_24[1][0x37]) {
                      local_90 = 0;
                      local_8c = 0;
                      local_88 = 0;
                      local_84 = '\0';
                      local_80 = 0;
                      local_8._0_1_ = 4;
                      *(int **)(puVar16 + -4) = &local_90;
                      *(int *)(puVar16 + -8) = iVar12;
                      *(int *)(puVar16 + -0xc) = iVar8;
                      *(undefined ****)(puVar16 + -0x10) = &local_3c;
                      local_3c = CPathFind::vftable;
                      *(undefined4 *)(puVar16 + -0x14) = 0x4e6bd0;
                      FUN_005b8500();
                      while (1 < local_88) {
                        if (local_8c != 0) {
                          if (local_84 == '\0') {
                            iVar12 = *(int *)(local_8c + 4);
                            if (iVar12 == 0) {
                              local_90 = 0;
                            }
                            else {
                              *(undefined4 *)(iVar12 + 8) = 0;
                            }
                            *(int *)(puVar16 + -4) = local_8c;
                            local_8c = iVar12;
                    /* WARNING: Subroutine does not return */
                            *(undefined **)(puVar16 + -8) = &UNK_004e6c10;
                            FUN_00aae91b();
                          }
                          *(undefined1 *)(local_8c + 0xc) = 1;
                        }
                      }
                      *(undefined4 *)(puVar16 + -4) = 1;
                      *(int **)(puVar16 + -8) = &local_90;
                      *(undefined4 *)(puVar16 + -0xc) = 0x4e6c38;
                      FUN_005d1bb0();
                      local_8._0_1_ = 3;
                      iVar12 = local_2c;
                      if (local_90 != 0) {
                        *(int *)(puVar16 + -4) = local_90;
                    /* WARNING: Subroutine does not return */
                        *(undefined **)(puVar16 + -8) = &UNK_004e6c4f;
                        FUN_00aae91b();
                      }
                    }
                    else if (*(char *)(iVar8 + 0x104) == '\0') {
                      *(undefined4 *)(puVar16 + -4) = 0x4e6c6a;
                      FUN_005d1890();
                      iVar12 = local_2c;
                    }
                    break;
                  }
                  iVar11 = *piVar21;
                }
                goto joined_r0x004e6b54;
              }
            }
          }
LAB_004e6c72:
          if (local_6c != (int *)0x0) {
            *(int **)(puVar16 + -4) = local_6c;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar16 + -8) = &UNK_004e6c89;
            FUN_00aae91b();
          }
          local_6c = (int *)0x0;
          local_68 = (int *)0x0;
          local_64 = 0;
          if (local_5c != (int *)0x0) {
            *(int **)(puVar16 + -4) = local_5c;
                    /* WARNING: Subroutine does not return */
            *(undefined **)(puVar16 + -8) = &UNK_004e6cab;
            FUN_00aae91b();
          }
        }
        local_64 = 0;
        local_68 = (int *)0x0;
        local_6c = (int *)0x0;
        local_8 = 0xffffffff;
        local_54 = 0;
        local_58 = (int *)0x0;
        local_5c = (int *)0x0;
        if (local_7c != (undefined4 *)0x0) {
          *(undefined4 **)(puVar16 + -4) = local_7c;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar16 + -8) = &UNK_004e6cd1;
          FUN_00aae91b();
        }
        local_74 = 0;
        local_78 = (undefined4 *)0x0;
        local_7c = (undefined4 *)0x0;
      }
LAB_004e6cdd:
      ppiVar4 = DAT_013f3604;
      iVar8 = *local_34;
    }
    if (ppiVar4 != DAT_013f3608) {
      *(undefined4 *)(puVar16 + -4) = 0;
      *(int ***)(puVar16 + -8) = DAT_013f3608;
      *(int ***)(puVar16 + -0xc) = ppiVar4;
      *(undefined4 *)(puVar16 + -0x10) = 0x4e6d01;
      FID_conflict__memcpy
                (*(void **)(puVar16 + -0xc),*(void **)(puVar16 + -8),*(size_t *)(puVar16 + -4));
      DAT_013f3608 = ppiVar4;
    }
  }
  ExceptionList = local_10;
  return;
}

