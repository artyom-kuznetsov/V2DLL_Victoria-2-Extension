// FUN_008223a0 @ 008223a0 body=[[008223a0, 0082242c] [00822430, 0082253a] [0082253e, 008225f9] [00822600, 008227bc] [008227c0, 0082290c] [00822910, 00822a1f] [00822a29, 00822b37] [00822b40, 00822b6a] [00822b74, 00822bf8] [00822c05, 00822c1a] [00822c1e, 00822c3b] [00822c3f, 00822c56] [00822c5a, 00822c6c]]


/* WARNING: Type propagation algorithm not settling */

void FUN_008223a0(int *param_1)

{
  undefined3 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *******pppppppuVar12;
  int *piVar13;
  int *piStack_110;
  undefined4 *******pppppppuStack_10c;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  int local_b4 [8];
  int local_94;
  int local_90;
  int local_8c [3];
  undefined1 local_80;
  int *local_7c;
  int *local_78;
  undefined4 local_74;
  int *local_6c;
  undefined4 *******local_68 [5];
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  undefined1 local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int local_2c;
  int *local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b4fd22;
  local_10 = ExceptionList;
  iVar3 = param_1[0x23] - param_1[0x22] >> 2;
  if (iVar3 < 2) {
    return;
  }
  local_b4[7] = param_1[0xd];
  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x67c) != '\0') {
    return;
  }
  local_7c = (int *)0x0;
  local_78 = (int *)0x0;
  local_74 = 0;
  local_3c = (int *)0x0;
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  uStack_7 = 0;
  uVar1 = uStack_7;
  uStack_7 = 0;
  local_1c = (int *)0x0;
  ExceptionList = &local_10;
  if (0 < iVar3) {
    local_68[0] = (undefined4 *******)0x0;
    ExceptionList = &local_10;
    do {
      local_8c[0] = 0;
      local_8c[1] = 0;
      local_8c[2] = 0;
      local_80 = 0;
      pppppppuVar12 = (undefined4 *******)0x0;
      local_68[1] = (undefined4 *******)0x0;
      local_68[2] = (undefined4 *******)0x0;
      local_68[3] = (undefined4 *******)0x0;
      local_8 = 3;
      if ((local_8c < local_38) && (local_3c <= local_8c)) {
        uVar11 = (int)local_8c - (int)local_3c;
        if (local_38 == local_34) {
          pppppppuStack_10c = (undefined4 *******)0x822479;
          FUN_00825b00();
        }
        pppppppuStack_10c = (undefined4 *******)((uVar11 & 0xfffffff0) + (int)local_3c);
        piStack_110 = local_38;
        FUN_00825b60();
      }
      else {
        if (local_38 == local_34) {
          pppppppuStack_10c = (undefined4 *******)0x82249f;
          FUN_00825b00();
        }
        if (local_38 != (int *)0x0) {
          *local_38 = 0;
          local_38[1] = 0;
          local_38[2] = 0;
          *(undefined1 *)(local_38 + 3) = 0;
        }
        local_8 = 3;
      }
      local_38 = local_38 + 4;
      local_20 = (int *)0x7;
      do {
        if ((local_68 < pppppppuVar12) && (local_68[1] <= local_68)) {
          iVar3 = (int)local_68 - (int)local_68[1];
          if (pppppppuVar12 == local_68[3]) {
            pppppppuStack_10c = (undefined4 *******)0x8224ec;
            FUN_007b94a0();
            pppppppuVar12 = local_68[2];
          }
          if (pppppppuVar12 != (undefined4 *******)0x0) {
            *pppppppuVar12 = local_68[1][iVar3 >> 2];
          }
        }
        else {
          if (pppppppuVar12 == local_68[3]) {
            pppppppuStack_10c = (undefined4 *******)0x82250f;
            FUN_007b94a0();
            pppppppuVar12 = local_68[2];
          }
          if (pppppppuVar12 != (undefined4 *******)0x0) {
            *pppppppuVar12 = (undefined4 ******)0x0;
          }
        }
        pppppppuVar12 = pppppppuVar12 + 1;
        local_20 = (int *)((int)local_20 + -1);
        local_68[2] = pppppppuVar12;
      } while (local_20 != (int *)0x0);
      pppppppuStack_10c = (undefined4 *******)0x82252e;
      FUN_00466a90();
      if (local_68[1] != (undefined4 *******)0x0) {
        pppppppuStack_10c = local_68[1];
                    /* WARNING: Subroutine does not return */
        piStack_110 = (int *)&UNK_0082253b;
        FUN_00aae91b();
      }
      local_1c = (int *)((int)local_1c + 1);
      local_68[1] = (undefined4 *******)0x0;
      local_68[2] = (undefined4 *******)0x0;
      local_68[3] = (undefined4 *******)0x0;
      local_8c[0] = 0;
      local_8c[1] = 0;
      local_8c[2] = 0;
      uVar1 = uStack_7;
    } while ((int)local_1c < param_1[0x23] - param_1[0x22] >> 2);
  }
  uStack_7 = uVar1;
  local_8 = 1;
  local_b4[7] = param_1[0xd];
  local_b4[0] = 0;
  local_b4[1] = 0;
  local_b4[2] = 0;
  local_b4[3] = 0;
  local_b4[4] = 0;
  local_b4[5] = 0;
  local_b4[6] = 0;
  piVar13 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0xe] * 4) + 0x7b4);
