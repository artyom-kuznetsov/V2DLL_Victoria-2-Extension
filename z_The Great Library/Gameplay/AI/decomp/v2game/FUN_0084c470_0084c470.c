// FUN_0084c470 @ 0084c470 body=[[0084c470, 0084c550] [0084c554, 0084cf97] [0084cfa0, 0084d153] [0084d159, 0084d193] [0084d197, 0084d1cd]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0084ce74) */
/* WARNING: Removing unreachable block (ram,0x0084d005) */

uint FUN_0084c470(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  undefined8 uVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined ***apppuStackY_10c [3];
  undefined **local_f0 [3];
  undefined4 local_e4;
  int local_e0;
  uint local_d8;
  undefined4 local_c8;
  uint local_c4;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_a4;
  int *local_a0;
  undefined4 *local_9c;
  int local_98;
  char *local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int *local_7c;
  undefined4 local_78;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined8 local_64;
  undefined1 local_58 [4];
  undefined4 *local_54;
  int local_50;
  undefined4 local_48;
  int *local_44;
  int local_40;
  int local_3c;
  char local_36;
  undefined1 local_35;
  uint local_34;
  undefined1 *local_30;
  undefined8 local_2c;
  char local_22;
  char local_21;
  int *local_20;
  uint local_1c;
  int *local_18;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  undefined4 *puVar19;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fc4f;
  local_10 = ExceptionList;
  local_84 = *(undefined4 *)(param_1 + 0x34);
  uVar16 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  if (*(char *)(uVar16 + 0x67c) != '\0') {
    return uVar16 & 0xffffff00;
  }
  apppuStackY_10c[2] = (undefined ***)0xe276f0;
  local_11 = '\x01';
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  apppuStackY_10c[1] = (undefined ***)0x84c4e5;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  if (DAT_0125eadc == 0) {
    apppuStackY_10c[2] = (undefined ***)0x84c4fa;
    local_94 = (char *)FUN_00aae9af();
    local_8._0_1_ = 1;
    if (local_94 != (char *)0x0) {
      apppuStackY_10c[2] = (undefined ***)0x84c511;
      FUN_00576fe0();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    apppuStackY_10c[2] = (undefined ***)0x84c51f;
    FUN_0057ab10();
  }
  apppuStackY_10c[2] = (undefined ***)0x84c533;
  piVar9 = (int *)FUN_0057b0a0();
  local_8 = 0xffffffff;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    apppuStackY_10c[2] = (undefined ***)&UNK_0084c551;
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8 = local_d8 & 0xffffff00;
  if ((piVar9 != (int *)0x0) && (cVar8 = (**(code **)(*piVar9 + 0x20))(), cVar8 != '\0')) {
    local_11 = '\0';
    piVar13 = *(int **)(DAT_012588e8 + 0xbe0);
    do {
      if ((piVar13 < *(int **)(DAT_012588e8 + 0xbe0)) ||
         (*(int **)(DAT_012588e8 + 0xbe4) <= piVar13)) goto LAB_0084c5c7;
      iVar15 = *piVar13;
      piVar13 = piVar13 + 1;
    } while ((iVar15 == 0) ||
            (*(int *)(*(int *)(*(int *)(iVar15 + 0xbcc) + 0x2b8) + piVar9[0xb9] * 4) < 1));
    local_11 = '\x01';
  }
LAB_0084c5c7:
  iVar15 = *(int *)(DAT_012586dc + 0x40);
  local_90 = *(int *)(iVar15 + 0x110);
  local_98 = *(int *)(iVar15 + 0x114);
  local_88 = *(int *)(iVar15 + 0x11c);
  local_8c = *(int *)(iVar15 + 0x118);
  local_3c = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  local_84 = *(undefined4 *)(param_1 + 0x34);
  piVar9 = *(int **)(local_3c + 0x9d8);
  uVar16 = *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x12e8);
  local_b0 = uVar16 >> 0x11;
  local_b4 = uVar16 << 0xf;
  local_bc = *(uint *)(*(int *)(DAT_012586dc + 0x50) + 0x1d0);
  local_b8 = *(int *)(*(int *)(DAT_012586dc + 0x50) + 0x1d4);
  local_50 = 0;
  apppuStackY_10c[2] = (undefined ***)0x84c66b;
  local_54 = (undefined4 *)FUN_00aae9af();
  if (local_54 == (undefined4 *)0x0) {
    local_94 = (char *)0x0;
    apppuStackY_10c[2] = (undefined ***)0x84d1b3;
    std::exception::exception((exception *)local_f0,&local_94);
    apppuStackY_10c[2] = local_f0;
    local_f0[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
    apppuStackY_10c[1] = (undefined ***)&UNK_0084d1ce;
    __CxxThrowException_8();
  }
  *local_54 = local_54;
  local_54[1] = local_54;
  local_54[2] = local_54;
  *(undefined1 *)(local_54 + 5) = 1;
  *(undefined1 *)((int)local_54 + 0x15) = 1;
  local_8 = 2;
  while ((iVar15 = local_50, puVar12 = local_54, *(int **)(local_3c + 0x9d8) <= piVar9 &&
         (piVar9 < *(int **)(local_3c + 0x9dc)))) {
    local_40 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
    piVar9 = piVar9 + 1;
    local_36 = *(int *)(local_40 + 400) == 2;
    local_30 = (undefined1 *)(*(int *)(local_40 + 0x14c) - *(int *)(local_40 + 0x148) >> 3);
    local_a0 = piVar9;
    if ((local_30 == (undefined1 *)0x0) && ((bool)local_36)) {
      if (((local_11 != '\0') && (iVar15 = *(int *)(local_40 + 0xe8), 4 < *(int *)(iVar15 + 0xc)))
         && (iVar10 = FUN_0050e450(), iVar15 != iVar10)) {
        local_6c = 0xfffffc18;
        local_68 = iVar15;
        FUN_004ca000();
        apppuStackY_10c[1] = (undefined ***)0x84c738;
        apppuStackY_10c[2] = (undefined ***)local_58;
        FUN_006e0260();
      }
    }
    else {
      local_20 = (int *)0x0;
      if (0 < (int)local_30) {
        do {
          local_64._0_4_ = *(undefined4 *)(*(int *)(local_40 + 0x148) + (int)local_20 * 8);
          uVar16 = *(uint *)(*(int *)(local_40 + 0x148) + 4 + (int)local_20 * 8);
          iVar15 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + uVar16 * 4) + 0xe64) +
                           0x50);
          local_12 = *(uint *)(iVar15 + 0x20) == uVar16;
          local_48 = *(undefined4 *)(iVar15 + 0x1c);
          local_64._4_4_ = uVar16;
          cVar8 = FUN_0055dda0();
          local_35 = cVar8 == '\0';
          local_22 = '\0';
          local_21 = '\0';
          if ((local_12 == '\0') ||
             (iVar15 = *(int *)(DAT_012587e4 + 4),
             *(int *)(*(int *)(*(int *)(*(int *)(iVar15 + uVar16 * 4) + 0xe64) + 0x50) + 0x20) ==
             *(int *)(*(int *)(*(int *)(local_3c + 0xe64) + 0x50) + 0x20))) {
            iVar15 = *(int *)(DAT_012587e4 + 4);
            local_34 = *(uint *)(*(int *)(iVar15 + uVar16 * 4) + 0xa00);
            piVar9 = *(int **)(*(int *)(iVar15 + uVar16 * 4) + 0x9f8);
            local_18 = (int *)0x0;
            if (piVar9 != (int *)0x0) {
              do {
                iVar10 = *piVar9;
                piVar9 = (int *)piVar9[2];
                if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar10 * 4) + 300) ==
                    *(int *)(local_3c + 0x20)) {
                  local_18 = (int *)((int)local_18 + 1);
                }
              } while (piVar9 != (int *)0x0);
            }
            if ((0 < (int)local_34) && ((int)local_34 / 2 + 1 <= (int)local_18)) {
              local_22 = '\x01';
            }
          }
          else {
            local_21 = '\x01';
          }
          local_48 = *(undefined4 *)(param_1 + 0x34);
          if (((((uVar16 != *(uint *)(param_1 + 0x38)) && (uVar16 != 0)) &&
               (((char)(undefined4)local_64 != 'R' ||
                (((char)((uint)(undefined4)local_64 >> 8) != 'E' || (local_64._2_1_ != 'B')))))) &&
              (local_21 == '\0')) &&
             ((local_22 != '\0' &&
              ((((local_12 == '\0' || ((bool)local_35)) || (local_36 != '\0')) &&
               ((iVar15 = *(int *)(iVar15 + uVar16 * 4),
                (int)(*(int *)(iVar15 + 0x9dc) - *(int *)(iVar15 + 0x9d8) & 0xfffffffcU) < 1 &&
                (*(char *)(iVar15 + 0x1544) != '\0')))))))) {
            piVar9 = *(int **)(iVar15 + 0x9f8);
            if (piVar9 != (int *)0x0) {
              do {
                iVar15 = *piVar9;
                piVar9 = (int *)piVar9[2];
                if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar15 * 4) + 300) == 0) {
                  local_7c = (int *)-uVar16;
                  local_78 = 0;
                  FUN_004ca000();
                  goto LAB_0084c931;
                }
              } while (piVar9 != (int *)0x0);
            }
            local_2c = (ulonglong)uVar16;
            FUN_004ca000();
