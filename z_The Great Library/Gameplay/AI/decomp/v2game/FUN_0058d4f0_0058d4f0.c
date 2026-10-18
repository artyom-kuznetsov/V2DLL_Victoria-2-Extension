// FUN_0058d4f0 @ 0058d4f0 body=[[0058d4f0, 0058d643] [0058d650, 0058d6e7] [0058d6eb, 0058d718] [0058d720, 0058d946] [0058d94a, 0058da28] [0058da2c, 0058db04] [0058db08, 0058dbc8] [0058dbcc, 0058dfbc] [0058dfc0, 0058dff4] [0058dff8, 0058e022] [0058e026, 0058e050] [0058e054, 0058e078] [0058e07c, 0058e09f] [0058e0a3, 0058e0e3] [0058e0e7, 0058e25d] [0058e261, 0058e291] [0058e295, 0058e2c0] [0058e2c4, 0058e2f1] [0058e2f5, 0058e420] [0058e424, 0058e456] [0058e45a, 0058e563] [0058e567, 0058e72e] [0058e732, 0058e75a] [0058e75e, 0058e797] [0058e79b, 0058e7af]]


void FUN_0058d4f0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int in_ECX;
  int *piVar17;
  longlong lVar18;
  int **ppiVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_1f4 [112];
  undefined4 uStack_184;
  undefined8 uStack_180;
  undefined8 uStack_178;
  int iStack_164;
  int iStack_158;
  int *piStack_154;
  uint auStack_150 [3];
  undefined4 uStack_144;
  uint uStack_140;
  uint uStack_13c;
  int local_134;
  undefined1 *local_130;
  int iStack_12c;
  longlong lStack_128;
  int iStack_11c;
  int *piStack_118;
  uint auStack_114 [3];
  undefined4 uStack_108;
  uint uStack_104;
  uint uStack_100;
  int *local_f8;
  uint uStack_f4;
  uint auStack_f0 [3];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined1 uStack_d8;
  uint auStack_d4 [3];
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint uStack_c0;
  undefined8 uStack_b8;
  uint uStack_b0;
  uint auStack_ac [3];
  undefined4 uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  int *local_90;
  undefined1 auStack_8c [4];
  uint auStack_88 [4];
  undefined4 uStack_78;
  uint uStack_74;
  uint auStack_6c [4];
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_50;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_34;
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  iVar14 = DAT_01258a48;
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9c2f8;
  pvStack_14 = ExceptionList;
  local_90 = *(int **)(in_ECX + 0x3c);
  piVar17 = (int *)(DAT_01258a48 + 0x28);
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0x40) * 4);
  local_f8 = *(int **)(iVar5 + 0x84c);
  uStack_178._4_4_ = (uint *)0x58d558;
  ExceptionList = &pvStack_14;
  local_134 = in_ECX;
  local_130 = (undefined1 *)iVar5;
  cVar4 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x20))();
  if (cVar4 != '\0') {
    *(undefined4 *)(iVar5 + 0x84c) = *(undefined4 *)(in_ECX + 0x44);
    uStack_178._0_4_ = (char *)0x58d56b;
    uStack_178._4_4_ = (uint *)iVar5;
    FUN_0051c890();
    uStack_178._0_4_ = (char *)0x58d571;
    uStack_178._4_4_ = (uint *)iVar5;
    FUN_0050ea30();
  }
  iVar5 = *(int *)(DAT_012586dc + 0x50);
  uStack_180._4_4_ = (char *)(*(int *)(iVar5 + 0xf4) << 0xf | *(uint *)(iVar5 + 0xf0) >> 0x11);
  uStack_178._4_4_ = (uint *)0x0;
  uStack_178._0_4_ = (char *)0x320000;
  uStack_180._0_4_ = (int **)(*(uint *)(iVar5 + 0xf0) << 0xf);
  uStack_184 = 0x58d59c;
  uStack_b8 = __alldiv();
  uStack_180._4_4_ = (char *)(*(int *)(iVar5 + 0xfc) << 0xf | *(uint *)(iVar5 + 0xf8) >> 0x11);
  uStack_178._4_4_ = (uint *)0x0;
  uStack_178._0_4_ = (char *)0x320000;
  uStack_180._0_4_ = (int **)(*(uint *)(iVar5 + 0xf8) << 0xf);
  uStack_184 = 0x58d5ca;
  lStack_128 = __alldiv();
  uStack_178._4_4_ = (uint *)0x58d5d9;
  iVar5 = FUN_00526870();
  uStack_178._4_4_ = (uint *)0x58d5e2;
  iVar6 = FUN_005268b0();
  uVar7 = iVar6 + iVar5;
  uStack_178._4_4_ = (uint *)0x58d5fb;
  uStack_178 = FUN_00b31c36();
  uStack_184 = 0x58d604;
  uStack_180._0_4_ = (int **)(uVar7 * 0x8000);
  uStack_180._4_4_ = (char *)(((int)uVar7 >> 0x1f) << 0xf | uVar7 >> 0x11);
  lVar18 = __allmul();
  uStack_180 = (lVar18 >> 0xf) + 0x8000;
  uStack_184 = 0x58d623;
  uStack_178 = lStack_128;
  lVar18 = __allmul();
  lStack_128 = lVar18 >> 0xf;
  piVar10 = *(int **)((int)local_130 + 0x9d8);
  iVar5 = DAT_0131bb34;
  while ((iVar2 = local_134, iVar6 = DAT_012587e4, *(int **)((int)local_130 + 0x9d8) <= piVar10 &&
         (piVar10 < *(int **)((int)local_130 + 0x9dc)))) {
    iStack_12c = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar10 * 4);
    piVar10 = piVar10 + 1;
    local_90 = piVar10;
    if (iVar5 == 0) {
      uStack_178._4_4_ = (uint *)0x188;
      uStack_178._0_4_ = (char *)0x58d699;
      iVar5 = FUN_00aae9af();
      uStack_c = 0;
      if (iVar5 == 0) {
        iVar5 = 0;
      }
      else {
        uStack_178._4_4_ = (uint *)0x58d6b2;
        iVar5 = FUN_0041a160();
      }
      iVar6 = DAT_0131bb34;
      uStack_c = 1;
      if ((iVar5 != DAT_0131bb34) && (DAT_0131bb34 != 0)) {
        uStack_178._4_4_ = (uint *)DAT_0131bb34;
        uStack_178._0_4_ = (char *)0x58d6de;
        FUN_0096dd80();
        uStack_178._4_4_ = (uint *)iVar6;
                    /* WARNING: Subroutine does not return */
        uStack_178._0_4_ = &UNK_0058d6e8;
        FUN_00aae91b();
      }
      uStack_c = 0xffffffff;
      DAT_0131bb34 = iVar5;
    }
    iStack_164 = *(int *)(iVar5 + 0x10) - *(int *)(iVar5 + 0xc) >> 2;
    if (0 < iStack_164) {
      iStack_158 = 0;
      do {
        uStack_f4 = *(int *)(*(int *)(iStack_12c + 0x194) + iStack_158);
        iVar5 = DAT_0131bb34;
        iVar6 = local_134;
        piVar10 = local_90;
        while (iVar2 = uStack_f4, DAT_0131bb34 = iVar5, local_134 = iVar6, local_90 = piVar10,
              iVar2 != 0) {
          uStack_f4 = *(int *)(iVar2 + 0x27c);
          if (local_f8[0x15] != *(int *)(*(int *)(iVar6 + 0x44) + 0x54)) {
            puVar1 = (undefined4 *)(*(int *)(iVar2 + 0x7c) + *(int *)(local_f8[0x15] + 0x28) * 8);
            uStack_180._4_4_ = (char *)puVar1[1];
            uStack_180._0_4_ = (int **)*puVar1;
            uStack_184 = 0x58d784;
            uStack_178 = lStack_128;
            lVar18 = __allmul();
            uVar8 = (uint)(lVar18 >> 0xf);
            puVar12 = (uint *)(iVar2 + 0x120);
            uVar7 = *puVar12;
            *puVar12 = *puVar12 + uVar8;
            *(int *)(iVar2 + 0x124) =
                 *(int *)(iVar2 + 0x124) + (int)((ulonglong)(lVar18 >> 0xf) >> 0x20) +
                 (uint)CARRY4(uVar7,uVar8);
            if (*(int *)(iVar2 + 0x124) < 1) {
              if (*(int *)(iVar2 + 0x124) < 0) {
                *(undefined4 *)(iVar2 + 0x120) = 0;
                *(undefined4 *)(iVar2 + 0x124) = 0;
              }
              if ((-1 < *(int *)(iVar2 + 0x124)) &&
                 ((0 < *(int *)(iVar2 + 0x124) || (0x50000 < *(uint *)(iVar2 + 0x120)))))
              goto LAB_0058d7cb;
            }
            else {
LAB_0058d7cb:
              *(undefined4 *)(iVar2 + 0x120) = 0x50000;
              *(undefined4 *)(iVar2 + 0x124) = 0;
            }
            puVar1 = (undefined4 *)
                     (*(int *)(iVar2 + 0x7c) +
                     *(int *)(*(int *)(*(int *)(iVar6 + 0x44) + 0x54) + 0x28) * 8);
            uStack_180._4_4_ = (char *)puVar1[1];
            uStack_180._0_4_ = (int **)*puVar1;
            uStack_184 = 0x58d806;
            uStack_178 = uStack_b8;
            lVar18 = __allmul();
            uVar8 = (uint)(lVar18 >> 0xf);
            puVar12 = (uint *)(iVar2 + 0x120);
            uVar7 = *puVar12;
            *puVar12 = *puVar12 + uVar8;
            *(int *)(iVar2 + 0x124) =
                 *(int *)(iVar2 + 0x124) + (int)((ulonglong)(lVar18 >> 0xf) >> 0x20) +
                 (uint)CARRY4(uVar7,uVar8);
            if (*(int *)(iVar2 + 0x124) < 1) {
              if (*(int *)(iVar2 + 0x124) < 0) {
                *(undefined4 *)(iVar2 + 0x120) = 0;
                *(undefined4 *)(iVar2 + 0x124) = 0;
              }
              uStack_180 = CONCAT44(uStack_180._4_4_,(int **)uStack_180);
              if ((*(int *)(iVar2 + 0x124) < 0) ||
                 ((*(int *)(iVar2 + 0x124) < 1 &&
                  (uStack_180 = CONCAT44(uStack_180._4_4_,(int **)uStack_180),
                  *(uint *)(iVar2 + 0x120) < 0x50001)))) goto LAB_0058d85d;
            }
            *(undefined4 *)(iVar2 + 0x120) = 0x50000;
            *(undefined4 *)(iVar2 + 0x124) = 0;
            uStack_180 = CONCAT44(uStack_180._4_4_,(int **)uStack_180);
          }
LAB_0058d85d:
          iStack_11c = 0;
          iVar9 = *(int *)(iVar14 + 0x2c) - *piVar17 >> 2;
          iVar5 = DAT_0131bb34;
          iVar6 = local_134;
          piVar10 = local_90;
          if (0 < iVar9) {
            do {
              iVar5 = iStack_11c * 4;
              uStack_178._4_4_ = (uint *)0x58d898;
              cVar4 = (**(code **)(**(int **)(iVar5 + *piVar17) + 0x18))();
              if (cVar4 != '\0') {
                iVar5 = *(int *)(*piVar17 + iVar5);
                if (*(int *)(iVar5 + 0x5c) == 1) {
                  uStack_178._4_4_ = (uint *)0x58d994;
                  cVar4 = (**(code **)(*local_f8 + 0x20))();
                  if (cVar4 == '\0') {
                    piVar10 = DAT_01258a40;
                    if (DAT_01258a40 == (int *)0x0) {
                      uStack_178._4_4_ = (uint *)0x1d8;
                      uStack_178._0_4_ = (char *)0x58d9b0;
                      piVar10 = (int *)FUN_00aae9af();
                      uStack_c = 4;
                      if (piVar10 == (int *)0x0) goto LAB_0058d96d;
                      uStack_178._4_4_ = (uint *)0x7;
                      uStack_178._0_4_ = "noIssue";
                      uStack_74 = 0xf;
                      uStack_78 = 0;
                      auStack_88[0] = auStack_88[0] & 0xffffff00;
                      uStack_180._4_4_ = (char *)0x58d9f4;
                      piStack_154 = piVar10;
                      FUN_00409350();
                      uStack_178._4_4_ = (uint *)0x0;
                      uStack_178._0_4_ = (char *)auStack_88;
                      uStack_c = CONCAT31(uStack_c._1_3_,5);
                      uStack_180._4_4_ = (char *)DAT_0131be94;
                      uStack_184 = 0x58da12;
                      uStack_180._0_4_ = (int **)piVar10;
                      FUN_009740b0();
                      if (0xf < uStack_74) {
                        uStack_178._4_4_ = (uint *)auStack_88[0];
                    /* WARNING: Subroutine does not return */
                        uStack_178._0_4_ = &UNK_0058da29;
                        FUN_00aae91b();
                      }
                      uStack_74 = 0xf;
                      uStack_78 = 0;
                      auStack_88[0] = auStack_88[0] & 0xffffff00;
                      *piVar10 = (int)CNullIssue::vftable;
                      goto LAB_0058d96f;
                    }
                  }
                  else {
                    piVar10 = *(int **)(local_f8[0x16] + *(int *)(iVar5 + 0x50) * 4);
                  }
                }
                else {
                  piVar10 = DAT_01258a40;
                  if (DAT_01258a40 == (int *)0x0) {
                    uStack_178._4_4_ = (uint *)0x1d8;
                    uStack_178._0_4_ = (char *)0x58d8cb;
                    piVar10 = (int *)FUN_00aae9af();
                    uStack_c = 2;
                    if (piVar10 == (int *)0x0) {
LAB_0058d96d:
                      piVar10 = (int *)0x0;
                    }
                    else {
                      uStack_178._4_4_ = (uint *)0x7;
                      uStack_178._0_4_ = "noIssue";
                      uStack_58 = 0xf;
                      uStack_5c = 0;
                      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
                      uStack_180._4_4_ = (char *)0x58d913;
                      piStack_154 = piVar10;
                      FUN_00409350();
                      uStack_178._4_4_ = (uint *)0x0;
                      uStack_178._0_4_ = (char *)auStack_6c;
                      uStack_c = CONCAT31(uStack_c._1_3_,3);
                      uStack_180._4_4_ = (char *)DAT_0131be94;
                      uStack_184 = 0x58d930;
                      uStack_180._0_4_ = (int **)piVar10;
                      FUN_009740b0();
                      if (0xf < uStack_58) {
                        uStack_178._4_4_ = (uint *)auStack_6c[0];
                    /* WARNING: Subroutine does not return */
                        uStack_178._0_4_ = &UNK_0058d947;
                        FUN_00aae91b();
                      }
                      uStack_58 = 0xf;
                      uStack_5c = 0;
                      auStack_6c[0] = auStack_6c[0] & 0xffffff00;
                      *piVar10 = (int)CNullIssue::vftable;
                    }
LAB_0058d96f:
                    uStack_c = 0xffffffff;
                    DAT_01258a40 = piVar10;
                  }
                }
                piStack_118 = piVar10;
                iVar5 = *(int *)(*piVar17 + iStack_11c * 4);
                piStack_154 = *(int **)(local_134 + 0x44);
                if (*(int *)(iVar5 + 0x5c) == 1) {
                  uStack_178._4_4_ = (uint *)0x58db45;
                  cVar4 = (**(code **)(*piStack_154 + 0x20))();
                  if (cVar4 == '\0') {
                    piVar10 = DAT_01258a40;
                    if (DAT_01258a40 == (int *)0x0) {
                      uStack_178._4_4_ = (uint *)0x1d8;
                      uStack_178._0_4_ = (char *)0x58db65;
                      piVar10 = (int *)FUN_00aae9af();
                      uStack_c = 8;
                      piStack_154 = piVar10;
                      if (piVar10 == (int *)0x0) {
                        uStack_c = 0xffffffff;
                        DAT_01258a40 = (int *)0x0;
                        piVar10 = (int *)0x0;
                      }
                      else {
                        uStack_178._4_4_ = (uint *)0x7;
                        uStack_178._0_4_ = "noIssue";
                        uStack_13c = 0xf;
                        uStack_140 = 0;
                        auStack_150[0] = auStack_150[0] & 0xffffff00;
                        uStack_180._4_4_ = (char *)0x58db9d;
                        FUN_00409350();
                        uStack_178._4_4_ = (uint *)0x0;
                        uStack_178._0_4_ = (char *)auStack_150;
                        uStack_c = CONCAT31(uStack_c._1_3_,9);
                        uStack_180._4_4_ = (char *)DAT_0131be94;
                        uStack_184 = 0x58dbb8;
                        uStack_180._0_4_ = (int **)piVar10;
                        FUN_009740b0();
                        if (0xf < uStack_13c) {
                          uStack_178._4_4_ = (uint *)auStack_150[0];
                    /* WARNING: Subroutine does not return */
                          uStack_178._0_4_ = &UNK_0058dbc9;
                          FUN_00aae91b();
                        }
                        uStack_c = 0xffffffff;
                        uStack_13c = 0xf;
                        uStack_140 = 0;
                        auStack_150[0] = auStack_150[0] & 0xffffff00;
                        *piVar10 = (int)CNullIssue::vftable;
                        DAT_01258a40 = piVar10;
                      }
                    }
                  }
                  else {
                    piVar10 = *(int **)(piStack_154[0x16] + *(int *)(iVar5 + 0x50) * 4);
                  }
                }
                else {
                  piVar10 = DAT_01258a40;
                  if (DAT_01258a40 == (int *)0x0) {
                    uStack_178._4_4_ = (uint *)0x1d8;
                    uStack_178._0_4_ = (char *)0x58daa1;
                    piVar10 = (int *)FUN_00aae9af();
                    uStack_c = 6;
                    piStack_154 = piVar10;
                    if (piVar10 == (int *)0x0) {
                      piVar10 = (int *)0x0;
                    }
                    else {
                      uStack_178._4_4_ = (uint *)0x7;
                      uStack_178._0_4_ = "noIssue";
                      uStack_100 = 0xf;
                      uStack_104 = 0;
                      auStack_114[0] = auStack_114[0] & 0xffffff00;
                      uStack_180._4_4_ = (char *)0x58dad9;
                      FUN_00409350();
                      uStack_178._4_4_ = (uint *)0x0;
                      uStack_178._0_4_ = (char *)auStack_114;
                      uStack_c = CONCAT31(uStack_c._1_3_,7);
                      uStack_180._4_4_ = (char *)DAT_0131be94;
                      uStack_184 = 0x58daf4;
                      uStack_180._0_4_ = (int **)piVar10;
                      FUN_009740b0();
                      if (0xf < uStack_100) {
                        uStack_178._4_4_ = (uint *)auStack_114[0];
                    /* WARNING: Subroutine does not return */
                        uStack_178._0_4_ = &UNK_0058db05;
                        FUN_00aae91b();
                      }
                      uStack_100 = 0xf;
                      uStack_104 = 0;
                      auStack_114[0] = auStack_114[0] & 0xffffff00;
                      *piVar10 = (int)CNullIssue::vftable;
                    }
                    uStack_c = 0xffffffff;
                    DAT_01258a40 = piVar10;
                  }
                }
                if (piStack_118 != piVar10) {
                  uStack_180._4_4_ = *(char **)(*(int *)(iVar2 + 0xa4) + 4 + piStack_118[0x14] * 8);
                  uStack_180._0_4_ = *(int ***)(*(int *)(iVar2 + 0xa4) + piStack_118[0x14] * 8);
                  uStack_184 = 0x58dc46;
                  uStack_178 = lStack_128;
                  lVar18 = __allmul();
                  uVar8 = (uint)(lVar18 >> 0xf);
                  puVar12 = (uint *)(iVar2 + 0x120);
                  uVar7 = *puVar12;
                  *puVar12 = *puVar12 + uVar8;
                  *(int *)(iVar2 + 0x124) =
                       *(int *)(iVar2 + 0x124) + (int)((ulonglong)(lVar18 >> 0xf) >> 0x20) +
                       (uint)CARRY4(uVar7,uVar8);
                  if (*(int *)(iVar2 + 0x124) < 1) {
                    if (*(int *)(iVar2 + 0x124) < 0) {
                      *(undefined4 *)(iVar2 + 0x120) = 0;
                      *(undefined4 *)(iVar2 + 0x124) = 0;
                    }
                    if ((-1 < *(int *)(iVar2 + 0x124)) &&
                       ((0 < *(int *)(iVar2 + 0x124) || (0x50000 < *(uint *)(iVar2 + 0x120)))))
                    goto LAB_0058dc8d;
                  }
                  else {
LAB_0058dc8d:
                    *(undefined4 *)(iVar2 + 0x120) = 0x50000;
                    *(undefined4 *)(iVar2 + 0x124) = 0;
                  }
                  uStack_180._4_4_ = *(char **)(*(int *)(iVar2 + 0xa4) + 4 + piVar10[0x14] * 8);
                  uStack_180._0_4_ = *(int ***)(*(int *)(iVar2 + 0xa4) + piVar10[0x14] * 8);
                  uStack_184 = 0x58dcc4;
                  uStack_178 = uStack_b8;
                  lVar18 = __allmul();
                  uVar8 = (uint)(lVar18 >> 0xf);
                  puVar12 = (uint *)(iVar2 + 0x120);
                  uVar7 = *puVar12;
                  *puVar12 = *puVar12 + uVar8;
                  *(int *)(iVar2 + 0x124) =
                       *(int *)(iVar2 + 0x124) + (int)((ulonglong)(lVar18 >> 0xf) >> 0x20) +
                       (uint)CARRY4(uVar7,uVar8);
                  if (*(int *)(iVar2 + 0x124) < 1) {
                    if (*(int *)(iVar2 + 0x124) < 0) {
                      *(undefined4 *)(iVar2 + 0x120) = 0;
                      *(undefined4 *)(iVar2 + 0x124) = 0;
                    }
                    uStack_180 = CONCAT44(uStack_180._4_4_,(int **)uStack_180);
                    if ((*(int *)(iVar2 + 0x124) < 0) ||
                       ((*(int *)(iVar2 + 0x124) < 1 &&
                        (uStack_180 = CONCAT44(uStack_180._4_4_,(int **)uStack_180),
                        *(uint *)(iVar2 + 0x120) < 0x50001)))) goto LAB_0058dd1b;
                  }
                  *(undefined4 *)(iVar2 + 0x120) = 0x50000;
                  *(undefined4 *)(iVar2 + 0x124) = 0;
                  uStack_180 = CONCAT44(uStack_180._4_4_,(int **)uStack_180);
                }
              }
LAB_0058dd1b:
              iStack_11c = iStack_11c + 1;
              iVar5 = DAT_0131bb34;
              iVar6 = local_134;
              piVar10 = local_90;
            } while (iStack_11c < iVar9);
          }
        }
        iStack_158 = iStack_158 + 0x10;
        iStack_164 = iStack_164 + -1;
        uStack_f4 = 0;
      } while (iStack_164 != 0);
    }
  }
  *(undefined4 *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(local_134 + 0x40) * 4) + 0x4bc) =
       *(undefined4 *)(DAT_012588e8 + 0xb0c);
  local_90 = *(int **)(local_134 + 0x3c);
  uStack_178._4_4_ = *(uint **)(*(int *)(iVar6 + 4) + *(int *)(local_134 + 0x40) * 4);
  uStack_178._0_4_ = (char *)0x58dd9b;
  FUN_00520150();
  if (*(int *)(iVar2 + 0x40) == *(int *)(DAT_012588e8 + 0xb60)) {
    uStack_74 = 0xf;
    uStack_78 = 0;
    auStack_88[0] = auStack_88[0] & 0xffffff00;
    uStack_c = 10;
    iVar5 = *(int *)(iVar14 + 0x2c) - *piVar17 >> 2;
    iStack_158 = 0;
    if (0 < iVar5) {
      do {
        uStack_178._4_4_ = (uint *)0x58de09;
        cVar4 = (**(code **)(**(int **)(iStack_158 * 4 + *piVar17) + 0x18))();
        if (cVar4 != '\0') {
          uStack_178._4_4_ = (uint *)0x3;
          uStack_178._0_4_ = &DAT_00dfc7b4;
          uStack_100 = 0xf;
          uStack_104 = 0;
          auStack_114[0] = auStack_114[0] & 0xffffff00;
          uStack_180._4_4_ = (char *)0x58de32;
          FUN_00409350();
          uStack_c._0_1_ = 0xb;
          uStack_178._4_4_ = (uint *)0x4;
          uStack_178._0_4_ = &DAT_00dfc940;
          uStack_13c = 0xf;
          uStack_140 = 0;
          auStack_150[0] = auStack_150[0] & 0xffffff00;
          uStack_180._4_4_ = (char *)0x58de56;
          FUN_00409350();
          uStack_c._0_1_ = 0xc;
          uVar3 = (undefined1)uStack_c;
          uStack_c._0_1_ = 0xc;
          iVar14 = *(int *)(*piVar17 + iStack_158 * 4);
          piVar10 = *(int **)(local_134 + 0x44);
          if (*(int *)(iVar14 + 0x5c) == 1) {
            uStack_178._4_4_ = (uint *)0x58ded5;
            uStack_c._0_1_ = uVar3;
            cVar4 = (**(code **)(*piVar10 + 0x20))();
            uVar3 = (undefined1)uStack_c;
            if (cVar4 == '\0') {
              piVar10 = DAT_01258a40;
              if (DAT_01258a40 == (int *)0x0) {
                uStack_178._4_4_ = (uint *)0x1d8;
                uStack_178._0_4_ = (char *)0x58deed;
                iStack_12c = FUN_00aae9af();
                uStack_c._0_1_ = 0xe;
                if (iStack_12c == 0) goto LAB_0058deb8;
                uStack_178._4_4_ = (uint *)0x58df07;
                piVar10 = (int *)FUN_009747a0();
                uStack_c._0_1_ = 0xc;
                DAT_01258a40 = piVar10;
                uVar3 = (undefined1)uStack_c;
              }
            }
            else {
              piVar10 = *(int **)(piVar10[0x16] + *(int *)(iVar14 + 0x50) * 4);
            }
          }
          else {
            piVar10 = DAT_01258a40;
            if (DAT_01258a40 == (int *)0x0) {
              uStack_178._4_4_ = (uint *)0x1d8;
              uStack_178._0_4_ = (char *)0x58de8c;
              iStack_12c = FUN_00aae9af();
              uStack_c._0_1_ = 0xd;
              if (iStack_12c == 0) {
LAB_0058deb8:
                uStack_c._0_1_ = 0xc;
                DAT_01258a40 = (int *)0x0;
                piVar10 = (int *)0x0;
                uVar3 = (undefined1)uStack_c;
              }
              else {
                uStack_178._4_4_ = (uint *)0x58dea6;
                piVar10 = (int *)FUN_009747a0();
                uStack_c._0_1_ = 0xc;
                DAT_01258a40 = piVar10;
                uVar3 = (undefined1)uStack_c;
              }
            }
          }
          uStack_c._0_1_ = uVar3;
          uStack_178._4_4_ = auStack_ac;
          uStack_178._0_4_ = (char *)0x58df31;
          uVar11 = (**(code **)(*piVar10 + 0x18))();
          uStack_c._0_1_ = 0xf;
          uStack_178._4_4_ = *(uint **)(*piVar17 + iStack_158 * 4);
          uStack_178._0_4_ = (char *)0x58df59;
          FUN_00974c50();
          uStack_178._4_4_ = auStack_150;
          uStack_c._0_1_ = 0x10;
          uStack_178._0_4_ = (char *)0x58df74;
          FUN_00988f20();
          uStack_c._0_1_ = 0x11;
          uStack_178._0_4_ = (char *)0x58df8b;
          uStack_178._4_4_ = (uint *)uVar11;
          FUN_00988f20();
          uStack_178._4_4_ = auStack_114;
          uStack_c._0_1_ = 0x12;
          uStack_178._0_4_ = (char *)0x58dfa6;
          FUN_00988f20();
          if (0xf < uStack_58) {
            uStack_178._4_4_ = (uint *)auStack_6c[0];
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058dfbd;
            FUN_00aae91b();
          }
          uStack_58 = 0xf;
          uStack_5c = 0;
          auStack_6c[0] = auStack_6c[0] & 0xffffff00;
          if (0xf < uStack_20) {
            uStack_178._4_4_ = (uint *)uStack_34;
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058dff5;
            FUN_00aae91b();
          }
          uStack_20 = 0xf;
          uStack_24 = 0;
          uStack_34 = uStack_34 & 0xffffff00;
          if (0xf < uStack_3c) {
            uStack_178._4_4_ = (uint *)uStack_50;
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058e023;
            FUN_00aae91b();
          }
          uStack_3c = 0xf;
          uStack_40 = 0;
          uStack_50 = uStack_50 & 0xffffff00;
          if (0xf < uStack_98) {
            uStack_178._4_4_ = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058e051;
            FUN_00aae91b();
          }
          uStack_98 = 0xf;
          uStack_9c = 0;
          auStack_ac[0] = auStack_ac[0] & 0xffffff00;
          if (0xf < uStack_13c) {
            uStack_178._4_4_ = (uint *)auStack_150[0];
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058e079;
            FUN_00aae91b();
          }
          uStack_13c = 0xf;
          uStack_140 = 0;
          auStack_150[0] = auStack_150[0] & 0xffffff00;
          uStack_c._0_1_ = 0x19;
          if (0xf < uStack_100) {
            uStack_178._4_4_ = (uint *)auStack_114[0];
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058e0a0;
            FUN_00aae91b();
          }
          uStack_178._4_4_ = (uint *)0xffffffff;
          uStack_178._0_4_ = (char *)0x0;
          uStack_180._4_4_ = (char *)auStack_f0;
          uStack_100 = 0xf;
          uStack_104 = 0;
          auStack_114[0] = auStack_114[0] & 0xffffff00;
          uStack_180._0_4_ = (int **)0x58e0c6;
          FUN_00448aa0();
          uStack_c = CONCAT31(uStack_c._1_3_,10);
          if (0xf < uStack_dc) {
            uStack_178._4_4_ = (uint *)auStack_f0[0];
                    /* WARNING: Subroutine does not return */
            uStack_178._0_4_ = &UNK_0058e0e4;
            FUN_00aae91b();
          }
        }
        iStack_158 = iStack_158 + 1;
      } while (iStack_158 < iVar5);
    }
    uStack_178._4_4_ = (uint *)local_130;
    uStack_178._0_4_ = (char *)0x58e104;
    piVar17 = (int *)FUN_005061e0();
    uStack_178._4_4_ = (uint *)0x5;
    uStack_178._0_4_ = "PARTY";
    uStack_13c = 0xf;
    uStack_140 = 0;
    auStack_150[0] = auStack_150[0] & 0xffffff00;
    uStack_180._4_4_ = (char *)0x58e126;
    FUN_00409350();
    uStack_178._4_4_ = auStack_ac;
    uStack_c._0_1_ = 0x1a;
    uStack_178._0_4_ = *(char **)(local_134 + 0x44);
    uStack_180._4_4_ = (char *)0x58e143;
    puVar12 = (uint *)FUN_009790b0();
    uStack_178._4_4_ = (uint *)0xffffffff;
    uStack_c._0_1_ = 0x1b;
    uStack_178._0_4_ = (char *)0x0;
    uStack_180._4_4_ = (char *)auStack_150;
    uStack_dc = 0xf;
    uStack_e0 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff00;
    uStack_180._0_4_ = (int **)0x58e17a;
    FUN_00408ed0();
    uStack_178._4_4_ = (uint *)0xffffffff;
    uStack_c._0_1_ = 0x1c;
    uStack_178._0_4_ = (char *)0x0;
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    auStack_d4[0] = auStack_d4[0] & 0xffffff00;
    uStack_180._0_4_ = (int **)0x58e1ab;
    uStack_180._4_4_ = (char *)puVar12;
    FUN_00408ed0();
    uStack_c._0_1_ = 0x1d;
    iVar5 = piVar17[1];
    uStack_178._4_4_ = (uint *)0x44;
    uStack_178._0_4_ = (char *)0x58e1c1;
    puVar13 = (undefined1 *)FUN_00aae9af();
    uStack_c._0_1_ = 0x1e;
    uVar3 = (undefined1)uStack_c;
    uStack_c._0_1_ = 0x1e;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = (undefined1 *)0x0;
      uStack_c._0_1_ = uVar3;
    }
    else {
      uStack_178._4_4_ = (uint *)0xffffffff;
      uStack_178._0_4_ = (char *)0x0;
      uStack_180._4_4_ = (char *)auStack_f0;
      *(undefined4 *)(puVar13 + 0x14) = 0xf;
      *(undefined4 *)(puVar13 + 0x10) = 0;
      *puVar13 = 0;
      uStack_180._0_4_ = (int **)0x58e1f4;
      FUN_00408ed0();
      uStack_178._4_4_ = (uint *)0xffffffff;
      uStack_c._0_1_ = 0x1f;
      uStack_178._0_4_ = (char *)0x0;
      uStack_180._4_4_ = (char *)auStack_d4;
      *(undefined4 *)(puVar13 + 0x30) = 0xf;
      *(undefined4 *)(puVar13 + 0x2c) = 0;
      puVar13[0x1c] = 0;
      uStack_180._0_4_ = (int **)0x58e21b;
      FUN_00408ed0();
      *(int *)(puVar13 + 0x38) = iVar5;
      *(undefined4 *)(puVar13 + 0x3c) = 0;
      puVar13[0x40] = 0;
    }
    iVar14 = piVar17[2];
    piVar17[1] = (int)puVar13;
    piVar17[2] = iVar14 + 1;
    if (iVar14 == 0) {
      *piVar17 = (int)puVar13;
    }
    else {
      *(undefined1 **)(iVar5 + 0x3c) = puVar13;
    }
    if (0xf < uStack_c0) {
      uStack_178._4_4_ = (uint *)auStack_d4[0];
                    /* WARNING: Subroutine does not return */
      uStack_178._0_4_ = &UNK_0058e25e;
      FUN_00aae91b();
    }
    uStack_c0 = 0xf;
    uStack_c4 = 0;
    auStack_d4[0] = auStack_d4[0] & 0xffffff00;
    if (0xf < uStack_dc) {
      uStack_178._4_4_ = (uint *)auStack_f0[0];
                    /* WARNING: Subroutine does not return */
      uStack_178._0_4_ = &UNK_0058e292;
      FUN_00aae91b();
    }
    uStack_dc = 0xf;
    uStack_e0 = 0;
    auStack_f0[0] = auStack_f0[0] & 0xffffff00;
    if (0xf < uStack_98) {
      uStack_178._4_4_ = (uint *)auStack_ac[0];
                    /* WARNING: Subroutine does not return */
      uStack_178._0_4_ = &UNK_0058e2c1;
      FUN_00aae91b();
    }
    uStack_c._0_1_ = 10;
    uStack_98 = 0xf;
    uStack_9c = 0;
    auStack_ac[0] = auStack_ac[0] & 0xffffff00;
    if (0xf < uStack_13c) {
      uStack_178._4_4_ = (uint *)auStack_150[0];
                    /* WARNING: Subroutine does not return */
      uStack_178._0_4_ = &UNK_0058e2f2;
      FUN_00aae91b();
    }
    uStack_178._4_4_ = (uint *)0x8;
    uStack_178._0_4_ = "IDEOLOGY";
    uStack_13c = 0xf;
    uStack_140 = 0;
    auStack_150[0] = auStack_150[0] & 0xffffff00;
    uStack_180._4_4_ = (char *)0x58e311;
    FUN_00409350();
    uStack_c = CONCAT31(uStack_c._1_3_,0x20);
    uStack_178._4_4_ = auStack_ac;
    uStack_178._0_4_ = (char *)0x58e332;
    uVar11 = (**(code **)(**(int **)(*(int *)(local_134 + 0x44) + 0x54) + 0x18))();
    uStack_178._0_4_ = (char *)0xffffffff;
    uStack_180._4_4_ = (char *)0x0;
    uStack_180._0_4_ = &piStack_154;
    puStack_10._0_1_ = 0x21;
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    uStack_f4 = uStack_f4 & 0xffffff00;
    uStack_184 = 0x58e369;
    FUN_00408ed0();
    uStack_178._0_4_ = (char *)0xffffffff;
    puStack_10._0_1_ = 0x22;
    uStack_180._4_4_ = (char *)0x0;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_184 = 0x58e39a;
    uStack_180._0_4_ = (int **)uVar11;
    FUN_00408ed0();
    puStack_10._0_1_ = 0x23;
    iVar5 = piVar17[1];
    uStack_178._0_4_ = (char *)0x44;
    uStack_180._4_4_ = (char *)0x58e3b0;
    iVar14 = FUN_00aae9af();
    puStack_10._0_1_ = 0x24;
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      uStack_180._4_4_ = (char *)0x58e3d2;
      uStack_178._0_4_ = (char *)iVar14;
      FUN_00a3ab70();
      *(int *)(iVar14 + 0x38) = iVar5;
      *(undefined4 *)(iVar14 + 0x3c) = 0;
      *(undefined1 *)(iVar14 + 0x40) = 0;
    }
    iVar6 = piVar17[2];
    piVar17[1] = iVar14;
    piVar17[2] = iVar6 + 1;
    if (iVar6 == 0) {
      *piVar17 = iVar14;
    }
    else {
      *(int *)(iVar5 + 0x3c) = iVar14;
    }
    uStack_178._0_4_ = (char *)0x58e40a;
    FUN_00a39a80();
    if (0xf < uStack_9c) {
      uStack_178._0_4_ = (char *)uStack_b0;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_0058e421;
      FUN_00aae91b();
    }
    puStack_10._0_1_ = 10;
    uStack_9c = 0xf;
    uStack_a0 = 0;
    uStack_b0 = uStack_b0 & 0xffffff00;
    if (0xf < uStack_140) {
      uStack_178._0_4_ = (char *)piStack_154;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_0058e457;
      FUN_00aae91b();
    }
    uStack_178._0_4_ = (char *)0x7;
    uStack_180._4_4_ = "DETAILS";
    uStack_140 = 0xf;
    uStack_144 = 0;
    piStack_154 = (int *)((uint)piStack_154 & 0xffffff00);
    uStack_180._0_4_ = (int **)0x58e476;
    FUN_00409350();
    uStack_178._0_4_ = (char *)0xffffffff;
    puStack_10._0_1_ = 0x25;
    uStack_180._4_4_ = (char *)0x0;
    uStack_180._0_4_ = &piStack_154;
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    uStack_f4 = uStack_f4 & 0xffffff00;
    uStack_184 = 0x58e4a7;
    FUN_00408ed0();
    uStack_178._0_4_ = (char *)0xffffffff;
    puStack_10._0_1_ = 0x26;
    uStack_180._4_4_ = (char *)0x0;
    uStack_180._0_4_ = (int **)auStack_8c;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    uStack_d8 = 0;
    uStack_184 = 0x58e4db;
    FUN_00408ed0();
    puStack_10._0_1_ = 0x27;
    iVar5 = piVar17[1];
    uStack_178._0_4_ = (char *)0x44;
    uStack_180._4_4_ = (char *)0x58e4f1;
    iVar14 = FUN_00aae9af();
    puStack_10._0_1_ = 0x28;
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    else {
      uStack_180._4_4_ = (char *)0x58e513;
      uStack_178._0_4_ = (char *)iVar14;
      FUN_00a3ab70();
      *(int *)(iVar14 + 0x38) = iVar5;
      *(undefined4 *)(iVar14 + 0x3c) = 0;
      *(undefined1 *)(iVar14 + 0x40) = 0;
    }
    iVar6 = piVar17[2];
    piVar17[1] = iVar14;
    piVar17[2] = iVar6 + 1;
    if (iVar6 == 0) {
      *piVar17 = iVar14;
    }
    else {
      *(int *)(iVar5 + 0x3c) = iVar14;
    }
    uStack_178._0_4_ = (char *)0x58e54b;
    FUN_00a39a80();
    puStack_10._0_1_ = 10;
    if (0xf < uStack_140) {
      uStack_178._0_4_ = (char *)piStack_154;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_0058e564;
      FUN_00aae91b();
    }
    uStack_178._0_4_ = (char *)0x0;
    uStack_180._4_4_ = &DAT_00ded94d;
    uStack_104 = 0xf;
    uStack_108 = 0;
    piStack_118 = (int *)((uint)piStack_118 & 0xffffff00);
    uStack_180._0_4_ = (int **)0x58e587;
    FUN_00409350();
    puStack_10._0_1_ = 0x29;
    uStack_178._0_4_ = (char *)0x8;
    uStack_180._4_4_ = "SETPARTY";
    uStack_140 = 0xf;
    uStack_144 = 0;
    piStack_154 = (int *)((uint)piStack_154 & 0xffffff00);
    uStack_180._0_4_ = (int **)0x58e5ab;
    FUN_00409350();
    iVar5 = local_134;
    puStack_10._0_1_ = 0x2a;
    uVar3 = puStack_10._0_1_;
    puStack_10._0_1_ = 0x2a;
    local_130 = auStack_1f4;
    uVar11 = *(undefined4 *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(local_134 + 0xbe4) * 4);
    puVar13 = auStack_1f4;
    if (DAT_01262ef4 == 0) {
      iVar14 = FUN_00aae9af(0x44);
      puStack_10._0_1_ = 0x2b;
      if (iVar14 == 0) {
        uVar15 = 0;
      }
      else {
        uVar15 = FUN_006a4e30();
        iVar5 = local_134;
      }
      puStack_10._0_1_ = 0x2a;
      FUN_006a59b0(uVar15);
      puVar13 = local_130;
      uVar3 = puStack_10._0_1_;
    }
    puStack_10._0_1_ = uVar3;
    local_130 = puVar13;
    uVar15 = *(undefined4 *)(iVar5 + 0x20);
    uVar21 = *(undefined4 *)(iVar5 + 0x1c);
    uVar20 = 0;
    ppiVar19 = &piStack_118;
    uVar22 = uVar21;
    uVar23 = uVar15;
    uVar16 = FUN_006a55b0(piVar17,uVar11,ppiVar19,0,uVar21,uVar15,uVar21,uVar15);
    FUN_006a7ed0(local_130,uVar16,piVar17,uVar11,ppiVar19,uVar20,uVar21,uVar15,uVar22,uVar23);
    puStack_10._0_1_ = 0x2c;
    uVar3 = puStack_10._0_1_;
    puStack_10._0_1_ = 0x2c;
    if (DAT_01262ef4 == 0) {
      iVar5 = FUN_00aae9af();
      puStack_10._0_1_ = 0x2d;
      if (iVar5 != 0) {
        FUN_006a4e30();
      }
      puStack_10._0_1_ = 0x2c;
      FUN_006a59b0();
      uVar3 = puStack_10._0_1_;
    }
    puStack_10._0_1_ = uVar3;
    if (DAT_01262ef4 == 0) {
      iVar5 = FUN_00aae9af();
      puStack_10._0_1_ = 0x2e;
      if (iVar5 != 0) {
        FUN_006a4e30();
      }
      puStack_10._0_1_ = 0x2c;
      FUN_006a59b0();
    }
    puStack_10._0_1_ = 0x2a;
    FUN_004e9540(DAT_01262ef4);
    if (0xf < uStack_140) {
      uStack_178._0_4_ = (char *)piStack_154;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_0058e72f;
      FUN_00aae91b();
    }
    puStack_10 = (undefined1 *)CONCAT31(puStack_10._1_3_,10);
    uStack_140 = 0xf;
    uStack_144 = 0;
    piStack_154 = (int *)((uint)piStack_154 & 0xffffff00);
    if (0xf < uStack_104) {
      uStack_178._0_4_ = (char *)piStack_118;
                    /* WARNING: Subroutine does not return */
      uStack_180._4_4_ = &UNK_0058e75b;
      FUN_00aae91b();
    }
    uStack_104 = 0xf;
    uStack_108 = 0;
    piStack_118 = (int *)((uint)piStack_118 & 0xffffff00);
    uStack_178._0_4_ = (char *)0x3;
    uStack_180._4_4_ = (char *)0x58e782;
    (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0xe0))();
    if (0xf < uStack_74) {
      uStack_178._4_4_ = (uint *)auStack_88[0];
                    /* WARNING: Subroutine does not return */
      uStack_178._0_4_ = &UNK_0058e798;
      FUN_00aae91b();
    }
  }
  ExceptionList = pvStack_14;
  return;
}

