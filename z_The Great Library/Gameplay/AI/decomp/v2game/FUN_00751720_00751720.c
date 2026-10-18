// FUN_00751720 @ 00751720 body=[[00751720, 007519bc] [007519c0, 007519f2] [007519f6, 00751a19] [00751a1d, 00751a3a] [00751a3e, 00751a5d] [00751a66, 00751b1c] [00751b20, 00751bec] [00751bf0, 00751c16] [00751c1a, 00751c3d] [00751c41, 00751c67] [00751c6b, 007527fc] [00752800, 007532bc] [007532c0, 007532f2] [007532f6, 0075334b] [0075334f, 00753414]]


undefined4 FUN_00751720(int param_1,undefined4 param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  char *pcVar11;
  int extraout_ECX;
  undefined1 uVar12;
  bool bVar13;
  undefined1 *puVar14;
  undefined1 local_1c4 [56];
  undefined1 local_18c [28];
  undefined1 local_170 [56];
  uint local_138;
  undefined4 local_128;
  uint local_124;
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  undefined1 local_100;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e4;
  int local_d4;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined1 local_a8;
  int local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined1 local_7c [28];
  int local_60;
  uint local_5c;
  undefined1 local_54 [8];
  undefined4 local_4c;
  uint local_48;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  byte *local_1c;
  byte *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00b9484d;
  local_10 = ExceptionList;
  local_1c = (byte *)0x0;
  local_ec = 0xf;
  local_d0 = 0xf;
  local_b4 = 0xf;
  local_f0 = 0;
  local_100 = 0;
  local_d4 = 0;
  local_e4 = 0;
  local_b8 = 0;
  local_c8 = 0;
  local_ac = 0;
  local_a8 = 1;
  local_8 = 0;
  uStack_7 = 0;
  iVar10 = *(int *)(param_1 + 0xdc);
  local_60 = iVar10 + 0x1a8;
  ExceptionList = &local_10;
  pbVar3 = (byte *)(**(code **)(*param_3 + 0x44))();
  if (0xf < *(uint *)(pbVar3 + 0x14)) {
    pbVar3 = *(byte **)pbVar3;
  }
  pcVar11 = "workforce_chart";
  pbVar4 = pbVar3;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_007517e1:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_007517e6;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_007517e1;
    pbVar4 = pbVar4 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_007517e6:
  local_18 = pbVar3;
  if (iVar5 == 0) {
    local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4) + 0xcdc)
                           + 0x58) + 0x4c))();
    local_18 = (byte *)0x0;
    local_1c = (byte *)0x0;
    cVar2 = FUN_009e0c90(local_40,local_3c,&local_1c,&local_9c);
    if (cVar2 != '\0') {
      iVar5 = 0;
      if (DAT_0131bb34 == 0) {
        local_9c = FUN_00aae9af();
        local_8 = 1;
        if (local_9c != 0) {
          FUN_0041a160();
        }
        local_8 = 0;
        FUN_00423700();
      }
      iVar6 = *(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2;
      if (0 < iVar6) {
        do {
          if (*(int *)(*(int *)(iVar10 + 0x1f8) + iVar5 * 4) != 0) {
            if (local_18 == local_1c) {
              if (DAT_0131bb34 == 0) {
                iVar10 = FUN_00aae9af();
                local_8 = 2;
                if (iVar10 != 0) {
                  FUN_0041a160();
                }
                local_8 = 0;
                FUN_00423700();
              }
              if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < iVar5) {
                uVar7 = FUN_0096bb70();
              }
              else {
                uVar7 = *(undefined4 *)(*(int *)(DAT_0131bb34 + 0xc) + iVar5 * 4);
              }
              local_48 = 0xf;
              local_4c = 0;
              local_5c = local_5c & 0xffffff00;
              FUN_00409350(&DAT_00e02ec4,2);
              local_8 = 3;
              FUN_0096d650(uVar7,local_38);
              local_8 = 4;
              FUN_009888f0();
              local_8 = 5;
              FUN_00988f20();
              local_8 = 6;
              FUN_00988f20();
              local_8 = 7;
              FUN_00408ed0();
              if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_108 = 0xf;
              local_10c = 0;
              local_11c[0] = local_11c[0] & 0xffffff00;
              if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_124 = 0xf;
              local_128 = 0;
              local_138 = local_138 & 0xffffff00;
              if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_84 = 0xf;
              local_88 = 0;
              local_98[0] = local_98[0] & 0xffffff00;
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_38[0] = local_38[0] & 0xffffff00;
              goto LAB_00751a4f;
            }
            local_18 = local_18 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
    }
    goto switchD_00752b97_default;
  }
  pcVar11 = "culture_chart";
  pbVar4 = pbVar3;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_00751a90:
      iVar5 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00751a95;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_00751a90;
    pbVar4 = pbVar4 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar5 = 0;
LAB_00751a95:
  if (iVar5 == 0) {
    local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4) + 0xcdc)
                           + 0x58) + 0x4c))();
    pbVar3 = (byte *)0x0;
    local_1c = (byte *)0x0;
    cVar2 = FUN_009e0c90(local_40,local_3c,&local_1c,&local_9c);
    if (cVar2 != '\0') {
      iVar5 = 0;
      iVar6 = *(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2;
      if (0 < iVar6) {
        do {
          if (*(int *)(*(int *)(iVar10 + 0x1f0) + iVar5 * 4) != 0) {
            if (pbVar3 == local_1c) {
              if (*(int *)(DAT_012587e8 + 0x10) - *(int *)(DAT_012587e8 + 0xc) >> 2 <= iVar5) {
                FUN_00561180();
              }
              local_48 = 0xf;
              local_4c = 0;
              local_5c = local_5c & 0xffffff00;
              FUN_00409350(&DAT_00e02ec4,2);
              local_8 = 8;
              FUN_00974c50();
              local_8 = 9;
              FUN_009888f0();
              local_8 = 10;
              FUN_00988f20();
              local_8 = 0xb;
              FUN_00988f20();
              local_8 = 0xc;
              FUN_00408ed0();
              if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_24 = 0xf;
              local_28 = 0;
              local_38[0] = local_38[0] & 0xffffff00;
              if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_84 = 0xf;
              local_88 = 0;
              local_98[0] = local_98[0] & 0xffffff00;
              if (0xf < local_124) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_124 = 0xf;
              local_128 = 0;
              local_138 = local_138 & 0xffffff00;
              if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_11c[0] = local_11c[0] & 0xffffff00;
LAB_00751a4f:
              local_8 = 0;
              local_24 = 0xf;
              local_28 = 0;
              local_84 = 0xf;
              local_88 = 0;
              local_108 = 0xf;
              local_10c = 0;
              local_124 = 0xf;
              local_128 = 0;
              if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              goto LAB_007533ea;
            }
            pbVar3 = pbVar3 + 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar6);
      }
    }
    goto switchD_00752b97_default;
  }
  pcVar11 = "ideology_chart";
  pbVar4 = pbVar3;
  do {
    bVar1 = *pbVar4;
    bVar13 = bVar1 < (byte)*pcVar11;
    if (bVar1 != *pcVar11) {
LAB_00751cb2:
      iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_00751cb7;
    }
    if (bVar1 == 0) break;
    bVar1 = pbVar4[1];
    bVar13 = bVar1 < (byte)pcVar11[1];
    if (bVar1 != pcVar11[1]) goto LAB_00751cb2;
    pbVar4 = pbVar4 + 2;
    pcVar11 = pcVar11 + 2;
  } while (bVar1 != 0);
  iVar10 = 0;
LAB_00751cb7:
  if (iVar10 == 0) {
    local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
    (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                             *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4) + 0xcdc)
                           + 0x58) + 0x4c))();
    pbVar3 = (byte *)0x0;
    local_1c = (byte *)0x0;
    cVar2 = FUN_009e0c90(local_40,local_3c,&local_1c,&local_9c);
    if (cVar2 != '\0') {
      iVar10 = 0;
      iVar5 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
      if (0 < iVar5) {
        do {
          if (*(int *)(*(int *)(local_60 + 0x24) + iVar10 * 4) != 0) {
            if (pbVar3 == local_1c) {
              piVar8 = *(int **)(*(int *)(DAT_01258a3c + 0xc) + iVar10 * 4);
              FUN_009885d0();
              local_8 = 0xd;
              (**(code **)(*piVar8 + 0x18))();
              local_8 = 0xe;
              FUN_00988d00(local_11c,0);
              local_8 = 0xf;
              FUN_00988f20();
              local_8 = 0x10;
              FUN_00988f20();
              local_8 = 0x11;
              FUN_00408ed0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              FUN_00408ad0();
              local_8 = 0;
              FUN_00408ad0();
              goto LAB_007533ea;
            }
            pbVar3 = pbVar3 + 1;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar5);
      }
    }
    goto switchD_00752b97_default;
  }
  iVar10 = FUN_00aafe90(pbVar3,"total_population_icon");
  if ((iVar10 != 0) || (iVar10 = FUN_00aafe90(pbVar3,"total_population"), iVar10 != 0)) {
    FUN_009885d0();
    local_8 = 0x12;
    FUN_009a8ee0(local_54,local_98);
    local_8 = 0x13;
    iVar10 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
    local_8 = 0x14;
    FUN_00408ed0();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_8 = 0x12;
    FUN_009a9740();
    local_8 = 0;
    if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    goto switchD_00752b97_default;
  }
  iVar10 = FUN_00aafe90(pbVar3,"supply_limit");
  if (iVar10 != 0) {
    FUN_004b3e00();
    local_8 = 0x15;
    FUN_00408ed0();
    local_8 = 0;
    FUN_00408ad0();
    goto switchD_00752b97_default;
  }
  iVar10 = FUN_00aafe90(pbVar3,"invest_factory_button");
  if (iVar10 != 0) {
    local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    FUN_0052e9f0();
    local_8 = 0x16;
    FUN_00408ed0();
    local_8 = 0;
    FUN_00408ad0();
    goto switchD_00752b97_default;
  }
  iVar10 = FUN_00aafe90(pbVar3,"invest_build_infra");
  if (iVar10 == 0) {
    iVar10 = FUN_00aafe90(pbVar3,"build_icon_fort");
    if (iVar10 == 0) {
      iVar10 = FUN_00aafe90(pbVar3,"build_icon_navalbase");
      if (iVar10 == 0) {
        iVar10 = FUN_00aafe90(pbVar3,"build_icon_infra");
        if (iVar10 == 0) {
          iVar10 = FUN_00aafe90(pbVar3,"country_gov");
          if (iVar10 != 0) {
            local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
            (**(code **)(**(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                            *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4) + 0xbd0) +
                        0x28))();
            local_8 = 0x24;
            FUN_00408ed0();
            local_8 = 0;
            FUN_00408ad0();
            goto switchD_00752b97_default;
          }
          iVar10 = FUN_00aafe90(pbVar3,"country_party");
          if (iVar10 != 0) {
            local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
            pbVar3 = *(byte **)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4) + 0x84c);
            local_1c = pbVar3;
            FUN_009885d0();
            local_8 = 0x25;
            FUN_009885d0();
            local_8 = 0x26;
            (**(code **)(**(int **)(pbVar3 + 0x54) + 0x18))();
            local_8 = 0x27;
            FUN_009790b0(pbVar3,local_1c4);
            local_8 = 0x28;
            FUN_00988f20();
            local_8 = 0x29;
            FUN_00988f20();
            local_8 = 0x2a;
            FUN_00988f20();
            local_8 = 0x2b;
            FUN_00408ed0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = 0;
            FUN_00408ad0();
            iVar10 = DAT_01258a48;
            local_18 = (byte *)0x0;
            local_60 = *(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) >> 2;
            if (0 < local_60) {
              do {
                pbVar3 = local_18;
                cVar2 = (**(code **)(**(int **)(*(int *)(iVar10 + 0x28) + (int)local_18 * 4) + 0x18)
                        )();
                if (cVar2 != '\0') {
                  if (local_d4 != 0) {
                    FUN_00448740(&DAT_00dee2cc,1);
                  }
                  FUN_009885d0();
                  local_8 = 0x2c;
                  FUN_009885d0();
                  local_8 = 0x2d;
                  piVar8 = (int *)FUN_00978100();
                  (**(code **)(*piVar8 + 0x18))();
                  local_8 = 0x2e;
                  FUN_00974c50();
                  local_8 = 0x2f;
                  FUN_00988f20();
                  local_8 = 0x30;
                  FUN_00988f20();
                  local_8 = 0x31;
                  FUN_00988f20();
                  local_8 = 0x32;
                  FUN_00448aa0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  FUN_00408ad0();
                  local_8 = 0;
                  FUN_00408ad0();
                  pbVar3 = local_18;
                }
                local_18 = pbVar3 + 1;
              } while ((int)local_18 < local_60);
            }
            goto switchD_00752b97_default;
          }
          iVar10 = FUN_00aafe90(pbVar3,"controller_flag");
          if (iVar10 != 0) {
            (**(code **)(*param_3 + 0x80))();
            FUN_004f97a0();
            local_8 = 0x33;
            FUN_00408ed0();
            local_8 = 0;
            FUN_00408ad0();
            goto switchD_00752b97_default;
          }
          (**(code **)(*param_3 + 0x44))();
          cVar2 = FUN_0040b360();
          if (cVar2 == '\0') {
            (**(code **)(*param_3 + 0x44))();
            cVar2 = FUN_0040b360();
            if (cVar2 != '\0') goto LAB_00753173;
            (**(code **)(*param_3 + 0x44))();
            cVar2 = FUN_0040b360();
            if (cVar2 != '\0') goto LAB_00753173;
            (**(code **)(*param_3 + 0x44))();
            cVar2 = FUN_0040b360();
            if (cVar2 == '\0') {
              (**(code **)(*param_3 + 0x44))();
              cVar2 = FUN_0040b360();
              if (cVar2 == '\0') {
                (**(code **)(*param_3 + 0x44))();
                cVar2 = FUN_0040b360();
                if (cVar2 == '\0') {
                  (**(code **)(*param_3 + 0x44))();
                  cVar2 = FUN_0040b360();
                  if (cVar2 == '\0') {
                    (**(code **)(*param_3 + 0x44))();
                    cVar2 = FUN_0040b360();
                    if (cVar2 == '\0') {
                      (**(code **)(*param_3 + 0x44))();
                      cVar2 = FUN_0040b360();
                      if (cVar2 == '\0') {
                        (**(code **)(*param_3 + 0x44))();
                        cVar2 = FUN_0040b360();
                        if (cVar2 == '\0') {
                          (**(code **)(*param_3 + 0x44))();
                          cVar2 = FUN_0040b360();
                          if (cVar2 == '\0') {
                            (**(code **)(*param_3 + 0x44))();
                            cVar2 = FUN_0040b360();
                            if (cVar2 != '\0') {
                              (**(code **)(*param_3 + 0x80))();
                              FUN_009885d0();
                              local_8 = 0x4e;
                              FUN_004f97a0();
                              local_8 = 0x4f;
                              FUN_00988fa0();
                              local_8 = 0x50;
                              FUN_00988f20();
                              local_8 = 0x51;
                              FUN_00408ed0();
                              FUN_00408ad0();
                              FUN_00408ad0();
                              FUN_00408ad0();
                              local_8 = 0;
                              FUN_00408ad0();
                              goto switchD_00752b97_default;
                            }
                            pcVar11 = "rallypoint_icon";
                            pbVar4 = pbVar3;
                            do {
                              bVar1 = *pbVar4;
                              bVar13 = bVar1 < (byte)*pcVar11;
                              if (bVar1 != *pcVar11) {
LAB_00752715:
                                iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                goto LAB_0075271a;
                              }
                              if (bVar1 == 0) break;
                              bVar1 = pbVar4[1];
                              bVar13 = bVar1 < (byte)pcVar11[1];
                              if (bVar1 != pcVar11[1]) goto LAB_00752715;
                              pbVar4 = pbVar4 + 2;
                              pcVar11 = pcVar11 + 2;
                            } while (bVar1 != 0);
                            iVar10 = 0;
LAB_0075271a:
                            if (iVar10 == 0) {
                              FUN_009885d0();
                              local_8 = 0x52;
                              FUN_009a8ee0(local_54,local_38);
                              local_8 = 0x53;
                              iVar10 = FUN_00475500();
                              FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),
                                           *(undefined8 *)(iVar10 + 0x74));
                              local_8 = 0x54;
                              FUN_00408ed0();
                              FUN_00408ad0();
                              local_8 = 0x52;
                            }
                            else {
                              pcVar11 = "rallypoint_checkbox";
                              pbVar4 = pbVar3;
                              do {
                                bVar1 = *pbVar4;
                                bVar13 = bVar1 < (byte)*pcVar11;
                                if (bVar1 != *pcVar11) {
LAB_007527b3:
                                  iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                  goto LAB_007527b8;
                                }
                                if (bVar1 == 0) break;
                                bVar1 = pbVar4[1];
                                bVar13 = bVar1 < (byte)pcVar11[1];
                                if (bVar1 != pcVar11[1]) goto LAB_007527b3;
                                pbVar4 = pbVar4 + 2;
                                pcVar11 = pcVar11 + 2;
                              } while (bVar1 != 0);
                              iVar10 = 0;
LAB_007527b8:
                              if (iVar10 != 0) {
                                pcVar11 = "rallypoint_checkbox_naval";
                                pbVar4 = pbVar3;
                                do {
                                  bVar1 = *pbVar4;
                                  bVar13 = bVar1 < (byte)*pcVar11;
                                  if (bVar1 != *pcVar11) {
LAB_007527e7:
                                    iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                    goto LAB_007527ec;
                                  }
                                  if (bVar1 == 0) break;
                                  bVar1 = pbVar4[1];
                                  bVar13 = bVar1 < (byte)pcVar11[1];
                                  if (bVar1 != pcVar11[1]) goto LAB_007527e7;
                                  pbVar4 = pbVar4 + 2;
                                  pcVar11 = pcVar11 + 2;
                                } while (bVar1 != 0);
                                iVar10 = 0;
LAB_007527ec:
                                if (iVar10 != 0) {
                                  pcVar11 = "rallypoint_merge_checkbox";
                                  pbVar4 = pbVar3;
                                  do {
                                    bVar1 = *pbVar4;
                                    bVar13 = bVar1 < (byte)*pcVar11;
                                    if (bVar1 != *pcVar11) {
LAB_00752820:
                                      iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                      goto LAB_00752825;
                                    }
                                    if (bVar1 == 0) break;
                                    bVar1 = pbVar4[1];
                                    bVar13 = bVar1 < (byte)pcVar11[1];
                                    if (bVar1 != pcVar11[1]) goto LAB_00752820;
                                    pbVar4 = pbVar4 + 2;
                                    pcVar11 = pcVar11 + 2;
                                  } while (bVar1 != 0);
                                  iVar10 = 0;
LAB_00752825:
                                  if (iVar10 == 0) {
                                    FUN_009885d0();
                                    local_8 = 0x58;
                                    FUN_009a8ee0(local_54,local_38);
                                    local_8 = 0x59;
                                    iVar10 = FUN_00475500();
                                    FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),
                                                 *(undefined8 *)(iVar10 + 0x74));
                                    local_8 = 0x5a;
                                    FUN_00408ed0();
                                    FUN_00408ad0();
                                    local_8 = 0x58;
                                  }
                                  else {
                                    pcVar11 = "rallypoint_merge_checkbox_naval";
                                    pbVar4 = pbVar3;
                                    do {
                                      bVar1 = *pbVar4;
                                      bVar13 = bVar1 < (byte)*pcVar11;
                                      if (bVar1 != *pcVar11) {
LAB_007528c0:
                                        iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                        goto LAB_007528c5;
                                      }
                                      if (bVar1 == 0) break;
                                      bVar1 = pbVar4[1];
                                      bVar13 = bVar1 < (byte)pcVar11[1];
                                      if (bVar1 != pcVar11[1]) goto LAB_007528c0;
                                      pbVar4 = pbVar4 + 2;
                                      pcVar11 = pcVar11 + 2;
                                    } while (bVar1 != 0);
                                    iVar10 = 0;
LAB_007528c5:
                                    if (iVar10 != 0) {
                                      pcVar11 = "colonize_button";
                                      pbVar4 = pbVar3;
                                      do {
                                        bVar1 = *pbVar4;
                                        bVar13 = bVar1 < (byte)*pcVar11;
                                        if (bVar1 != *pcVar11) {
LAB_00752977:
                                          iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                          goto LAB_0075297c;
                                        }
                                        if (bVar1 == 0) break;
                                        bVar1 = pbVar4[1];
                                        bVar13 = bVar1 < (byte)pcVar11[1];
                                        if (bVar1 != pcVar11[1]) goto LAB_00752977;
                                        pbVar4 = pbVar4 + 2;
                                        pcVar11 = pcVar11 + 2;
                                      } while (bVar1 != 0);
                                      iVar10 = 0;
LAB_0075297c:
                                      if (iVar10 == 0) {
                                        local_1c = (byte *)(*(int *)(*(int *)(DAT_012586dc + 0x40) +
                                                                    0x13c) / 1000);
                                        local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                                        iVar10 = *(int *)(*(int *)(DAT_012587e4 + 4) +
                                                         *(int *)(DAT_012588e8 + 0xb60) * 4);
                                        if (*(int *)(iVar10 + 0x15c4) - *(int *)(iVar10 + 0x15c0) <
                                            (int)local_1c) {
                                          FUN_0054a540(local_7c,&local_1c);
                                          local_8 = 0x5e;
                                          FUN_00408ed0();
                                          local_8 = 0;
                                          FUN_00408ad0();
                                        }
                                      }
                                      else {
                                        pcVar11 = "withdraw_button";
                                        pbVar4 = pbVar3;
                                        do {
                                          bVar1 = *pbVar4;
                                          bVar13 = bVar1 < (byte)*pcVar11;
                                          if (bVar1 != *pcVar11) {
LAB_00752a41:
                                            iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                            goto LAB_00752a46;
                                          }
                                          if (bVar1 == 0) break;
                                          bVar1 = pbVar4[1];
                                          bVar13 = bVar1 < (byte)pcVar11[1];
                                          if (bVar1 != pcVar11[1]) goto LAB_00752a41;
                                          pbVar4 = pbVar4 + 2;
                                          pcVar11 = pcVar11 + 2;
                                        } while (bVar1 != 0);
                                        iVar10 = 0;
LAB_00752a46:
                                        if (iVar10 == 0) {
                                          if ((*(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8) != 0) &&
                                             (iVar10 = FUN_004b8a80(), iVar10 == extraout_ECX)) {
                                            FUN_00475d50();
                                            local_8 = 0x5f;
                                            FUN_00408ed0();
                                            local_8 = 0;
                                            FUN_00408ad0();
                                          }
                                        }
                                        else {
                                          pcVar11 = "crisis_temperature_frame";
                                          pbVar4 = pbVar3;
                                          do {
                                            bVar1 = *pbVar4;
                                            bVar13 = bVar1 < (byte)*pcVar11;
                                            if (bVar1 != *pcVar11) {
LAB_00752ad4:
                                              iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                              goto LAB_00752ad9;
                                            }
                                            if (bVar1 == 0) break;
                                            bVar1 = pbVar4[1];
                                            bVar13 = bVar1 < (byte)pcVar11[1];
                                            if (bVar1 != pcVar11[1]) goto LAB_00752ad4;
                                            pbVar4 = pbVar4 + 2;
                                            pcVar11 = pcVar11 + 2;
                                          } while (bVar1 != 0);
                                          iVar10 = 0;
LAB_00752ad9:
                                          if (iVar10 != 0) {
                                            pcVar11 = "crisis_temperature";
                                            pbVar4 = pbVar3;
                                            do {
                                              bVar1 = *pbVar4;
                                              bVar13 = bVar1 < (byte)*pcVar11;
                                              if (bVar1 != *pcVar11) {
LAB_00752b08:
                                                iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                                goto LAB_00752b0d;
                                              }
                                              if (bVar1 == 0) break;
                                              bVar1 = pbVar4[1];
                                              bVar13 = bVar1 < (byte)pcVar11[1];
                                              if (bVar1 != pcVar11[1]) goto LAB_00752b08;
                                              pbVar4 = pbVar4 + 2;
                                              pcVar11 = pcVar11 + 2;
                                            } while (bVar1 != 0);
                                            iVar10 = 0;
LAB_00752b0d:
                                            if (iVar10 != 0) {
                                              pcVar11 = "uncolonized_phase";
                                              pbVar4 = pbVar3;
                                              do {
                                                bVar1 = *pbVar4;
                                                bVar13 = bVar1 < (byte)*pcVar11;
                                                if (bVar1 != *pcVar11) {
LAB_00752b40:
                                                  iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                                                  goto LAB_00752b45;
                                                }
                                                if (bVar1 == 0) break;
                                                bVar1 = pbVar4[1];
                                                bVar13 = bVar1 < (byte)pcVar11[1];
                                                if (bVar1 != pcVar11[1]) goto LAB_00752b40;
                                                pbVar4 = pbVar4 + 2;
                                                pcVar11 = pcVar11 + 2;
                                              } while (bVar1 != 0);
                                              iVar10 = 0;
LAB_00752b45:
                                              if (iVar10 != 0) {
                                                pcVar11 = "uncolonized_label";
                                                do {
                                                  bVar1 = *pbVar3;
                                                  bVar13 = bVar1 < (byte)*pcVar11;
                                                  if (bVar1 != *pcVar11) {
LAB_00752b70:
                                                    iVar10 = (1 - (uint)bVar13) -
                                                             (uint)(bVar13 != 0);
                                                    goto LAB_00752b75;
                                                  }
                                                  if (bVar1 == 0) break;
                                                  bVar1 = pbVar3[1];
                                                  bVar13 = bVar1 < (byte)pcVar11[1];
                                                  if (bVar1 != pcVar11[1]) goto LAB_00752b70;
                                                  pbVar3 = pbVar3 + 2;
                                                  pcVar11 = pcVar11 + 2;
                                                } while (bVar1 != 0);
                                                iVar10 = 0;
LAB_00752b75:
                                                if (iVar10 != 0) goto switchD_00752b97_default;
                                              }
                                              iVar10 = FUN_004b8a80();
                                              switch(*(undefined4 *)(iVar10 + 0x80)) {
                                              case 0:
                                                uVar7 = FUN_009888f0();
                                                local_8 = 0x61;
                                                FUN_0042c180(local_7c,uVar7);
                                                local_8 = 0x62;
                                                FUN_00408ed0();
                                                FUN_00408ad0();
                                                local_8 = 0;
                                                FUN_00408ad0();
                                                break;
                                              case 1:
                                                uVar7 = FUN_009888f0();
                                                local_8 = 99;
                                                FUN_0042c180(local_170,uVar7);
                                                local_8 = 100;
                                                FUN_00408ed0();
                                                FUN_00408ad0();
                                                local_8 = 0;
                                                FUN_00408ad0();
                                                break;
                                              case 2:
                                                FUN_00475d50();
                                                local_8 = 0x65;
                                                FUN_00408ed0();
                                                local_8 = 0;
                                                FUN_00408ad0();
                                                break;
                                              case 3:
                                                uVar7 = FUN_009888f0();
                                                local_8 = 0x66;
                                                FUN_0042c180(local_18c,uVar7);
                                                local_8 = 0x67;
                                                FUN_00408ed0();
                                                FUN_00408ad0();
                                                local_8 = 0;
                                                FUN_00408ad0();
                                              }
                                              goto switchD_00752b97_default;
                                            }
                                          }
                                          puVar14 = local_7c;
                                          uVar7 = FUN_004b8a80();
                                          FUN_004cca20(uVar7,puVar14);
                                          local_8 = 0x60;
                                          FUN_00408ed0();
                                          local_8 = 0;
                                          FUN_00408ad0();
                                        }
                                      }
                                      goto switchD_00752b97_default;
                                    }
                                    FUN_009885d0();
                                    local_8 = 0x5b;
                                    FUN_009a8ee0(local_54,local_38);
                                    local_8 = 0x5c;
                                    iVar10 = FUN_00475500();
                                    FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),
                                                 *(undefined8 *)(iVar10 + 0x74));
                                    local_8 = 0x5d;
                                    FUN_00408ed0();
                                    FUN_00408ad0();
                                    local_8 = 0x5b;
                                  }
                                  goto LAB_0075293a;
                                }
                              }
                              FUN_009885d0();
                              local_8 = 0x55;
                              FUN_009a8ee0(local_54,local_38);
                              local_8 = 0x56;
                              iVar10 = FUN_00475500();
                              FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),
                                           *(undefined8 *)(iVar10 + 0x74));
                              local_8 = 0x57;
                              FUN_00408ed0();
                              FUN_00408ad0();
                              local_8 = 0x55;
                            }
                            goto LAB_0075293a;
                          }
                        }
                        local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
                        FUN_00537a30(*(undefined4 *)
                                      (*(int *)(DAT_012587e4 + 4) +
                                      *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4),local_7c);
                        local_8 = 0x4a;
                        FUN_00408ed0();
                        local_8 = 0;
                        FUN_00408ad0();
                        FUN_009885d0();
                        local_8 = 0x4b;
                        FUN_009a8ee0(local_54,local_38);
                        local_8 = 0x4c;
                        iVar10 = FUN_00475500();
                        FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
                        local_8 = 0x4d;
                        FUN_00408ed0();
                        FUN_00408ad0();
                        local_8 = 0x4b;
                        goto LAB_0075293a;
                      }
                    }
                  }
                  FUN_009885d0();
                  local_8 = 0x40;
                  FUN_009a8ee0(local_54,local_38);
                  local_8 = 0x41;
                  iVar10 = FUN_00475500();
                  FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
                  local_8 = 0x42;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  local_8 = 0x40;
                  FUN_009a9740();
                  local_8 = 0;
                  FUN_00408ad0();
                  local_40 = *(undefined4 *)(*(int *)(param_1 + 0xdc) + 0x128);
                  if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                        *(int *)(*(int *)(param_1 + 0xdc) + 300) * 4) + 0x120) !=
                      '\0') {
                    FUN_009885d0();
                    local_8 = 0x43;
                    FUN_009a8ee0(local_54,local_38);
                    local_8 = 0x44;
                    iVar10 = FUN_00475500();
                    FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
                    local_8 = 0x45;
                    FUN_00988fa0();
                    local_8 = 0x46;
                    FUN_00448aa0();
                    FUN_00408ad0();
                    FUN_00408ad0();
                    local_8 = 0x43;
                    FUN_009a9740();
                    local_8 = 0;
                    FUN_00408ad0();
                  }
                  FUN_009885d0();
                  local_8 = 0x47;
                  FUN_009a8ee0(local_54,local_38);
                  local_8 = 0x48;
                  iVar10 = FUN_00475500();
                  FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
                  local_8 = 0x49;
                  FUN_00408ed0();
                  FUN_00408ad0();
                  local_8 = 0x47;
                  goto LAB_0075293a;
                }
              }
            }
            FUN_009885d0();
            local_8 = 0x3a;
            FUN_009a8ee0(local_54,local_38);
            local_8 = 0x3b;
            iVar10 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
            local_8 = 0x3c;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8 = 0x3a;
            FUN_009a9740();
            local_8 = 0;
            FUN_00408ad0();
            FUN_009885d0();
            uVar12 = 0x3d;
            local_8 = 0x3d;
            FUN_009a8ee0(local_54,local_98);
            local_8 = 0x3e;
            iVar10 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
            local_8 = 0x3f;
          }
          else {
LAB_00753173:
            FUN_009885d0();
            local_8 = 0x34;
            FUN_009a8ee0(local_54,local_38);
            local_8 = 0x35;
            iVar10 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
            local_8 = 0x36;
            FUN_00408ed0();
            FUN_00408ad0();
            local_8 = 0x34;
            FUN_009a9740();
            local_8 = 0;
            FUN_00408ad0();
            FUN_009885d0();
            uVar12 = 0x37;
            local_8 = 0x37;
            FUN_009a8ee0(local_54,local_98);
            local_8 = 0x38;
            iVar10 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
            local_8 = 0x39;
          }
          FUN_00408ed0();
          FUN_00408ad0();
          local_8 = uVar12;
          FUN_009a9740();
          local_8 = 0;
          FUN_00408ad0();
          goto switchD_00752b97_default;
        }
        FUN_009885d0();
        local_8 = 0x21;
        FUN_009a8ee0(local_54,local_38);
        local_8 = 0x22;
        iVar10 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
        local_8 = 0x23;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = 0x21;
      }
      else {
        FUN_009885d0();
        local_8 = 0x1e;
        FUN_009a8ee0(local_54,local_38);
        local_8 = 0x1f;
        iVar10 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
        local_8 = 0x20;
        FUN_00408ed0();
        FUN_00408ad0();
        local_8 = 0x1e;
      }
    }
    else {
      FUN_009885d0();
      local_8 = 0x1b;
      FUN_009a8ee0(local_54,local_38);
      local_8 = 0x1c;
      iVar10 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
      local_8 = 0x1d;
      FUN_00408ed0();
      FUN_00408ad0();
      local_8 = 0x1b;
    }
  }
  else {
    iVar10 = FUN_004dad40();
    iVar10 = *(int *)(iVar10 + 0x34);
    local_40 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
    FUN_00512230(*(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4),
                 local_38,iVar10,*(undefined4 *)(param_1 + 0xdc));
    local_8 = 0x17;
    FUN_00408ed0();
    local_8 = 0;
    FUN_00408ad0();
    if (*(char *)(iVar10 + 0xbe) != '\0') goto switchD_00752b97_default;
    FUN_009885d0();
    local_8 = 0x18;
    FUN_009a8ee0(local_54,local_38);
    local_8 = 0x19;
    iVar10 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar10 + 0x6c),*(undefined8 *)(iVar10 + 0x74));
    local_8 = 0x1a;
    FUN_00408ed0();
    FUN_00408ad0();
    local_8 = 0x18;
  }
