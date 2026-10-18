// FUN_00a7e170 @ 00a7e170 body=[[00a7e170, 00a7e6ec] [00a7e6f0, 00a7e741]]


void FUN_00a7e170(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  void *pvVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined4 local_120 [2];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  int local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined1 local_dc [4];
  undefined1 local_d8 [4];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc [4];
  uint local_c8 [4];
  undefined4 local_b8;
  uint local_b4;
  char *local_a8 [4];
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  byte *local_60;
  int local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int local_28;
  byte *local_24;
  int local_20;
  int local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b631db;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*param_2 != param_2[1]) {
    ExceptionList = &local_10;
    iVar3 = FUN_00a41010(param_2[1],param_5);
    FUN_00a409d0(param_5);
    param_2[1] = iVar3;
  }
  local_30 = (*(int *)(param_5 + 0x54) - *(int *)(param_5 + 0x50)) / 0x60;
  if (0 < local_30) {
    local_20 = 0;
    do {
      pbVar4 = (byte *)(*(int *)(param_5 + 0x50) + local_20);
      pcVar8 = "object";
      pbVar5 = pbVar4;
      do {
        bVar1 = *pbVar5;
        bVar10 = bVar1 < (byte)*pcVar8;
        if (bVar1 != *pcVar8) {
LAB_00a7e220:
          iVar3 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00a7e225;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar5[1];
        bVar10 = bVar1 < (byte)pcVar8[1];
        if (bVar1 != pcVar8[1]) goto LAB_00a7e220;
        pbVar5 = pbVar5 + 2;
        pcVar8 = pcVar8 + 2;
      } while (bVar1 != 0);
      iVar3 = 0;
LAB_00a7e225:
      if (iVar3 == 0) {
        local_24 = pbVar4;
        iVar3 = FUN_00a7cc10("loddist");
        if (iVar3 != 0) {
          pvVar2 = (void *)*param_3;
          if (pvVar2 != (void *)param_3[1]) {
            FID_conflict__memcpy(pvVar2,(void *)param_3[1],0);
            param_3[1] = pvVar2;
          }
          local_18 = *(int *)(iVar3 + 0x14);
          if ((local_18 == 0) || ((*(int *)(iVar3 + 0x10) != 0 && (*(int *)(iVar3 + 0x10) != 1)))) {
            iVar3 = 0;
          }
          else if (local_18 == 1) {
            iVar3 = iVar3 + 0x18;
          }
          else {
            iVar3 = *(int *)(iVar3 + 0x18);
          }
          pvVar2 = (void *)*param_3;
          if (pvVar2 != (void *)param_3[1]) {
            FID_conflict__memcpy(pvVar2,(void *)param_3[1],0);
            param_3[1] = pvVar2;
          }
          FUN_00a808c0(*param_3,iVar3,param_5);
          pbVar4 = local_24;
        }
        iVar3 = (*(int *)(pbVar4 + 0x54) - *(int *)(pbVar4 + 0x50)) / 0x60;
        if (0 < iVar3) {
          local_1c = 0;
          local_18 = iVar3;
          do {
            iVar3 = local_1c + *(int *)(local_24 + 0x50);
            local_34 = 0xffffffff;
            local_58 = iVar3;
            iVar6 = FUN_00a7cc10(&DAT_00dee388);
            if (iVar6 != 0) {
              if ((*(int *)(iVar6 + 0x14) == 0) ||
                 ((*(int *)(iVar6 + 0x10) != 2 && (*(int *)(iVar6 + 0x10) != 3)))) {
                puVar7 = (undefined4 *)0x0;
              }
              else if (*(int *)(iVar6 + 0x14) == 1) {
                puVar7 = (undefined4 *)(iVar6 + 0x18);
              }
              else {
                puVar7 = *(undefined4 **)(iVar6 + 0x18);
              }
              local_34 = *puVar7;
            }
            iVar6 = (*(int *)(iVar3 + 0x54) - *(int *)(iVar3 + 0x50)) / 0x60;
            if (0 < iVar6) {
              local_28 = 0;
              local_2c = iVar6;
              do {
                local_60 = (byte *)(*(int *)(iVar3 + 0x50) + local_28);
                pbVar4 = &DAT_00dee2d0;
                pbVar5 = local_60;
                do {
                  bVar1 = *pbVar5;
                  bVar10 = bVar1 < *pbVar4;
                  if (bVar1 != *pbVar4) {
LAB_00a7e3b6:
                    iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                    goto LAB_00a7e3bb;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar5[1];
                  bVar10 = bVar1 < pbVar4[1];
                  if (bVar1 != pbVar4[1]) goto LAB_00a7e3b6;
                  pbVar5 = pbVar5 + 2;
                  pbVar4 = pbVar4 + 2;
                } while (bVar1 != 0);
                iVar6 = 0;
LAB_00a7e3bb:
                if (iVar6 == 0) {
                  local_5c = FUN_00a7cca0("material");
                  if (local_5c != 0) {
                    iVar6 = FUN_00a7cc10("shader");
                    if (iVar6 != 0) {
                      iVar6 = FUN_00a7cc10("shader");
                      if ((*(int *)(iVar6 + 0x14) != 0) &&
                         ((*(int *)(iVar6 + 0x10) == 4 || (*(int *)(iVar6 + 0x10) == 5)))) {
                        if (*(int *)(iVar6 + 0x14) == 1) {
                          puVar7 = (undefined4 *)(iVar6 + 0x18);
                        }
                        else {
                          puVar7 = *(undefined4 **)(iVar6 + 0x18);
                        }
                        if (puVar7 != (undefined4 *)0x0) {
                          pbVar5 = (byte *)*puVar7;
                          pcVar8 = "Collision";
                          do {
                            bVar1 = *pbVar5;
                            bVar10 = bVar1 < (byte)*pcVar8;
                            if (bVar1 != *pcVar8) {
LAB_00a7e440:
                              iVar6 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
                              goto LAB_00a7e445;
                            }
                            if (bVar1 == 0) break;
                            bVar1 = pbVar5[1];
                            bVar10 = bVar1 < (byte)pcVar8[1];
                            if (bVar1 != pcVar8[1]) goto LAB_00a7e440;
                            pbVar5 = pbVar5 + 2;
                            pcVar8 = pcVar8 + 2;
                          } while (bVar1 != 0);
                          iVar6 = 0;
LAB_00a7e445:
                          if (iVar6 == 0) goto LAB_00a7e70a;
                        }
                      }
                    }
                  }
                  local_8 = 0;
                  _memset(local_120,0,0x74);
                  local_d4 = local_34;
                  iVar3 = FUN_00a7cca0(&DAT_00dee318);
                  if (iVar3 == 0) {
                    local_70 = 0;
                    local_7c = 0;
                    local_78 = 0;
                    uStack_74 = 0;
                    local_84 = 0;
                    uStack_80 = 0;
                    local_e8 = 0;
                    uStack_e4 = 0;
                    local_f4 = 0;
                    local_ec = 0;
                    local_e0 = 0;
                  }
                  else {
                    iVar3 = FUN_00a7cc10(&DAT_00dee380);
                    if ((*(int *)(iVar3 + 0x14) == 0) ||
                       ((*(int *)(iVar3 + 0x10) != 0 && (*(int *)(iVar3 + 0x10) != 1)))) {
                      puVar9 = (undefined8 *)0x0;
                    }
                    else if (*(int *)(iVar3 + 0x14) == 1) {
                      puVar9 = (undefined8 *)(iVar3 + 0x18);
                    }
                    else {
                      puVar9 = *(undefined8 **)(iVar3 + 0x18);
                    }
                    iVar3 = FUN_00a7cc10(&DAT_00dee384);
                    if ((*(int *)(iVar3 + 0x14) == 0) ||
                       ((*(int *)(iVar3 + 0x10) != 0 && (*(int *)(iVar3 + 0x10) != 1)))) {
                      puVar7 = (undefined4 *)0x0;
                    }
                    else if (*(int *)(iVar3 + 0x14) == 1) {
                      puVar7 = (undefined4 *)(iVar3 + 0x18);
                    }
                    else {
                      puVar7 = *(undefined4 **)(iVar3 + 0x18);
                    }
                    local_ec = *(undefined4 *)(puVar9 + 1);
                    local_90 = *(undefined4 *)puVar9;
                    uStack_8c = *(undefined4 *)((int)puVar9 + 4);
                    local_f4 = *puVar9;
                    local_e0 = puVar7[2];
                    local_e8 = *puVar7;
                    uStack_e4 = puVar7[1];
                    local_88 = local_ec;
                    local_6c = local_e8;
                    uStack_68 = uStack_e4;
                    local_64 = local_e0;
                  }
                  local_3c = 0;
                  local_38 = 0;
                  local_98[0] = 0;
                  local_d0 = 0x7f;
                  FUN_00a7ecb0(*(undefined4 *)(param_1 + 100),&local_3c,local_98,2,&local_d0,
                               local_60,local_dc,local_d8,local_cc);
                  local_fc = local_98[0];
                  local_100 = local_3c;
                  local_f8 = local_38;
                  if (local_5c != 0) {
                    iVar3 = 0;
                    local_54 = 0xffffffff;
                    local_50 = 0xffffffff;
                    local_4c = 0xffffffff;
                    local_48 = 0;
                    local_44 = 0;
                    local_40 = 0;
                    local_a8[0] = "";
                    local_a8[1] = "Shadow";
                    local_a8[2] = "Skinned";
                    local_a8[3] = "SkinnedShadow";
                    if (local_38 != 0) {
                      iVar3 = 2;
                    }
                    local_120[0] = FUN_00a7f130(param_1,&local_54,&local_48,local_a8[iVar3],local_c8
                                               );
                    local_10c = local_54;
                    local_108 = local_50;
                    local_104 = local_4c;
                    local_110 = local_48;
                    local_118 = local_44;
                    local_114 = local_40;
                  }
                  FUN_00a40490(local_120);
                  local_8 = 0xffffffff;
                  if (0xf < local_b4) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_c8[0]);
                  }
                  local_b4 = 0xf;
                  local_b8 = 0;
                  local_c8[0] = local_c8[0] & 0xffffff00;
                  iVar3 = local_58;
                }
LAB_00a7e70a:
                local_28 = local_28 + 0x60;
                local_2c = local_2c + -1;
              } while (local_2c != 0);
            }
            local_1c = local_1c + 0x60;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      local_20 = local_20 + 0x60;
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  ExceptionList = local_10;
  return;
}

