// FUN_006d1450 @ 006d1450 body=[[006d1450, 006d14d3] [006d14d7, 006d14fa] [006d14fe, 006d157c] [006d1580, 006d15df] [006d15e3, 006d162e] [006d1630, 006d1716] [006d171a, 006d17b8] [006d17bc, 006d17dd] [006d17e1, 006d1903] [006d1907, 006d192a] [006d192e, 006d1a54] [006d1a58, 006d1a7d] [006d1a81, 006d1a9f] [006d1aa3, 006d1bda] [006d1bde, 006d1c02] [006d1c06, 006d1c29] [006d1c2d, 006d1c7b]]


void FUN_006d1450(char param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  int *in_ECX;
  undefined1 *puVar8;
  undefined **ppuStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  char *pcStack_110;
  uint *puStack_10c;
  int *piStack_108;
  uint *puStack_104;
  uint *puStack_100;
  uint local_f0;
  uint local_dc;
  uint local_d4;
  uint local_c0;
  uint local_b8 [4];
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  uint local_80;
  undefined4 local_70;
  uint local_6c;
  int *local_64;
  undefined1 *local_60;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  int local_40;
  uint local_3c;
  int *local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6e1c8;
  local_10 = ExceptionList;
  local_3c = 0;
  puStack_100 = (uint *)0xa;
  puStack_104 = (uint *)0xe0d950;
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  piStack_108 = (int *)0x6d1494;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  puStack_100 = local_34;
  puStack_104 = (uint *)0x6d14a4;
  piVar4 = (int *)(**(code **)(*in_ECX + 0x34))();
  puStack_104 = local_5c;
  piStack_108 = param_2;
  puStack_10c = (uint *)0x6d14b3;
  piStack_108 = (int *)FUN_009790b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_104 = (uint *)0x0;
  puStack_10c = (uint *)0x6d14c5;
  (**(code **)(*piVar4 + 0xcc))();
  if (0xf < local_48) {
    puStack_10c = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
    pcStack_110 = &UNK_006d14d4;
    FUN_00aae91b();
  }
  local_8 = 0xffffffff;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = local_5c[0] & 0xffffff00;
  if (0xf < local_20) {
    puStack_10c = (uint *)local_34[0];
                    /* WARNING: Subroutine does not return */
    pcStack_110 = &UNK_006d14fb;
    FUN_00aae91b();
  }
  puStack_10c = (uint *)0xa;
  pcStack_110 = "party_icon";
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  uStack_118 = CONCAT44(0x6d1516,(undefined4)uStack_118);
  FUN_00409350();
  local_8 = 2;
  puStack_10c = local_34;
  pcStack_110 = (char *)0x6d152a;
  piVar4 = (int *)(**(code **)(*in_ECX + 0x44))();
  iVar1 = param_2[0x15];
  uStack_124 = *(undefined4 *)(iVar1 + 0x30);
  local_60 = (undefined1 *)&ppuStack_128;
  ppuStack_128 = CColor::vftable;
  uStack_120 = *(undefined8 *)(iVar1 + 0x34);
  uStack_118 = *(undefined8 *)(iVar1 + 0x3c);
  pcStack_110 = (char *)CONCAT31(pcStack_110._1_3_,*(undefined1 *)(iVar1 + 0x44));
  (**(code **)(*piVar4 + 0x68))();
  local_8 = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  FUN_00409350("issue_listbox",0xd);
  local_8 = 3;
  piVar4 = (int *)(**(code **)(*in_ECX + 0x7c))(local_9c);
  local_8 = 0xffffffff;
  local_64 = piVar4;
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_9c[0]);
  }
  local_88 = 0xf;
  local_8c = 0;
  local_9c[0] = local_9c[0] & 0xffffff00;
  (**(code **)(*piVar4 + 0x54))();
  (**(code **)(*piVar4 + 0x5c))();
  local_38 = (int *)(DAT_01258a48 + 0x28);
  puVar8 = (undefined1 *)(*(int *)(DAT_01258a48 + 0x2c) - *(int *)(DAT_01258a48 + 0x28) >> 2);
  local_18 = 0;
  local_60 = puVar8;
  if (0 < (int)puVar8) {
    do {
      cVar3 = (**(code **)(**(int **)(local_18 * 4 + *local_38) + 0x18))();
      if (cVar3 != '\0') {
        puVar5 = (undefined4 *)FUN_00aae9af(0x28);
        local_8 = 4;
        local_14 = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
          FUN_00409350("party_issue_option_window",0x19);
          piVar4 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,5);
          local_3c = local_3c | 1;
          uVar6 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *(undefined1 *)(puVar5 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar5 + 5) = 0;
          *(undefined1 *)(puVar5 + 6) = 0;
          puVar5[7] = &PTR_FUN_00e39158;
          local_8 = 9;
          *puVar5 = &PTR_FUN_00e392f0;
          puVar5[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar5 + 9) = 0;
          uVar6 = (**(code **)(*piVar4 + 0x2c))(local_34,uVar6);
          puVar5[8] = uVar6;
        }
        local_8 = 0xffffffff;
        if ((local_3c & 1) != 0) {
          local_3c = local_3c & 0xfffffffe;
          if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_34[0]);
          }
          local_20 = 0xf;
          local_24 = 0;
          local_34[0] = local_34[0] & 0xffffff00;
        }
        piVar4 = (int *)puVar5[8];
        (**(code **)(*local_64 + 0x10))(puVar5,0);
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("issue_group",0xb);
        local_8 = 0xb;
        uVar6 = FUN_00974c50(*(undefined4 *)(*local_38 + local_18 * 4));
        local_8 = CONCAT31(local_8._1_3_,0xc);
        local_14 = (int *)(**(code **)(*piVar4 + 0x3c))(local_34);
        FUN_00408ed0(uVar6,0,0xffffffff);
        FUN_00a5ecc0(uVar6,0);
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
        local_8 = 0xffffffff;
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("issue_name",10);
        local_8._0_1_ = 0xd;
        local_8._1_3_ = 0;
        iVar1 = *(int *)(*local_38 + local_18 * 4);
        if (*(int *)(iVar1 + 0x5c) == 1) {
          cVar3 = (**(code **)(*param_2 + 0x20))();
          if (cVar3 == '\0') {
            piVar7 = DAT_01258a40;
            if (DAT_01258a40 == (int *)0x0) {
              local_14 = (int *)FUN_00aae9af(0x1d8);
              local_8._0_1_ = 0xf;
              if (local_14 == (int *)0x0) goto LAB_006d1854;
              piVar7 = (int *)FUN_009747a0();
              local_8._0_1_ = 0xd;
              DAT_01258a40 = piVar7;
            }
          }
          else {
            piVar7 = *(int **)(param_2[0x16] + *(int *)(iVar1 + 0x50) * 4);
          }
        }
        else {
          piVar7 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            local_14 = (int *)FUN_00aae9af(0x1d8);
            local_8._0_1_ = 0xe;
            if (local_14 == (int *)0x0) {
LAB_006d1854:
              local_8._0_1_ = 0xd;
              DAT_01258a40 = (int *)0x0;
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = (int *)FUN_009747a0();
              local_8._0_1_ = 0xd;
              DAT_01258a40 = piVar7;
            }
          }
        }
        uVar6 = (**(code **)(*piVar7 + 0x18))(local_5c);
        local_8 = CONCAT31(local_8._1_3_,0x10);
        local_14 = (int *)(**(code **)(*piVar4 + 0x3c))(local_34);
        FUN_00408ed0(uVar6,0,0xffffffff);
        FUN_00a5ecc0(uVar6,0);
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
        local_8 = 0xffffffff;
        local_48 = 0xf;
        local_4c = 0;
        uVar2 = local_5c[0] >> 8;
        local_5c[0] = uVar2 << 8;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = uVar2 << 8;
        FUN_00409350("issue_group",0xb);
        local_8 = 0x11;
        local_14 = (int *)(**(code **)(*piVar4 + 0x3c))(local_5c);
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        FUN_00409350("POLITICSVIEW_PARTY_ISSUE",0x18);
        local_8._0_1_ = 0x12;
        iVar1 = *(int *)(*local_38 + local_18 * 4);
        if (*(int *)(iVar1 + 0x5c) == 1) {
          cVar3 = (**(code **)(*param_2 + 0x20))();
          if (cVar3 == '\0') {
            piVar7 = DAT_01258a40;
            if (DAT_01258a40 == (int *)0x0) {
              local_40 = FUN_00aae9af(0x1d8);
              local_8._0_1_ = 0x14;
              if (local_40 == 0) goto LAB_006d19c5;
              piVar7 = (int *)FUN_009747a0();
              local_8._0_1_ = 0x12;
              DAT_01258a40 = piVar7;
            }
          }
          else {
            piVar7 = *(int **)(param_2[0x16] + *(int *)(iVar1 + 0x50) * 4);
          }
        }
        else {
          piVar7 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            local_40 = FUN_00aae9af(0x1d8);
            local_8._0_1_ = 0x13;
            if (local_40 == 0) {
LAB_006d19c5:
              local_8._0_1_ = 0x12;
              DAT_01258a40 = (int *)0x0;
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = (int *)FUN_009747a0();
              local_8._0_1_ = 0x12;
              DAT_01258a40 = piVar7;
            }
          }
        }
        uVar6 = FUN_00988f20(piVar7 + 0xd);
        local_8 = CONCAT31(local_8._1_3_,0x15);
        (**(code **)(*local_14 + 0x78))(uVar6);
        if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_d4);
        }
        local_c0 = 0xf;
        local_d4 = local_d4 & 0xffffff00;
        if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_34[0]);
        }
        local_8 = 0xffffffff;
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = local_34[0] & 0xffffff00;
        if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_5c[0]);
        }
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        FUN_00409350("issue_name",10);
        local_8 = 0x16;
        piVar4 = (int *)(**(code **)(*piVar4 + 0x3c))(local_b8);
        local_6c = 0xf;
        local_70 = 0;
        local_80 = local_80 & 0xffffff00;
        FUN_00409350("POLITICSVIEW_PARTY_ISSUE",0x18);
        local_8._0_1_ = 0x17;
        iVar1 = *(int *)(*local_38 + local_18 * 4);
        if (*(int *)(iVar1 + 0x5c) == 1) {
          cVar3 = (**(code **)(*param_2 + 0x20))();
          if (cVar3 == '\0') {
            piVar7 = DAT_01258a40;
            if (DAT_01258a40 == (int *)0x0) {
              local_40 = FUN_00aae9af(0x1d8);
              local_8._0_1_ = 0x19;
              if (local_40 == 0) goto LAB_006d1b48;
              piVar7 = (int *)FUN_009747a0();
              local_8._0_1_ = 0x17;
              DAT_01258a40 = piVar7;
            }
          }
          else {
            piVar7 = *(int **)(param_2[0x16] + *(int *)(iVar1 + 0x50) * 4);
          }
        }
        else {
          piVar7 = DAT_01258a40;
          if (DAT_01258a40 == (int *)0x0) {
            local_40 = FUN_00aae9af(0x1d8);
            local_8._0_1_ = 0x18;
            if (local_40 == 0) {
LAB_006d1b48:
              local_8._0_1_ = 0x17;
              DAT_01258a40 = (int *)0x0;
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = (int *)FUN_009747a0();
              local_8._0_1_ = 0x17;
              DAT_01258a40 = piVar7;
            }
          }
        }
        uVar6 = FUN_00988f20(piVar7 + 0xd);
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        (**(code **)(*piVar4 + 0x78))(uVar6);
        if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_f0);
        }
        local_dc = 0xf;
        local_f0 = local_f0 & 0xffffff00;
        if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_80);
        }
        local_8 = 0xffffffff;
        local_6c = 0xf;
        local_70 = 0;
        local_80 = local_80 & 0xffffff00;
        if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_b8[0]);
        }
        local_a4 = 0xf;
        local_a8 = 0;
        local_b8[0] = local_b8[0] & 0xffffff00;
        puVar8 = local_60;
        piVar4 = local_64;
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)puVar8);
  }
  (**(code **)(*piVar4 + 0x6c))();
  if (param_1 != '\0') {
    (**(code **)(*piVar4 + 0x50))();
  }
  ExceptionList = local_10;
  return;
}

