// FUN_0046b3a0 @ 0046b3a0 body=[[0046b3a0, 0046c157] [0046c15b, 0046c4e9] [0046c4f0, 0046cc79] [0046cc80, 0046d079]]


/* WARNING: Removing unreachable block (ram,0x0046bfaf) */
/* WARNING: Removing unreachable block (ram,0x0046bfd7) */
/* WARNING: Removing unreachable block (ram,0x0046c001) */
/* WARNING: Removing unreachable block (ram,0x0046c053) */
/* WARNING: Removing unreachable block (ram,0x0046c2f1) */
/* WARNING: Removing unreachable block (ram,0x0046c319) */
/* WARNING: Removing unreachable block (ram,0x0046c343) */
/* WARNING: Removing unreachable block (ram,0x0046c395) */
/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_0046b3a0(undefined1 *param_1)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_ECX;
  byte *pbVar10;
  uint uVar11;
  bool bVar12;
  LPSTR ******local_88 [3];
  int local_7c;
  DWORD local_78;
  uint local_74;
  LPSTR ******local_50 [4];
  DWORD local_40;
  uint local_3c;
  int local_34;
  byte *local_30;
  int local_2c;
  int local_20;
  uint local_1c;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b82cdb;
  local_10 = ExceptionList;
  local_1c = 0;
  ExceptionList = &local_10;
  FUN_00989510();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  iVar6 = (local_2c - (int)local_30) / 0x1c;
  if (iVar6 < 1) goto LAB_0046c11d;
  pbVar4 = local_30;
  if (0xf < *(uint *)(local_30 + 0x14)) {
    pbVar4 = *(byte **)local_30;
  }
  pbVar10 = &DAT_00dfa9cc;
  do {
    bVar1 = *pbVar4;
    bVar12 = bVar1 < *pbVar10;
    if (bVar1 != *pbVar10) {
LAB_0046b430:
      iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
      goto LAB_0046b435;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar12 = bVar1 < pbVar10[1];
    if (bVar1 != pbVar10[1]) goto LAB_0046b430;
    pbVar4 = pbVar4 + 2;
    pbVar10 = pbVar10 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_0046b435:
  if (iVar5 != 0) {
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      if (iVar6 < 3) goto LAB_0046c11d;
      local_20 = FUN_00aaf0c5();
      FUN_00aaf0c5();
      cVar3 = FUN_00464d50();
      if (cVar3 == '\0') goto LAB_0046c11d;
      FUN_00464d90();
      local_8._0_1_ = 3;
      if (iVar6 != 4) goto LAB_0046b6eb;
      cVar3 = FUN_0040b360();
LAB_0046b6d2:
      if (cVar3 != '\0') {
        if (local_3c < 0x10) {
          local_50[0] = (LPSTR ******)local_50;
        }
        CharUpperBuffA((LPSTR)local_50[0],local_40);
      }
      goto LAB_0046b6eb;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 != '\0') {
      if (iVar6 == 4) {
        cVar3 = FUN_0040b360();
        if (cVar3 != '\0') {
          FUN_00989070();
          FUN_00989070();
          cVar3 = FUN_00464d20();
          if (cVar3 != '\0') {
            FUN_009888f0();
            FUN_0040b3c0();
            ExceptionList = local_10;
            return param_1;
          }
        }
      }
      else if ((iVar6 == 5) && (cVar3 = FUN_0040b360(), cVar3 != '\0')) {
        FUN_00989070();
        FUN_00989070();
        local_34 = FUN_00989070();
        cVar3 = FUN_00464d20();
        if (cVar3 != '\0') {
          FUN_00988a50();
          FUN_0040b3c0();
          ExceptionList = local_10;
          return param_1;
        }
      }
      goto LAB_0046c11d;
    }
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') {
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') {
        cVar3 = FUN_0040b360();
        if (cVar3 == '\0') {
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            cVar3 = FUN_0040b360();
            iVar5 = DAT_012588e8;
            if (cVar3 == '\0') {
              local_20 = DAT_012588e8 + 0xb5c;
              iVar6 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4);
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  cVar3 = FUN_0040b360();
                  if (cVar3 == '\0') {
                    cVar3 = FUN_0040b360();
                    if (cVar3 == '\0') {
                      cVar3 = FUN_0040b360();
                      if (cVar3 == '\0') {
                        cVar3 = FUN_0040b360();
                        if (cVar3 == '\0') {
                          cVar3 = FUN_0040b360();
                          if (cVar3 == '\0') goto LAB_0046c11d;
                          FUN_004f97a0();
                          local_8._0_1_ = 0x3a;
                          uVar11 = local_1c;
                          if ((local_2c - (int)local_30) / 0x1c < 2) {
LAB_0046cfb6:
                            bVar12 = false;
                          }
                          else {
                            FUN_009885d0();
                            iVar6 = local_2c;
                            local_8 = CONCAT31(local_8._1_3_,0x3b);
                            uVar11 = 0x400;
                            local_1c = 0x400;
                            iVar5 = FUN_0045c080();
                            if (iVar5 == iVar6) goto LAB_0046cfb6;
                            bVar12 = true;
                          }
                          local_8 = 0x3a;
                          if ((uVar11 & 0x400) != 0) {
                            uVar11 = uVar11 & 0xfffffbff;
                            FUN_00408ad0();
                          }
                          if (bVar12) {
                            FUN_0055dd70();
                            local_8._0_1_ = 0x3c;
                            FUN_00408ed0();
                            local_8 = CONCAT31(local_8._1_3_,0x3a);
                            FUN_00408ad0();
                          }
                          if (1 < (local_2c - (int)local_30) / 0x1c) {
                            FUN_009885d0();
                            local_8 = CONCAT31(local_8._1_3_,0x3d);
                            uVar11 = uVar11 | 0x800;
                            local_1c = uVar11;
                            iVar6 = FUN_0045c080();
                            if (iVar6 != local_2c) {
                              cVar3 = '\x01';
                              local_8._0_1_ = 0x3a;
                              bVar12 = false;
                              goto LAB_0046cf2c;
                            }
                          }
                          cVar3 = '\0';
                          local_8._0_1_ = 0x3a;
                          bVar12 = (uVar11 & 0x800) == 0;
                        }
                        else {
                          piVar2 = *(int **)(*(int *)(iVar5 + 0xacc) + *(int *)(iVar6 + 0xbe4) * 4);
                          if (piVar2 == (int *)0x0) goto LAB_0046c11d;
                          (**(code **)(*piVar2 + 0x1c))();
                          local_8._0_1_ = 0x38;
                          if ((local_2c - (int)local_30) / 0x1c < 2) {
LAB_0046cf20:
                            cVar3 = '\0';
                          }
                          else {
                            FUN_009885d0();
                            local_8 = CONCAT31(local_8._1_3_,0x39);
                            local_1c = 0x200;
                            iVar6 = FUN_0045c080();
                            if (iVar6 == local_2c) goto LAB_0046cf20;
                            cVar3 = '\x01';
                          }
                          local_8._0_1_ = 0x38;
                          bVar12 = (local_1c & 0x200) == 0;
                        }
LAB_0046cf2c:
                        local_8._1_3_ = 0;
                        if (!bVar12) {
                          FUN_00408ad0();
                        }
                        goto LAB_0046b6d2;
                      }
                      if (*(int *)(iVar5 + 0xae0) - *(int *)(iVar5 + 0xadc) >> 2 < 1)
                      goto LAB_0046c11d;
                      local_7c = 0;
                      local_78 = 0;
                      local_74 = 0;
                      local_8 = CONCAT31(local_8._1_3_,0x33);
                      FUN_004bf300();
                      iVar6 = *(int *)(iVar5 + 0xadc);
                      local_34 = 0;
                      if (0 < (int)(*(int *)(iVar5 + 0xae0) - iVar6 & 0xfffffffcU)) {
                        do {
                          iVar7 = local_34;
                          iVar6 = *(int *)(iVar6 + local_34 * 4);
                          if ((((*(int *)(iVar6 + 0x20) != 0) &&
                               (cVar3 = FUN_00416e40(), cVar3 == '\0')) &&
                              (0 < (int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) &
                                        0xfffffffcU))) &&
                             ((*(char *)(iVar6 + 0x12d0) == '\0' &&
                              (*(int *)(iVar6 + 0x20) != *(int *)(local_20 + 4))))) {
                            FUN_004e9b90();
                            iVar7 = local_34;
                          }
                          iVar6 = *(int *)(iVar5 + 0xadc);
                          local_34 = iVar7 + 1;
                        } while (local_34 < *(int *)(iVar5 + 0xae0) - iVar6 >> 2);
                      }
                      if ((int)(local_78 - local_7c) >> 2 < 1) goto LAB_0046ce81;
                      FUN_009b7910();
                      FUN_004f97a0();
                      local_8._0_1_ = 0x34;
                      uVar11 = local_1c;
                      if ((local_2c - (int)local_30) / 0x1c < 2) {
LAB_0046cd71:
                        local_15 = '\0';
                      }
                      else {
                        FUN_009885d0();
                        iVar6 = local_2c;
                        local_8 = CONCAT31(local_8._1_3_,0x35);
                        uVar11 = 0x80;
                        local_1c = 0x80;
                        iVar5 = FUN_0045c080();
                        if (iVar5 == iVar6) goto LAB_0046cd71;
                        local_15 = '\x01';
                      }
                      local_8 = 0x34;
                      if ((char)uVar11 < '\0') {
                        uVar11 = uVar11 & 0xffffff7f;
                        FUN_00408ad0();
                      }
                      if (local_15 != '\0') {
                        FUN_0055dd70();
                        local_8._0_1_ = 0x36;
                        FUN_00408ed0();
                        local_8 = CONCAT31(local_8._1_3_,0x34);
                        FUN_00408ad0();
                      }
                      if (1 < (local_2c - (int)local_30) / 0x1c) {
                        FUN_009885d0();
                        local_8 = CONCAT31(local_8._1_3_,0x37);
                        uVar11 = uVar11 | 0x100;
                        local_1c = uVar11;
                        iVar6 = FUN_0045c080();
                        local_15 = '\x01';
                        if (iVar6 != local_2c) goto LAB_0046ce15;
                      }
                      local_15 = '\0';
LAB_0046ce15:
                      local_8 = 0x34;
                      if ((uVar11 & 0x100) != 0) {
                        FUN_00408ad0();
                      }
                      if (local_15 != '\0') {
                        if (local_3c < 0x10) {
                          local_50[0] = (LPSTR ******)local_50;
                        }
                        CharUpperBuffA((LPSTR)local_50[0],local_40);
                      }
                      FUN_00401320();
                      FUN_00408ad0();
                      FUN_00461f90();
                      FUN_0040b3c0();
                      ExceptionList = local_10;
                      return param_1;
                    }
                    if (*(int *)(iVar5 + 0xae0) - *(int *)(iVar5 + 0xadc) >> 2 < 1)
                    goto LAB_0046c11d;
                    local_7c = 0;
                    local_78 = 0;
                    local_74 = 0;
                    local_8 = CONCAT31(local_8._1_3_,0x2e);
                    FUN_004bf300();
                    iVar6 = *(int *)(iVar5 + 0xadc);
                    local_34 = 0;
                    if (0 < (int)(*(int *)(iVar5 + 0xae0) - iVar6 & 0xfffffffcU)) {
                      do {
                        iVar7 = local_34;
                        iVar6 = *(int *)(iVar6 + local_34 * 4);
                        if (((*(int *)(iVar6 + 0x20) != 0) &&
                            (cVar3 = FUN_00416e40(), cVar3 == '\0')) &&
                           ((0 < (int)(*(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) &
                                      0xfffffffcU) &&
                            ((*(char *)(iVar6 + 0x12d0) != '\0' &&
                             (*(int *)(iVar6 + 0x20) != *(int *)(local_20 + 4))))))) {
                          FUN_004e9b90();
                          iVar7 = local_34;
                        }
                        iVar6 = *(int *)(iVar5 + 0xadc);
                        local_34 = iVar7 + 1;
                      } while (local_34 < *(int *)(iVar5 + 0xae0) - iVar6 >> 2);
                    }
                    if ((int)(local_78 - local_7c) >> 2 < 1) goto LAB_0046ce81;
                    FUN_009b7910();
                    FUN_004f97a0();
                    local_8._0_1_ = 0x2f;
                    uVar11 = local_1c;
                    if ((local_2c - (int)local_30) / 0x1c < 2) {
LAB_0046cb11:
                      local_15 = '\0';
                    }
                    else {
                      FUN_009885d0();
                      iVar6 = local_2c;
                      local_8 = CONCAT31(local_8._1_3_,0x30);
                      uVar11 = 0x20;
                      local_1c = 0x20;
                      iVar5 = FUN_0045c080();
                      if (iVar5 == iVar6) goto LAB_0046cb11;
                      local_15 = '\x01';
                    }
                    local_8 = 0x2f;
                    if ((uVar11 & 0x20) != 0) {
                      uVar11 = uVar11 & 0xffffffdf;
                      FUN_00408ad0();
                    }
                    if (local_15 != '\0') {
                      FUN_0055dd70();
                      local_8._0_1_ = 0x31;
                      FUN_00408ed0();
                      local_8 = CONCAT31(local_8._1_3_,0x2f);
                      FUN_00408ad0();
                    }
                    if (1 < (local_2c - (int)local_30) / 0x1c) {
                      FUN_009885d0();
                      local_8 = CONCAT31(local_8._1_3_,0x32);
                      uVar11 = uVar11 | 0x40;
                      local_1c = uVar11;
                      iVar6 = FUN_0045c080();
                      local_15 = '\x01';
                      if (iVar6 != local_2c) goto LAB_0046cbb0;
                    }
                    local_15 = '\0';
LAB_0046cbb0:
                    local_8 = 0x2f;
                    if ((uVar11 & 0x40) != 0) {
                      FUN_00408ad0();
                    }
                    if (local_15 != '\0') {
                      if (local_3c < 0x10) {
                        local_50[0] = (LPSTR ******)local_50;
                      }
                      CharUpperBuffA((LPSTR)local_50[0],local_40);
                    }
                    FUN_00401320();
                    FUN_00408ad0();
                    FUN_00461f90();
                    FUN_0040b3c0();
                    ExceptionList = local_10;
                    return param_1;
                  }
                  if ((int)(*(int *)(iVar5 + 0xbe4) - *(int *)(iVar5 + 0xbe0) & 0xfffffffcU) < 1)
                  goto LAB_0046c11d;
                  local_7c = 0;
                  local_78 = 0;
                  local_74 = 0;
                  local_8 = CONCAT31(local_8._1_3_,0x29);
                  FUN_009beeb0();
                  if (*(char *)(iVar6 + 0x31) != '\0') {
                    FUN_0068e9f0();
                  }
                  if ((int)(local_78 - local_7c) >> 2 < 1) {
LAB_0046ce81:
                    local_8._0_1_ = 0;
                    FUN_00461f90();
                    goto LAB_0046c11d;
                  }
                  FUN_009b7910();
                  FUN_004f97a0();
                  local_8._0_1_ = 0x2a;
                  uVar11 = local_1c;
                  if ((local_2c - (int)local_30) / 0x1c < 2) {
LAB_0046c8bd:
                    local_15 = '\0';
                  }
                  else {
                    FUN_009885d0();
                    iVar6 = local_2c;
                    local_8 = CONCAT31(local_8._1_3_,0x2b);
                    uVar11 = 8;
                    local_1c = 8;
                    iVar5 = FUN_0045c080();
                    if (iVar5 == iVar6) goto LAB_0046c8bd;
                    local_15 = '\x01';
                  }
                  local_8 = 0x2a;
                  if ((uVar11 & 8) != 0) {
                    uVar11 = uVar11 & 0xfffffff7;
                    FUN_00408ad0();
                  }
                  if (local_15 != '\0') {
                    FUN_0055dd70();
                    local_8._0_1_ = 0x2c;
                    FUN_00408ed0();
                    local_8 = CONCAT31(local_8._1_3_,0x2a);
                    FUN_00408ad0();
                  }
                  if (1 < (local_2c - (int)local_30) / 0x1c) {
                    FUN_009885d0();
                    local_8 = CONCAT31(local_8._1_3_,0x2d);
                    uVar11 = uVar11 | 0x10;
                    local_1c = uVar11;
                    iVar6 = FUN_0045c080();
                    local_15 = '\x01';
                    if (iVar6 != local_2c) goto LAB_0046c95c;
                  }
                  local_15 = '\0';
LAB_0046c95c:
                  local_8 = 0x2a;
                  if ((uVar11 & 0x10) != 0) {
                    FUN_00408ad0();
                  }
                  if (local_15 != '\0') {
                    if (local_3c < 0x10) {
                      local_50[0] = (LPSTR ******)local_50;
                    }
                    CharUpperBuffA((LPSTR)local_50[0],local_40);
                  }
                  FUN_00401320();
                  FUN_00408ad0();
                  FUN_00461f90();
                  FUN_0040b3c0();
                  ExceptionList = local_10;
                  return param_1;
                }
                iVar5 = *(int *)(iVar6 + 0x9dc) - *(int *)(iVar6 + 0x9d8) >> 2;
                if (iVar5 < 1) goto LAB_0046c11d;
                local_7c = 0;
                local_78 = 0;
                local_74 = 0;
                local_8 = CONCAT31(local_8._1_3_,0x26);
                FUN_004bf300();
                iVar7 = 0;
                if (0 < iVar5) {
                  do {
                    local_34 = *(int *)(*(int *)(iVar6 + 0x9d8) + iVar7 * 4);
                    if (*(int *)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_34 * 4) + 0x134) ==
                        *(int *)(local_20 + 4)) {
                      FUN_004e9b90();
                    }
                    iVar7 = iVar7 + 1;
                  } while (iVar7 < iVar5);
                }
                iVar6 = local_7c;
                iVar5 = (int)(local_78 - local_7c) >> 2;
                if (0 < iVar5) {
                  iVar7 = FUN_009b7910();
                  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                         *(int *)(iVar6 + (iVar7 % iVar5) * 4) * 4) + 0x1c))();
                  local_8._0_1_ = 0x27;
                  if (1 < (local_2c - (int)local_30) / 0x1c) {
                    FUN_009885d0();
                    local_8 = CONCAT31(local_8._1_3_,0x28);
                    local_1c = 4;
                    iVar6 = FUN_0045c080();
                    if (iVar6 != local_2c) {
                      bVar12 = true;
                      goto LAB_0046c755;
                    }
                  }
                  bVar12 = false;
