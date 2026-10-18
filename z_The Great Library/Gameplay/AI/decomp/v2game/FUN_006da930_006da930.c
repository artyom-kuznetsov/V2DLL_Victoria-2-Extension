// FUN_006da930 @ 006da930 body=[[006da930, 006daa5f] [006daa63, 006daa8c] [006daa90, 006dab4a] [006dab4e, 006dabc6] [006dabca, 006dac49] [006dac4d, 006dacda] [006dacde, 006dad42] [006dad46, 006dadcd] [006dadd1, 006dae37] [006dae3b, 006dae5e] [006dae62, 006daed9] [006daedd, 006daf00] [006daf04, 006daf60] [006daf64, 006daf87] [006daf8b, 006db262] [006db266, 006db2d2]]


char FUN_006da930(int param_1,int *param_2,int *param_3,byte *param_4,undefined1 *param_5)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  char *pcVar9;
  byte *pbVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_ec [4];
  uint local_e8 [4];
  undefined4 local_d8;
  uint local_d4;
  uint local_cc [4];
  int *local_bc;
  uint local_b8;
  undefined8 local_b0;
  int local_a4;
  int local_a0;
  undefined4 local_9c;
  uint local_98 [4];
  undefined4 local_88;
  uint local_84;
  undefined4 local_7c;
  int *local_78;
  char local_74 [4];
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  int local_54;
  int local_50;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  uint local_3c [4];
  undefined4 local_2c;
  uint local_28;
  int local_20;
  int *local_1c;
  char local_16;
  char local_15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar12 = DAT_012588e8;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba5ecf;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *param_5 = 0;
  local_16 = '\0';
  local_9c = (**(code **)(**(int **)(iVar12 + 0xb24) + 0x3c))();
  iVar12 = param_3[1] - *param_3 >> 2;
  local_4c = 0;
  local_a4 = iVar12;
  if (0 < iVar12) {
    do {
      iVar11 = local_4c;
      cVar3 = (**(code **)(**(int **)(*param_3 + local_4c * 4) + 0x34))();
      if ((cVar3 != '\0') &&
         (cVar3 = (**(code **)(**(int **)(*(int *)(*param_3 + iVar11 * 4) + 0x54) + 0x18))(),
         cVar3 != '\0')) {
        local_20 = *(int *)(*(int *)(*param_3 + iVar11 * 4) + 0x54);
        local_48 = (int *)(**(code **)(*param_2 + 0x6c))(local_20 + 0x18);
        if (local_48 != (int *)0x0) {
          local_28 = 0xf;
          local_2c = 0;
          local_3c[0] = local_3c[0] & 0xffffff00;
          FUN_00409350("reform_name",0xb);
          local_8 = 0;
          uVar4 = FUN_00974c50(local_20);
          local_8 = CONCAT31(local_8._1_3_,1);
          (**(code **)(*local_48 + 0x3c))(local_3c);
          FUN_00408ed0(uVar4,0,0xffffffff);
          FUN_00a5ecc0(uVar4,0);
          if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_98[0]);
          }
          local_8 = 0xffffffff;
          local_84 = 0xf;
          local_88 = 0;
          local_98[0] = local_98[0] & 0xffffff00;
          if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_3c[0]);
          }
          iVar12 = *(int *)(local_20 + 0xc) - *(int *)(local_20 + 8) >> 2;
          local_44 = 0;
          local_50 = 0;
          local_a0 = iVar12;
          if (0 < iVar12) {
            do {
              iVar11 = local_50;
              local_40 = *(int **)(*(int *)(local_20 + 8) + local_50 * 4);
              cVar3 = (**(code **)(*local_40 + 0x34))();
              if (cVar3 != '\0') {
                local_84 = 0xf;
                local_88 = 0;
                local_98[0] = local_98[0] & 0xffffff00;
                local_8 = 2;
                pcVar5 = __itoa(local_44,local_74,10);
                pcVar9 = pcVar5;
                do {
                  cVar3 = *pcVar9;
                  pcVar9 = pcVar9 + 1;
                } while (cVar3 != '\0');
                FUN_00409350(pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
                piVar7 = local_48;
                local_8 = 3;
                piVar6 = (int *)(**(code **)(*local_48 + 0x6c))(local_98);
                local_8 = 0xffffffff;
                if (0xf < local_84) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_98[0]);
                }
                local_84 = 0xf;
                local_88 = 0;
                local_98[0] = local_98[0] & 0xffffff00;
                if (piVar6 == (int *)0x0) {
                  local_b8 = 0xf;
                  local_cc[0] = local_cc[0] & 0xffffff00;
                  local_bc = piVar6;
                  FUN_00409350("reform_option_window",0x14);
                  local_8 = 4;
                  piVar6 = (int *)(**(code **)(*DAT_01258a80 + 0x2c))(local_cc,local_9c);
                  if (0xf < local_b8) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_cc[0]);
                  }
                  local_b8 = 0xf;
                  local_bc = (int *)0x0;
                  local_cc[0] = local_cc[0] & 0xffffff00;
                  local_28 = 0xf;
                  local_2c = 0;
                  local_3c[0] = local_3c[0] & 0xffffff00;
                  local_8 = 5;
                  pcVar5 = __itoa(local_44,local_74,10);
                  local_1c = (int *)(pcVar5 + 1);
                  pcVar9 = pcVar5;
                  do {
                    cVar3 = *pcVar9;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar3 != '\0');
                  FUN_00409350(pcVar5,(int)pcVar9 - (int)local_1c);
                  local_8 = 6;
                  (**(code **)(*piVar7 + 0xbc))(local_3c,piVar6);
                  local_8 = 0xffffffff;
                  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_3c[0]);
                  }
                  iVar12 = (**(code **)(*piVar6 + 0x60))(local_ec);
                  local_54 = (uint)(ushort)(*(short *)(iVar12 + 2) * (short)local_44) << 0x10;
                  (**(code **)(*piVar6 + 0x18))(local_54);
                  local_28 = 0xf;
                  local_2c = 0;
                  local_3c[0] = local_3c[0] & 0xffffff00;
                  FUN_00409350("reform_option",0xd);
                  local_8 = 7;
                  iVar12 = (**(code **)(*piVar6 + 0x34))(local_3c);
                  (**(code **)(*(int *)(iVar12 + 0x54) + 4))(param_1 + 0x220);
                  local_8 = 0xffffffff;
                  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_3c[0]);
                  }
                }
                local_8 = 0xffffffff;
                local_28 = 0xf;
                local_3c[0] = local_3c[0] & 0xffffff00;
                if (local_40 == *(int **)(*param_3 + local_4c * 4)) {
                  local_2c = 0;
                  FUN_00409350("selected",8);
                  local_8 = 8;
                  piVar7 = (int *)(**(code **)(*piVar6 + 0x44))(local_3c);
                  (**(code **)(*piVar7 + 0x108))();
                  local_8 = 0xffffffff;
                  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_3c[0]);
                  }
                  if (*(char *)(*(int *)(param_1 + 0x4c) + 0x67) != '\0') {
                    local_28 = 0xf;
                    local_2c = 0;
                    local_3c[0] = local_3c[0] & 0xffffff00;
                    FUN_00409350("selected",8);
                    local_8 = 9;
                    piVar7 = (int *)(**(code **)(*piVar6 + 0x44))(local_3c);
                    pcVar8 = *(code **)(*piVar7 + 0x34);
                    goto LAB_006dadb6;
                  }
                }
                else {
                  local_2c = 0;
                  FUN_00409350("selected",8);
                  local_8 = 10;
                  piVar7 = (int *)(**(code **)(*piVar6 + 0x44))(local_3c);
                  pcVar8 = *(code **)(*piVar7 + 0x104);
LAB_006dadb6:
                  (*pcVar8)();
                  local_8 = 0xffffffff;
                  if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                    FUN_00aae91b(local_3c[0]);
                  }
                }
                local_8 = 0xffffffff;
                local_28 = 0xf;
                local_2c = 0;
                local_3c[0] = local_3c[0] & 0xffffff00;
                FUN_00409350("reform_option",0xd);
                local_8 = 0xb;
                local_1c = (int *)(**(code **)(*piVar6 + 0x34))(local_3c);
                local_78 = local_40 + 0xd;
                uVar4 = FUN_00988f20(local_78);
                local_8 = CONCAT31(local_8._1_3_,0xc);
                (**(code **)(*local_1c + 0x78))(uVar4);
                if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_70[0]);
                }
                local_8 = 0xffffffff;
                local_5c = 0xf;
                local_60 = 0;
                local_70[0] = local_70[0] & 0xffffff00;
                if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_3c[0]);
                }
                local_28 = 0xf;
                local_2c = 0;
                local_3c[0] = local_3c[0] & 0xffffff00;
                FUN_00409350("reform_name",0xb);
                local_8 = 0xd;
                uVar4 = (**(code **)(*local_40 + 0x18))(local_70);
                local_8 = CONCAT31(local_8._1_3_,0xe);
                local_1c = (int *)(**(code **)(*piVar6 + 0x3c))(local_3c);
                FUN_00408ed0(uVar4,0,0xffffffff);
                FUN_00a5ecc0(uVar4,0);
                if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_70[0]);
                }
                local_8 = 0xffffffff;
                local_5c = 0xf;
                local_60 = 0;
                local_70[0] = local_70[0] & 0xffffff00;
                if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_3c[0]);
                }
                local_28 = 0xf;
                local_2c = 0;
                local_3c[0] = local_3c[0] & 0xffffff00;
                FUN_00409350("reform_name",0xb);
                local_8 = 0xf;
                local_1c = (int *)(**(code **)(*piVar6 + 0x3c))(local_3c);
                uVar4 = FUN_00988f20(local_78);
                local_8 = CONCAT31(local_8._1_3_,0x10);
                (**(code **)(*local_1c + 0x78))(uVar4);
                piVar7 = local_40;
                if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_70[0]);
                }
                local_8 = 0xffffffff;
                local_5c = 0xf;
                local_60 = 0;
                local_70[0] = local_70[0] & 0xffffff00;
                if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_3c[0]);
                }
                local_28 = 0xf;
                local_2c = 0;
                local_3c[0] = local_3c[0] & 0xffffff00;
                local_7c = *(undefined4 *)(DAT_012588e8 + 0xb5c);
                local_78 = *(int **)(DAT_012587e4 + 4);
                local_1c = *(int **)((int)local_78 + *(int *)(DAT_012588e8 + 0xb60) * 4);
                bVar14 = false;
                local_15 = '\0';
                local_b0 = 0;
                pbVar10 = param_4;
                if (0xf < *(uint *)(param_4 + 0x14)) {
                  pbVar10 = *(byte **)param_4;
                }
                pcVar9 = "POLITICSVIEW_SOCIAL_REFORM";
                do {
                  bVar1 = *pbVar10;
                  bVar13 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_006db005:
                    iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_006db00a;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar10[1];
                  bVar13 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_006db005;
                  pbVar10 = pbVar10 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar12 = 0;
LAB_006db00a:
                if (iVar12 == 0) {
                  cVar3 = FUN_00525a20(local_1c,local_20,local_40);
                  bVar14 = false;
                  if (cVar3 != '\0') {
                    iVar12 = local_40[0x14];
                    iVar11 = *(int *)((int)local_1c + 0x850);
LAB_006db0ba:
                    if (iVar12 < *(int *)(*(int *)(iVar11 + *(int *)(local_20 + 0x50) * 4) + 0x50))
                    {
                      *param_5 = 1;
                      local_15 = '\x01';
                      bVar14 = false;
                    }
                    else {
                      bVar14 = true;
                    }
                  }
                }
                else {
                  pbVar10 = param_4;
                  if (0xf < *(uint *)(param_4 + 0x14)) {
                    pbVar10 = *(byte **)param_4;
                  }
                  pcVar9 = "POLITICSVIEW_POLITICAL_REFORM";
                  do {
                    bVar1 = *pbVar10;
                    bVar13 = bVar1 < (byte)*pcVar9;
                    if (bVar1 != *pcVar9) {
LAB_006db070:
                      iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                      goto LAB_006db075;
                    }
                    if (bVar1 == 0) break;
                    bVar1 = pbVar10[1];
                    bVar13 = bVar1 < (byte)pcVar9[1];
                    if (bVar1 != pcVar9[1]) goto LAB_006db070;
                    pbVar10 = pbVar10 + 2;
                    pcVar9 = pcVar9 + 2;
                  } while (bVar1 != 0);
                  iVar12 = 0;
LAB_006db075:
                  if (iVar12 == 0) {
                    cVar3 = FUN_00525be0(*(undefined4 *)
                                          ((int)local_78 + *(int *)(DAT_012588e8 + 0xb60) * 4),
                                         local_20,local_40);
                    bVar14 = false;
                    if (cVar3 != '\0') {
                      iVar12 = piVar7[0x14];
                      iVar11 = *(int *)((int)local_1c + 0x860);
                      goto LAB_006db0ba;
                    }
                  }
                }
                piVar2 = local_1c;
                piVar7 = local_40;
                pbVar10 = param_4;
                if (0xf < *(uint *)(param_4 + 0x14)) {
                  pbVar10 = *(byte **)param_4;
                }
                pcVar9 = "POLITICSVIEW_ECONOMIC_REFORM";
                do {
                  bVar1 = *pbVar10;
                  bVar13 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_006db108:
                    iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_006db10d;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar10[1];
                  bVar13 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_006db108;
                  pbVar10 = pbVar10 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar12 = 0;
LAB_006db10d:
                if (iVar12 == 0) {
                  cVar3 = FUN_005262c0(local_20);
                  bVar14 = false;
                  if (cVar3 != '\0') {
                    if (piVar7[0x14] <
                        *(int *)(*(int *)(*(int *)((int)piVar2 + 0x880) +
                                         *(int *)(local_20 + 0x50) * 4) + 0x50)) {
                      bVar14 = false;
                      local_15 = '\x01';
                      *param_5 = 1;
                    }
                    else {
                      bVar14 = true;
                    }
                  }
                }
                piVar7 = local_40;
                pbVar10 = param_4;
                if (0xf < *(uint *)(param_4 + 0x14)) {
                  pbVar10 = *(byte **)param_4;
                }
                pcVar9 = "POLITICSVIEW_MILITARY_REFORM";
                do {
                  bVar1 = *pbVar10;
                  bVar13 = bVar1 < (byte)*pcVar9;
                  if (bVar1 != *pcVar9) {
LAB_006db180:
                    iVar12 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                    goto LAB_006db185;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar10[1];
                  bVar13 = bVar1 < (byte)pcVar9[1];
                  if (bVar1 != pcVar9[1]) goto LAB_006db180;
                  pbVar10 = pbVar10 + 2;
                  pcVar9 = pcVar9 + 2;
                } while (bVar1 != 0);
                iVar12 = 0;
LAB_006db185:
                if (iVar12 == 0) {
                  cVar3 = FUN_00525d90(local_20);
                  bVar14 = false;
                  if (cVar3 != '\0') {
                    if (piVar7[0x14] <
                        *(int *)(*(int *)(*(int *)((int)piVar2 + 0x870) +
                                         *(int *)(local_20 + 0x50) * 4) + 0x50)) {
                      bVar14 = false;
                      local_15 = '\x01';
                      *param_5 = 1;
                    }
                    else {
                      bVar14 = true;
                    }
                  }
                }
                if ((((local_16 != '\0') || (local_16 = '\0', bVar14)) &&
                    (local_16 = '\x01', bVar14)) ||
                   (bVar14 = local_15 != '\0', local_15 = '\0', bVar14)) {
                  local_15 = '\x01';
                }
                local_d4 = 0xf;
                local_d8 = 0;
                local_e8[0] = local_e8[0] & 0xffffff00;
                FUN_00409350("reform_option",0xd);
                local_8 = 0x11;
                piVar7 = (int *)(**(code **)(*piVar6 + 0x34))(local_e8);
                if (local_15 == '\0') {
                  pcVar8 = *(code **)(*piVar7 + 0xbc);
                }
                else {
                  pcVar8 = *(code **)(*piVar7 + 0xb8);
                }
                (*pcVar8)();
                local_8 = 0xffffffff;
                if (0xf < local_d4) {
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b(local_e8[0]);
                }
                local_44 = local_44 + 1;
                local_d4 = 0xf;
                local_d8 = 0;
                local_e8[0] = local_e8[0] & 0xffffff00;
                iVar11 = local_50;
                iVar12 = local_a0;
              }
              local_50 = iVar11 + 1;
            } while (local_50 < iVar12);
          }
          (**(code **)(local_48[6] + 0x34))();
          iVar12 = local_a4;
          iVar11 = local_4c;
        }
      }
      local_4c = iVar11 + 1;
    } while (local_4c < iVar12);
  }
  ExceptionList = local_10;
  return local_16;
}

