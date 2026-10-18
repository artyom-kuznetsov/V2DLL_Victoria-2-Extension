// FUN_00836e70 @ 00836e70 body=[[00836e70, 00836ffe] [00837000, 00837037] [00837040, 0083725b] [0083725f, 00837306] [0083730a, 00837320]]


void FUN_00836e70(int param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  uint local_a8;
  int local_a4;
  undefined4 *local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  int local_84;
  int local_7c;
  undefined4 local_78;
  int local_74;
  int local_6c;
  undefined **local_68 [2];
  undefined4 local_60;
  uint local_4c;
  void *local_14;
  undefined1 *puStack_10;
  int local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb4f66;
  local_14 = ExceptionList;
  local_88 = *(undefined4 *)(param_1 + 0x34);
  iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4);
  if (*(char *)(iVar6 + 0x67c) == '\0') {
    ExceptionList = &local_14;
    local_ac = iVar6;
    local_a0 = (undefined4 *)(param_1 + 0x34);
    FUN_00969f90(iVar6 + 0x12e8);
    if ((local_a4 < 1) && ((local_a4 < 0 || (local_a8 < 0x28001)))) {
      FUN_00401000(0x447a1fff);
      iVar3 = FUN_00b31c00();
      if ((*(int *)(iVar6 + 0x680) < iVar3) &&
         ((cVar2 = FUN_005395a0(iVar6), cVar2 == '\0' &&
          ((*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) == 0 ||
           (cVar2 = FUN_0042b220(), iVar6 = local_ac, cVar2 == '\0')))))) {
        local_88 = *(undefined4 *)(param_1 + 0x34);
        piVar4 = *(int **)(*(int *)(param_1 + 0x38) * 0x10 + *(int *)(DAT_012588e8 + 0xb98));
        do {
          if (piVar4 == (int *)0x0) {
            piVar4 = *(int **)(iVar6 + 0x9d8);
            while ((*(int **)(iVar6 + 0x9d8) <= piVar4 && (piVar4 < *(int **)(iVar6 + 0x9dc)))) {
              iVar3 = *piVar4;
              piVar4 = piVar4 + 1;
              if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + iVar3 * 4) + 0x134) !=
                  *(int *)(param_1 + 0x38)) {
                ExceptionList = local_14;
                return;
              }
            }
            piVar4 = *(int **)(DAT_012588e8 + 0xb3c);
            local_94 = 0;
            local_9c = 0;
            FUN_005dcbd0(iVar6 + 0x7b4,&local_94,&local_9c);
            local_98 = piVar4;
            if (piVar4 == (int *)0x0) {
              ExceptionList = local_14;
              return;
            }
            do {
              iVar6 = *local_98;
              local_98 = (int *)local_98[2];
              cVar2 = FUN_00936710();
              if (cVar2 != '\0') {
                iVar3 = *(int *)(iVar6 + 0x3c);
                local_b8 = 0;
                if (0 < (int)(*(int *)(iVar6 + 0x40) - iVar3 & 0xfffffff8U)) {
                  do {
                    local_90 = *(int *)(iVar3 + local_b8 * 8);
                    cVar2 = FUN_009315a0();
                    if (cVar2 != '\0') {
                      local_90 = *(int *)(iVar3 + local_b8 * 8);
                      uVar1 = *(uint *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
                      iVar3 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(iVar3 + 4 + local_b8 * 8) * 4) + 0x1430);
                      if (uVar1 == 0) {
                        iVar3 = -1;
                      }
                      else if (iVar3 + 0x189373U < 0x39580e) {
                        iVar3 = (iVar3 * 1000) / (int)uVar1;
                      }
                      else {
                        local_6c = iVar3 >> 0x1f;
                        local_a4 = (int)uVar1 >> 0x1f;
                        local_a8 = uVar1;
                        uVar8 = __allmul(iVar3,local_6c,1000,0);
                        iVar3 = __alldiv(uVar8,local_a8,local_a4);
                        local_8c = iVar3 >> 0x1f;
                      }
                      if (iVar3 <= DAT_01317d44) {
                        FUN_00585a20(local_68,iVar6,0);
                        iVar3 = 0;
                        local_c = 0;
                        cVar2 = FUN_00586b10();
                        if (cVar2 != '\0') {
                          local_90 = local_9c;
                          iVar7 = *(int *)(iVar6 + 0x30) - *(int *)(iVar6 + 0x2c) >> 3;
                          local_b0 = local_94;
                          local_b4 = DAT_01317d64;
                          local_7c = DAT_01317d64;
                          if (0 < iVar7) {
                            do {
                              local_78 = *(undefined4 *)(*(int *)(iVar6 + 0x2c) + iVar3 * 8);
                              FUN_005dcbd0(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(*(int *)(iVar6 + 0x2c) + iVar3 * 8 + 4)
                                                   * 4) + 0x7b4,&local_b4,&local_7c);
                              iVar3 = iVar3 + 1;
                            } while (iVar3 < iVar7);
                          }
                          iVar3 = 0;
                          iVar7 = *(int *)(iVar6 + 0x40) - *(int *)(iVar6 + 0x3c) >> 3;
                          if (0 < iVar7) {
                            do {
                              local_78 = *(undefined4 *)(*(int *)(iVar6 + 0x3c) + iVar3 * 8);
                              FUN_005dcbd0(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                   *(int *)(*(int *)(iVar6 + 0x3c) + iVar3 * 8 + 4)
                                                   * 4) + 0x7b4,&local_b0,&local_90);
                              iVar3 = iVar3 + 1;
                            } while (iVar3 < iVar7);
                          }
                          iVar3 = local_b4;
                          if (local_b4 == 0) {
                            iVar3 = -1;
                          }
                          else if (local_b0 + 0x189373U < 0x39580e) {
                            iVar3 = (local_b0 * 1000) / local_b4;
                          }
                          else {
                            local_84 = local_b4 >> 0x1f;
                            uVar8 = __allmul(local_b0,local_b0 >> 0x1f,1000,0);
                            iVar3 = __alldiv(uVar8,iVar3,local_84);
                            local_74 = iVar3 >> 0x1f;
                          }
                          if (DAT_01317d50 < iVar3) {
                            local_90 = FUN_00aae9af(0x4c);
                            local_c._0_1_ = 1;
                            if (local_90 == 0) {
                              uVar5 = 0;
                            }
                            else {
                              uVar5 = FUN_00585a20(local_90,iVar6,0);
                            }
                            local_c = (uint)local_c._1_3_ << 8;
                            iVar6 = (**(code **)(**(int **)(local_ac + 0xcdc) + 0x44))();
                            (**(code **)(**(int **)(iVar6 + 0x38) + 0x18))(uVar5);
                            local_68[0] = CCommand::vftable;
                            if (local_4c < 0x10) {
                              ExceptionList = local_14;
                              return;
                            }
                    /* WARNING: Subroutine does not return */
                            FUN_00aae91b(local_60);
                          }
                        }
                        local_c = 0xffffffff;
                        local_68[0] = CCommand::vftable;
                        if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
                          FUN_00aae91b(local_60);
                        }
                      }
                    }
                    iVar3 = *(int *)(iVar6 + 0x3c);
                    local_b8 = local_b8 + 1;
                  } while (local_b8 < *(int *)(iVar6 + 0x40) - iVar3 >> 3);
                }
              }
              if (local_98 == (int *)0x0) {
                ExceptionList = local_14;
                return;
              }
            } while( true );
          }
          iVar3 = *piVar4;
          piVar4 = (int *)piVar4[2];
        } while (*(int *)(iVar3 + 0x88) == 0);
      }
    }
  }
  ExceptionList = local_14;
  return;
}