LAB_0046c755:
                  local_8 = 0x27;
                  if ((local_1c & 4) != 0) {
                    FUN_00408ad0();
                  }
                  if (bVar12) {
                    if (local_3c < 0x10) {
                      local_50[0] = (LPSTR ******)local_50;
                    }
                    CharUpperBuffA((LPSTR)local_50[0],local_40);
                  }
                  FUN_00401320();
                  FUN_00408ad0();
                  FUN_00461f90();
                  FUN_0040b3c0();
                  ExceptionList = local_10;
                  return param_1;
                }
              }
              else {
                if (*(int *)(iVar6 + 0xa00) < 1) goto LAB_0046c11d;
                local_7c = 0;
                local_78 = 0;
                local_74 = 0;
                local_8 = CONCAT31(local_8._1_3_,0x23);
                FUN_004bf300();
                piVar2 = *(int **)(iVar6 + 0x9f8);
                iVar6 = local_7c;
                while (local_7c = iVar6, piVar2 != (int *)0x0) {
                  local_34 = *piVar2;
                  piVar2 = (int *)piVar2[2];
                  iVar5 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + local_34 * 4);
                  if ((*(int *)(iVar5 + 300) == *(int *)(local_20 + 4)) &&
                     (*(int *)(iVar5 + 0x134) == *(int *)(local_20 + 4))) {
                    FUN_004e9b90();
                    iVar6 = local_7c;
                  }
                }
                iVar5 = (int)(local_78 - iVar6) >> 2;
                if (0 < iVar5) {
                  iVar7 = FUN_009b7910();
                  (**(code **)(**(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                                         *(int *)(iVar6 + (iVar7 % iVar5) * 4) * 4) + 0x1c))();
                  local_8._0_1_ = 0x24;
                  if (1 < (local_2c - (int)local_30) / 0x1c) {
                    FUN_009885d0();
                    local_8 = CONCAT31(local_8._1_3_,0x25);
                    local_1c = 2;
                    iVar6 = FUN_0045c080();
                    if (iVar6 != local_2c) {
                      bVar12 = true;
                      goto LAB_0046c5c3;
                    }
                  }
                  bVar12 = false;
LAB_0046c5c3:
                  local_8 = 0x24;
                  if ((local_1c & 2) != 0) {
                    FUN_00408ad0();
                  }
                  if (bVar12) {
                    if (local_3c < 0x10) {
                      local_50[0] = (LPSTR ******)local_50;
                    }
                    CharUpperBuffA((LPSTR)local_50[0],local_40);
                  }
                  FUN_00401320();
                  FUN_00408ad0();
                  FUN_00461f90();
                  FUN_0040b3c0();
                  ExceptionList = local_10;
                  return param_1;
                }
              }
              local_8._0_1_ = 0;
              FUN_00461f90();
              goto LAB_0046c11d;
            }
            if ((iVar6 != 5) || (cVar3 = FUN_0040b360(), cVar3 == '\0')) goto LAB_0046c11d;
            FUN_00989070();
            FUN_00989070();
            cVar3 = FUN_00464d50();
            if (cVar3 == '\0') goto LAB_0046c11d;
            FUN_00464d90();
            local_8 = CONCAT31(local_8._1_3_,0x1b);
            FUN_00875040();
            iVar6 = FUN_005c2ad0();
            if (iVar6 == 0) {
              iVar6 = FUN_005c2ad0();
            }
            if (iVar6 != 0) {
              local_8._0_1_ = 0x1c;
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                cVar3 = FUN_0040b360();
                if (cVar3 == '\0') {
                  cVar3 = FUN_0040b360();
                  if (cVar3 != '\0') {
                    FUN_00408ed0();
                    local_1c = 7;
                  }
                }
                else {
                  FUN_00408ed0();
                  local_1c = 3;
                }
              }
              else {
                FUN_00408ed0();
                local_1c = 5;
              }
              FUN_00874830();
              local_8._0_1_ = 0x1d;
              FUN_00408ed0();
              local_8._0_1_ = 0x1c;
              FUN_00408ad0();
              local_1c = 1;
              FUN_009885d0();
              local_8._0_1_ = 0x21;
              FUN_004015b0();
              local_8._0_1_ = 0x22;
              FUN_00987d20();
              uVar8 = FUN_00418e30();
              uVar8 = FUN_00418e30(uVar8," has missing description. Please script one.");
              FUN_00401280(uVar8);
              local_8 = CONCAT31(local_8._1_3_,0x21);
              FUN_00401650();
              FUN_00408ad0();
              FUN_00408ad0();
            }
          }
          else {
            if ((iVar6 != 5) || (cVar3 = FUN_0040b360(), cVar3 == '\0')) goto LAB_0046c11d;
            FUN_00989070();
            FUN_00989070();
            cVar3 = FUN_00464d20();
            if ((cVar3 == '\0') || (iVar6 = FUN_009c16d0(), iVar6 == 0)) goto LAB_0046c11d;
            local_8._0_1_ = 0x11;
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') {
                cVar3 = FUN_0040b360();
                if (cVar3 != '\0') {
                  FUN_008a6180();
                  local_8._0_1_ = 0x14;
                  FUN_00408ed0();
                  local_8._0_1_ = 0x11;
                  FUN_00408ad0();
                  local_1c = 7;
                }
              }
              else {
                FUN_008a6120();
                local_8._0_1_ = 0x13;
                FUN_00408ed0();
                local_8._0_1_ = 0x11;
                FUN_00408ad0();
                local_1c = 3;
              }
            }
            else {
              FUN_008a6150();
              local_8._0_1_ = 0x12;
              FUN_00408ed0();
              local_8._0_1_ = 0x11;
              FUN_00408ad0();
              local_1c = 5;
            }
            FUN_008a60f0();
            local_8._0_1_ = 0x15;
            FUN_00408ed0();
            local_8._0_1_ = 0x11;
            FUN_00408ad0();
            local_1c = 1;
            FUN_009885d0();
            local_8._0_1_ = 0x19;
            FUN_004015b0();
            local_8._0_1_ = 0x1a;
            uVar8 = FUN_00987d20();
            FUN_00447240(uVar8);
            FUN_00418e30();
            FUN_00401280();
            local_8._0_1_ = 0x19;
            FUN_00401650();
            FUN_00408ad0();
          }
          local_8._0_1_ = 0;
          FUN_00408ad0();