LAB_0084c931:
            apppuStackY_10c[2] = (undefined ***)local_58;
            apppuStackY_10c[1] = (undefined ***)0x84c936;
            FUN_006e0260();
          }
          local_20 = (int *)((int)local_20 + 1);
          piVar9 = local_a0;
        } while ((int)local_20 < (int)local_30);
      }
    }
  }
  iVar10 = local_50 * -8;
  puVar22 = &stack0xffffff04 + iVar10;
  puVar18 = &stack0xffffff04 + iVar10;
  uVar1 = *local_54;
  *(int *)(&stack0xffffff00 + iVar10) = param_1;
  apppuStackY_10c[iVar15 * -2 + 2] = (undefined ***)puVar12;
  apppuStackY_10c[iVar15 * -2 + 1] = (undefined ***)uVar1;
  local_30 = &stack0xffffff04 + iVar10;
  apppuStackY_10c[iVar15 * -2] = (undefined ***)0x84c999;
  FUN_006e0700();
  iVar11 = local_50;
  iVar15 = 0;
  local_18 = (int *)0x0;
  local_40 = local_50;
  if (0 < local_50) {
    do {
      if (*(int *)(puVar22 + (int)local_18 * 8) == -1000) {
        iVar23 = *(int *)(DAT_012587e4 + 0x418) - *(int *)(DAT_012587e4 + 0x414) >> 3;
        if (iVar15 < iVar23) {
          local_20 = *(int **)(DAT_012587e4 + 4);
          puVar12 = (undefined4 *)(*(int *)(DAT_012587e4 + 0x414) + iVar15 * 8);
          iVar14 = iVar15;
          do {
            local_84 = *puVar12;
            iVar2 = (*(int **)(DAT_012587e4 + 4))[puVar12[1]];
            puVar22 = local_30;
            if ((int)(*(int *)(iVar2 + 0x9dc) - *(int *)(iVar2 + 0x9d8) & 0xfffffffcU) < 1) {
              *(undefined4 *)(local_30 + (int)local_18 * 8) =
                   *(undefined4 *)(*(int *)(DAT_012587e4 + 0x414) + 4 + iVar14 * 8);
              iVar15 = iVar14 + 1;
              break;
            }
            iVar14 = iVar14 + 1;
            puVar12 = puVar12 + 2;
          } while (iVar14 < iVar23);
        }
      }
      local_18 = (int *)((int)local_18 + 1);
    } while ((int)local_18 < local_50);
  }
  local_40 = -1;
  *(undefined4 *)(&stack0xffffff00 + iVar10) = 0x84ca59;
  local_64 = FUN_00b31c36();
  local_70 = 0;
  local_9c = (undefined4 *)iVar11;
  puVar22 = &stack0xffffff04 + iVar10;
  if (0 < iVar11) {
    do {
      iVar15 = *(int *)(local_30 + local_70 * 8);
      if (iVar15 != -1000) {
        uVar16 = 0;
        local_34 = 0;
        local_12 = iVar15 < 0;
        if ((bool)local_12) {
          iVar15 = -iVar15;
        }
        iVar15 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar15 * 4);
        local_6c = *(undefined4 *)(iVar15 + 0x1c);
        local_68 = *(int *)(iVar15 + 0x20);
        local_44 = (int *)(local_30 + local_70 * 8 + 4);
        local_11 = '\0';
        local_1c = 0;
        local_20 = (int *)0x0;
        if (*local_44 == 0) {
          local_7c = *(int **)(local_3c + 0x9d8);
          while ((*(int **)(local_3c + 0x9d8) <= local_7c &&
                 (local_7c < *(int **)(local_3c + 0x9dc)))) {
            iVar15 = *local_7c;
            local_7c = local_7c + 1;
            iVar15 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar15 * 4);
            iVar10 = *(int *)(iVar15 + 0x14c);
            iVar11 = *(int *)(iVar15 + 0x148);
            if (iVar11 != iVar10) {
              do {
                if (*(int *)(iVar11 + 4) == local_68) break;
                iVar11 = iVar11 + 8;
              } while (iVar11 != iVar10);
              if (iVar11 != iVar10) {
                piVar9 = *(int **)(iVar15 + 0x188);
                if ((0 < piVar9[0x21]) && (piVar9 != (int *)0x0)) {
                  pcVar3 = *(code **)(*piVar9 + 0x24);
                  puVar19 = (undefined4 *)(puVar18 + -4);
                  puVar18 = puVar18 + -4;
                  *puVar19 = 0x84cca4;
                  cVar8 = (*pcVar3)();
                  if ((cVar8 != '\0') && (iVar10 = piVar9[0x13] - piVar9[0x12] >> 2, 0 < iVar10)) {
                    if (local_20 == (int *)0x0) {
                      local_20 = piVar9;
                    }
                    local_34 = local_34 + *(int *)(iVar15 + 0x1a8);
                    if (piVar9[0x21] == 1) {
                      local_1c = local_1c + local_90;
                    }
                    else if (piVar9[0x21] == 2) {
                      iVar11 = piVar9[0x1a];
                      local_1c = local_1c + local_98;
                      lVar26 = (longlong)local_8c;
                      *(undefined4 *)(puVar18 + -4) = 0;
                      *(undefined4 *)(puVar18 + -8) = 1000;
                      *(longlong *)(puVar18 + -0x10) = (iVar11 * 1000) * lVar26;
                      *(undefined4 *)(puVar18 + -0x14) = 0x84cd17;
                      iVar11 = __alldiv();
                      iVar10 = iVar10 * 1000;
                      if (iVar10 == 0) {
                        iVar10 = -1;
                      }
                      else if (iVar11 + 0x189373U < 0x39580e) {
                        iVar10 = (iVar11 * 1000) / iVar10;
                      }
                      else {
                        *(undefined4 *)(puVar18 + -4) = 0;
                        *(undefined4 *)(puVar18 + -8) = 1000;
                        *(int *)(puVar18 + -0xc) = iVar11 >> 0x1f;
                        *(int *)(puVar18 + -0x10) = iVar11;
                        *(undefined4 *)(puVar18 + -0x14) = 0x84cd4e;
                        uVar24 = __allmul();
                        *(int *)(puVar18 + -4) = iVar10 >> 0x1f;
                        *(int *)(puVar18 + -8) = iVar10;
                        *(undefined8 *)(puVar18 + -0x10) = uVar24;
                        *(undefined4 *)(puVar18 + -0x14) = 0x84cd5e;
                        iVar10 = __alldiv();
                      }
                      iVar11 = *(int *)(iVar15 + 0x2b8);
                      lVar26 = (longlong)local_88;
                      *(undefined4 *)(puVar18 + -4) = 0;
                      *(undefined4 *)(puVar18 + -8) = 1000;
                      *(longlong *)(puVar18 + -0x10) = iVar11 * lVar26;
                      *(undefined4 *)(puVar18 + -0x14) = 0x84cd7a;
                      iVar11 = __alldiv();
                      local_1c = local_1c + iVar11 + iVar10;
                    }
                  }
                }
                if ((local_11 == '\0') && (*(int *)(*(int *)(iVar15 + 0x188) + 0x84) < 1)) {
                  local_11 = '\0';
                }
                else {
                  local_11 = '\x01';
                }
              }
            }
          }
          uVar16 = local_34;
          if (local_11 == '\0') goto LAB_0084d016;
        }
        else {
          local_18 = *(int **)(*local_44 + 4);
joined_r0x0084cada:
          if (local_18 != (int *)0x0) {
            iVar15 = *local_18;
            local_18 = (int *)local_18[2];
            local_a4 = iVar15;
            if (((iVar15 != 0) && (piVar9 = *(int **)(iVar15 + 0x188), 0 < piVar9[0x21])) &&
               (piVar9 != (int *)0x0)) {
              pcVar3 = *(code **)(*piVar9 + 0x24);
              puVar17 = (undefined4 *)(puVar18 + -4);
              puVar18 = puVar18 + -4;
              *puVar17 = 0x84cb1d;
              cVar8 = (*pcVar3)();
              if ((cVar8 != '\0') && (iVar10 = piVar9[0x13] - piVar9[0x12] >> 2, 0 < iVar10)) {
                if (local_20 == (int *)0x0) {
                  local_20 = piVar9;
                }
                uVar16 = uVar16 + *(int *)(iVar15 + 0x1a8);
                iVar15 = local_90;
                local_34 = uVar16;
                if (piVar9[0x21] != 1) {
                  if (piVar9[0x21] != 2) goto joined_r0x0084cada;
                  iVar10 = iVar10 * 1000;
                  local_1c = local_1c + local_98;
                  iVar15 = piVar9[0x1a];
                  lVar26 = (longlong)local_8c;
                  *(undefined4 *)(puVar18 + -4) = 0;
                  *(undefined4 *)(puVar18 + -8) = 1000;
                  *(longlong *)(puVar18 + -0x10) = (iVar15 * 1000) * lVar26;
                  *(undefined4 *)(puVar18 + -0x14) = 0x84cb95;
                  iVar15 = __alldiv();
                  if (iVar10 == 0) {
                    iVar10 = -1;
                  }
                  else if (iVar15 + 0x189373U < 0x39580e) {
                    iVar10 = (iVar15 * 1000) / iVar10;
                  }
                  else {
                    *(undefined4 *)(puVar18 + -4) = 0;
                    *(undefined4 *)(puVar18 + -8) = 1000;
                    *(int *)(puVar18 + -0xc) = iVar15 >> 0x1f;
                    *(int *)(puVar18 + -0x10) = iVar15;
                    *(undefined4 *)(puVar18 + -0x14) = 0x84cbd1;
                    uVar24 = __allmul();
                    *(int *)(puVar18 + -4) = iVar10 >> 0x1f;
                    *(int *)(puVar18 + -8) = iVar10;
                    *(undefined8 *)(puVar18 + -0x10) = uVar24;
                    *(undefined4 *)(puVar18 + -0x14) = 0x84cbda;
                    iVar10 = __alldiv();
                    local_e0 = iVar10 >> 0x1f;
                    uVar16 = local_34;
                  }
                  iVar15 = *(int *)(local_a4 + 0x2b8);
                  lVar26 = (longlong)local_88;
                  *(undefined4 *)(puVar18 + -4) = 0;
                  *(undefined4 *)(puVar18 + -8) = 1000;
                  *(longlong *)(puVar18 + -0x10) = iVar15 * lVar26;
                  *(undefined4 *)(puVar18 + -0x14) = 0x84cc06;
                  iVar15 = __alldiv();
                  iVar15 = iVar15 + iVar10;
                }
                local_1c = local_1c + iVar15;
              }
            }
            goto joined_r0x0084cada;
          }
        }
        uVar7 = local_1c;
        iVar15 = (int)local_1c >> 0x1f;
        if ((param_2 <= (int)local_1c / 1000) && (uVar16 != 0)) {
          uVar5 = local_1c >> 0x11;
          uVar6 = local_1c & 0x1ffff;
          *(undefined4 *)(puVar18 + -4) = 0;
          *(undefined4 *)(puVar18 + -8) = 0x1f40000;
          *(uint *)(puVar18 + -0xc) = (iVar15 << 0xf | uVar5) << 0xf | uVar6 >> 2;
          uVar5 = uVar16 >> 0x11;
          *(uint *)(puVar18 + -0x10) = uVar7 << 0x1e;
          *(undefined4 *)(puVar18 + -0x14) = 0x84ce01;
          uVar24 = __alldiv();
          *(undefined4 *)(puVar18 + -4) = 0;
          *(undefined4 *)(puVar18 + -8) = 0x1f40000;
          *(undefined8 *)(puVar18 + -0x10) = uVar24;
          *(undefined4 *)(puVar18 + -0x14) = 0x84ce0f;
          uVar25 = __allmul();
          *(uint *)(puVar18 + -4) = uVar5;
          *(uint *)(puVar18 + -8) = uVar16 << 0xf;
          *(uint *)(puVar18 + -0xc) =
               (int)((longlong)uVar25 >> 0x2f) << 0xf | (uint)((uVar25 & 0x7fffffff8000) >> 0x20);
          *(int *)(puVar18 + -0x10) = (int)(uVar25 & 0x7fffffff8000);
          *(undefined4 *)(puVar18 + -0x14) = 0x84ce26;
          local_2c = __alldiv();
          *(uint *)(puVar18 + -4) = local_b0;
          *(int *)(puVar18 + -8) = local_b4;
          *(uint *)(puVar18 + -0xc) = uVar5 << 0xf | (uVar16 & 0x1ffff) >> 2;
          *(uint *)(puVar18 + -0x10) = uVar16 << 0x1e;
          *(undefined4 *)(puVar18 + -0x14) = 0x84ce4c;
          uVar24 = __alldiv();
          local_84 = (undefined4)uVar24;
          if ((local_b8 < (int)uVar5) || ((local_b8 <= (int)uVar5 && (local_bc <= uVar16 << 0xf))))
          {
LAB_0084ce90:
            uVar25 = local_2c;
            if ((longlong)local_2c < 0) goto LAB_0084cffb;
            if ((0xffffffff < (longlong)local_2c) || ((int)local_2c != 0)) {
              if (*local_44 == 0) {
                local_20 = *(int **)(DAT_012587e4 + 4);
                piVar9 = (int *)local_20[local_68];
                local_44 = piVar9;
                if ((char)piVar9[0x4b4] == '\0') {
                  *(undefined4 *)(puVar18 + -4) = 0x84cefd;
                  uVar24 = FUN_00b31c36();
                  *(ulonglong *)(puVar18 + -8) = uVar25;
                  *(undefined8 *)(puVar18 + -0x10) = uVar24;
                  *(undefined4 *)(puVar18 + -0x14) = 0x84cf06;
                  lVar26 = __allmul();
                  local_2c = lVar26 >> 0xf;
                }
                if (local_12 == '\0') {
                  local_a4 = piVar9[0x280];
                  iVar15 = 0;
                  uVar25 = local_2c;
                  if (0 < local_50) {
                    do {
                      local_18 = (int *)0x0;
                      if (iVar15 != local_70) {
                        uVar16 = (int)*(uint *)(local_30 + iVar15 * 8) >> 0x1f;
                        local_e4 = *(undefined4 *)
                                    (local_20[(*(uint *)(local_30 + iVar15 * 8) ^ uVar16) - uVar16]
                                    + 0x1c);
                        piVar9 = (int *)local_44[0x27e];
                        if (piVar9 != (int *)0x0) {
                          do {
                            iVar10 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar9 * 4);
                            piVar9 = (int *)piVar9[2];
                            if (*(int *)(iVar10 + 300) != 0) {
                              iVar11 = *(int *)(iVar10 + 0x14c);
                              iVar10 = *(int *)(iVar10 + 0x148);
                              if (iVar10 != iVar11) {
                                do {
                                  if (*(int *)(iVar10 + 4) ==
                                      *(int *)(local_20[(*(uint *)(local_30 + iVar15 * 8) ^ uVar16)
                                                        - uVar16] + 0x20)) break;
                                  iVar10 = iVar10 + 8;
                                } while (iVar10 != iVar11);
                                if (iVar10 != iVar11) {
                                  local_18 = (int *)((int)local_18 + 1);
                                }
                              }
                            }
                          } while (piVar9 != (int *)0x0);
                        }
                      }
                      if (local_a4 <= (int)local_18) goto LAB_0084cfef;
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < local_50);
                    goto LAB_0084cff8;
                  }
                }
                else {
                  *(undefined4 *)(puVar18 + -4) = 0x84cf30;
                  uVar25 = FUN_00b31c36();
                }
              }
              else {
                *(undefined4 *)(puVar18 + -4) = 0x84cebb;
                uVar24 = FUN_00b31c36();
                *(ulonglong *)(puVar18 + -8) = uVar25;
                *(undefined8 *)(puVar18 + -0x10) = uVar24;
                *(undefined4 *)(puVar18 + -0x14) = 0x84cec4;
                lVar26 = __allmul();
                uVar25 = lVar26 >> 0xf;
              }
            }
          }
          else {
            *(undefined4 *)(puVar18 + -4) = 0x84ce6e;
            lVar26 = FUN_00b31c36();
            if ((lVar26 <= CONCAT44((int)((ulonglong)uVar24 >> 0x20),local_84)) ||
               (local_20 == (int *)0x0)) goto LAB_0084ce90;
            *(undefined4 *)(puVar18 + -4) = 0x84ce85;
            iVar15 = FUN_004d5d10();
            if (199 < iVar15) goto LAB_0084ce90;
LAB_0084cfef:
            local_2c = 0;
LAB_0084cff8:
LAB_0084cffb:
            uVar25 = CONCAT44(local_2c._4_4_,(int)local_2c);
          }
          if ((longlong)local_64 < (longlong)uVar25) {
            local_40 = local_70;
            local_64 = uVar25;
          }
        }
      }