LAB_0075293a:
  FUN_009a9740();
  local_8 = 0;
  FUN_00408ad0();
switchD_00752b97_default:
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  FUN_00409350("colonist_list",0xd);
  local_8 = 0x68;
  piVar8 = (int *)(**(code **)(**(int **)(param_1 + 0xd8) + 0x7c))();
  puVar9 = (undefined4 *)(**(code **)(*piVar8 + 0x2c))();
  piVar8 = (int *)*puVar9;
  local_8 = 0;
  uVar12 = local_8;
  local_8 = 0;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c = local_5c & 0xffffff00;
  local_8 = uVar12;
  do {
    if (piVar8 == (int *)0x0) goto LAB_007533ea;
    iVar10 = *piVar8;
    piVar8 = (int *)piVar8[2];
    cVar2 = (**(code **)(*(int *)(iVar10 + 0x1c) + 0x58))();
  } while (cVar2 == '\0');
  iVar10 = FUN_0073c150();
  local_8 = 0x69;
  FUN_00408ed0();
  FUN_00408ed0();
  FUN_00408ed0();
  local_ac = *(undefined4 *)(iVar10 + 0x54);
  local_a8 = *(undefined1 *)(iVar10 + 0x58);
  local_8 = 0;
  FUN_00459820();
LAB_007533ea:
  FUN_0040c830();
  FUN_00459820();
  ExceptionList = local_10;
  return param_2;
}

