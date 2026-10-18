// FUN_0064f850 @ 0064f850 body=[[0064f850, 0064f8d0] [0064f8d4, 0064f921] [0064f925, 0064f990] [0064f994, 0064fa07] [0064fa0b, 0064fa89] [0064fa93, 0064fafb] [0064faff, 0064fb67] [0064fb6b, 0064fc25] [0064fc29, 0064fcdc] [0064fce0, 0064fdf3] [0064fdf7, 0064fe86] [0064fe8a, 0064ff75] [0064ff79, 0064ffa2] [0064ffa6, 0064ffbc] [0064ffc0, 0064ffdd] [0064ffe1, 00650037] [0065003b, 006500bc] [006500c0, 0065010d] [00650111, 00650164] [00650168, 00650238] [0065023c, 006502cb] [006502cf, 0065032e] [00650332, 006503aa] [006503ae, 006503fb] [006503ff, 0065046b] [0065046f, 00650537] [0065053b, 00650566] [0065056a, 0065058a] [0065058e, 006505ac] [006505b0, 0065062c] [00650630, 00650686] [0065068a, 006506e4] [006506ed, 00650728] [0065072c, 0065077a] [0065077e, 006507da] [006507de, 0065089e] [006508a2, 00650928] [0065092c, 0065094a] [0065094e, 006509bb] [006509bf, 006509dd] [006509e1, 00650a49] [00650a4d, 00650a6b] [00650a6f, 00650abf] [00650ac3, 00650b1a] [00650b1e, 00650b86] [00650b8a, 00650bb9]]


/* WARNING: Removing unreachable block (ram,0x0064fd4c) */

