// FUN_00856470 @ 00856470 body=[[00856470, 00856912] [00856916, 00856928]]


/* WARNING: Removing unreachable block (ram,0x00856876) */
/* WARNING: Removing unreachable block (ram,0x00856880) */
/* WARNING: Removing unreachable block (ram,0x00856887) */
/* WARNING: Removing unreachable block (ram,0x0085688d) */
/* WARNING: Removing unreachable block (ram,0x0085690d) */

void FUN_00856470(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int local_34;
  int local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b6a1a4;
  local_10 = ExceptionList;
  iVar12 = *(int *)(DAT_012587e4 + 4);
  if ((*(char *)(*(int *)(*(int *)(iVar12 + *(int *)(param_1 + 0x38) * 4) + 0xbd0) + 0xc) != '\0')
     && (*(char *)(*(int *)(*(int *)(iVar12 + *(int *)(param_1 + 0x38) * 4) + 0xbd0) + 0x5c) == '\0'
        )) {
    iVar10 = *(int *)(*(int *)(iVar12 + *(int *)(param_1 + 0x38) * 4) + 0xbd0);
    local_8 = 0;
    piVar6 = *(int **)(*(int *)(iVar12 + *(int *)(param_1 + 0x38) * 4) + 0x83c);
    ExceptionList = &local_10;
joined_r0x0085650d:
    if (piVar6 != (int *)0x0) {
      piVar13 = (int *)piVar6[2];
      piVar1 = (int *)*piVar6;
      for (piVar2 = *(int **)(iVar10 + 0x10); piVar6 = piVar13, piVar2 != (int *)0x0;
          piVar2 = (int *)piVar2[2]) {
        if (*piVar2 == piVar1[0x15]) {
          FUN_004d61d0();
          if (*(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x84c)
              == piVar1) {
            iRamfffffffc = iRamfffffffc +
                           *(uint *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(param_1 + 0x38) * 4) + 0x12e8) / 10;
          }
          piVar13 = (int *)(DAT_01258a48 + 0x28);
          iVar12 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                           0x1310);
          iVar14 = *(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) >> 2;
          local_24 = 0;
          if (0 < iVar14) {
            do {
              piVar2 = *(int **)(local_24 * 4 + *piVar13);
              cVar7 = (**(code **)(*piVar2 + 0x18))();
              if (cVar7 != '\0') {
                piVar3 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                           *(int *)(param_1 + 0x38) * 4) + 0x84c);
                if (piVar2[0x17] == 1) {
                  cVar7 = (**(code **)(*piVar3 + 0x20))();
                  if (cVar7 == '\0') {
                    iVar8 = FUN_00974850();
                  }
                  else {
                    iVar8 = *(int *)(piVar3[0x16] + piVar2[0x14] * 4);
                  }
                }
                else {
                  iVar8 = DAT_01258a40;
                  if (DAT_01258a40 == 0) {
                    iVar8 = FUN_00aae9af(0x1d8);
                    local_8._0_1_ = 1;
                    if (iVar8 == 0) {
                      local_8 = (uint)local_8._1_3_ << 8;
                      DAT_01258a40 = 0;
                      iVar8 = DAT_01258a40;
                    }
                    else {
                      DAT_01258a40 = FUN_009747a0();
                      local_8 = (uint)local_8._1_3_ << 8;
                      iVar8 = DAT_01258a40;
                    }
                  }
                }
                iVar8 = *(int *)(iVar8 + 0x50);
                local_34 = piVar2[3] - piVar2[2] >> 2;
                if (0 < local_34) {
                  do {
                    iVar9 = *(int *)(*piVar13 + local_24 * 4);
                    if (*(int *)(iVar9 + 0x5c) == 1) {
                      cVar7 = (**(code **)(*piVar1 + 0x20))();
                      if (cVar7 == '\0') {
                        if (DAT_01258a40 == 0) {
                          iVar9 = FUN_00aae9af(0x1d8);
                          local_8._0_1_ = 3;
                          if (iVar9 == 0) {
                            DAT_01258a40 = 0;
                          }
                          else {
                            DAT_01258a40 = FUN_009747a0();
                          }
                          local_8 = (uint)local_8._1_3_ << 8;
                        }
                        local_1c = DAT_01258a40;
                      }
                      else {
                        local_1c = *(int *)(piVar1[0x16] + *(int *)(iVar9 + 0x50) * 4);
                      }
                    }
                    else {
                      local_1c = DAT_01258a40;
                      if (DAT_01258a40 == 0) {
                        iVar9 = FUN_00aae9af(0x1d8);
                        local_8._0_1_ = 2;
                        if (iVar9 == 0) {
                          local_8 = (uint)local_8._1_3_ << 8;
                          DAT_01258a40 = 0;
                          local_1c = DAT_01258a40;
                        }
                        else {
                          DAT_01258a40 = FUN_009747a0();
                          local_8 = (uint)local_8._1_3_ << 8;
                          local_1c = DAT_01258a40;
                        }
                      }
                    }
                    iRamfffffffc = iRamfffffffc + *(int *)(iVar12 + *(int *)(local_1c + 0x50) * 4);
                    iVar9 = 0;
                    iVar15 = piVar2[3] - piVar2[2] >> 2;
                    if (0 < iVar15) {
                      do {
                        iVar4 = *(int *)(local_1c + 0x50);
                        iVar5 = *(int *)(piVar2[2] + iVar9 * 4);
                        bVar16 = iVar8 - iVar4 < 0;
                        if (iVar4 < iVar8) {
                          if (iVar4 <= *(int *)(iVar5 + 0x50)) {
                            bVar16 = iVar8 - iVar4 < 0;
                            if (iVar4 < iVar8) {
                              if (iVar4 < *(int *)(iVar5 + 0x50)) {
                                iRamfffffffc = iRamfffffffc -
                                               *(int *)(iVar12 + *(int *)(iVar5 + 0x50) * 4);
                                goto LAB_008567ea;
                              }
                              bVar16 = iVar8 - iVar4 < 0;
                            }
                            goto LAB_008567c3;
                          }
                          iRamfffffffc = iRamfffffffc +
                                         *(int *)(iVar12 + *(int *)(iVar5 + 0x50) * 4);
                        }
                        else {
LAB_008567c3:
                          if ((SBORROW4(iVar8,iVar4) == bVar16) || (iVar4 <= *(int *)(iVar5 + 0x50))
                             ) {
                            if ((iVar8 < iVar4) && (iVar4 < *(int *)(iVar5 + 0x50))) {
                              iRamfffffffc = iRamfffffffc +
                                             *(int *)(iVar12 + *(int *)(iVar5 + 0x50) * 4);
                            }
                          }
                          else {
                            iRamfffffffc = iRamfffffffc -
                                           *(int *)(iVar12 + *(int *)(iVar5 + 0x50) * 4);
                          }
                        }
LAB_008567ea:
                        iVar9 = iVar9 + 1;
                      } while (iVar9 < iVar15);
                    }
                    local_34 = local_34 + -1;
                  } while (local_34 != 0);
                }
              }
              local_24 = local_24 + 1;
            } while (local_24 < iVar14);
          }
          break;
        }
      }
      goto joined_r0x0085650d;
    }
    iVar12 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) + 0x84c);
    if ((iVar12 != 0) &&
       (iVar12 != *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x38) * 4) +
                          0x84c))) {
      iVar10 = FUN_00aae9af(0x48);
      local_8._0_1_ = 4;
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_0058d450(iVar10,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38)
                              ,iVar12);
      }
      local_8 = (uint)local_8._1_3_ << 8;
      iVar12 = (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                               *(int *)(param_1 + 0x38) * 4) + 0xcdc) + 0x44))();
      (**(code **)(**(int **)(iVar12 + 0x38) + 0x18))(uVar11);
    }
  }
  ExceptionList = local_10;
  return;
}