joined_r0x008225c8:
  do {
    if (piVar13 == (int *)0x0) break;
    local_1c = (int *)piVar13[2];
    piVar4 = (int *)*piVar13;
    pppppppuStack_10c = (undefined4 *******)0x8225e4;
    cVar2 = (**(code **)(*piVar4 + 0x3c))();
    piVar13 = local_1c;
    if (cVar2 != '\0') {
      piVar8 = (int *)piVar4[0x24];
      iVar3 = 0;
      if (piVar8 != (int *)0x0) {
        do {
          iVar9 = *piVar8;
          piVar8 = (int *)piVar8[2];
          iVar3 = iVar3 + *(int *)(*(int *)(iVar9 + 0x38) + 600) / 1000;
        } while (piVar8 != (int *)0x0);
        if (0 < iVar3) goto joined_r0x008225c8;
      }
      pppppppuStack_10c = (undefined4 *******)0x822636;
      piVar4 = (int *)(**(code **)(*piVar4 + 0x30))();
      pppppppuStack_10c = (undefined4 *******)0x1;
      piStack_110 = piVar4;
      local_54 = piVar4;
      iVar3 = FUN_008252b0(param_1);
      iVar10 = param_1[0x23] - param_1[0x22] >> 2;
      iVar9 = 0;
      piVar13 = local_1c;
      if (0 < iVar10) {
        while (*(int *)(param_1[0x22] + iVar9 * 4) != iVar3) {
          iVar9 = iVar9 + 1;
          if (iVar10 <= iVar9) goto joined_r0x008225c8;
        }
        local_20 = (int *)local_3c[iVar9 * 4 + 1];
        pppppppuStack_10c = (undefined4 *******)0x10;
        piStack_110 = (int *)0x82268a;
        puVar5 = (undefined4 *)FUN_00aae9af();
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = piVar4;
          puVar5[1] = local_20;
          puVar5[2] = 0;
          *(undefined1 *)(puVar5 + 3) = 0;
        }
        local_3c[iVar9 * 4 + 1] = (int)puVar5;
        iVar3 = local_3c[iVar9 * 4 + 2];
        local_3c[iVar9 * 4 + 2] = iVar3 + 1;
        if (iVar3 == 0) {
          local_3c[iVar9 * 4] = (int)puVar5;
        }
        else {
          local_20[2] = (int)puVar5;
        }
        piVar4 = (int *)local_54[0x24];
        while (piVar13 = local_1c, piVar4 != (int *)0x0) {
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[2];
          piVar13 = (int *)(local_7c[iVar9 * 4] + *(int *)(*(int *)(iVar3 + 0x38) + 0x34) * 4);
          *piVar13 = *piVar13 + 1;
          local_b4[*(int *)(*(int *)(iVar3 + 0x38) + 0x34)] =
               local_b4[*(int *)(*(int *)(iVar3 + 0x38) + 0x34)] + 1;
        }
      }
    }
  } while( true );
  iVar3 = param_1[0x22];
  iVar9 = param_1[0x23] - iVar3 >> 2;
  local_24 = 0;
  if (0 < iVar9) {
    local_1c = local_7c;
    do {
      iVar10 = *(int *)(*local_1c + 0x10);
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      local_b8 = 0;
      iVar6 = local_b4[4] / iVar9 + -1;
      local_15 = iVar10 < iVar6;
      if ((bool)local_15) {
        local_c0 = (ulonglong)(uint)(iVar6 - iVar10);
      }
      iVar10 = *(int *)(*local_1c + 0x14);
      iVar6 = local_b4[5] / iVar9 + -1;
      if (iVar10 < iVar6) {
        local_c0 = CONCAT44(iVar6 - iVar10,(uint)local_c0);
LAB_0082279f:
        local_2c = 0;
        if (0 < iVar9) {
          local_28 = local_7c;
          local_90 = (int)local_3c - (int)local_7c;
          do {
            if (local_2c != local_24) {
              iVar10 = *(int *)(*local_28 + 0x10);
              local_ec = 0;
              local_e4 = 0;
              local_dc = 0;
              local_d4 = 0;
              local_15 = '\0';
              iVar6 = local_b4[4] / iVar9 + 1;
              if ((iVar6 < iVar10) && (0 < (int)(uint)local_c0)) {
                uVar11 = iVar10 - iVar6;
                if ((int)(uint)local_c0 < (int)uVar11) {
                  uVar11 = (uint)local_c0;
                }
                local_dc = (ulonglong)uVar11;
                local_15 = '\x01';
              }
              iVar10 = *(int *)(*local_28 + 0x14);
              iVar9 = local_b4[5] / iVar9 + 1;
              if ((iVar9 < iVar10) && (0 < local_c0._4_4_)) {
                iVar10 = iVar10 - iVar9;
                if (local_c0._4_4_ < iVar10) {
                  iVar10 = local_c0._4_4_;
                }
                local_dc = CONCAT44(iVar10,(undefined4)local_dc);
                local_15 = '\x01';
LAB_00822864:
                iVar9 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar3 + local_2c * 4) * 4
                                );
                iVar3 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *(int *)(iVar3 + local_24 * 4) * 4
                                );
                if (((*(char *)(*(int *)(iVar9 + 0x5c) + 0x2a) == '\0') ||
                    ((*(int *)(iVar9 + 300) != 0 && (*(int *)(iVar9 + 0x158) != 0)))) &&
                   ((*(char *)(*(int *)(iVar3 + 0x5c) + 0x2a) == '\0' ||
                    ((*(int *)(iVar3 + 300) != 0 && (*(int *)(iVar3 + 0x158) != 0)))))) {
                  pppppppuStack_10c = (undefined4 *******)0x8228dd;
                  cVar2 = FUN_004c3e20();
                  if (cVar2 == '\0') {
                    pppppppuStack_10c = (undefined4 *******)0x8228ed;
                    cVar2 = FUN_004c3e20();
                    if (cVar2 == '\0') goto LAB_008228f5;
                  }
                }
              }
              else {
                if (local_15 != '\0') goto LAB_00822864;
LAB_008228f5:
                piVar13 = *(int **)(local_90 + (int)local_28);
                while ((local_15 != '\0' && (piVar13 != (int *)0x0))) {
                  local_20 = (int *)*piVar13;
                  local_54 = (int *)piVar13[2];
                  piVar13 = local_54;
                  if (((int *)local_20[0x51] == param_1) &&
                     ((*(int *)(local_20[0x37] + 0x58) == *(int *)(param_1[0x22] + local_2c * 4) &&
                      (local_20[0x28] < 1)))) {
                    piVar4 = (int *)0x0;
                    local_50 = (int *)0x0;
                    local_4c = (int *)0x0;
                    local_48 = 0;
                    local_44 = 0;
                    local_8 = 5;
                    piVar13 = (int *)local_20[0x24];
                    if (piVar13 == (int *)0x0) {
LAB_00822a0a:
                      local_8 = 1;
                      if (local_50 != (int *)0x0) {
                        pppppppuStack_10c = (undefined4 *******)local_50;
                    /* WARNING: Subroutine does not return */
                        piStack_110 = (int *)&UNK_00822a20;
                        FUN_00aae91b();
                      }
                    }
                    else {
                      do {
                        piVar8 = local_28;
                        iVar3 = *piVar13;
                        iVar9 = *(int *)(*(int *)(iVar3 + 0x38) + 0x34);
                        iVar10 = *(int *)((int)&local_ec + iVar9 * 4);
                        piVar13 = (int *)piVar13[2];
                        piVar7 = piVar4;
                        if (0 < iVar10) {
                          piVar7 = (int *)((int)&local_d0 + iVar9 * 4);
                          *piVar7 = *piVar7 + -1;
                          *(int *)((int)&local_ec + iVar9 * 4) = iVar10 + -1;
                          piVar8 = (int *)(*piVar8 + iVar9 * 4);
                          *piVar8 = *piVar8 + -1;
                          piVar8 = (int *)(*local_1c + iVar9 * 4);
                          *piVar8 = *piVar8 + 1;
                          pppppppuStack_10c = (undefined4 *******)0x10;
                          piStack_110 = (int *)0x8229c5;
                          local_40 = piVar4;
                          piVar7 = (int *)FUN_00aae9af();
                          iVar9 = local_48;
                          if (piVar7 == (int *)0x0) {
                            piVar7 = (int *)0x0;
                          }
                          else {
                            *piVar7 = iVar3;
                            piVar7[1] = (int)piVar4;
                            piVar7[2] = 0;
                            *(undefined1 *)(piVar7 + 3) = 0;
                          }
                          local_4c = piVar7;
                          local_48 = local_48 + 1;
                          if (iVar9 == 0) {
                            local_50 = piVar7;
                          }
                          else {
                            local_40[2] = (int)piVar7;
                          }
                        }
                        piVar4 = piVar7;
                      } while (piVar13 != (int *)0x0);
                      if (local_48 == 0) goto LAB_00822a0a;
                      if (local_48 < local_20[0x26]) {
                        pppppppuStack_10c = (undefined4 *******)0x822a53;
                        DAT_0131ca68 = FUN_009c12d0();
                        piVar13 = local_20;
                        uVar11 = (uint)DAT_01258a90;
                        DAT_01258a9c = DAT_01258a9c + 1;
                        local_40 = (int *)&piStack_110;
                        iVar3 = local_20[0x37];
                        piStack_110 = (int *)(uVar11 + 0x1268);
                        pppppppuStack_10c = (undefined4 *******)DAT_01258a9c;
                        local_94 = DAT_01258a9c;
                        (**(code **)(*param_1 + 0xe8))(iVar3);
                        FUN_0084fbb0(iVar3);
                        puVar5 = (undefined4 *)piVar13[0x24];
                        pppppppuStack_10c = (undefined4 *******)local_94;
                        piVar13 = local_50;
joined_r0x00822aad:
                        local_94 = (int)pppppppuStack_10c;
                        if (puVar5 != (undefined4 *)0x0) {
                          local_40 = (int *)*puVar5;
                          puVar5 = (undefined4 *)puVar5[2];
                          for (local_6c = piVar13; local_6c != (int *)0x0;
                              local_6c = (int *)local_6c[2]) {
                            if ((int *)*local_6c == local_40) goto joined_r0x00822aad;
                          }
                          piStack_110 = (int *)(uVar11 + 0x1268);
                          (**(code **)(*param_1 + 0xe8))();
                          FUN_0084fd10(local_40);
                          pppppppuStack_10c = (undefined4 *******)local_94;
                          piVar13 = local_50;
                          goto joined_r0x00822aad;
                        }
                      }
                      pppppppuStack_10c = (undefined4 *******)0x822b23;
                      (**(code **)(*local_20 + 0x30))();
                      pppppppuStack_10c = (undefined4 *******)param_1;
                      piStack_110 = (int *)0x822b2d;
                      FUN_00825460();
                      local_15 = '\0';
                      iVar3 = 4;
                      do {
                        if (0 < *(int *)((int)&local_ec + iVar3 * 4)) {
                          local_15 = '\x01';
                          break;
                        }
                        iVar3 = iVar3 + 1;
                      } while (iVar3 < 6);
                      local_8 = 1;
                      if (local_50 != (int *)0x0) {
                        pppppppuStack_10c = (undefined4 *******)local_50;
                    /* WARNING: Subroutine does not return */
                        piStack_110 = (int *)&UNK_00822b6b;
                        FUN_00aae91b();
                      }
                    }
                    local_8 = 1;
                    local_48 = 0;
                    local_4c = (int *)0x0;
                    local_50 = (int *)0x0;
                    piVar13 = local_54;
                  }
                }
              }
            }
            iVar3 = param_1[0x22];
            local_28 = local_28 + 4;
            local_2c = local_2c + 1;
            iVar9 = param_1[0x23] - iVar3 >> 2;
          } while (local_2c < iVar9);
        }
      }
      else if ((bool)local_15) goto LAB_0082279f;
      iVar3 = param_1[0x22];
      local_1c = local_1c + 4;
      local_24 = local_24 + 1;
      iVar9 = param_1[0x23] - iVar3 >> 2;
    } while (local_24 < iVar9);
  }
  piVar13 = local_3c;
  if (local_3c != (int *)0x0) {
    while( true ) {
      if (piVar13 == local_38) {
        pppppppuStack_10c = (undefined4 *******)local_3c;
                    /* WARNING: Subroutine does not return */
        piStack_110 = (int *)&UNK_00822c1b;
        FUN_00aae91b();
      }
      pppppppuStack_10c = (undefined4 *******)*piVar13;
      if (pppppppuStack_10c != (undefined4 *******)0x0) break;
      *piVar13 = 0;
      piVar13[1] = 0;
      piVar13[2] = 0;
      piVar13 = piVar13 + 4;
    }
                    /* WARNING: Subroutine does not return */
    piStack_110 = (int *)&UNK_00822bf9;
    FUN_00aae91b();
  }
  piVar13 = local_7c;
  if (local_7c == (int *)0x0) {
    ExceptionList = local_10;
    return;
  }
  while( true ) {
    if (piVar13 == local_78) {
      pppppppuStack_10c = (undefined4 *******)local_7c;
                    /* WARNING: Subroutine does not return */
      piStack_110 = (int *)&UNK_00822c57;
      FUN_00aae91b();
    }
    pppppppuStack_10c = (undefined4 *******)*piVar13;
    if (pppppppuStack_10c != (undefined4 *******)0x0) break;
    *piVar13 = 0;
    piVar13[1] = 0;
    piVar13[2] = 0;
    piVar13 = piVar13 + 4;
  }
                    /* WARNING: Subroutine does not return */
  piStack_110 = (int *)&UNK_00822c3c;
  FUN_00aae91b();
}