LAB_0046c11d:
          *(undefined4 *)(param_1 + 0x14) = 0xf;
          *(undefined4 *)(param_1 + 0x10) = 0;
          *param_1 = 0;
          FUN_00408ed0();
          if (local_30 != (byte *)0x0) {
            FUN_00413860();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          ExceptionList = local_10;
          return param_1;
        }
        if ((iVar6 != 3) || (cVar3 = FUN_0040b360(), cVar3 == '\0')) goto LAB_0046c11d;
        local_20 = FUN_00989070();
        FUN_009885d0();
        local_8._0_1_ = 0xf;
        iVar6 = 0;
        while (cVar3 = FUN_00464d50(), cVar3 != '\0') {
          if (0 < iVar6) {
            FUN_00448740();
          }
          FUN_00464d90();
          local_8._0_1_ = 0x10;
          FUN_00448aa0();
          local_8._0_1_ = 0xf;
          FUN_00408ad0();
          iVar6 = iVar6 + 1;
        }
      }
      else {
        if ((iVar6 != 3) || (cVar3 = FUN_0040b360(), cVar3 == '\0')) goto LAB_0046c11d;
        local_20 = FUN_00989070();
        FUN_009885d0();
        local_8._0_1_ = 0xb;
        iVar6 = 0;
        while (cVar3 = FUN_00464cf0(), cVar3 != '\0') {
          if (0 < iVar6) {
            cVar3 = FUN_00464cf0();
            if (cVar3 == '\0') {
              FUN_00475d50();
              local_8._0_1_ = 0xc;
              FUN_00988fa0();
              local_8._0_1_ = 0xd;
              FUN_00448aa0();
              FUN_00408ad0();
              local_8._0_1_ = 0xb;
              FUN_00408ad0();
            }
            else {
              FUN_00448740();
            }
          }
          FUN_0055dd40();
          local_8._0_1_ = 0xe;
          FUN_00448aa0();
          local_8._0_1_ = 0xb;
          FUN_00408ad0();
          iVar6 = iVar6 + 1;
        }
      }
