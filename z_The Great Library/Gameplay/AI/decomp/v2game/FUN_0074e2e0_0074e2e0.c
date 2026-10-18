// FUN_0074e2e0 @ 0074e2e0 body=[[0074e2e0, 0074e574] [0074e578, 0074e5a2] [0074e5a6, 0074e5c5] [0074e5c9, 0074e5df] [0074e5e3, 0074e784] [0074e788, 0074e7a3] [0074e7a7, 0074e7c3] [0074e7c7, 0074e7ec] [0074e7f0, 0074fe65] [0074fe69, 0074fe93] [0074fe97, 0074fec1]]


undefined4 FUN_0074e2e0(byte *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 uVar8;
  int *in_ECX;
  char *pcVar9;
  int iVar10;
  byte *pbVar11;
  int *piVar12;
  bool bVar13;
  undefined1 local_19c [112];
  undefined1 local_12c;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_110;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f4;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  uint local_cc;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_94 [28];
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c;
  undefined1 local_54 [8];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int *local_18;
  byte *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  pbVar11 = param_1;
  puStack_c = &LAB_00bac75f;
  local_10 = ExceptionList;
  local_1c = 0;
  local_118 = 0xf;
  local_fc = 0xf;
  local_e0 = 0xf;
  local_11c = 0;
  local_12c = 0;
  local_100 = 0;
  local_110 = 0;
  local_e4 = 0;
  local_f4 = 0;
  local_d8 = 0;
  local_d4 = 1;
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_18 = (int *)(*(int *)(param_1 + 0x134) + 0x1a8);
  ExceptionList = &local_10;
  local_14 = (byte *)(**(code **)(*in_ECX + 0x44))();
  if (0xf < *(uint *)(local_14 + 0x14)) {
    local_14 = *(byte **)local_14;
  }
  pcVar9 = "workforce_chart";
  pbVar6 = local_14;
  do {
    bVar1 = *pbVar6;
    bVar13 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0074e3a5:
      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0074e3aa;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar13 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0074e3a5;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_0074e3aa:
  if (iVar7 == 0) {
    local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4) + 0xcdc)
                           + 0x58) + 0x4c))();
    param_1 = (byte *)0x0;
    local_14 = (byte *)0x0;
    cVar5 = FUN_009e0c90(local_40,local_3c,&local_14,&local_1c);
    if (cVar5 != '\0') {
      iVar7 = 0;
      if (DAT_0131bb34 == 0) {
        local_1c = FUN_00aae9af();
        local_8._0_1_ = 1;
        if (local_1c != 0) {
          FUN_0041a160();
        }
        local_8._0_1_ = 0;
        FUN_00423700();
      }
      iVar10 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
      if (0 < iVar10) {
        do {
          local_1c = *(int *)(local_18[0x14] + iVar7 * 4);
          if (local_1c != 0) {
            if (param_1 == local_14) {
              if (DAT_0131bb34 == 0) {
                param_1 = (byte *)FUN_00aae9af();
                local_8._0_1_ = 2;
                if (param_1 != (byte *)0x0) {
                  FUN_0041a160();
                }
                local_8._0_1_ = 0;
                FUN_00423700();
              }
              if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar7) {
                uVar8 = FUN_0096bb70();
              }
              else {
                uVar8 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + iVar7 * 4);
              }
              local_48 = 0xf;
              local_4c = 0;
              local_5c = local_5c & 0xffffff00;
              FUN_00409350(&DAT_00e02ec4,2);
              local_8._0_1_ = 3;
              FUN_0096d650(uVar8,local_38);
              local_8._0_1_ = 4;
              FUN_009888f0();
              local_8._0_1_ = 5;
              FUN_00988f20();
              local_8._0_1_ = 6;
              FUN_00988f20();
              local_8._0_1_ = 7;
              FUN_00408ed0();
              if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_b8 = 0xf;
              local_bc = 0;
              local_cc = local_cc & 0xffffff00;
              if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_9c = 0xf;
              local_a0 = 0;
              local_b0 = local_b0 & 0xffffff00;
              if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_64 = 0xf;
              local_68 = 0;
              local_78[0] = local_78[0] & 0xffffff00;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_38[0] = local_38[0] & 0xffffff00;
              goto joined_r0x0074e5f2;
            }
            param_1 = param_1 + 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar10);
      }
    }
    goto LAB_0074fe97;
  }
  pcVar9 = "culture_chart";
  pbVar6 = local_14;
  do {
    bVar1 = *pbVar6;
    bVar13 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0074e628:
      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0074e62d;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar13 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0074e628;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_0074e62d:
  if (iVar7 == 0) {
    local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4) + 0xcdc)
                           + 0x58) + 0x4c))();
    pbVar11 = (byte *)0x0;
    param_1 = (byte *)0x0;
    cVar5 = FUN_009e0c90(local_40,local_3c,&param_1,&local_1c);
    if (cVar5 != '\0') {
      iVar7 = 0;
      iVar10 = *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2;
      if (0 < iVar10) {
LAB_0074e6b3:
        local_1c = *(int *)(local_18[0x12] + iVar7 * 4);
        if (local_1c == 0) goto LAB_0074e6c3;
        if (pbVar11 != param_1) {
          pbVar11 = pbVar11 + 1;
          goto LAB_0074e6c3;
        }
        if (*(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2 <= iVar7) {
          FUN_00561180();
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c = local_5c & 0xffffff00;
        FUN_00409350(&DAT_00e02ec4,2);
        local_8._0_1_ = 8;
        FUN_00974c50();
        local_8._0_1_ = 9;
        FUN_009888f0();
        local_8._0_1_ = 10;
        FUN_00988f20();
        local_8._0_1_ = 0xb;
        FUN_00988f20();
        local_8._0_1_ = 0xc;
        FUN_00408ed0();
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if (0xf < local_9c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_9c = 0xf;
        local_a0 = 0;
        local_b0 = local_b0 & 0xffffff00;
        if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_cc = local_cc & 0xffffff00;
joined_r0x0074e5f2:
        local_28 = 0;
        local_24 = 0xf;
        local_68 = 0;
        local_64 = 0xf;
        local_a0 = 0;
        local_9c = 0xf;
        local_bc = 0;
        local_b8 = 0xf;
        uVar3 = local_48;
        goto joined_r0x0074e5f2;
      }
    }
    goto LAB_0074fe97;
  }
  pcVar9 = "ideology_chart";
  pbVar6 = local_14;
  do {
    bVar1 = *pbVar6;
    bVar13 = bVar1 < (byte)*pcVar9;
    if (bVar1 != *pcVar9) {
LAB_0074e840:
      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_0074e845;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar6[1];
    bVar13 = bVar1 < (byte)pcVar9[1];
    if (bVar1 != pcVar9[1]) goto LAB_0074e840;
    pbVar6 = pbVar6 + 2;
    pcVar9 = pcVar9 + 2;
  } while (bVar1 != 0);
  iVar7 = 0;
LAB_0074e845:
  if (iVar7 == 0) {
    local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4) + 0xcdc)
                           + 0x58) + 0x4c))();
    param_1 = (byte *)0x0;
    local_14 = (byte *)0x0;
    cVar5 = FUN_009e0c90(local_40,local_3c,&local_14,&local_1c);
    if (cVar5 != '\0') {
      iVar7 = 0;
      iVar10 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
      if (0 < iVar10) {
        local_1c = local_18[9];
        do {
          iVar2 = *(int *)(local_1c + iVar7 * 4);
          if (iVar2 != 0) {
            if (param_1 == local_14) {
              piVar12 = *(int **)(*(int *)(DAT_01258a3c + 0xc) + iVar7 * 4);
              param_1 = (byte *)(((float)iVar2 * 100.0) / (float)*local_18);
              FUN_009885d0();
              local_8._0_1_ = 0xd;
              uVar8 = (**(code **)(*piVar12 + 0x18))();
              local_8._0_1_ = 0xe;
              FUN_00988d00();
              local_8._0_1_ = 0xf;
              FUN_00988f20(local_38);
              local_8._0_1_ = 0x10;
              uVar8 = FUN_00988f20(uVar8);
              local_8._0_1_ = 0x11;
              FUN_00408ed0(uVar8,0,0xffffffff);
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8 = (uint)local_8._1_3_ << 8;
              FUN_00408ad0();
              FUN_0040c830(param_2);
              FUN_00459820();
              ExceptionList = local_10;
              return param_2;
            }
            param_1 = param_1 + 1;
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < iVar10);
      }
    }
    goto LAB_0074fe97;
  }
  iVar7 = FUN_00aafe90(local_14,"total_population_icon");
  if ((iVar7 != 0) || (iVar7 = FUN_00aafe90(local_14,"total_population"), iVar7 != 0)) {
    FUN_009885d0();
    local_8._0_1_ = 0x12;
    FUN_009a8ee0(local_54,local_78);
    local_8._0_1_ = 0x13;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8._0_1_ = 0x14;
    FUN_00408ed0();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8._0_1_ = 0x12;
    FUN_009a9740();
    uVar3 = local_64;
joined_r0x0074e5f2:
    local_8._0_1_ = 0;
    if (0xf < uVar3) {
      local_8._0_1_ = 0;
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto LAB_0074fe97;
  }
  iVar7 = FUN_00aafe90(local_14,"supply_limit");
  if (iVar7 != 0) {
    FUN_004b3e00();
    local_8._0_1_ = 0x15;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    FUN_00408ad0();
    goto LAB_0074fe97;
  }
  iVar7 = FUN_00aafe90(local_14,"invest_factory_button");
  if (iVar7 != 0) {
    local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    FUN_0052e9f0();
    local_8._0_1_ = 0x16;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    FUN_00408ad0();
    goto LAB_0074fe97;
  }
  iVar7 = FUN_00aafe90(local_14,"invest_build_infra");
  if (iVar7 == 0) {
    iVar7 = FUN_00aafe90(local_14,"build_icon_fort");
    if (iVar7 == 0) {
      iVar7 = FUN_00aafe90(local_14,"build_icon_navalbase");
      if (iVar7 == 0) {
        iVar7 = FUN_00aafe90(local_14,"build_icon_infra");
        if (iVar7 == 0) {
          iVar7 = FUN_00aafe90(local_14,"country_gov");
          if (iVar7 != 0) {
            local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
            (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4) + 0xbd0)
                        + 0x28))();
            local_8._0_1_ = 0x24;
            FUN_00408ed0();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            goto LAB_0074fe97;
          }
          iVar7 = FUN_00aafe90(local_14,"country_party");
          if (iVar7 != 0) {
            local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
            iVar7 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                     *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4) + 0x84c);
            local_1c = iVar7;
            FUN_009885d0();
            local_8._0_1_ = 0x25;
            FUN_009885d0();
            local_8._0_1_ = 0x26;
            param_1 = (byte *)(**(code **)(**(int **)(iVar7 + 0x54) + 0x18))();
            local_8._0_1_ = 0x27;
            FUN_009790b0(iVar7,local_19c);
            local_8._0_1_ = 0x28;
            FUN_00988f20();
            local_8._0_1_ = 0x29;
            FUN_00988f20();
            local_8._0_1_ = 0x2a;
            FUN_00988f20();
            local_8._0_1_ = 0x2b;
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            piVar12 = (int *)(DAT_01258a48 + 0x28);
            param_1 = (byte *)0x0;
            pbVar11 = (byte *)(*(int *)(DAT_01258a48 + 0x2c) - *piVar12 >> 2);
            local_18 = piVar12;
            local_14 = pbVar11;
            if (0 < (int)pbVar11) {
              do {
                cVar5 = (**(code **)(**(int **)((int)param_1 * 4 + *piVar12) + 0x18))();
                if (cVar5 != '\0') {
                  if (local_100 != 0) {
                    FUN_00448740(&DAT_00dee2cc,1);
                  }
                  FUN_009885d0();
                  local_8._0_1_ = 0x2c;
                  FUN_009885d0();
                  local_8._0_1_ = 0x2d;
                  piVar12 = (int *)FUN_00978100();
                  (**(code **)(*piVar12 + 0x18))();
                  local_8._0_1_ = 0x2e;
                  FUN_00974c50();
                  local_8._0_1_ = 0x2f;
                  FUN_00988f20();
                  local_8._0_1_ = 0x30;
                  FUN_00988f20();
                  local_8._0_1_ = 0x31;
                  FUN_00988f20();
                  local_8._0_1_ = 0x32;
                  FUN_00448aa0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  local_8._0_1_ = 0;
                  FUN_00408ad0();
                  pbVar11 = local_14;
                  piVar12 = local_18;
                }
                param_1 = param_1 + 1;
              } while ((int)param_1 < (int)pbVar11);
            }
            goto LAB_0074fe97;
          }
          iVar7 = FUN_00aafe90(local_14,"controller_flag");
          if (iVar7 != 0) {
            (**(code **)(*in_ECX + 0x80))();
            FUN_004f97a0();
            local_8._0_1_ = 0x33;
            FUN_00408ed0();
            local_8._0_1_ = 0;
            FUN_00408ad0();
            goto LAB_0074fe97;
          }
          (**(code **)(*in_ECX + 0x44))();
          cVar5 = FUN_0040b360();
          if (cVar5 == '\0') {
            (**(code **)(*in_ECX + 0x44))();
            cVar5 = FUN_0040b360();
            if (cVar5 == '\0') {
              (**(code **)(*in_ECX + 0x44))();
              cVar5 = FUN_0040b360();
              if (cVar5 == '\0') {
                (**(code **)(*in_ECX + 0x44))();
                cVar5 = FUN_0040b360();
                if (cVar5 == '\0') {
                  (**(code **)(*in_ECX + 0x44))();
                  cVar5 = FUN_0040b360();
                  if (cVar5 == '\0') {
                    (**(code **)(*in_ECX + 0x44))();
                    cVar5 = FUN_0040b360();
                    if (cVar5 == '\0') {
                      (**(code **)(*in_ECX + 0x44))();
                      cVar5 = FUN_0040b360();
                      if (cVar5 == '\0') {
                        (**(code **)(*in_ECX + 0x44))();
                        cVar5 = FUN_0040b360();
                        if (cVar5 == '\0') {
                          (**(code **)(*in_ECX + 0x44))();
                          cVar5 = FUN_0040b360();
                          if (cVar5 == '\0') {
                            (**(code **)(*in_ECX + 0x44))();
                            cVar5 = FUN_0040b360();
                            if (cVar5 == '\0') {
                              (**(code **)(*in_ECX + 0x44))();
                              cVar5 = FUN_0040b360();
                              if (cVar5 == '\0') {
                                (**(code **)(*in_ECX + 0x44))();
                                cVar5 = FUN_0040b360();
                                if (cVar5 == '\0') {
                                  (**(code **)(*in_ECX + 0x44))();
                                  cVar5 = FUN_0040b360();
                                  if (cVar5 == '\0') {
                                    (**(code **)(*in_ECX + 0x44))();
                                    cVar5 = FUN_0040b360();
                                    if (cVar5 == '\0') {
                                      pcVar9 = "rallypoint_icon";
                                      pbVar11 = local_14;
                                      do {
                                        bVar1 = *pbVar11;
                                        bVar13 = bVar1 < (byte)*pcVar9;
                                        if (bVar1 != *pcVar9) {
LAB_0074f310:
                                          iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                          goto LAB_0074f315;
                                        }
                                        if (bVar1 == 0) break;
                                        bVar1 = pbVar11[1];
                                        bVar13 = bVar1 < (byte)pcVar9[1];
                                        if (bVar1 != pcVar9[1]) goto LAB_0074f310;
                                        pbVar11 = pbVar11 + 2;
                                        pcVar9 = pcVar9 + 2;
                                      } while (bVar1 != 0);
                                      iVar7 = 0;
LAB_0074f315:
                                      if (iVar7 == 0) {
                                        FUN_009885d0();
                                        local_8._0_1_ = 100;
                                        FUN_009a8ee0(local_54,local_38);
                                        local_8._0_1_ = 0x65;
                                        iVar7 = FUN_00475500();
                                        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),
                                                     *(undefined8 *)(iVar7 + 0x74));
                                        local_8._0_1_ = 0x66;
                                        FUN_00408ed0();
                                        FUN_00408ad0();
                                        local_8._0_1_ = 100;
                                        FUN_009a9740();
                                        local_8._0_1_ = 0;
                                        FUN_00408ad0();
                                        goto LAB_0074fe97;
                                      }
                                      pcVar9 = "rallypoint_checkbox";
                                      pbVar11 = local_14;
                                      do {
                                        bVar1 = *pbVar11;
                                        bVar13 = bVar1 < (byte)*pcVar9;
                                        if (bVar1 != *pcVar9) {
LAB_0074f3c8:
                                          iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                          goto LAB_0074f3cd;
                                        }
                                        if (bVar1 == 0) break;
                                        bVar1 = pbVar11[1];
                                        bVar13 = bVar1 < (byte)pcVar9[1];
                                        if (bVar1 != pcVar9[1]) goto LAB_0074f3c8;
                                        pbVar11 = pbVar11 + 2;
                                        pcVar9 = pcVar9 + 2;
                                      } while (bVar1 != 0);
                                      iVar7 = 0;
LAB_0074f3cd:
                                      if (iVar7 != 0) {
                                        pcVar9 = "rallypoint_checkbox_naval";
                                        pbVar11 = local_14;
                                        do {
                                          bVar1 = *pbVar11;
                                          bVar13 = bVar1 < (byte)*pcVar9;
                                          if (bVar1 != *pcVar9) {
LAB_0074f400:
                                            iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                            goto LAB_0074f405;
                                          }
                                          if (bVar1 == 0) break;
                                          bVar1 = pbVar11[1];
                                          bVar13 = bVar1 < (byte)pcVar9[1];
                                          if (bVar1 != pcVar9[1]) goto LAB_0074f400;
                                          pbVar11 = pbVar11 + 2;
                                          pcVar9 = pcVar9 + 2;
                                        } while (bVar1 != 0);
                                        iVar7 = 0;
LAB_0074f405:
                                        if (iVar7 != 0) {
                                          pcVar9 = "rallypoint_merge_checkbox";
                                          pbVar11 = local_14;
                                          do {
                                            bVar1 = *pbVar11;
                                            bVar13 = bVar1 < (byte)*pcVar9;
                                            if (bVar1 != *pcVar9) {
LAB_0074f434:
                                              iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                              goto LAB_0074f439;
                                            }
                                            if (bVar1 == 0) break;
                                            bVar1 = pbVar11[1];
                                            bVar13 = bVar1 < (byte)pcVar9[1];
                                            if (bVar1 != pcVar9[1]) goto LAB_0074f434;
                                            pbVar11 = pbVar11 + 2;
                                            pcVar9 = pcVar9 + 2;
                                          } while (bVar1 != 0);
                                          iVar7 = 0;
LAB_0074f439:
                                          if (iVar7 == 0) {
                                            FUN_009885d0();
                                            local_8._0_1_ = 0x6a;
                                            FUN_009a8ee0(local_54,local_38);
                                            local_8._0_1_ = 0x6b;
                                            iVar7 = FUN_00475500();
                                            FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),
                                                         *(undefined8 *)(iVar7 + 0x74));
                                            local_8._0_1_ = 0x6c;
                                            FUN_00408ed0();
                                            FUN_00408ad0();
                                            local_8._0_1_ = 0x6a;
                                          }
                                          else {
                                            pcVar9 = "rallypoint_merge_checkbox_naval";
                                            pbVar11 = local_14;
                                            do {
                                              bVar1 = *pbVar11;
                                              bVar13 = bVar1 < (byte)*pcVar9;
                                              if (bVar1 != *pcVar9) {
LAB_0074f4f0:
                                                iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                                goto LAB_0074f4f5;
                                              }
                                              if (bVar1 == 0) break;
                                              bVar1 = pbVar11[1];
                                              bVar13 = bVar1 < (byte)pcVar9[1];
                                              if (bVar1 != pcVar9[1]) goto LAB_0074f4f0;
                                              pbVar11 = pbVar11 + 2;
                                              pcVar9 = pcVar9 + 2;
                                            } while (bVar1 != 0);
                                            iVar7 = 0;
LAB_0074f4f5:
                                            if (iVar7 != 0) goto LAB_0074fe97;
                                            FUN_009885d0();
                                            local_8._0_1_ = 0x6d;
                                            FUN_009a8ee0(local_54,local_38);
                                            local_8._0_1_ = 0x6e;
                                            iVar7 = FUN_00475500();
                                            FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),
                                                         *(undefined8 *)(iVar7 + 0x74));
                                            local_8._0_1_ = 0x6f;
                                            FUN_00408ed0();
                                            FUN_00408ad0();
                                            local_8._0_1_ = 0x6d;
                                          }
                                          goto LAB_0074f4b0;
                                        }
                                      }
                                      FUN_009885d0();
                                      local_8._0_1_ = 0x67;
                                      FUN_009a8ee0(local_54,local_38);
                                      local_8._0_1_ = 0x68;
                                      iVar7 = FUN_00475500();
                                      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),
                                                   *(undefined8 *)(iVar7 + 0x74));
                                      local_8._0_1_ = 0x69;
                                      FUN_00408ed0();
                                      FUN_00408ad0();
                                      local_8._0_1_ = 0x67;
                                      FUN_009a9740();
                                      local_8._0_1_ = 0;
                                      FUN_00408ad0();
                                      goto LAB_0074fe97;
                                    }
                                  }
                                  if (*(int *)(*(int *)(pbVar11 + 0x134) + 300) ==
                                      *(int *)(DAT_012588e8 + 0xb60)) goto LAB_0074fe97;
                                  FUN_009885d0();
                                  local_8._0_1_ = 0x52;
                                  FUN_009885d0();
                                  local_8._0_1_ = 0x53;
                                  FUN_009a8ee0(local_54,local_78);
                                  local_8._0_1_ = 0x54;
                                  iVar7 = FUN_00475500();
                                  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),
                                               *(undefined8 *)(iVar7 + 0x74));
                                  local_8._0_1_ = 0x55;
                                  FUN_00988f20();
                                  local_8._0_1_ = 0x56;
                                  FUN_00408ed0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  local_8._0_1_ = 0x53;
                                  FUN_009a9740();
                                  FUN_00408ad0();
                                  local_8._0_1_ = 0;
                                  FUN_00408ad0();
                                  local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                                  piVar12 = (int *)FUN_005183f0(*(undefined4 *)
                                                                 (*(int *)(param_1 + 0x134) + 0x128)
                                                                ,*(undefined4 *)
                                                                  (*(int *)(param_1 + 0x134) + 300))
                                  ;
                                  local_18 = (int *)((float)*piVar12 / 1000.0);
                                  FUN_009885d0();
                                  local_8._0_1_ = 0x57;
                                  uVar4 = (undefined1)local_8;
                                  local_8._0_1_ = 0x57;
                                  if ((float)local_18 < 0.0) {
                                    FUN_009885d0();
                                    local_8._0_1_ = 0x58;
                                    FUN_00408ed0();
                                    local_8._0_1_ = 0x57;
                                    FUN_00408ad0();
                                    uVar4 = (undefined1)local_8;
                                  }
                                  local_8._0_1_ = uVar4;
                                  FUN_009885d0();
                                  local_8._0_1_ = 0x59;
                                  FUN_009885d0();
                                  local_8._0_1_ = 0x5a;
                                  local_14 = (byte *)FUN_00988d00(local_19c,2);
                                  local_8._0_1_ = 0x5b;
                                  local_18 = (int *)FUN_009885d0();
                                  local_8._0_1_ = 0x5c;
                                  local_1c = FUN_009a8ee0(local_54,local_78);
                                  local_8._0_1_ = 0x5d;
                                  iVar7 = FUN_00475500();
                                  FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),
                                               *(undefined8 *)(iVar7 + 0x74));
                                  local_8._0_1_ = 0x5e;
                                  FUN_00988f20();
                                  local_8._0_1_ = 0x5f;
                                  FUN_00988f20();
                                  local_8._0_1_ = 0x60;
                                  FUN_00988f20();
                                  local_8._0_1_ = 0x61;
                                  FUN_00988f20();
                                  local_8._0_1_ = 0x62;
                                  FUN_00408ed0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  local_8._0_1_ = 0x5c;
                                  FUN_009a9740();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                  local_8._0_1_ = 0x57;
                                  FUN_00408ad0();
                                  local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                                  FUN_00517ed0();
                                  local_8 = CONCAT31(local_8._1_3_,99);
                                  FUN_00408ed0();
                                }
                                else {
                                  (**(code **)(*in_ECX + 0x80))();
                                  FUN_009885d0();
                                  local_8._0_1_ = 0x4e;
                                  FUN_004f97a0();
                                  local_8._0_1_ = 0x4f;
                                  FUN_00988fa0();
                                  local_8._0_1_ = 0x50;
                                  FUN_00988f20();
                                  local_8 = CONCAT31(local_8._1_3_,0x51);
                                  FUN_00408ed0();
                                  FUN_00408ad0();
                                  FUN_00408ad0();
                                }
                                FUN_00408ad0();
                                local_8._0_1_ = 0;
                                FUN_00408ad0();
                                goto LAB_0074fe97;
                              }
                            }
                            local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
                            FUN_00537a30(*(undefined4 *)
                                          (*(int *)(DAT_012587e4 + 4) +
                                          *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4),local_94);
                            local_8._0_1_ = 0x4a;
                            FUN_00408ed0();
                            local_8._0_1_ = 0;
                            FUN_00408ad0();
                            FUN_009885d0();
                            local_8._0_1_ = 0x4b;
                            FUN_009a8ee0(local_54,local_38);
                            local_8._0_1_ = 0x4c;
                            iVar7 = FUN_00475500();
                            FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74)
                                        );
                            local_8._0_1_ = 0x4d;
                            FUN_00408ed0();
                            FUN_00408ad0();
                            local_8._0_1_ = 0x4b;
                            FUN_009a9740();
                            local_8._0_1_ = 0;
                            FUN_00408ad0();
                            goto LAB_0074fe97;
                          }
                        }
                      }
                      FUN_009885d0();
                      local_8._0_1_ = 0x40;
                      param_1 = (byte *)FUN_009a8ee0(local_54,local_38);
                      local_8._0_1_ = 0x41;
                      iVar7 = FUN_00475500();
                      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                      local_8._0_1_ = 0x42;
                      FUN_00408ed0();
                      FUN_00408ad0();
                      local_8._0_1_ = 0x40;
                      FUN_009a9740();
                      local_8._0_1_ = 0;
                      FUN_00408ad0();
                      local_40 = *(undefined4 *)(*(int *)(pbVar11 + 0x134) + 0x128);
                      if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(*(int *)(pbVar11 + 0x134) + 300) * 4) + 0x120)
                          != '\0') {
                        FUN_009885d0();
                        local_8._0_1_ = 0x43;
                        FUN_009a8ee0(local_54,local_38);
                        local_8._0_1_ = 0x44;
                        iVar7 = FUN_00475500();
                        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                        local_8._0_1_ = 0x45;
                        FUN_00988fa0();
                        local_8._0_1_ = 0x46;
                        FUN_00448aa0();
                        FUN_00408ad0();
                        FUN_00408ad0();
                        local_8._0_1_ = 0x43;
                        FUN_009a9740();
                        local_8._0_1_ = 0;
                        FUN_00408ad0();
                      }
                      FUN_009885d0();
                      local_8._0_1_ = 0x47;
                      FUN_009a8ee0(local_54,local_38);
                      local_8._0_1_ = 0x48;
                      iVar7 = FUN_00475500();
                      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                      local_8._0_1_ = 0x49;
                      FUN_00408ed0();
                      FUN_00408ad0();
                      local_8._0_1_ = 0x47;
                      goto LAB_0074f4b0;
                    }
                  }
                }
                FUN_009885d0();
                local_8._0_1_ = 0x3a;
                FUN_009a8ee0(local_54,local_38);
                local_8._0_1_ = 0x3b;
                iVar7 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                local_8._0_1_ = 0x3c;
                FUN_00408ed0();
                FUN_00408ad0();
                local_8._0_1_ = 0x3a;
                FUN_009a9740();
                local_8._0_1_ = 0;
                FUN_00408ad0();
                FUN_009885d0();
                local_8._0_1_ = 0x3d;
                FUN_009a8ee0(local_54,local_78);
                local_8._0_1_ = 0x3e;
                iVar7 = FUN_00475500();
                FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
                local_8._0_1_ = 0x3f;
                FUN_00408ed0();
                FUN_00408ad0();
                local_8._0_1_ = 0x3d;
                FUN_009a9740();
                local_8._0_1_ = 0;
                FUN_00408ad0();
                goto LAB_0074fe97;
              }
            }
          }
          FUN_009885d0();
          local_8._0_1_ = 0x34;
          FUN_009a8ee0(local_54,local_38);
          local_8._0_1_ = 0x35;
          iVar7 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
          local_8._0_1_ = 0x36;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8._0_1_ = 0x34;
          FUN_009a9740();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          FUN_009885d0();
          local_8._0_1_ = 0x37;
          FUN_009a8ee0(local_54,local_78);
          local_8._0_1_ = 0x38;
          iVar7 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
          local_8._0_1_ = 0x39;
          FUN_00408ed0();
          FUN_00408ad0();
          local_8._0_1_ = 0x37;
          FUN_009a9740();
          local_8._0_1_ = 0;
          FUN_00408ad0();
          goto LAB_0074fe97;
        }
        FUN_009885d0();
        local_8._0_1_ = 0x21;
        FUN_009a8ee0(local_54,local_38);
        local_8._0_1_ = 0x22;
        iVar7 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
        local_8._0_1_ = 0x23;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8._0_1_ = 0x21;
      }
      else {
        FUN_009885d0();
        local_8._0_1_ = 0x1e;
        FUN_009a8ee0(local_54,local_38);
        local_8._0_1_ = 0x1f;
        iVar7 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
        local_8._0_1_ = 0x20;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8._0_1_ = 0x1e;
      }
    }
    else {
      FUN_009885d0();
      local_8._0_1_ = 0x1b;
      FUN_009a8ee0(local_54,local_38);
      local_8._0_1_ = 0x1c;
      iVar7 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
      local_8._0_1_ = 0x1d;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8._0_1_ = 0x1b;
    }
  }
  else {
    iVar7 = FUN_004dad40();
    iVar7 = *(int *)(iVar7 + 0x34);
    local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    FUN_00512230(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                 local_38,iVar7,*(undefined4 *)(pbVar11 + 0x134));
    local_8._0_1_ = 0x17;
    FUN_00408ed0();
    local_8._0_1_ = 0;
    FUN_00408ad0();
    if (*(char *)(iVar7 + 0xbe) != '\0') goto LAB_0074fe97;
    FUN_009885d0();
    local_8._0_1_ = 0x18;
    FUN_009a8ee0(local_54,local_38);
    local_8._0_1_ = 0x19;
    iVar7 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar7 + 0x6c),*(undefined8 *)(iVar7 + 0x74));
    local_8._0_1_ = 0x1a;
    FUN_00408ed0();
    FUN_00408ad0();
    local_8._0_1_ = 0x18;
  }
LAB_0074f4b0:
  FUN_009a9740();
  local_8._0_1_ = 0;
  FUN_00408ad0();
LAB_0074fe97:
  uVar8 = param_2;
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_10;
  return uVar8;
LAB_0074e6c3:
  iVar7 = iVar7 + 1;
  if (iVar10 <= iVar7) goto LAB_0074fe97;
  goto LAB_0074e6b3;
}