LAB_0084d016:
      local_70 = local_70 + 1;
    } while (local_70 < (int)local_9c);
    puVar22 = puVar18;
    if (-1 < local_40) {
      param_2 = 0;
      if (*(int *)(local_30 + local_40 * 8 + 4) != 0) {
        param_2 = *(undefined4 *)(**(int **)(*(int *)(local_30 + local_40 * 8 + 4) + 4) + 0x58);
      }
      uVar16 = (int)*(uint *)(local_30 + local_40 * 8) >> 0x1f;
      iVar15 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                       ((*(uint *)(local_30 + local_40 * 8) ^ uVar16) - uVar16) * 4);
      uVar1 = *(undefined4 *)(iVar15 + 0x1c);
      uVar4 = *(undefined4 *)(iVar15 + 0x20);
      *(undefined4 *)(puVar18 + -4) = 0x54;
      local_6c = uVar1;
      local_68 = uVar4;
      *(undefined4 *)(puVar18 + -8) = 0x84d078;
      puVar12 = (undefined4 *)FUN_00aae9af();
      local_9c = puVar12;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = (undefined4 *)0x0;
      }
      else {
        uVar1 = *(undefined4 *)(param_1 + 0x34);
        uVar4 = *(undefined4 *)(param_1 + 0x38);
        puVar12[1] = 0x18d;
        *puVar12 = CCommand::vftable;
        puVar12[7] = 0xf;
        puVar12[6] = 0;
        *(undefined1 *)(puVar12 + 2) = 0;
        local_8 = CONCAT31(local_8._1_3_,4);
        *(undefined4 *)(puVar18 + -4) = 0;
        puVar12[0xb] = 0x3dd;
        puVar12[0xc] = 0x3dd;
        *(undefined1 **)(puVar18 + -8) = &DAT_00ded94d;
        *(undefined2 *)(puVar12 + 0xd) = 0xffff;
        *(undefined4 *)(puVar18 + -0xc) = 0x84d0d9;
        FUN_00409350();
        puVar12[9] = 0;
        *(undefined2 *)(puVar12 + 10) = 0;
        *(undefined2 *)((int)puVar12 + 0x36) = 0;
        puVar12[0xe] = 0;
        *(undefined1 *)(puVar12 + 0x13) = 0;
        *puVar12 = CCreateVassalCommand::vftable;
        puVar12[0xf] = local_6c;
        puVar12[0x10] = local_68;
        puVar12[0x11] = uVar1;
        puVar12[0x12] = uVar4;
        puVar12[0x14] = param_2;
      }
      local_8 = CONCAT31(local_8._1_3_,2);
      pcVar3 = *(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44);
      puVar20 = puVar18 + -4;
      *(undefined4 *)(puVar18 + -4) = 0x84d127;
      iVar15 = (*pcVar3)();
      pcVar3 = *(code **)(**(int **)(iVar15 + 0x38) + 0x18);
      *(undefined4 **)(puVar20 + -4) = puVar12;
      puVar21 = puVar20 + -8;
      *(undefined4 *)(puVar20 + -8) = 0x84d132;
      (*pcVar3)();
      local_8 = 5;
      uVar1 = *local_54;
      *(undefined4 **)(puVar21 + -4) = local_54;
      *(undefined4 *)(puVar21 + -8) = uVar1;
      *(undefined4 *)(puVar21 + -0xc) = 0x84d14b;
      FUN_00445600();
      *(undefined4 **)(puVar21 + -4) = local_54;
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar21 + -8) = &UNK_0084d154;
      FUN_00aae91b();
    }
  }
  local_8 = 6;
  uVar1 = *local_54;
  *(undefined4 **)(puVar22 + -4) = local_54;
  *(undefined4 *)(puVar22 + -8) = uVar1;
  *(undefined4 *)(puVar22 + -0xc) = 0x84d18b;
  FUN_00445600();
  *(undefined4 **)(puVar22 + -4) = local_54;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar22 + -8) = &UNK_0084d194;
  FUN_00aae91b();
}