void FUN_0064f850(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  code *pcVar11;
  char *pcVar12;
  bool bVar13;
  undefined1 local_124 [4];
  char local_120 [4];
  uint local_11c [4];
  undefined4 local_10c;
  uint local_108;
  uint local_100;
  undefined4 local_f0;
  uint local_ec;
  int local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  undefined4 local_88;
  int *local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  int local_64;
  int local_60;
  int local_5c;
  int *local_58;
  undefined4 *local_54;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined4 *local_34;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b454d8;
  local_10 = ExceptionList;
  if ((char)param_1[0x17] != '\0') {
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    ExceptionList = &local_10;
    FUN_00409350("messagelog_window",0x11);
    local_8 = 0;
    iVar2 = (**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_50);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x38))();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("chat_shield_start",0x11);
    local_8 = 1;
    piVar3 = (int *)(**(code **)(*piVar4 + 0x34))();
    local_54 = (undefined4 *)(**(code **)(*piVar3 + 0x48))(local_80);
    local_8 = 0xffffffff;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    FUN_00409350("chat_shield_offset",0x12);
    local_8 = 2;
    piVar3 = (int *)(**(code **)(*piVar4 + 0x34))();
    local_64 = (**(code **)(*piVar3 + 0x48))(local_a4);
    local_8 = 0xffffffff;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4[0]);
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    FUN_00409350("chat_shield_offset_long",0x17);
    local_8 = 3;
    piVar3 = (int *)(**(code **)(*piVar4 + 0x34))();
    iVar2 = (**(code **)(*piVar3 + 0x48))(local_c0);
    local_8 = 0xffffffff;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0[0]);
    }
    local_d8 = local_54[0x19];
    local_5c = local_54[0x1a];
    local_d0 = *(int *)(local_64 + 100);
    local_cc = *(int *)(local_64 + 0x68);
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    local_c8 = *(int *)(iVar2 + 100);
    local_c4 = *(int *)(iVar2 + 0x68);
    local_60 = local_d8;
    for (puVar10 = (undefined4 *)piVar4[0x586]; puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)puVar10[2]) {
      (**(code **)(*(int *)*puVar10 + 0x50))();
    }
    if (piVar4[0x586] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(piVar4[0x586]);
    }
    piVar4[0x586] = 0;
    piVar4[0x587] = 0;
    piVar4[0x588] = 0;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = 4;
    piVar3 = (int *)(**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_50);
    (**(code **)(*piVar3 + 0x88))();
    local_8 = 0xffffffff;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = 5;
    piVar4 = (int *)(**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_c0);
    (**(code **)(*piVar4 + 0x90))();
    local_8 = 0xffffffff;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0[0]);
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    local_34 = *(undefined4 **)(DAT_012588e8 + 0x18);
    local_64 = 0;
    if (local_34 != (undefined4 *)0x0) {
      local_d4 = (int *)(DAT_012588e8 + 0x20);
      do {
        if (*local_d4 < 5) {
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          FUN_00409350("player_entry",0xc);
          local_8 = 0x15;
          piVar4 = (int *)(**(code **)(*param_1 + 0x34))();
          iVar2 = *piVar4;
          uVar5 = (**(code **)(*param_1 + 0x3c))();
          piVar4 = (int *)(**(code **)(iVar2 + 0x2c))(local_50,uVar5);
          local_8 = 0xffffffff;
          local_58 = piVar4;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350("shield",6);
          local_8 = 0x16;
          local_88 = local_34[8];
          uVar5 = local_34[9];
          iVar2 = (**(code **)(*piVar4 + 0x48))(local_30);
          (**(code **)(**(int **)(iVar2 + 0x70) + 0x14c))(uVar5);
          iVar2 = **(int **)(iVar2 + 0x70);
          uVar5 = FUN_0052fc10();
          (**(code **)(iVar2 + 0x150))(uVar5);
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (*(char *)((int)local_34 + 0x29) == '\0') {
            FUN_00409350("shield",6);
            piVar4 = local_58;
            local_8 = 0x19;
            (**(code **)(*local_58 + 0x48))(local_30);
            FUN_009a8bc0();
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350("minishield_strikeout",0x14);
            local_8 = 0x1a;
            piVar4 = (int *)(**(code **)(*piVar4 + 0x44))(local_30);
            pcVar11 = *(code **)(*piVar4 + 0x34);
          }
          else {
            FUN_00409350("shield",6);
            piVar4 = local_58;
            local_8 = 0x17;
            (**(code **)(*local_58 + 0x48))(local_30);
            FUN_009a8b10();
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350("minishield_strikeout",0x14);
            local_8 = 0x18;
            piVar4 = (int *)(**(code **)(*piVar4 + 0x44))(local_30);
            pcVar11 = *(code **)(*piVar4 + 0x38);
          }
          (*pcVar11)();
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350("name_label",10);
          piVar4 = local_58;
          local_8 = 0x1b;
          (**(code **)(*local_58 + 0x3c))(local_30);
          FUN_00408ed0(local_34,0,0xffffffff);
          FUN_00a5ecc0(local_34,0);
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          (**(code **)(*piVar4 + 0xa8))(local_60,local_5c);
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          FUN_00409350("chat_window",0xb);
          local_8 = 0x1c;
          local_84 = (int *)(**(code **)(*(int *)param_1[0x58c] + 0x6c))(local_80);
          uVar5 = FUN_009888f0(local_30);
          local_8._0_1_ = 0x1d;
          local_90 = 0xf;
          local_94 = 0;
          local_a4[0] = local_a4[0] & 0xffffff00;
          FUN_00409350("player_",7);
          local_8._0_1_ = 0x1e;
          uVar5 = FUN_00988f20(uVar5);
          local_8 = CONCAT31(local_8._1_3_,0x1f);
          (**(code **)(*local_84 + 0xbc))(uVar5,piVar4);
          if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_100);
          }
          local_ec = 0xf;
          local_f0 = 0;
          local_100 = local_100 & 0xffffff00;
          if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_a4[0]);
          }
          local_90 = 0xf;
          local_94 = 0;
          local_a4[0] = local_a4[0] & 0xffffff00;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_8 = 0xffffffff;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_80[0]);
          }
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          FUN_0068b610(DAT_012588e8);
          cVar1 = FUN_00416db0();
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (cVar1 == '\0') {
            FUN_00409350("shield",6);
            local_8 = 0x20;
            iVar2 = (**(code **)(*piVar4 + 0x48))(local_30);
            piVar3 = param_1;
            (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x210);
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350("shield",6);
            local_8 = 0x21;
            iVar2 = (**(code **)(*piVar4 + 0x48))(local_30);
            (**(code **)(*(int *)(iVar2 + 0x54) + 4))(piVar3 + 0x21e);
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350(&DAT_00df09f4,4);
            local_8 = 0x22;
            iVar2 = (**(code **)(*piVar4 + 0x34))(local_30);
            (**(code **)(*(int *)(iVar2 + 0x54) + 4))(piVar3 + 0x1fc);
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
          }
          else {
            FUN_00409350("shield",6);
            local_8 = 0x23;
            piVar3 = (int *)(**(code **)(*piVar4 + 0x48))(local_30);
            (**(code **)(*piVar3 + 0x98))(0);
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350(&DAT_00df09f4,4);
            local_8 = 0x24;
            piVar3 = (int *)(**(code **)(*piVar4 + 0x34))(local_30);
            (**(code **)(*piVar3 + 0x98))(0);
            local_8 = 0xffffffff;
            piVar3 = param_1;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
          }
          local_8 = 0xffffffff;
          local_60 = local_60 + local_c8;
          local_5c = local_5c + local_c4;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350("chatplayer",10);
          local_8 = 0x25;
          (**(code **)(piVar4[6] + 0x78))(local_30);
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_54 = (undefined4 *)piVar3[0x587];
          puVar10 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = piVar4;
            puVar10[1] = local_54;
            puVar10[2] = 0;
            *(undefined1 *)(puVar10 + 3) = 0;
          }
          iVar2 = piVar3[0x588];
          piVar3[0x587] = (int)puVar10;
          piVar3[0x588] = iVar2 + 1;
          if (iVar2 == 0) goto LAB_00650828;
          local_54[2] = puVar10;
        }
        else {
          local_90 = 0xf;
          local_94 = 0;
          local_a4[0] = local_a4[0] & 0xffffff00;
          FUN_00409350("short_player_entry",0x12);
          local_8 = 6;
          piVar4 = (int *)(**(code **)(*param_1 + 0x34))();
          iVar2 = *piVar4;
          uVar5 = (**(code **)(*param_1 + 0x3c))();
          piVar4 = (int *)(**(code **)(iVar2 + 0x2c))(local_a4,uVar5);
          local_8 = 0xffffffff;
          local_58 = piVar4;
          if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_a4[0]);
          }
          local_90 = 0xf;
          local_94 = 0;
          local_a4[0] = local_a4[0] & 0xffffff00;
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          FUN_00409350("shield",6);
          local_8 = 7;
          local_e0 = local_34[8];
          local_dc = local_34[9];
          iVar2 = (**(code **)(*piVar4 + 0x48))(local_80);
          (**(code **)(**(int **)(iVar2 + 0x70) + 0x14c))(local_dc);
          local_54 = (undefined4 *)(**(int **)(iVar2 + 0x70) + 0x150);
          uVar5 = FUN_0052fc10();
          (*(code *)*local_54)(uVar5);
          local_8 = 0xffffffff;
          if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_80[0]);
          }
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          iVar2 = *(int *)(DAT_012588e8 + 0x18);
          local_84 = (int *)DAT_012588e8;
          if (iVar2 != 0) {
            local_54 = (undefined4 *)(DAT_012588e8 + 0xb24);
            do {
              local_e4 = *(int *)(iVar2 + 0x1c);
              iVar6 = (**(code **)(*(int *)*local_54 + 0x44))();
              if (local_e4 == *(int *)(iVar6 + 0x6c)) goto LAB_0064fd31;
              iVar2 = *(int *)(iVar2 + 0x3c);
            } while (iVar2 != 0);
          }
          iVar2 = (int)local_84 + 0x28;