LAB_0046b6eb:
      FUN_00401320();
    }
    else {
      if (iVar6 == 3) {
        iVar6 = FUN_00989070();
        if (iVar6 < *(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54) >> 2) {
          iVar6 = *(int *)(*(int *)(in_ECX + 0x54) + iVar6 * 4);
          local_20 = iVar6;
          cVar3 = FUN_0040b360();
          if (cVar3 != '\0') {
            FUN_0043b700();
            FUN_0040b3c0();
            ExceptionList = local_10;
            return param_1;
          }
          cVar3 = FUN_0040b360();
          if (cVar3 != '\0') {
            FUN_0043acd0();
            FUN_0040b3c0();
            ExceptionList = local_10;
            return param_1;
          }
          cVar3 = FUN_0040b360();
          if (cVar3 == '\0') {
            cVar3 = FUN_0040b360();
            if (cVar3 == '\0') {
              cVar3 = FUN_0040b360();
              if (cVar3 == '\0') goto LAB_0046c11d;
              iVar6 = (iVar6 + -43800000) / 0x18;
              iVar6 = (iVar6 - (int)((float)(int)((double)iVar6 / 365.0) * 365.0)) - DAT_00f1027c;
              if (-1 < iVar6) {
                iVar5 = 0;
                do {
                  iVar5 = iVar5 + 1;
                  iVar6 = iVar6 - (&DAT_00f1027c)[iVar5];
                } while (-1 < iVar6);
              }
            }
            else {
              FUN_00424930();
            }
          }
          else {
            FUN_00424a50();
          }
          FUN_009888f0();
LAB_0046b910:
          FUN_0040b3c0();
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0046c11d;
      }
      if (iVar6 != 4) goto LAB_0046c11d;
      cVar3 = FUN_0040b360();
      if ((cVar3 != '\0') && (cVar3 = FUN_0040b360(), cVar3 != '\0')) {
        iVar6 = FUN_00989070();
        if (iVar6 < *(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54) >> 2) {
          FUN_009c5310();
          local_8._0_1_ = 4;
          iVar6 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar6 + 0x6c));
          local_8._0_1_ = 0;
          FUN_009a9740();
          goto LAB_0046b910;
        }
        goto LAB_0046c11d;
      }
      cVar3 = FUN_0040b360();
      if (cVar3 == '\0') goto LAB_0046c11d;
      iVar6 = FUN_00989070();
      iVar5 = FUN_00989070();
      if ((*(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54) >> 2 <= iVar6) ||
         (*(int *)(in_ECX + 0x58) - *(int *)(in_ECX + 0x54) >> 2 <= iVar5)) goto LAB_0046c11d;
      iVar5 = *(int *)(in_ECX + 0x54);
      iVar7 = FUN_00457630();
      iVar6 = *(int *)(iVar5 + iVar6 * 4) + iVar7 * -0x18;
      local_20 = iVar6;
      if (iVar6 < 1) {
        FUN_00475d50();
        goto LAB_0046b6fe;
      }
      iVar7 = FUN_00424a50();
      iVar6 = (iVar6 + -43800000) / 0x18;
      iVar5 = 0;
      for (iVar6 = (iVar6 - (int)((float)(int)((double)iVar6 / 365.0) * 365.0)) - DAT_00f1027c;
          -1 < iVar6; iVar6 = iVar6 - (&DAT_00f1027c)[iVar5]) {
        iVar5 = iVar5 + 1;
      }
      FUN_00424930();
      if (iVar7 < 1) {
        if (iVar5 < 1) {
          FUN_009888f0();
          local_8._0_1_ = 10;
          FUN_0042c180();
        }
        else {
          FUN_009888f0();
          local_8._0_1_ = 8;
          uVar8 = FUN_009888f0();
          local_8._0_1_ = 9;
          FUN_0043ec10(param_1,&DAT_00dfaa30,uVar8);
          FUN_00408ad0();
        }
      }
      else {
        FUN_009888f0();
        local_8._0_1_ = 5;
        uVar8 = FUN_009888f0();
        local_8._0_1_ = 6;
        uVar9 = FUN_009888f0();
        local_8._0_1_ = 7;
        FUN_0043e9a0(param_1,&DAT_00dfaa34,uVar9,&DAT_00dfaa30,uVar8);
        FUN_00408ad0();
        FUN_00408ad0();
      }
    }
    FUN_00408ad0();
