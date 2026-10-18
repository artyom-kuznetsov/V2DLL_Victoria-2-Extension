// FUN_007dcf30 @ 007dcf30 body=[[007dcf30, 007dd189] [007dd190, 007dd79b] [007dd79f, 007dd7d9]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_007dcf30(char *param_1)

{
  undefined2 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *apuStack_2d8 [2];
  int iStack_2d0;
  undefined4 *puStack_2cc;
  int iStack_2c8;
  undefined4 *puStack_2c4;
  int local_2b0 [64];
  int aiStack_1b0 [4];
  undefined1 auStack_1a0 [252];
  undefined **local_a4 [3];
  undefined **local_98 [3];
  undefined **local_8c [3];
  undefined **local_80 [3];
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 *local_68;
  int local_64;
  int local_60;
  int *local_5c;
  int local_58;
  int *local_54;
  undefined4 local_50;
  int local_4c;
  undefined1 local_48 [4];
  undefined1 *local_44;
  int local_40;
  undefined1 *local_3c;
  int *local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar7 = DAT_0125870c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b88a58;
  local_10 = ExceptionList;
  local_5c = DAT_0125870c;
  ExceptionList = &local_10;
  if (DAT_01267a34 == DAT_01267a38) {
    puStack_2c4 = (undefined4 *)0x7dcf84;
    ExceptionList = &local_10;
    FUN_007df170();
    uVar5 = *(int *)(DAT_012588e8 + 0xae0) - *(int *)(DAT_012588e8 + 0xadc) >> 2;
    local_48[0] = 0;
    if ((uint)((int)DAT_01267974 - DAT_01267970) < uVar5) {
      puStack_2c4 = (undefined4 *)local_48;
      iStack_2c8 = (uVar5 - (int)DAT_01267974) + DAT_01267970;
      puStack_2cc = DAT_01267974;
      iStack_2d0 = (int)&DAT_01267970;
      apuStack_2d8[1] = (undefined4 *)0x7dcfc5;
      FUN_006a17e0();
    }
    else if (uVar5 < (uint)((int)DAT_01267974 - DAT_01267970)) {
      iStack_2c8 = uVar5 + DAT_01267970;
      puStack_2c4 = DAT_01267974;
      puStack_2cc = &DAT_01267970;
      iStack_2d0 = 0x7dcfda;
      FUN_009d69b0();
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 4) + DAT_01267970) = 0;
  puStack_2c4 = (undefined4 *)0x7dcfef;
  FUN_007dbcf0();
  iVar6 = *(int *)(param_1 + 4);
  if (((((iVar6 == 0) ||
        (iVar18 = *(int *)(DAT_012587e4 + 4), iVar12 = *(int *)(iVar18 + iVar6 * 4),
        (int)(*(int *)(iVar12 + 0x9dc) - *(int *)(iVar12 + 0x9d8) & 0xfffffffcU) < 1)) ||
       ((*param_1 == 'R' && ((param_1[1] == 'E' && (param_1[2] == 'B')))))) ||
      (iVar12 = *(int *)(iVar18 + iVar6 * 4), *(char *)(iVar12 + 0xcf5) != '\0')) ||
     (*(char *)(iVar12 + 0xcf4) != '\0')) {
    ExceptionList = local_10;
    return;
  }
  local_70 = *(undefined4 *)param_1;
  iVar18 = *(int *)(iVar18 + iVar6 * 4);
  local_40 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar18 + 0xbe4) * 4);
  if (*(int *)(local_40 + 300) != iVar6) {
    local_40 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + **(int **)(iVar18 + 0x9d8) * 4);
  }
  puStack_2c4 = (undefined4 *)0x7dd09a;
  local_58 = (**(code **)(*piVar7 + 0x24))();
  puStack_2c4 = (undefined4 *)0x7dd0a4;
  iVar18 = -local_58;
  *(int *)((int)&puStack_2c4 + iVar18) = local_58;
  *(undefined4 *)((int)&iStack_2c8 + iVar18) = 0xffffffff;
  *(int *)((int)&puStack_2cc + iVar18) = (int)local_2b0 + iVar18 + -0x10;
  local_3c = (undefined1 *)((int)local_2b0 + iVar18 + -0x10);
  *(undefined4 *)((int)apuStack_2d8 + iVar18 + 8) = 0x7dd0b2;
  _memset(*(void **)((int)&puStack_2cc + iVar18),*(int *)((int)&iStack_2c8 + iVar18),
          *(size_t *)((int)&puStack_2c4 + iVar18));
  *(undefined4 *)((int)&puStack_2c4 + iVar18) = 0x100;
  *(undefined4 *)((int)&iStack_2c8 + iVar18) = 0;
  *(int **)((int)&puStack_2cc + iVar18) = local_2b0;
  *(undefined4 *)((int)apuStack_2d8 + iVar18 + 8) = 0x7dd0c8;
  _memset(*(void **)((int)&puStack_2cc + iVar18),*(int *)((int)&iStack_2c8 + iVar18),
          *(size_t *)((int)&puStack_2c4 + iVar18));
  iVar6 = DAT_0125870c[0xa9e];
  local_54 = DAT_0125870c + 0xa9e;
  iVar13 = DAT_0125870c[0xa9f] - iVar6 >> 2;
  local_20 = iVar13;
  *(undefined4 *)((int)&puStack_2c4 + iVar18) = 0x7dd0f6;
  iVar12 = iVar13 * -0x100;
  puVar9 = (undefined1 *)((int)local_2b0 + iVar12 + iVar18 + -0x10);
  *(int *)((int)&puStack_2c4 + iVar12 + iVar18) = (local_54[1] - iVar6 >> 2) << 8;
  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0;
  *(int *)((int)&puStack_2cc + iVar12 + iVar18) = (int)local_2b0 + iVar12 + iVar18 + -0x10;
  local_68 = (undefined1 *)((int)local_2b0 + iVar12 + iVar18 + -0x10);
  *(undefined4 *)((int)apuStack_2d8 + iVar12 + iVar18 + 8) = 0x7dd113;
  _memset(*(void **)((int)&puStack_2cc + iVar12 + iVar18),
          *(int *)((int)&iStack_2c8 + iVar12 + iVar18),
          *(size_t *)((int)&puStack_2c4 + iVar12 + iVar18));
  iVar6 = 0;
  do {
    aiStack_1b0[iVar6] = (int)puVar9;
    iVar6 = iVar6 + 1;
    puVar9 = puVar9 + iVar13 * 4;
  } while (iVar6 < 0x40);
  *(undefined4 *)((int)&puStack_2c4 + iVar12 + iVar18) = 8;
  local_38 = (int *)0x0;
  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd13a;
  piVar7 = (int *)FUN_00aae9af();
  if (piVar7 == (int *)0x0) {
    *(undefined4 **)((int)&puStack_2c4 + iVar12 + iVar18) = &local_6c;
    local_6c = 0;
    *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd7c5;
    std::exception::exception
              ((exception *)local_80,*(char ***)((int)&puStack_2c4 + iVar12 + iVar18));
    *(undefined **)((int)&puStack_2c4 + iVar12 + iVar18) = &DAT_00e6fb20;
    *(undefined ****)((int)&iStack_2c8 + iVar12 + iVar18) = local_80;
    local_80[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    *(Alignment **)((int)&puStack_2cc + iVar12 + iVar18) = &UNK_007dd7da;
    __CxxThrowException_8();
  }
  *piVar7 = 0;
  piVar7[1] = 0;
  *piVar7 = (int)&local_38;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 0;
  uVar2 = *(ushort *)(local_40 + 0x58);
  local_38 = piVar7;
  *(undefined1 ***)((int)&puStack_2c4 + iVar12 + iVar18) = &local_44;
  local_44 = (undefined1 *)(uint)uVar2;
  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd180;
  FUN_007df210();
  local_1c = 0;
  local_18 = 0;
  iVar6 = 0;
  iVar13 = local_58;
  iVar8 = local_28;
  iVar11 = local_18;
  do {
    while (iVar10 = local_20, local_58 = iVar13, local_28 = iVar8, local_20 = iVar10,
          local_18 = iVar11, iVar8 != 0) {
      *(undefined4 *)((int)&puStack_2c4 + iVar12 + iVar18) = 0x7dd1b1;
      piVar7 = (int *)FUN_0099e240();
      iVar11 = local_18;
      puVar9 = local_3c;
      if ((int *)*piVar7 == (int *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)*piVar7;
      }
      uVar5 = (uint)piVar7[2] >> 3;
      if (*(uint *)(iVar6 + 8) <= uVar5) {
        uVar5 = uVar5 - *(uint *)(iVar6 + 8);
      }
      uVar5 = (uint)*(ushort *)(*(int *)(*(int *)(iVar6 + 4) + uVar5 * 4) + (piVar7[2] & 7U) * 2);
      if (iVar8 != 0) {
        local_2c = local_2c + 1;
        if (local_30 * 8 <= local_2c) {
          local_2c = 0;
        }
        local_28 = iVar8 + -1;
        if (iVar8 + -1 == 0) {
          local_2c = 0;
        }
      }
      iVar6 = local_1c;
      iVar13 = local_58;
      iVar8 = local_28;
      if ((char)local_3c[uVar5] < '\0') {
        local_2b0[local_18] = local_2b0[local_18] + 1;
        puVar9[uVar5] = (char)iVar11;
        local_74 = *(int *)(local_5c[0xaa9] + uVar5 * 4);
        iVar6 = 0;
        if (0 < iVar10) {
          piVar7 = (int *)*local_54;
          do {
            if (*(int *)(*(int *)(local_74 + 0x18) + 0x16c) == *piVar7) {
              piVar7 = (int *)(aiStack_1b0[iVar11] + iVar6 * 4);
              *piVar7 = *piVar7 + 1;
              break;
            }
            iVar6 = iVar6 + 1;
            piVar7 = piVar7 + 1;
          } while (iVar6 < iVar10);
        }
        local_60 = (*(int *)(local_74 + 0xcc) - *(int *)(local_74 + 200)) / 0x24;
        local_44 = (undefined1 *)0x0;
        iVar6 = local_1c;
        iVar13 = local_58;
        iVar8 = local_28;
        iVar11 = local_18;
        if (0 < local_60) {
          local_64 = 0;
          do {
            piVar7 = (int *)(*(int *)(local_74 + 200) + local_64);
            iVar6 = piVar7[1];
            iVar13 = *(int *)(local_5c[0x88e] + iVar6 * 4);
            if ((((char)local_3c[iVar6] < '\0') &&
                (*(char *)(*(int *)(local_5c[0xaa9] + iVar6 * 4) + 0x2a) != '\0')) && (*piVar7 != 1)
               ) {
              if (*(int *)(iVar13 + 300) == *(int *)(param_1 + 4)) {
                if (((local_28 + local_2c & 7) == 0) && (local_30 <= local_28 + 8U >> 3)) {
                  *(int ***)((int)&puStack_2c4 + iVar12 + iVar18) = &local_38;
                  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd308;
                  FUN_007df330();
                }
                uVar17 = local_28 + local_2c;
                uVar5 = uVar17 >> 3;
                if (local_30 <= uVar5) {
                  uVar5 = uVar5 - local_30;
                }
                if (*(int *)(local_34 + uVar5 * 4) == 0) {
                  *(undefined4 *)((int)&puStack_2c4 + iVar12 + iVar18) = 0x10;
                  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd330;
                  local_4c = FUN_00aae9af();
                  if (local_4c == 0) {
                    *(int **)((int)&puStack_2c4 + iVar12 + iVar18) = &local_4c;
                    *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd34d;
                    std::exception::exception
                              ((exception *)local_8c,
                               *(char ***)((int)&puStack_2c4 + iVar12 + iVar18));
                    *(undefined **)((int)&puStack_2c4 + iVar12 + iVar18) = &DAT_00e6fb20;
                    *(undefined ****)((int)&iStack_2c8 + iVar12 + iVar18) = local_8c;
                    local_8c[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
                    *(undefined4 *)((int)&puStack_2cc + iVar12 + iVar18) = 0x7dd368;
                    __CxxThrowException_8();
                  }
LAB_007dd3e5:
                  *(int *)(local_34 + uVar5 * 4) = local_4c;
                }
              }
              else {
                iVar13 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar13 + 300) * 4);
                local_50 = *(undefined4 *)(iVar13 + 0xcf8);
                if (*(int *)(iVar13 + 0xcfc) != *(int *)(param_1 + 4)) goto LAB_007dd401;
                if (((local_28 + local_2c & 7) == 0) && (local_30 <= local_28 + 8U >> 3)) {
                  *(int ***)((int)&puStack_2c4 + iVar12 + iVar18) = &local_38;
                  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd3b6;
                  FUN_007df330();
                }
                uVar17 = local_28 + local_2c;
                uVar5 = uVar17 >> 3;
                if (local_30 <= uVar5) {
                  uVar5 = uVar5 - local_30;
                }
                if (*(int *)(local_34 + uVar5 * 4) == 0) {
                  *(undefined4 *)((int)&puStack_2c4 + iVar12 + iVar18) = 0x10;
                  *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd3da;
                  local_4c = FUN_00aae9af();
                  if (local_4c == 0) {
                    *(int **)((int)&puStack_2c4 + iVar12 + iVar18) = &local_4c;
                    local_4c = 0;
                    *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd5b4;
                    std::exception::exception
                              ((exception *)local_98,
                               *(char ***)((int)&puStack_2c4 + iVar12 + iVar18));
                    *(undefined **)((int)&puStack_2c4 + iVar12 + iVar18) = &DAT_00e6fb20;
                    *(undefined ****)((int)&iStack_2c8 + iVar12 + iVar18) = local_98;
                    local_98[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
                    *(undefined4 *)((int)&puStack_2cc + iVar12 + iVar18) = 0x7dd5cf;
                    __CxxThrowException_8();
                  }
                  goto LAB_007dd3e5;
                }
              }
              puVar1 = (undefined2 *)(*(int *)(local_34 + uVar5 * 4) + (uVar17 & 7) * 2);
              if (puVar1 != (undefined2 *)0x0) {
                *puVar1 = (short)iVar6;
              }
              local_28 = local_28 + 1;
            }
LAB_007dd401:
            local_64 = local_64 + 0x24;
            local_44 = local_44 + 1;
            iVar6 = local_1c;
            iVar13 = local_58;
            iVar8 = local_28;
            iVar11 = local_18;
          } while ((int)local_44 < local_60);
        }
      }
    }
    if ((iVar11 != 0) && (local_2b0[iVar11] == 1)) {
      iVar8 = 0;
      if (0 < iVar13) {
        do {
          if ((char)local_3c[iVar8] == iVar11) {
            local_3c[iVar8] = 0x40;
            break;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < iVar13);
      }
      if (0 < iVar10) {
        puVar19 = (undefined4 *)aiStack_1b0[iVar11];
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar19 = 0;
          puVar19 = puVar19 + 1;
        }
      }
      local_2b0[iVar11] = 0;
      local_18 = iVar11 + -1;
    }
    if (iVar6 < iVar13) {
      piVar7 = (int *)(local_5c[0x88e] + iVar6 * 4);
      do {
        if (((char)local_3c[iVar6] < '\0') &&
           ((*(int *)(*piVar7 + 300) == *(int *)(param_1 + 4) ||
            (iVar8 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*piVar7 + 300) * 4),
            local_50 = *(undefined4 *)(iVar8 + 0xcf8),
            *(int *)(iVar8 + 0xcfc) == *(int *)(param_1 + 4))))) {
          local_1c = iVar6;
          if (((local_28 + local_2c & 7) == 0) && (local_30 <= local_28 + 8U >> 3)) {
            *(int ***)((int)&puStack_2c4 + iVar12 + iVar18) = &local_38;
            *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd50f;
            FUN_007df330();
          }
          uVar17 = local_28 + local_2c;
          uVar5 = uVar17 >> 3;
          if (local_30 <= uVar5) {
            uVar5 = uVar5 - local_30;
          }
          if (*(int *)(local_34 + uVar5 * 4) == 0) {
            *(undefined4 *)((int)&puStack_2c4 + iVar12 + iVar18) = 0x10;
            *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd533;
            iVar13 = FUN_00aae9af();
            if (iVar13 == 0) {
              *(int **)((int)&puStack_2c4 + iVar12 + iVar18) = &local_4c;
              local_4c = 0;
              *(undefined4 *)((int)&iStack_2c8 + iVar12 + iVar18) = 0x7dd5e5;
              std::exception::exception
                        ((exception *)local_a4,*(char ***)((int)&puStack_2c4 + iVar12 + iVar18));
              *(undefined **)((int)&puStack_2c4 + iVar12 + iVar18) = &DAT_00e6fb20;
              *(undefined ****)((int)&iStack_2c8 + iVar12 + iVar18) = local_a4;
              local_a4[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
              *(undefined4 *)((int)&puStack_2cc + iVar12 + iVar18) = 0x7dd600;
              __CxxThrowException_8();
            }
            *(int *)(local_34 + uVar5 * 4) = iVar13;
          }
          puVar1 = (undefined2 *)(*(int *)(local_34 + uVar5 * 4) + (uVar17 & 7) * 2);
          if (puVar1 != (undefined2 *)0x0) {
            *puVar1 = (short)iVar6;
          }
          local_28 = local_28 + 1;
          goto LAB_007dd55d;
        }
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 1;
      } while (iVar6 < iVar13);
      local_1c = iVar6;
    }
LAB_007dd55d:
    iVar10 = local_20;
    puVar9 = local_3c;
  } while ((local_28 != 0) &&
          (local_18 = local_18 + 1, iVar13 = local_58, iVar8 = local_28, iVar11 = local_18,
          local_18 < 0x40));
  iVar6 = *(int *)(local_40 + 0x16c);
  iVar13 = 0;
  local_60 = iVar6;
  if (0 < local_20) {
    piVar7 = (int *)*local_54;
    do {
      if (iVar6 == *piVar7) {
        if (iVar13 < local_20) goto LAB_007dd606;
        break;
      }
      iVar13 = iVar13 + 1;
      piVar7 = piVar7 + 1;
    } while (iVar13 < local_20);
  }
  iVar13 = 0;