LAB_0064fd31:
          local_84 = (int *)local_34[4];
          local_54 = local_34;
          if (0xf < (uint)local_34[5]) {
            local_54 = (undefined4 *)*local_34;
          }
          uVar8 = *(uint *)(iVar2 + 0x10);
          uVar7 = uVar8;
          if (local_84 <= uVar8) {
            uVar7 = (uint)local_84;
          }
          iVar2 = FUN_00414bd0(uVar7);
          bVar13 = false;
          if (iVar2 == 0) {
            if (uVar8 < local_84) {
              uVar8 = 0xffffffff;
            }
            else {
              uVar8 = (uint)((int *)uVar8 != local_84);
            }
            bVar13 = uVar8 == 0;
          }
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (bVar13) {
            FUN_00409350("shield",6);
            local_8 = 10;
            piVar3 = (int *)(**(code **)(*piVar4 + 0x48))(local_50);
            (**(code **)(*piVar3 + 0x98))(0);
          }
          else {
            FUN_00409350("shield",6);
            local_8 = 8;
            iVar2 = (**(code **)(*piVar4 + 0x48))(local_50);
            piVar3 = param_1;
            (**(code **)(*(int *)(iVar2 + 0x54) + 4))(param_1 + 0x210);
            local_8 = 0xffffffff;
            if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_50[0]);
            }
            local_3c = 0xf;
            local_40 = 0;
            local_50[0] = local_50[0] & 0xffffff00;
            FUN_00409350("shield",6);
            local_8 = 9;
            iVar2 = (**(code **)(*piVar4 + 0x48))(local_50);
            (**(code **)(*(int *)(iVar2 + 0x54) + 4))(piVar3 + 0x21e);
          }
          if (0xf < local_3c) {
            local_8 = 0xffffffff;
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          local_8 = 0xffffffff;
          (**(code **)(*piVar4 + 0xa8))(local_60,local_5c);
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350("chat_window",0xb);
          local_8 = 0xb;
          local_84 = (int *)(**(code **)(*(int *)param_1[0x58c] + 0x6c))(local_30);
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          local_8._0_1_ = 0xc;
          pcVar9 = __itoa(local_34[7],local_120,10);
          pcVar12 = pcVar9;
          do {
            cVar1 = *pcVar12;
            pcVar12 = pcVar12 + 1;
          } while (cVar1 != '\0');
          FUN_00409350(pcVar9,(int)pcVar12 - (int)(pcVar9 + 1));
          local_8._0_1_ = 0xd;
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          FUN_00409350("player_",7);
          local_8._0_1_ = 0xe;
          uVar5 = FUN_00988f20(local_50);
          local_8 = CONCAT31(local_8._1_3_,0xf);
          (**(code **)(*local_84 + 0xbc))(uVar5,piVar4);
          if (0xf < local_ec) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_100);
          }
          local_ec = 0xf;
          local_f0 = 0;
          local_100 = local_100 & 0xffffff00;
          if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_80[0]);
          }
          local_6c = 0xf;
          local_70 = 0;
          local_80[0] = local_80[0] & 0xffffff00;
          if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_50[0]);
          }
          local_8 = 0xffffffff;
          local_3c = 0xf;
          local_40 = 0;
          local_50[0] = local_50[0] & 0xffffff00;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          if (*(char *)((int)local_34 + 0x29) == '\0') {
            FUN_00409350("shield",6);
            piVar4 = local_58;
            local_8 = 0x12;
            (**(code **)(*local_58 + 0x48))(local_30);
            FUN_009a8bc0();
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350("minishield_strikeout",0x14);
            local_8 = 0x13;
            piVar4 = (int *)(**(code **)(*piVar4 + 0x44))(local_30);
            (**(code **)(*piVar4 + 0x34))();
          }
          else {
            FUN_00409350("shield",6);
            piVar4 = local_58;
            local_8 = 0x10;
            (**(code **)(*local_58 + 0x48))(local_30);
            FUN_009a8b10();
            local_8 = 0xffffffff;
            if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_30[0]);
            }
            local_1c = 0xf;
            local_20 = 0;
            local_30[0] = local_30[0] & 0xffffff00;
            FUN_00409350("minishield_strikeout",0x14);
            local_8 = 0x11;
            piVar4 = (int *)(**(code **)(*piVar4 + 0x44))(local_30);
            (**(code **)(*piVar4 + 0x38))();
          }
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_60 = local_60 + local_d0;
          local_1c = 0xf;
          local_20 = 0;
          local_30[0] = local_30[0] & 0xffffff00;
          FUN_00409350("chatplayer",10);
          local_8 = 0x14;
          (**(code **)(local_58[6] + 0x78))(local_30);
          piVar3 = param_1;
          local_8 = 0xffffffff;
          if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_30[0]);
          }
          local_64 = local_64 + 1;
          if (0x10 < local_64) {
            local_5c = local_5c + local_cc;
            local_64 = 0;
            local_60 = local_d8;
          }
          iVar2 = param_1[0x587];
          puVar10 = (undefined4 *)FUN_00aae9af(0x10);
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            *puVar10 = local_58;
            puVar10[1] = iVar2;
            puVar10[2] = 0;
            *(undefined1 *)(puVar10 + 3) = 0;
          }
          iVar6 = piVar3[0x588];
          piVar3[0x587] = (int)puVar10;
          piVar3[0x588] = iVar6 + 1;
          if (iVar6 == 0) {
LAB_00650828:
            piVar3[0x586] = (int)puVar10;
          }
          else {
            *(undefined4 **)(iVar2 + 8) = puVar10;
          }
        }
        local_34 = (undefined4 *)local_34[0xf];
      } while (local_34 != (undefined4 *)0x0);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    piVar4 = param_1;
    local_8 = 0x26;
    iVar2 = (**(code **)(*(int *)param_1[0x58c] + 0x6c))(local_30);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x3c))(local_124);
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    if ((undefined4 *)piVar4[0x591] != (undefined4 *)0x0) {
      (**(code **)(**(int **)piVar4[0x591] + 0x60))(&param_1);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("chat_message",0xc);
    local_8 = 0x27;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x28);
    piVar3 = (int *)(**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_50);
    iVar2 = (**(code **)(*piVar3 + 0x40))(local_30);
    *(undefined2 *)(iVar2 + 0x4c) = 1;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("chat_message",0xc);
    local_8 = 0x29;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x2a);
    piVar3 = (int *)(**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_50);
    iVar2 = (**(code **)(*piVar3 + 0x40))(local_30);
    *(undefined2 *)(iVar2 + 0x4c) = 0x101;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("chatplayer",10);
    local_8 = 0x2b;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = CONCAT31(local_8._1_3_,0x2c);
    iVar2 = (**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_50);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x78))(local_30);
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50[0]);
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_50[0] = local_50[0] & 0xffffff00;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350("chat_window",0xb);
    local_8 = 0x2d;
    iVar2 = (**(code **)(*(int *)piVar4[0x58c] + 0x6c))(local_30);
    (**(code **)(*(int *)(iVar2 + 0x18) + 0x34))();
    local_8 = 0xffffffff;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_30[0]);
    }
    for (puVar10 = (undefined4 *)piVar4[0x586]; puVar10 != (undefined4 *)0x0;
        puVar10 = (undefined4 *)puVar10[2]) {
      local_8 = 0xffffffff;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350("shield",6);
      local_8 = 0x2e;
      iVar2 = (**(code **)(*(int *)*puVar10 + 0x48))(local_30);
      bVar13 = *(int *)(iVar2 + 0x6c) != 1;
      local_8 = 0xffffffff;
      param_1 = (int *)CONCAT13(bVar13,param_1._0_3_);
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_30[0]);
      }
      if (bVar13) {
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
        FUN_00409350("minishield_strikeout",0x14);
        local_8 = 0x2f;
        piVar4 = (int *)(**(code **)(*(int *)*puVar10 + 0x44))(local_11c);
        (**(code **)(*piVar4 + 0x38))();
        local_8 = 0xffffffff;
        if (0xf < local_108) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_11c[0]);
        }
        local_108 = 0xf;
        local_10c = 0;
        local_11c[0] = local_11c[0] & 0xffffff00;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

