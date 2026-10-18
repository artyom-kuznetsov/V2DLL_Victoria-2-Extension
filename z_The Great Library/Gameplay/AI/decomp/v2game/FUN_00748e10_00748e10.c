// FUN_00748e10 @ 00748e10 body=[[00748e10, 00748e9d] [00748ea1, 00748f10] [00748f14, 00748fdb] [00748fdf, 007490a9] [007490ad, 007490d7] [007490db, 00749152] [00749156, 007492d1] [007492d5, 00749336] [0074933a, 00749449] [0074944d, 0074955d] [00749561, 007495b8] [007495bc, 007495ce]]


void FUN_00748e10(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  uint uVar10;
  int *piVar11;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8 [4];
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  int *local_70;
  int *local_6c;
  uint local_68 [4];
  undefined4 local_58;
  uint local_54;
  undefined4 *local_4c;
  int local_48;
  uint local_44 [4];
  undefined4 local_34;
  uint local_30;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b91deb;
  local_10 = ExceptionList;
  local_14 = 0;
  ExceptionList = &local_10;
  FUN_007495d0(param_1);
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  FUN_00409350("focuscategory_start",0x13);
  local_8 = 0;
  local_7c = (**(code **)(*DAT_01258a80 + 0x48))(local_dc);
  local_8 = 0xffffffff;
  if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_dc[0]);
  }
  local_c8 = 0xf;
  local_cc = 0;
  local_dc[0] = local_dc[0] & 0xffffff00;
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  FUN_00409350("focuscategory_step",0x12);
  local_8 = 1;
  local_78 = (**(code **)(*DAT_01258a80 + 0x48))(local_c0);
  local_8 = 0xffffffff;
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c0[0]);
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0[0] = local_c0[0] & 0xffffff00;
  local_88 = FUN_00565b70();
  local_48 = *(int *)(local_88 + 0x2c) - *(int *)(local_88 + 0x28) >> 2;
  FUN_0068ea30(local_48);
  FUN_0068ebc0();
  local_28 = 0;
  if (0 < local_48) {
    local_24 = 0;
    do {
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      FUN_00409350("focus_category",0xe);
      local_8 = 2;
      iVar8 = *DAT_01258a80;
      uVar3 = (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0x3c))();
      piVar4 = (int *)(**(code **)(iVar8 + 0x2c))(local_f8,uVar3);
      local_8 = 0xffffffff;
      local_6c = piVar4;
      if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_f8[0]);
      }
      local_e4 = 0xf;
      local_e8 = 0;
      local_f8[0] = local_f8[0] & 0xffffff00;
      *(int **)(param_1[1] + local_28 * 4) = piVar4;
      if ((local_28 < 0) || (*(int *)(local_88 + 0x2c) - *(int *)(local_88 + 0x28) >> 2 <= local_28)
         ) {
        local_1c = DAT_01258800;
      }
      else {
        local_1c = *(int *)(*(int *)(local_88 + 0x28) + local_28 * 4);
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68[0] = local_68[0] & 0xffffff00;
      FUN_00409350(&DAT_00df09f4,4);
      local_8 = 3;
      uVar3 = FUN_005659c0(local_1c,local_a4);
      local_8 = CONCAT31(local_8._1_3_,4);
      local_18 = (**(code **)(*piVar4 + 0x3c))(local_68);
      FUN_00408ed0(uVar3,0,0xffffffff);
      FUN_00a5ecc0(uVar3,0);
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      local_8 = 0xffffffff;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_68[0]);
      }
      local_70 = *(int **)(local_7c + 0x68);
      local_74 = *(undefined4 *)(local_78 + 100);
      (**(code **)(*piVar4 + 0xa8))
                (*(undefined4 *)(local_7c + 100),
                 (int *)(*(int *)(local_78 + 0x68) * local_28 + (int)local_70));
      iVar8 = local_1c;
      uVar3 = FUN_005659c0(local_1c,local_a4);
      local_8 = 5;
      (**(code **)(*(int *)*param_1 + 0xbc))(uVar3,piVar4);
      local_8 = 0xffffffff;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_a4[0]);
      }
      piVar11 = (int *)(param_1[0x11] + local_24);
      piVar4 = (int *)piVar11[1];
      uVar10 = *(int *)(iVar8 + 0x2c) - *(int *)(local_1c + 0x28) >> 2;
      uVar5 = (int)piVar4 - *piVar11 >> 2;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      local_84 = uVar10;
      if (uVar10 < uVar5) {
        local_20 = (int *)(*piVar11 + uVar10 * 4);
        if (local_20 != piVar4) {
          local_18 = 0;
          FID_conflict__memcpy(local_20,piVar4,0);
          local_18 = local_18 + (int)local_20;
LAB_007491f9:
          piVar11[1] = local_18;
        }
      }
      else {
        local_20 = piVar11;
        if (uVar5 < uVar10) {
          FUN_007b94a0();
          puVar6 = (undefined4 *)piVar11[1];
          iVar8 = uVar10 - ((int)puVar6 - *piVar11 >> 2);
          if (iVar8 != 0) {
            for (; piVar11 = local_20, iVar8 != 0; iVar8 = iVar8 + -1) {
              *puVar6 = 0;
              puVar6 = puVar6 + 1;
            }
          }
          local_18 = piVar11[1] + (uVar10 - (piVar11[1] - *piVar11 >> 2)) * 4;
          goto LAB_007491f9;
        }
      }
      local_18 = 0;
      if (0 < (int)uVar10) {
        do {
          puVar6 = (undefined4 *)FUN_00aae9af(0x28);
          local_8 = 6;
          local_4c = puVar6;
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            local_54 = 0xf;
            local_58 = 0;
            local_68[0] = local_68[0] & 0xffffff00;
            FUN_00409350("focus_item",10);
            piVar4 = DAT_01258a80;
            local_8 = CONCAT31(local_8._1_3_,7);
            local_14 = local_14 | 1;
            uVar3 = (**(code **)(*(int *)DAT_012588e8[0x2c9] + 0x3c))();
            puVar6[1] = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            *(undefined1 *)(puVar6 + 4) = 0;
            DAT_013f08e0 = DAT_013f08e0 + 1;
            *(undefined1 *)(puVar6 + 5) = 0;
            *(undefined1 *)(puVar6 + 6) = 0;
            puVar6[7] = &PTR_FUN_00e39158;
            local_8 = 0xb;
            *puVar6 = &PTR_FUN_00e392f0;
            puVar6[7] = &PTR_FUN_00e39320;
            *(undefined1 *)(puVar6 + 9) = 0;
            uVar3 = (**(code **)(*piVar4 + 0x2c))(local_68,uVar3);
            puVar6[8] = uVar3;
          }
          local_8 = 0xffffffff;
          if ((local_14 & 1) != 0) {
            local_14 = local_14 & 0xfffffffe;
            if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_68[0]);
            }
            local_54 = 0xf;
            local_58 = 0;
            local_68[0] = local_68[0] & 0xffffff00;
          }
          local_30 = 0xf;
          local_34 = 0;
          local_44[0] = local_44[0] & 0xffffff00;
          FUN_00409350("focus_icons",0xb);
          local_8 = 0xd;
          piVar4 = (int *)(**(code **)(*local_6c + 0x9c))(local_44);
          (**(code **)(*piVar4 + 0xb4))(puVar6,1);
          local_8 = 0xffffffff;
          if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_44[0]);
          }
          piVar4 = (int *)FUN_00aae9af(0x44);
          local_8 = 0xe;
          local_70 = piVar4;
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            local_30 = 0xf;
            local_34 = 0;
            local_44[0] = local_44[0] & 0xffffff00;
            FUN_00409350("focus_icon",10);
            local_8 = CONCAT31(local_8._1_3_,0xf);
            local_14 = local_14 | 2;
            local_4c = DAT_012588e8;
            local_20 = (int *)(*(int *)(local_1c + 0x28) + local_18 * 4);
            local_80 = param_1[0x15];
            iVar7 = (**(code **)(*(int *)puVar6[8] + 0x34))(local_44);
            iVar8 = *param_1;
            iVar1 = *local_20;
            piVar4[2] = iVar7;
            *piVar4 = iVar8;
            piVar4[1] = iVar1;
            piVar4[3] = (int)CButtonObserverGlue<CNationalFocusView::CFocusGlue>::vftable;
            piVar4[4] = (int)piVar4;
            piVar4[5] = (int)FUN_00749c80;
            piVar4[6] = 0;
            piVar4[7] = 0;
            piVar4[8] = 0;
            piVar4[9] = 0;
            piVar4[10] = 0;
            piVar4[0xb] = 0;
            piVar4[0xc] = 0;
            piVar4[0xd] = 0;
            local_8 = 0x10;
            piVar4[0xe] = local_80;
            piVar4[0xf] = (int)(local_4c + 0x2d7);
            piVar4[0x10] = (int)param_1;
            (**(code **)(*(int *)(piVar4[2] + 0x54) + 4))(piVar4 + 3);
            (**(code **)(*(int *)piVar4[2] + 0x48))(*(undefined4 *)(piVar4[1] + 0xf0));
          }
          local_8 = 0xffffffff;
          if ((local_14 & 2) != 0) {
            local_14 = local_14 & 0xfffffffd;
            if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b(local_44[0]);
            }
            local_30 = 0xf;
            local_34 = 0;
            local_44[0] = local_44[0] & 0xffffff00;
          }
          *(int **)(*(int *)(param_1[0x11] + local_24) + local_18 * 4) = piVar4;
          local_18 = local_18 + 1;
        } while (local_18 < (int)local_84);
      }
      local_24 = local_24 + 0x10;
      local_28 = local_28 + 1;
    } while (local_28 < local_48);
  }
  if (*(int *)(param_1[0x15] + 0x164) == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = **(int **)(param_1[0x15] + 0x15c);
  }
  piVar4 = *(int **)(*(int *)(DAT_012588e8[0x2fc] + DAT_012588e8[0x2d8] * 0x10) +
                    *(int *)(iVar8 + 0x6c) * 4);
  if ((piVar4 == (int *)0x0) || (cVar2 = (**(code **)(*piVar4 + 0x34))(), cVar2 == '\0')) {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("cancel_button",0xd);
    local_8 = 0x13;
    piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x34))(local_44);
    pcVar9 = *(code **)(*piVar4 + 0xbc);
  }
  else {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = local_44[0] & 0xffffff00;
    FUN_00409350("cancel_button",0xd);
    local_8 = 0x12;
    piVar4 = (int *)(**(code **)(*(int *)*param_1 + 0x34))(local_44);
    pcVar9 = *(code **)(*piVar4 + 0xb8);
  }
  (*pcVar9)();
  local_8 = 0xffffffff;
  if (local_30 < 0x10) {
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    FUN_00409350("province_view",0xd);
    local_8 = 0x14;
    (**(code **)(*(int *)(*param_1 + 0x18) + 0x78))(local_114);
    if (local_100 < 0x10) {
      ExceptionList = local_10;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_114[0]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(local_44[0]);
}