LAB_0046b6fe:
    FUN_0040b3c0();
    ExceptionList = local_10;
    return param_1;
  }
  if (iVar6 == 5) {
    cVar3 = FUN_0040b360();
    if ((cVar3 != '\0') && (cVar3 = FUN_0040b360(), cVar3 != '\0')) {
      iVar6 = FUN_00989070();
      iVar5 = FUN_00989070();
      cVar3 = FUN_00464cf0();
      if ((cVar3 != '\0') &&
         ((piVar2 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) +
                             *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                              *(int *)(*(int *)(*(int *)(in_ECX + 0x24) +
                                                               iVar6 * 0x10) + iVar5 * 8 + 4) * 4) +
                                     0xbe4) * 4), piVar2 != (int *)0x0 && (0 < piVar2[0x16])))) {
        (**(code **)(*piVar2 + 0x1c))();
        FUN_0040b3c0();
        ExceptionList = local_10;
        return param_1;
      }
      goto LAB_0046c11d;
    }
  }
  else if (iVar6 < 3) goto LAB_0046c11d;
  iVar5 = FUN_00aaf0c5();
  local_34 = FUN_00aaf0c5();
  cVar3 = FUN_00464cf0();
  if (cVar3 == '\0') goto LAB_0046c11d;
  local_20 = iVar5 << 4;
  local_34 = local_34 * 8;
  FUN_0055dd40();
  local_8._0_1_ = 1;
  if (iVar6 == 4) {
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') goto LAB_0046b59a;
  }
  else {
    if (iVar6 < 4) goto LAB_0046b615;
LAB_0046b59a:
    cVar3 = FUN_0040b360();
    if (cVar3 == '\0') goto LAB_0046b615;
    FUN_0055dd70();
    local_8._0_1_ = 2;
    FUN_00408ed0();
    local_8._0_1_ = 1;
    FUN_00408ad0();
    if ((iVar6 != 5) || (cVar3 = FUN_0040b360(), cVar3 == '\0')) goto LAB_0046b615;
  }
  if (local_74 < 0x10) {
    local_88[0] = (LPSTR ******)local_88;
  }
  CharUpperBuffA((LPSTR)local_88[0],local_78);
LAB_0046b615:
  FUN_00401320();
  FUN_00408ad0();
  FUN_0040b3c0();
  ExceptionList = local_10;
  return param_1;
}

