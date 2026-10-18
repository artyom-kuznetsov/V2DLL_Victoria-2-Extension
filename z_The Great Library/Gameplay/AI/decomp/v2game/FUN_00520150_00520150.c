// FUN_00520150 @ 00520150 body=[[00520150, 005201d9] [005201e0, 0052020c] [00520210, 00520279] [0052027d, 00520339] [00520340, 0052051d] [00520521, 00520826] [00520830, 0052088c] [00520890, 00520933] [00520940, 00520b86] [00520b8a, 00520c39] [00520c40, 00520dc1]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x00520aaa) */

void FUN_00520150(int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int *piVar22;
  undefined8 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  longlong lVar26;
  undefined1 local_e0 [8];
  uint local_d8;
  undefined4 local_cc;
  uint local_c8;
  int local_c0 [2];
  int *local_b8;
  int local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_94 [2];
  int local_8c;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int *local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  int local_60;
  uint local_5c;
  undefined8 local_58;
  undefined1 *local_50;
  undefined4 local_4c;
  int local_48;
  int *local_44;
  int local_40;
  uint *local_3c;
  undefined8 local_38;
  uint *local_30;
  int local_2c;
  int local_28;
  char local_21;
  int local_20;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b8f33e;
  local_10 = ExceptionList;
  local_21 = *(int *)(param_1 + 0x20) == *(int *)(DAT_012588e8 + 0xb60);
  iVar7 = *(int *)(param_1 + 0x1594) - *(int *)(param_1 + 0x1590) >> 2;
  ExceptionList = &local_10;
  if (0 < iVar7) {
    iVar14 = 0;
    ExceptionList = &local_10;
    do {
      iVar11 = iVar14 * 4;
      iVar14 = iVar14 + 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1590) + iVar11) + 0x28) = 0;
    } while (iVar14 < iVar7);
  }
  local_3c = (uint *)(param_1 + 0x12e8);
  FUN_00968d50(local_3c);
  iVar14 = 1;
  iVar7 = *(int *)(param_1 + 0x8dc) - *(int *)(param_1 + 0x8d8) >> 3;
  if (1 < iVar7) {
    do {
      puVar13 = (undefined4 *)(*(int *)(param_1 + 0x8d8) + iVar14 * 8);
      iVar14 = iVar14 + 1;
      *puVar13 = 0;
      puVar13[1] = 0;
    } while (iVar14 < iVar7);
  }
  iVar14 = 1;
  iVar7 = *(int *)(param_1 + 0x904) - *(int *)(param_1 + 0x900) >> 3;
  if (1 < iVar7) {
    do {
      puVar13 = (undefined4 *)(*(int *)(param_1 + 0x900) + iVar14 * 8);
      iVar14 = iVar14 + 1;
      *puVar13 = 0;
      puVar13[1] = 0;
    } while (iVar14 < iVar7);
  }
  if (DAT_0131bb34 == 0) {
    local_50 = (undefined1 *)FUN_00aae9af(0x188);
    local_8 = 0;
    if (local_50 == (undefined1 *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0041a160();
    }
    local_8 = 1;
    local_50 = (undefined1 *)0x0;
    if ((iVar7 != DAT_0131bb34) && (local_40 = DAT_0131bb34, DAT_0131bb34 != 0)) {
      FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_40);
    }
    local_8 = 0xffffffff;
    DAT_0131bb34 = iVar7;
  }
  local_1c = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
  local_8c = 1000;
  local_88 = 1000;
  local_20 = DAT_0131bb34;
  if (0 < (int)(*(int *)(param_1 + 0x9dc) - *(int *)(param_1 + 0x9d8) & 0xfffffffcU)) {
    if (*(char *)(param_1 + 0xb68) == '\0') {
      if (*(char *)(param_1 + 0xb70) != '\0') {
        FUN_00401000(0x43fa4001);
        local_88 = FUN_00b31c00();
      }
    }
    else {
      FUN_00401000(0x43fa4001);
      local_8c = FUN_00b31c00();
      local_88 = 0;
    }
  }
  iVar7 = local_1c * -4;
  puVar21 = &stack0xffffff08 + iVar7;
  puVar20 = &stack0xffffff08 + iVar7;
  local_50 = &stack0xffffff08 + iVar7;
  iVar14 = 0;
  puVar5 = &stack0xffffff08 + iVar7;
  if (0 < local_1c) {
    do {
      local_50 = puVar5;
      iVar11 = local_20;
      *(undefined4 *)(&stack0xffffff08 + iVar14 * 4 + iVar7) = 1000;
      if (*(int *)(iVar11 + 0x10) - *(int *)(iVar11 + 0xc) >> 2 < iVar14) {
        *(undefined4 *)(puVar20 + -4) = 0x52035c;
        local_18 = (int *)FUN_0096bb70();
      }
      else {
        local_18 = *(int **)(*(int *)(iVar11 + 0xc) + iVar14 * 4);
      }
      pcVar2 = *(code **)(*local_18 + 0x18);
      puVar21 = puVar20 + -4;
      *(undefined4 *)(puVar20 + -4) = 0x520374;
      cVar6 = (*pcVar2)();
      if ((cVar6 == '\0') || ((char)local_18[0xb] == '\0')) {
        *(undefined4 *)(&stack0xffffff08 + iVar14 * 4 + iVar7) = 0;
      }
      else {
        iVar11 = local_18[0xf];
        if (iVar11 == 1) {
          iVar11 = *(int *)(*(int *)(param_1 + 0xa60) + 0x110);
        }
        else if (iVar11 == 2) {
          iVar11 = *(int *)(*(int *)(param_1 + 0xa60) + 0x108);
        }
        else {
          if (iVar11 != 0) goto LAB_005203d9;
          iVar11 = *(int *)(*(int *)(param_1 + 0xa60) + 0x118);
        }
        iVar15 = *(int *)(&stack0xffffff08 + iVar14 * 4 + iVar7);
        *(undefined4 *)(puVar21 + -4) = 0;
        *(undefined4 *)(puVar21 + -8) = 1000;
        *(longlong *)(puVar21 + -0x10) = (longlong)iVar15 * (longlong)iVar11;
        *(undefined4 *)(puVar21 + -0x14) = 0x5203cd;
        uVar8 = __alldiv();
        *(undefined4 *)(&stack0xffffff08 + iVar14 * 4 + iVar7) = uVar8;
      }
LAB_005203d9:
      iVar14 = iVar14 + 1;
      puVar20 = puVar21;
      puVar5 = local_50;
    } while (iVar14 < local_1c);
  }
  iVar7 = DAT_012586dc;
  uVar9 = *(int *)(*(int *)(param_1 + 0xa60) + 0x380) +
          *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x10) +
          *(int *)(*(int *)(param_1 + 0xbcc) + 0x60);
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 0x1f40000;
  *(uint *)(puVar21 + -0xc) =
       (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf | (uVar9 & 0x1ffff) >> 2;
  *(uint *)(puVar21 + -0x10) = uVar9 * 0x40000000;
  *(undefined4 *)(puVar21 + -0x14) = 0x520426;
  local_58 = __alldiv();
  *(undefined4 *)(param_1 + 0x14e0) = 0;
  uVar9 = *(uint *)(*(int *)(iVar7 + 0x40) + 0x70);
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 0x1f40000;
  *(uint *)(puVar21 + -0xc) =
       (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) << 0xf | (uVar9 & 0x1ffff) >> 2;
  *(uint *)(puVar21 + -0x10) = uVar9 << 0x1e;
  *(undefined4 *)(puVar21 + -0x14) = 0x520454;
  local_a8 = __alldiv();
  local_70 = *(int *)(DAT_01258a48 + 0x1c) - *(int *)(DAT_01258a48 + 0x18) >> 2;
  iVar7 = *(int *)(DAT_01258a3c + 0x10);
  iVar14 = *(int *)(DAT_01258a3c + 0xc);
  *(undefined4 *)(param_1 + 0x13e8) = 0;
  local_6c = iVar7 - iVar14 >> 2;
  *(undefined4 *)(param_1 + 0x13ec) = 0;
  local_44 = *(int **)(param_1 + 0xe44);
  if (local_44 != (int *)0x0) {
    local_94[0] = 0;
    do {
      local_28 = *local_44;
      local_5c = 0;
      local_38 = 0;
      local_84 = 0;
      local_80 = 0;
      local_7c = 0;
      local_8 = 4;
      if (DAT_0131bb34 == 0) {
        *(undefined4 *)(puVar21 + -4) = 0x188;
        *(undefined4 *)(puVar21 + -8) = 0x5204e1;
        local_30 = (uint *)FUN_00aae9af();
        local_8._0_1_ = 5;
        if (local_30 == (uint *)0x0) {
          iVar7 = 0;
        }
        else {
          *(undefined4 *)(puVar21 + -4) = 0x5204f6;
          iVar7 = FUN_0041a160();
        }
        iVar14 = DAT_0131bb34;
        local_8 = CONCAT31(local_8._1_3_,6);
        local_30 = (uint *)0x0;
        if ((iVar7 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
          *(int *)(puVar21 + -4) = DAT_0131bb34;
          *(undefined4 *)(puVar21 + -8) = 0x520518;
          FUN_0096dd80();
          *(int *)(puVar21 + -4) = iVar14;
                    /* WARNING: Subroutine does not return */
          *(undefined **)(puVar21 + -8) = &UNK_0052051e;
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        DAT_0131bb34 = iVar7;
      }
      if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 != 0) {
        *(undefined4 **)(puVar21 + -4) = local_94;
        *(undefined4 *)(puVar21 + -8) = 0;
        *(int **)(puVar21 + -0xc) = &local_84;
        *(undefined4 *)(puVar21 + -0x10) = 0x52054f;
        FUN_0043cb20();
      }
      iVar7 = local_28;
      *(int *)(puVar21 + -4) = local_28 + 200;
      *(undefined4 *)(puVar21 + -8) = 0x52055e;
      FUN_00968d50();
      local_4c = CONCAT31(local_4c._1_3_,0 < *(int *)(iVar7 + 0x84));
      piVar10 = *(int **)(iVar7 + 0x48);
      while ((iVar7 = local_20, *(int **)(local_28 + 0x48) <= piVar10 &&
             (piVar10 < *(int **)(local_28 + 0x4c)))) {
        local_b8 = piVar10 + 1;
        iVar7 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar10 * 4);
        piVar22 = (int *)(iVar7 + 0x1a8);
        *(int **)(puVar21 + -4) = piVar22;
        local_74 = piVar22;
        local_40 = iVar7;
        *(undefined4 *)(puVar21 + -8) = 0x5205b0;
        FUN_00968d50();
        iVar14 = *(int *)(iVar7 + 0x14c);
        iVar11 = *(int *)(iVar7 + 0x148);
        if (iVar11 == iVar14) {
LAB_005205d3:
          local_5c = local_5c + 1;
        }
        else {
          do {
            if (*(int *)(iVar11 + 4) == *(int *)(param_1 + 0x20)) break;
            iVar11 = iVar11 + 8;
          } while (iVar11 != iVar14);
          if (iVar11 == iVar14) goto LAB_005205d3;
        }
        local_18 = (int *)0x0;
        if (0 < local_1c) {
          local_48 = 0;
          do {
            iVar14 = *(int *)(local_48 + *(int *)(local_40 + 0x194));
            local_60 = iVar14;
            if (*(int *)(local_20 + 0x10) - *(int *)(local_20 + 0xc) >> 2 < (int)local_18) {
              *(undefined4 *)(puVar21 + -4) = 0x52061a;
              iVar7 = FUN_0096bb70();
            }
            else {
              iVar7 = *(int *)(*(int *)(local_20 + 0xc) + (int)local_18 * 4);
            }
            local_30 = *(uint **)(iVar7 + 0x3c);
            piVar22 = local_74;
            iVar11 = local_60;
            iVar7 = local_40;
            local_60 = iVar14;
            while (iVar14 = iVar11, local_74 = piVar22, local_40 = iVar7, local_60 != 0) {
              local_60 = *(int *)(iVar14 + 0x27c);
              if (local_21 != '\0') {
                uVar9 = *(uint *)(iVar14 + 0x58);
                *(undefined4 *)(puVar21 + -4) = 0;
                *(undefined4 *)(puVar21 + -8) = 0xc3500000;
                *(uint *)(puVar21 + -0xc) = ((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2;
                *(uint *)(puVar21 + -0x10) = uVar9 << 0x1e;
                *(undefined4 *)(puVar21 + -0x14) = 0x52065f;
                uVar23 = __alldiv();
                local_c8 = *(uint *)(iVar14 + 0x120);
                uVar9 = *(uint *)(iVar14 + 0x1c8);
                local_d8 = local_c8 + uVar9;
                iVar7 = *(int *)(iVar14 + 0x124);
                iVar11 = *(int *)(iVar14 + 0x1cc);
                iVar15 = iVar7 + iVar11 + (uint)CARRY4(local_c8,uVar9);
                if (iVar15 < 1) {
                  if (iVar15 < 0) {
                    uVar9 = -local_c8;
                    iVar11 = -(iVar7 + (uint)(local_c8 != 0));
                  }
                  else if ((-1 < iVar15) && ((0 < iVar15 || (0x50000 < local_d8))))
                  goto LAB_005206c5;
                }
                else {
LAB_005206c5:
                  uVar9 = 0x50000 - local_c8;
                  iVar11 = -(uint)(0x50000 < local_c8) - iVar7;
                }
                local_a0 = uVar23;
                *(undefined8 *)(puVar21 + -8) = uVar23;
                *(int *)(puVar21 + -0xc) = iVar11;
                *(uint *)(puVar21 + -0x10) = uVar9;
                *(undefined4 *)(puVar21 + -0x14) = 0x5206e8;
                lVar24 = __allmul();
                uVar16 = (uint)(lVar24 >> 0xf);
                puVar17 = (uint *)(param_1 + 0x13e8);
                uVar9 = *puVar17;
                *puVar17 = *puVar17 + uVar16;
                *(int *)(param_1 + 0x13ec) =
                     *(int *)(param_1 + 0x13ec) + (int)((ulonglong)(lVar24 >> 0xf) >> 0x20) +
                     (uint)CARRY4(uVar9,uVar16);
              }
              piVar10 = local_18;
              puVar17 = local_30;
              if (*(int *)(iVar14 + 0x274) != 0) {
                piVar22 = (int *)(*(int *)(iVar14 + 0x274) + 0x28);
                *piVar22 = *piVar22 + *(int *)(iVar14 + 0x58);
              }
              iVar7 = *(int *)(iVar14 + 0x68);
              if ((*(int *)(iVar7 + 0x3c0) != 0 || *(int *)(iVar7 + 0x3c4) != 0) &&
                 ((*(int *)(iVar14 + 0x6c) == *(int *)(param_1 + 0xe64) ||
                  (*(char *)(iVar14 + 0x4c) != '\0')))) {
                uVar9 = *(uint *)(iVar14 + 0x58);
                local_38 = CONCAT44(local_38._4_4_ + (((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11) +
                                    (uint)CARRY4((uint)local_38,uVar9 * 0x8000),
                                    (uint)local_38 + uVar9 * 0x8000);
                piVar22 = (int *)(local_84 + *(int *)(iVar7 + 0x28) * 4);
                *piVar22 = *piVar22 + uVar9;
              }
              *(undefined4 *)(puVar21 + -4) = local_4c;
              *(uint **)(puVar21 + -8) = puVar17;
              *(int **)(puVar21 + -0xc) = piVar10;
              *(undefined4 *)(puVar21 + -0x10) = 0x520768;
              FUN_00969760();
              iVar15 = *(int *)(local_50 + (int)piVar10 * 4);
              piVar22 = local_74;
              iVar11 = local_60;
              iVar7 = local_40;
              if ((iVar15 != 0) && ((char)local_4c == '\0')) {
                if (*(int *)(iVar14 + 0x6c) == *(int *)(param_1 + 0xe64)) {
                  *(undefined4 *)(puVar21 + -4) = 0;
                  *(undefined4 *)(puVar21 + -8) = 1000;
                  *(int *)(puVar21 + -0xc) = iVar15 >> 0x1f;
                  *(int *)(puVar21 + -0x10) = iVar15;
                  *(undefined4 *)(puVar21 + -0x14) = 0x52079f;
                  lVar24 = __allmul();
                }
                else {
                  iVar7 = local_8c;
                  if (*(char *)(iVar14 + 0x4c) == '\0') {
                    iVar7 = local_88;
                  }
                  lVar24 = (longlong)iVar7 * (longlong)iVar15;
                }
                *(undefined4 *)(puVar21 + -4) = 0;
                *(undefined4 *)(puVar21 + -8) = 1000;
                *(longlong *)(puVar21 + -0x10) = lVar24;
                *(undefined4 *)(puVar21 + -0x14) = 0x5207c3;
                iVar11 = __alldiv();
                iVar7 = *(int *)(iVar14 + 0x58);
                *(undefined4 *)(puVar21 + -4) = 0;
                *(undefined4 *)(puVar21 + -8) = 1000;
                *(longlong *)(puVar21 + -0x10) = (longlong)(iVar7 * 1000) * (longlong)iVar11;
                *(undefined4 *)(puVar21 + -0x14) = 0x5207de;
                iVar7 = __alldiv();
                uVar9 = iVar7 / 1000;
                piVar22 = local_74;
                iVar11 = local_60;
                iVar7 = local_40;
                if (uVar9 != 0) {
                  *(undefined4 *)(puVar21 + -4) = 0;
                  *(undefined4 *)(puVar21 + -8) = 0x320000;
                  *(uint *)(puVar21 + -0xc) = ((int)uVar9 >> 0x1f) << 0x1e | uVar9 >> 2;
                  *(uint *)(puVar21 + -0x10) = uVar9 * 0x40000000;
                  *(undefined4 *)(puVar21 + -0x14) = 0x52080d;
                  uVar23 = __alldiv();
                  local_cc = (undefined4)((ulonglong)uVar23 >> 0x20);
                  local_2c = 0;
                  if (0 < local_6c) {
                    do {
                      iVar7 = local_2c * 8;
                      iVar11 = *(int *)(iVar7 + *(int *)(iVar14 + 0x7c));
                      iVar15 = *(int *)(iVar7 + 4 + *(int *)(iVar14 + 0x7c));
                      if (iVar11 != 0 || iVar15 != 0) {
                        *(undefined4 *)(puVar21 + -4) = local_cc;
                        *(int *)(puVar21 + -8) = (int)uVar23;
                        *(int *)(puVar21 + -0xc) = iVar15;
                        *(int *)(puVar21 + -0x10) = iVar11;
                        *(undefined4 *)(puVar21 + -0x14) = 0x520856;
                        uVar25 = __allmul();
                        uVar18 = (uint)((ulonglong)uVar25 >> 0x20);
                        uVar16 = (uint)uVar25 >> 0x1e | uVar18 << 2;
                        uVar12 = uVar16 * 0x8000;
                        puVar17 = (uint *)(*(int *)(param_1 + 0x8d8) + iVar7);
                        uVar9 = *puVar17;
                        *puVar17 = *puVar17 + uVar12;
                        puVar17[1] = puVar17[1] +
                                     (((int)uVar16 >> 0x1f) << 0xf | (uVar18 & 0x3fffffff) >> 0xf) +
                                     (uint)CARRY4(uVar9,uVar12);
                      }
                      local_2c = local_2c + 1;
                    } while (local_2c < local_6c);
                  }
                  local_2c = 0;
                  piVar22 = local_74;
                  iVar11 = local_60;
                  iVar7 = local_40;
                  if (0 < local_70) {
                    do {
                      iVar7 = local_2c * 8;
                      iVar11 = *(int *)(iVar7 + *(int *)(iVar14 + 0xa4));
                      iVar15 = *(int *)(iVar7 + 4 + *(int *)(iVar14 + 0xa4));
                      if (iVar11 != 0 || iVar15 != 0) {
                        *(undefined4 *)(puVar21 + -4) = local_cc;
                        *(int *)(puVar21 + -8) = (int)uVar23;
                        *(int *)(puVar21 + -0xc) = iVar15;
                        *(int *)(puVar21 + -0x10) = iVar11;
                        *(undefined4 *)(puVar21 + -0x14) = 0x5208b9;
                        uVar25 = __allmul();
                        uVar18 = (uint)((ulonglong)uVar25 >> 0x20);
                        uVar16 = (uint)uVar25 >> 0x1e | uVar18 << 2;
                        uVar12 = uVar16 * 0x8000;
                        puVar17 = (uint *)(*(int *)(param_1 + 0x900) + iVar7);
                        uVar9 = *puVar17;
                        *puVar17 = *puVar17 + uVar12;
                        puVar17[1] = puVar17[1] +
                                     (((int)uVar16 >> 0x1f) << 0xf | (uVar18 & 0x3fffffff) >> 0xf) +
                                     (uint)CARRY4(uVar9,uVar12);
                      }
                      local_2c = local_2c + 1;
                      piVar22 = local_74;
                      iVar11 = local_60;
                      iVar7 = local_40;
                    } while (local_2c < local_70);
                  }
                }
              }
            }
            local_48 = local_48 + 0x10;
            local_18 = (int *)((int)local_18 + 1);
            local_60 = iVar14;
          } while ((int)local_18 < local_1c);
        }
        iVar14 = local_20;
        *(undefined4 *)(puVar21 + -4) = 0;
        *(int *)(puVar21 + -8) = iVar7;
        *(int *)(puVar21 + -0xc) = iVar14;
        *(undefined4 *)(puVar21 + -0x10) = 0x520917;
        FUN_00969520();
        if ((char)local_4c == '\0') {
          piVar22[3] = *piVar22;
        }
        else {
          iVar7 = 0;
          iVar14 = piVar22[0x34] - piVar22[0x33] >> 3;
          if (0 < iVar14) {
            do {
              iVar11 = piVar22[0x33];
              *(undefined4 *)(iVar11 + iVar7 * 8) = DAT_0131ba28;
              *(undefined4 *)(iVar11 + 4 + iVar7 * 8) = DAT_0131ba2c;
              iVar7 = iVar7 + 1;
            } while (iVar7 < iVar14);
          }
          piVar22[3] = 0;
        }
        *(int *)(puVar21 + -4) = local_1c;
        *(undefined4 *)(puVar21 + -8) = 0x520982;
        FUN_00969bd0();
        piVar10 = local_b8;
        if (*piVar22 == 0) {
          *piVar22 = 1;
        }
      }
      *(int *)(puVar21 + -4) = local_28;
      *(undefined4 *)(puVar21 + -8) = 0;
      *(int *)(puVar21 + -0xc) = iVar7;
      *(undefined4 *)(puVar21 + -0x10) = 0x5209aa;
      FUN_00969520();
      local_68 = 0;
      lVar24 = 0;
      local_18 = (int *)0x0;
      lVar26 = 0;
      if (0 < local_1c) {
        do {
          lVar24 = lVar26;
          if (*(int *)(local_20 + 0x10) - *(int *)(local_20 + 0xc) >> 2 < (int)local_18) {
            *(undefined4 *)(puVar21 + -4) = 0x5209e2;
            iVar7 = FUN_0096bb70();
          }
          else {
            iVar7 = *(int *)(*(int *)(local_20 + 0xc) + (int)local_18 * 4);
          }
          if (*(int *)(iVar7 + 0x3c0) != 0 || *(int *)(iVar7 + 0x3c4) != 0) {
            uVar9 = *(uint *)(local_84 + (int)local_18 * 4);
            local_c0[0] = *(int *)(iVar7 + 0x3c0);
            *(int *)(puVar21 + -4) = *(int *)(iVar7 + 0x3c4);
            *(int *)(puVar21 + -8) = local_c0[0];
            *(uint *)(puVar21 + -0xc) = ((int)uVar9 >> 0x1f) << 0xf | uVar9 >> 0x11;
            *(uint *)(puVar21 + -0x10) = uVar9 << 0xf;
            *(undefined4 *)(puVar21 + -0x14) = 0x520a28;
            lVar26 = __allmul();
            lVar24 = (lVar26 >> 0xf) + lVar24;
          }
          local_18 = (int *)((int)local_18 + 1);
          lVar26 = lVar24;
        } while ((int)local_18 < local_1c);
      }
      local_30 = (uint *)(local_28 + 200);
      uVar9 = *local_30;
      if (uVar9 != 0) {
        *(uint *)(puVar21 + -4) = uVar9 >> 0x11;
        *(uint *)(puVar21 + -8) = uVar9 << 0xf;
        *(longlong *)(puVar21 + -0x10) = lVar24 << 0xf;
        local_b0 = uVar9 << 0xf;
        local_ac = uVar9 >> 0x11;
        *(undefined4 *)(puVar21 + -0x14) = 0x520a78;
        lVar24 = __alldiv();
        uVar9 = (uint)local_38;
        iVar7 = local_38._4_4_;
        *(uint *)(puVar21 + -4) = local_ac;
        *(int *)(puVar21 + -8) = local_b0;
        *(uint *)(puVar21 + -0xc) = iVar7 << 0xf | uVar9 >> 0x11;
        *(uint *)(puVar21 + -0x10) = uVar9 << 0xf;
        *(undefined4 *)(puVar21 + -0x14) = 0x520a9e;
        local_38 = __alldiv();
        if (0x8000 < lVar24) {
          lVar24 = 0x8000;
        }
      }
      *(undefined1 **)(puVar21 + -4) = local_e0;
      *(int *)(puVar21 + -8) = param_1;
      *(undefined4 *)(puVar21 + -0xc) = 0x520ac6;
      puVar13 = (undefined4 *)FUN_00532ea0();
      uVar8 = *puVar13;
      *(undefined4 *)(puVar21 + -4) = puVar13[1];
      *(undefined4 *)(puVar21 + -8) = uVar8;
      *(longlong *)(puVar21 + -0x10) = lVar24 << 0xf;
      *(undefined4 *)(puVar21 + -0x14) = 0x520adb;
      uVar23 = __alldiv();
      uVar9 = local_5c;
      iVar15 = (int)((ulonglong)uVar23 >> 0x20);
      *(uint *)(local_28 + 0xb8) = (uint)local_38;
      *(int *)(local_28 + 0xbc) = local_38._4_4_;
      iVar7 = (int)local_5c >> 0x1f;
      *(undefined4 *)(puVar21 + -4) = local_a8._4_4_;
      *(undefined4 *)(puVar21 + -8) = (undefined4)local_a8;
      *(uint *)(puVar21 + -0xc) = iVar7 << 0xf | uVar9 >> 0x11;
      *(uint *)(puVar21 + -0x10) = uVar9 << 0xf;
      *(undefined4 *)(puVar21 + -0x14) = 0x520b14;
      lVar24 = __allmul();
      iVar14 = local_28;
      lVar24 = (lVar24 >> 0xf) + local_58;
      uVar9 = (uint)lVar24;
      iVar19 = (int)((ulonglong)lVar24 >> 0x20);
      uVar16 = (uint)uVar23 + uVar9;
      uVar9 = (uint)CARRY4((uint)uVar23,uVar9);
      iVar7 = iVar15 + iVar19;
      iVar11 = iVar7 + uVar9;
      if ((iVar11 < 0) ||
         ((iVar11 == 0 || SCARRY4(iVar15,iVar19) != SCARRY4(iVar7,uVar9) && (uVar16 < 0x8001)))) {
        if ((iVar11 < 1) && (iVar11 < 0)) {
          local_68 = 0;
          local_68._4_4_ = 0;
          local_68._0_4_ = 0;
          uVar16 = (uint)local_68;
          iVar11 = local_68._4_4_;
        }
      }
      else {
        uVar16 = 0x8000;
        iVar11 = 0;
      }
      *(int *)(puVar21 + -4) = local_1c;
      *(uint *)(iVar14 + 0xc0) = uVar16;
      *(int *)(iVar14 + 0xc4) = iVar11;
      *(undefined4 *)(puVar21 + -8) = 0x520b71;
      FUN_00969bd0();
      local_8 = 0xffffffff;
      if (local_84 != 0) {
        *(int *)(puVar21 + -4) = local_84;
                    /* WARNING: Subroutine does not return */
        *(undefined **)(puVar21 + -8) = &UNK_00520b87;
        FUN_00aae91b();
      }
      local_44 = (int *)local_44[2];
      local_84 = 0;
      local_80 = 0;
      local_7c = 0;
    } while (local_44 != (int *)0x0);
  }
  iVar7 = local_20;
  puVar17 = local_3c;
  *(undefined4 *)(puVar21 + -4) = 0;
  *(undefined4 *)(puVar21 + -8) = 0;
  *(int *)(puVar21 + -0xc) = iVar7;
  *(undefined4 *)(puVar21 + -0x10) = 0x520bb4;
  FUN_00969520();
  uVar9 = *puVar17;
  if (uVar9 != 0) {
    *(undefined4 *)(puVar21 + -4) = 0;
    *(undefined4 *)(puVar21 + -8) = 0xc3500000;
    *(uint *)(puVar21 + -0xc) = uVar9 >> 2;
    *(uint *)(puVar21 + -0x10) = uVar9 << 0x1e;
    *(undefined4 *)(puVar21 + -0x14) = 0x520bd0;
    lVar24 = __alldiv();
    if (lVar24 == 0) {
      *(undefined4 *)(param_1 + 0x13e8) = 0;
      *(undefined4 *)(param_1 + 0x13ec) = 0;
    }
    else {
      uVar9 = *(uint *)(param_1 + 0x13e8);
      iVar7 = *(int *)(param_1 + 0x13ec);
      *(longlong *)(puVar21 + -8) = lVar24;
      *(uint *)(puVar21 + -0xc) = iVar7 << 0xf | uVar9 >> 0x11;
      *(uint *)(puVar21 + -0x10) = uVar9 << 0xf;
      *(undefined4 *)(puVar21 + -0x14) = 0x520bf2;
      uVar23 = __alldiv();
      *(undefined8 *)(param_1 + 0x13e8) = uVar23;
    }
  }
  *(undefined4 *)(puVar21 + -4) = 0x520c17;
  uVar23 = FUN_00b31c36();
  iVar7 = *(int *)(param_1 + 0x8dc) - *(int *)(param_1 + 0x8d8) >> 3;
  param_1 = 1;
  local_58 = uVar23;
  if (1 < iVar7) {
    do {
      local_58._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
      uVar4 = local_58._4_4_;
      plVar1 = (longlong *)(*(int *)(iVar3 + 0x8d8) + param_1 * 8);
      lVar24 = *plVar1;
      local_58 = uVar23;
      *(undefined4 *)(puVar21 + -4) = *(undefined4 *)(*(int *)(iVar3 + 0x8d8) + 4 + param_1 * 8);
      uVar8 = (undefined4)local_58;
      *(int *)(puVar21 + -8) = (int)lVar24;
      *(undefined4 *)(puVar21 + -0xc) = uVar4;
      *(undefined4 *)(puVar21 + -0x10) = uVar8;
      *(undefined4 *)(puVar21 + -0x14) = 0x520c61;
      lVar24 = __allmul();
      param_1 = param_1 + 1;
      *plVar1 = lVar24 >> 0xf;
      uVar23 = local_58;
    } while (param_1 < iVar7);
  }
  *(int *)(puVar21 + -4) = iVar3 + 0x8f8;
  *(undefined4 *)(puVar21 + -8) = 0x520c84;
  FUN_004be780();
  *(int *)(puVar21 + -4) = iVar3 + 0x8d0;
  *(undefined4 *)(puVar21 + -8) = 0x520c90;
  FUN_004be780();
  if (*(char *)(iVar3 + 0x120) == '\0') {
    *(undefined4 *)(puVar21 + -4) = 0;
    *(int *)(puVar21 + -8) = iVar3;
    *(undefined4 *)(puVar21 + -0xc) = 0x520cad;
    uVar8 = FUN_00514f20();
    *(undefined4 *)(iVar3 + 0x14e0) = uVar8;
  }
  else {
    *(undefined4 *)(iVar3 + 0x14e0) = 0;
  }
  puVar17 = local_3c;
  *(uint *)(puVar21 + -4) = *local_3c;
  *(undefined1 **)(puVar21 + -8) = local_e0;
  *(undefined4 *)(puVar21 + -0xc) = 0x520cd4;
  puVar13 = (undefined4 *)FUN_00520050();
  *(undefined4 *)(iVar3 + 0xdf0) = *puVar13;
  *(undefined4 *)(iVar3 + 0xdf4) = puVar13[1];
  *(uint *)(puVar21 + -0xc) = *puVar17;
  *(int **)(puVar21 + -0x10) = local_c0;
  *(undefined4 *)(puVar21 + -0x14) = 0x520cfd;
  puVar13 = (undefined4 *)FUN_00520050();
  *(undefined4 *)(iVar3 + 0xdf8) = *puVar13;
  *(undefined4 *)(iVar3 + 0xdfc) = puVar13[1];
  *(undefined4 *)(puVar21 + -4) = 0x520d18;
  FUN_0050b8f0();
  if ((0 < *(int *)(iVar3 + 0x1494)) &&
     (piVar10 = *(int **)(iVar3 + 0x1490), puVar17 = local_3c,
     *(int *)(iVar3 + 0x1488) < *(int *)(iVar3 + 0x1494))) {
    do {
      puVar17 = local_3c;
      if (piVar10 == (int *)0x0) break;
      iVar7 = *piVar10;
      piVar22 = *(int **)(iVar3 + 0x148c);
      piVar10 = (int *)piVar10[1];
      *(int *)(puVar21 + -4) = iVar7;
      for (; (piVar22 != (int *)0x0 && (*piVar22 != iVar7)); piVar22 = (int *)piVar22[2]) {
      }
      *(int **)(puVar21 + -4) = piVar22;
      *(undefined4 *)(puVar21 + -8) = 0x520d62;
      FUN_005f2ae0();
      puVar17 = local_3c;
    } while (*(int *)(iVar3 + 0x1488) < *(int *)(iVar3 + 0x1494));
  }
  if (((*(int *)(DAT_012588e8 + 0xb60) != 0) && (*(int *)(iVar3 + 0x20) != 0)) &&
     (*(int *)(iVar3 + 0x20) == *(int *)(DAT_012588e8 + 0xb60))) {
    *(uint *)(puVar21 + -4) = puVar17[0x2d] + puVar17[0x28] + puVar17[0x26];
    *(undefined4 *)(puVar21 + -8) = 0x520da9;
    FUN_0067f070();
  }
  ExceptionList = local_10;
  return;
}

