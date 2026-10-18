// FUN_0081f3b0 @ 0081f3b0  (requested 0081F3B0, first bytes: 55 8B EC 6A FF 68 04 AF)


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Removing unreachable block (ram,0x0081f66c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0081f3b0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  bool bVar24;
  longlong lVar25;
  uint *puStack_94;
  int aiStack_90 [4];
  uint local_58;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int *local_2c;
  uint local_28;
  uint *local_24;
  uint local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4af04;
  local_10 = ExceptionList;
  iVar19 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x34) * 4);
  if (*(char *)(iVar19 + 0xaf8) != '\0') {
    local_40 = 0;
    local_48 = 0;
    aiStack_90[3] = 0x81f414;
    ExceptionList = &local_10;
    local_2c = (int *)iVar19;
    local_38 = FUN_00b31c36();
    aiStack_90[3] = 0x81f424;
    FUN_0052b510();
    local_24 = *(uint **)(iVar19 + (DAT_00f096c8 + 0xb) * 0x10);
    local_30 = (undefined1 *)0x5;
    puVar9 = local_24;
    uVar14 = (uint)local_40;
    iVar19 = local_40._4_4_;
    do {
      bVar24 = CARRY4(uVar14,*puVar9);
      uVar14 = uVar14 + *puVar9;
      iVar19 = iVar19 + puVar9[1] + (uint)bVar24;
      bVar24 = CARRY4((uint)local_48,puVar9[2]);
      local_48._0_4_ = (uint)local_48 + puVar9[2];
      local_48._4_4_ = local_48._4_4_ + puVar9[3] + (uint)bVar24;
      puVar9 = puVar9 + 4;
      local_30 = (undefined1 *)((int)local_30 + -1);
    } while (local_30 != (undefined1 *)0x0);
    uVar10 = local_24[0x14] + uVar14 + (uint)local_48;
    uVar15 = local_20 - uVar10;
    iVar19 = (local_1c -
             (local_24[0x15] + iVar19 + local_48._4_4_ + (uint)CARRY4(uVar14,(uint)local_48) +
             (uint)CARRY4(local_24[0x14],uVar14 + (uint)local_48))) - (uint)(local_20 < uVar10);
    local_48 = CONCAT44(iVar19,uVar15);
    if ((DAT_013f368c < iVar19) || ((DAT_013f368c <= iVar19 && (DAT_013f3688 <= uVar15)))) {
      local_8 = 1;
      piVar8 = *(int **)((int)local_2c + 0xe44);
      uVar7 = local_48;
      while (piVar8 != (int *)0x0) {
        local_2c = (int *)piVar8[2];
        local_1c = *piVar8;
        local_30 = (undefined1 *)*(int *)(local_1c + 0x60);
joined_r0x0081f78d:
        iVar19 = (int)local_30;
        iVar13 = (int)((ulonglong)local_38 >> 0x20);
        piVar8 = local_2c;
        if (iVar19 != 0) {
          local_30 = *(undefined1 **)(iVar19 + 0x224);
          if (((0 < *(int *)(iVar19 + 0x20)) && (*(int *)(iVar19 + 0x184) < 0xb)) &&
             (*(char *)(iVar19 + 0x188) == '\0')) {
            local_48 = uVar7;
            if (*(int *)(iVar19 + 0x178) < 0x1e) {
              if (6 < *(int *)(iVar19 + 0x178)) {
                iVar16 = 0;
                iVar17 = *(int *)(local_1c + 0x60);
                for (iVar1 = iVar17; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x224)) {
                  iVar16 = iVar16 + (*(int *)(*(int *)(*(int *)(iVar1 + 0x18) + 300) + 0x128) -
                                    *(int *)(iVar1 + 0x128));
                }
                if (*(int *)(iVar19 + 0x128) < iVar16) {
                  if (*(char *)(iVar19 + 0x180) == '\x01') {
                    iVar13 = 0;
                    for (; iVar17 != 0; iVar17 = *(int *)(iVar17 + 0x224)) {
                      if (iVar19 == iVar17) {
                        if (iVar17 != 0) goto LAB_0081f8e8;
                        break;
                      }
                      iVar13 = iVar13 + 1;
                    }
                    iVar13 = -1;
LAB_0081f8e8:
                    aiStack_90[3] = 100;
                    aiStack_90[2] = 0x81f8ef;
                    iVar17 = FUN_00aae9af();
                    local_40 = CONCAT44(iVar17,(uint)local_40);
                    local_8 = CONCAT31(local_8._1_3_,3);
                    if (iVar17 == 0) goto LAB_0081fa00;
                    aiStack_90[3] = *(undefined4 *)(iVar19 + 0x24);
                    if (((*(int *)(iVar19 + 0x20) < 1) || (10 < *(int *)(iVar19 + 0x184))) ||
                       (*(char *)(iVar19 + 0x188) != '\0')) {
                      aiStack_90[1] = 0;
                    }
                    else {
                      aiStack_90[1] = 1;
                    }
                    local_50 = *(uint *)(param_1 + 0x30);
                    local_4c = *(undefined4 *)(param_1 + 0x34);
                    aiStack_90[2] = 0;
                    puStack_94 = &local_50;
                    aiStack_90[0] = iVar13;
                    uVar21 = FUN_005827f0(iVar17);
                    goto LAB_0081fa02;
                  }
                  goto joined_r0x0081f78d;
                }
              }
              local_48._4_4_ = (int)((ulonglong)uVar7 >> 0x20);
              if (((local_48._4_4_ < iVar13) ||
                  ((local_48._4_4_ <= iVar13 &&
                   (local_48._0_4_ = (uint)uVar7, (uint)local_48 <= (uint)local_38)))) ||
                 (*(char *)(iVar19 + 0x180) != '\0')) goto joined_r0x0081f78d;
              iVar17 = 0;
              for (iVar13 = *(int *)(local_1c + 0x60); iVar13 != 0;
                  iVar13 = *(int *)(iVar13 + 0x224)) {
                if (iVar19 == iVar13) {
                  if (iVar13 != 0) goto LAB_0081f99a;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
              iVar17 = -1;
LAB_0081f99a:
              aiStack_90[3] = 100;
              aiStack_90[2] = 0x81f9a1;
              iVar13 = FUN_00aae9af();
              local_40 = CONCAT44(iVar13,(uint)local_40);
              local_8 = CONCAT31(local_8._1_3_,4);
              if (iVar13 == 0) goto LAB_0081fa00;
              aiStack_90[3] = *(undefined4 *)(iVar19 + 0x24);
              if (((*(int *)(iVar19 + 0x20) < 1) || (10 < *(int *)(iVar19 + 0x184))) ||
                 (*(char *)(iVar19 + 0x188) != '\0')) {
                aiStack_90[1] = 0;
              }
              else {
                aiStack_90[1] = 1;
              }
              local_28 = *(uint *)(param_1 + 0x30);
              local_24 = *(uint **)(param_1 + 0x34);
              aiStack_90[2] = 1;
              puStack_94 = &local_28;
              aiStack_90[0] = iVar17;
              uVar21 = FUN_005827f0(iVar13);
            }
            else {
              if (*(char *)(iVar19 + 0x180) != '\x01') goto joined_r0x0081f78d;
              iVar17 = 0;
              for (iVar13 = *(int *)(local_1c + 0x60); iVar13 != 0;
                  iVar13 = *(int *)(iVar13 + 0x224)) {
                if (iVar19 == iVar13) {
                  if (iVar13 != 0) goto LAB_0081f802;
                  break;
                }
                iVar17 = iVar17 + 1;
              }
              iVar17 = -1;
LAB_0081f802:
              aiStack_90[3] = 100;
              aiStack_90[2] = 0x81f809;
              iVar13 = FUN_00aae9af();
              local_40 = CONCAT44(iVar13,(uint)local_40);
              local_8 = CONCAT31(local_8._1_3_,2);
              if (iVar13 == 0) {
LAB_0081fa00:
                uVar21 = 0;
              }
              else {
                aiStack_90[3] = *(undefined4 *)(iVar19 + 0x24);
                if (((*(int *)(iVar19 + 0x20) < 1) || (10 < *(int *)(iVar19 + 0x184))) ||
                   (*(char *)(iVar19 + 0x188) != '\0')) {
                  aiStack_90[1] = 0;
                }
                else {
                  aiStack_90[1] = 1;
                }
                local_58 = *(uint *)(param_1 + 0x30);
                local_54 = *(int *)(param_1 + 0x34);
                aiStack_90[2] = 0;
                puStack_94 = &local_58;
                aiStack_90[0] = iVar17;
                uVar21 = FUN_005827f0(iVar13);
              }
            }
LAB_0081fa02:
            local_8 = CONCAT31(local_8._1_3_,1);
            aiStack_90[3] = 0x81fa19;
            iVar19 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44))();
            aiStack_90[2] = 0x81fa24;
            aiStack_90[3] = uVar21;
            (**(code **)(**(int **)(iVar19 + 0x38) + 0x18))();
            uVar7 = local_48;
          }
          goto joined_r0x0081f78d;
        }
      }
    }
    else {
      iVar19 = *(int *)((int)local_2c + 0xe4c);
      aiStack_90[3] = 0x81f4a7;
      iVar13 = iVar19 * -0x20;
      local_30 = &stack0xffffff80 + iVar13;
      local_2c = *(int **)((int)local_2c + 0xe44);
      local_1c = 0;
      if (local_2c != (int *)0x0) {
        do {
          iVar17 = *local_2c;
          local_2c = (int *)local_2c[2];
          local_24 = (uint *)*(int *)(iVar17 + 0x60);
          iVar17 = local_1c;
          while (iVar1 = (int)local_24, iVar1 != 0) {
            local_24 = *(uint **)(iVar1 + 0x224);
            if (((0 < *(int *)(iVar1 + 0x20)) && (*(int *)(iVar1 + 0x184) < 0xb)) &&
               ((*(char *)(iVar1 + 0x188) == '\0' && (*(char *)(iVar1 + 0x180) != '\0')))) {
              uVar14 = *(uint *)(iVar1 + 0x168) + *(uint *)(iVar1 + 0x158);
              local_54 = *(int *)(iVar1 + 0x164);
              uVar15 = *(uint *)(iVar1 + 0x170) + *(uint *)(iVar1 + 0x160);
              uVar10 = *(uint *)(iVar1 + 0x1d8) - uVar14;
              iVar16 = ((*(int *)(iVar1 + 0x1dc) -
                        (*(int *)(iVar1 + 0x16c) + *(int *)(iVar1 + 0x15c) +
                        (uint)CARRY4(*(uint *)(iVar1 + 0x168),*(uint *)(iVar1 + 0x158)))) -
                       (uint)(*(uint *)(iVar1 + 0x1d8) < uVar14)) +
                       *(int *)(iVar1 + 0x174) + local_54 +
                       (uint)CARRY4(*(uint *)(iVar1 + 0x170),*(uint *)(iVar1 + 0x160)) +
                       (uint)CARRY4(uVar10,uVar15);
              if ((iVar16 <= DAT_013f368c) &&
                 ((iVar16 < DAT_013f368c || (uVar10 + uVar15 < DAT_013f3688)))) {
                *(int *)(&stack0xffffff80 + iVar17 * 4 + iVar13) = iVar1;
                iVar17 = iVar17 + 1;
              }
            }
          }
          local_1c = iVar17;
        } while (local_2c != (int *)0x0);
        if (0 < iVar17) {
          local_2c = (int *)0x0;
          local_24 = (uint *)iVar1;
          aiStack_90[iVar19 * -8 + 3] = 0;
          aiStack_90[iVar19 * -8 + 2] =
               (int)(&stack0xffffff80 + iVar17 * 4 + iVar13) - (int)(&stack0xffffff80 + iVar13) >> 2
          ;
          aiStack_90[iVar19 * -8 + 1] = (int)(&stack0xffffff80 + iVar17 * 4 + iVar13);
          aiStack_90[iVar19 * -8] = (int)(&stack0xffffff80 + iVar13);
          (&puStack_94)[iVar19 * -8] = (uint *)0x81f5b4;
          FUN_00821640();
          puVar23 = &stack0xffffff80 + iVar13;
          local_2c = (int *)0x0;
          if (0 < iVar17) {
            do {
              if (DAT_013f368c < local_48._4_4_) {
                ExceptionList = local_10;
                return;
              }
              if ((DAT_013f368c <= local_48._4_4_) && (DAT_013f3688 <= (uint)local_48)) {
                ExceptionList = local_10;
                return;
              }
              iVar19 = *(int *)(local_30 + (int)local_2c * 4);
              uVar14 = *(uint *)(iVar19 + 0x168);
              uVar10 = *(uint *)(iVar19 + 0x158);
              uVar20 = uVar14 + *(uint *)(iVar19 + 0x158);
              iVar13 = *(int *)(iVar19 + 0x164);
              iVar17 = *(int *)(iVar19 + 0x16c);
              iVar1 = *(int *)(iVar19 + 0x15c);
              iVar16 = *(int *)(iVar19 + 0x174);
              uVar15 = *(uint *)(iVar19 + 0x170);
              uVar2 = *(uint *)(iVar19 + 0x160);
              uVar18 = uVar15 + *(uint *)(iVar19 + 0x160);
              uVar3 = *(uint *)(iVar19 + 0x1d8);
              uVar11 = uVar3 + uVar18;
              iVar4 = *(int *)(iVar19 + 0x1dc);
              uVar12 = uVar11 - uVar20;
              *(undefined4 *)(puVar23 + -4) = DAT_00f0d8bc;
              *(undefined4 *)(puVar23 + -8) = DAT_00f0d8b8;
              *(uint *)(puVar23 + -0xc) =
                   (((iVar4 + iVar16 + iVar13 + (uint)CARRY4(uVar15,uVar2) +
                     (uint)CARRY4(uVar3,uVar18)) - (iVar17 + iVar1 + (uint)CARRY4(uVar14,uVar10))) -
                   (uint)(uVar11 < uVar20)) * 0x8000 | uVar12 >> 0x11;
              *(uint *)(puVar23 + -0x10) = uVar12 * 0x8000;
              *(undefined4 *)(puVar23 + -0x14) = 0x81f659;
              lVar25 = __alldiv();
              local_58 = (uint)lVar25;
              if (lVar25 < CONCAT44(DAT_013f368c,DAT_013f3688)) {
                local_38._4_4_ = *(int *)(iVar19 + 0x1c);
                local_24 = (uint *)0x0;
                for (iVar13 = *(int *)(local_38._4_4_ + 0x60); iVar13 != 0;
                    iVar13 = *(int *)(iVar13 + 0x224)) {
                  if (iVar19 == iVar13) {
                    if (iVar13 != 0) goto LAB_0081f6a6;
                    break;
                  }
                  local_24 = (uint *)((int)local_24 + 1);
                }
                local_24 = (uint *)0xffffffff;
LAB_0081f6a6:
                *(undefined4 *)(puVar23 + -4) = 100;
                *(undefined4 *)(puVar23 + -8) = 0x81f6ad;
                iVar13 = FUN_00aae9af();
                local_40 = CONCAT44(iVar13,(uint)local_40);
                local_8 = 0;
                if (iVar13 == 0) {
                  uVar21 = 0;
                }
                else {
                  if (((*(int *)(iVar19 + 0x20) < 1) || (10 < *(int *)(iVar19 + 0x184))) ||
                     (*(char *)(iVar19 + 0x188) != '\0')) {
                    uVar21 = 0;
                  }
                  else {
                    uVar21 = 1;
                  }
                  uVar14 = *(uint *)(param_1 + 0x30);
                  uVar5 = *(undefined4 *)(param_1 + 0x34);
                  *(undefined4 *)(puVar23 + -4) = *(undefined4 *)(iVar19 + 0x24);
                  *(undefined4 *)(puVar23 + -8) = 0;
                  *(undefined4 *)(puVar23 + -0xc) = uVar21;
                  local_4c = uVar5;
                  *(uint **)(puVar23 + -0x10) = local_24;
                  *(uint **)(puVar23 + -0x14) = &local_50;
                  *(int *)(puVar23 + -0x18) = iVar13;
                  local_50 = uVar14;
                  *(undefined4 *)(puVar23 + -0x1c) = 0x81f706;
                  uVar21 = FUN_005827f0();
                }
                local_8 = 0xffffffff;
                pcVar6 = *(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x44);
                puVar22 = puVar23 + -4;
                *(undefined4 *)(puVar23 + -4) = 0x81f726;
                iVar19 = (*pcVar6)();
                pcVar6 = *(code **)(**(int **)(iVar19 + 0x38) + 0x18);
                *(undefined4 *)(puVar22 + -4) = uVar21;
                puVar23 = puVar22 + -8;
                *(undefined4 *)(puVar22 + -8) = 0x81f731;
                (*pcVar6)();
                local_48 = CONCAT44((local_48._4_4_ - (int)((ulonglong)lVar25 >> 0x20)) -
                                    (uint)((uint)local_48 < local_58),(uint)local_48 - local_58);
              }
              local_2c = (int *)((int)local_2c + 1);
            } while ((int)local_2c < local_1c);
          }
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