LAB_007dd606:
  iVar8 = 0;
  local_18 = 0;
  iVar11 = 1;
  local_1c = 4;
  local_40 = 8;
  local_4c = 0xc - (int)(aiStack_1b0 + 2);
  do {
    piVar7 = (int *)((int)aiStack_1b0 + local_1c + 4);
    if (*(int *)(*(int *)((int)aiStack_1b0 + iVar8) + iVar13 * 4) <
        *(int *)(*(int *)((int)aiStack_1b0 + local_1c) + iVar13 * 4)) {
      local_18 = iVar11;
      iVar8 = local_1c;
    }
    if (*(int *)(*(int *)((int)aiStack_1b0 + iVar8) + iVar13 * 4) < *(int *)(*piVar7 + iVar13 * 4))
    {
      local_18 = iVar11 + 1;
      iVar8 = local_40;
    }
    if (*(int *)(*(int *)((int)aiStack_1b0 + iVar8) + iVar13 * 4) <
        *(int *)(*(int *)((int)aiStack_1b0 + local_1c + 8) + iVar13 * 4)) {
      local_18 = iVar11 + 2;
      iVar8 = (0xc - (int)(aiStack_1b0 + 2)) + (int)piVar7;
    }
    iVar4 = local_18;
    local_1c = local_1c + 0xc;
    local_40 = local_40 + 0xc;
    iVar11 = iVar11 + 3;
  } while (local_40 < 0x104);
  if (0 < local_20) {
    puVar19 = (undefined4 *)aiStack_1b0[local_18];
    for (iVar8 = local_20; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar19 = 0;
      puVar19 = puVar19 + 1;
    }
  }
  iVar8 = 0;
  do {
    piVar7 = aiStack_1b0 + iVar8;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(*piVar7 + iVar13 * 4) = 0;
  } while (iVar8 < 0x40);
  *(undefined4 *)((int)&puStack_2c4 + iVar12 + iVar18) = 1;
  *(int *)((int)&iStack_2c8 + iVar12 + iVar18) = iVar6;
  *(int *)((int)&puStack_2cc + iVar12 + iVar18) = iVar4;
  *(undefined1 **)((int)apuStack_2d8 + iVar12 + iVar18 + 8) = puVar9;
  *(char **)((int)apuStack_2d8 + iVar12 + iVar18 + 4) = param_1;
  puVar14 = (undefined1 *)((int)apuStack_2d8 + iVar12 + iVar18);
  *(undefined4 *)((int)apuStack_2d8 + iVar12 + iVar18) = 0x7dd6eb;
  FUN_007dd7e0();
  *(undefined4 *)(puVar14 + 0x10) = 0x7dd6fc;
  iVar6 = iVar10 * -4;
  puVar16 = puVar14 + iVar6 + 0x14;
  *(int *)(puVar14 + iVar6 + 0x10) = iVar10 * 4;
  *(undefined4 *)(puVar14 + iVar6 + 0xc) = 0;
  *(int *)((int)puVar14 + iVar6 + 8) = (int)puVar14 + iVar6 + 0x14;
  local_44 = puVar14 + iVar6 + 0x14;
  *(undefined4 *)(puVar14 + iVar6 + 4) = 0x7dd70a;
  _memset(*(void **)(puVar14 + iVar6 + 8),*(int *)(puVar14 + iVar6 + 0xc),
          *(size_t *)(puVar14 + iVar6 + 0x10));
  local_4c = iVar10 << 6;
  while( true ) {
    puVar9 = local_3c;
    iVar18 = 0;
    iVar6 = -1;
    iVar12 = 0;
    if (local_4c < 1) break;
    do {
      if (iVar18 < *(int *)(local_68 + iVar12 * 4)) {
        iVar6 = iVar12;
        iVar18 = *(int *)(local_68 + iVar12 * 4);
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_4c);
    if (iVar6 == -1) break;
    iVar12 = iVar6 / local_20;
    iVar6 = iVar6 % local_20;
    if ((*(int *)(local_44 + iVar6 * 4) != 0) && (iVar18 < 8)) break;
    uVar3 = *(undefined4 *)(*local_54 + iVar6 * 4);
    *(undefined4 *)(puVar16 + -4) = 0;
    *(undefined4 *)(puVar16 + -8) = uVar3;
    *(int *)(puVar16 + -0xc) = iVar12;
    *(undefined1 **)(puVar16 + -0x10) = puVar9;
    *(char **)(puVar16 + -0x14) = param_1;
    puVar15 = puVar16 + -0x18;
    *(undefined4 *)(puVar16 + -0x18) = 0x7dd765;
    FUN_007dd7e0();
    puVar16 = puVar15 + 0x14;
    if (0 < local_20) {
      puVar19 = (undefined4 *)aiStack_1b0[iVar12];
      for (iVar18 = local_20; iVar18 != 0; iVar18 = iVar18 + -1) {
        *puVar19 = 0;
        puVar19 = puVar19 + 1;
      }
    }
    *(int *)(local_44 + iVar6 * 4) = *(int *)(local_44 + iVar6 * 4) + 1;
  }
  *(undefined4 *)(puVar16 + -4) = 0x7dd793;
  FUN_0098bf40();
  *(int **)(puVar16 + -4) = local_38;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar16 + -8) = &UNK_007dd79c;
  FUN_00aae91b();
}

