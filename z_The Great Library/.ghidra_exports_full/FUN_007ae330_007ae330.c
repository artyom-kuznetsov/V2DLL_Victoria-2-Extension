// FUN_007ae330 @ 007ae330 body=[[007ae330, 007ae3b0] [007ae3b4, 007ae564] [007ae568, 007ae5da] [007ae5de, 007ae689] [007ae68d, 007ae6ad] [007ae6b1, 007ae6cf] [007ae6d3, 007ae74b] [007ae74f, 007ae81b] [007ae81f, 007ae844] [007ae848, 007ae874] [007ae878, 007ae8c6]]


void FUN_007ae330(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  char local_13c [32];
  char local_11c [32];
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  undefined4 local_70;
  int local_6c;
  int *local_68;
  char *local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int *local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ff37;
  local_10 = ExceptionList;
  local_18 = 0;
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("school_bonus_icons",0x12);
  local_8 = 0;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4c) + 0x9c))(local_8c);
  local_8 = 0xffffffff;
  local_58 = piVar2;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_8c[0]);
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c[0] = local_8c[0] & 0xffffff00;
  (**(code **)(*piVar2 + 0x38))();
  (**(code **)(*piVar2 + 0xc0))();
  local_70 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar9 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xe40
                  );
  if (DAT_0125eadc == 0) {
    iVar3 = FUN_00aae9af(0x9c);
    local_8 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00576fe0(iVar3);
    }
    local_8 = 0xffffffff;
    FUN_0057ab10(uVar4);
  }
  local_60 = *(int *)(*(int *)(DAT_0125eadc + 0x80) + iVar9 * 4);
  local_68 = (int *)(DAT_0125eadc + 0x38);
  iVar9 = *(int *)(DAT_0125eadc + 0x3c) - *(int *)(DAT_0125eadc + 0x38) >> 2;
  param_1 = 0;
  local_6c = iVar9;
  if (0 < iVar9) {
    do {
      piVar2 = *(int **)(*local_68 + param_1 * 4);
      local_1c = piVar2;
      cVar1 = (**(code **)(*piVar2 + 8))();
      if ((cVar1 != '\0') && (*(int *)(*(int *)(local_60 + 0x18) + piVar2[0x11] * 8) != 0)) {
        puVar5 = (undefined4 *)FUN_00aae9af(0x28);
        local_8 = 3;
        local_5c = puVar5;
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
          FUN_00409350("school_icon_window",0x12);
          piVar2 = DAT_01258a80;
          local_8 = CONCAT31(local_8._1_3_,4);
          local_18 = local_18 | 1;
          uVar4 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          *(undefined1 *)(puVar5 + 4) = 0;
          DAT_013f08e0 = DAT_013f08e0 + 1;
          *(undefined1 *)(puVar5 + 5) = 0;
          *(undefined1 *)(puVar5 + 6) = 0;
          puVar5[7] = &PTR_FUN_00e39158;
          local_8 = 8;
          *puVar5 = &PTR_FUN_00e392f0;
          puVar5[7] = &PTR_FUN_00e39320;
          *(undefined1 *)(puVar5 + 9) = 0;
          uVar4 = (**(code **)(*piVar2 + 0x2c))(local_38,uVar4);
          puVar5[8] = uVar4;
        }
        local_8 = 0xffffffff;
        if ((local_18 & 1) != 0) {
          local_18 = local_18 & 0xfffffffe;
          if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_38[0]);
          }
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
        }
        piVar2 = (int *)puVar5[8];
        (**(code **)(*local_58 + 0xb4))(puVar5,0);
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        FUN_00409350("main_icon",9);
        local_8 = 10;
        piVar6 = (int *)(**(code **)(*piVar2 + 0x44))(local_38);
        (**(code **)(*piVar6 + 0x48))(param_1);
        local_8 = 0xffffffff;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350("main_icon",9);
        local_8 = 0xb;
        local_5c = (int *)(**(code **)(*piVar2 + 0x44))(local_54);
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        local_8._0_1_ = 0xc;
        pcVar7 = __itoa(param_1,local_11c,10);
        local_64 = pcVar7 + 1;
        pcVar8 = pcVar7;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar7,(int)pcVar8 - (int)local_64);
        local_8._0_1_ = 0xd;
        uVar4 = FUN_00988fa0(local_38);
        local_8 = CONCAT31(local_8._1_3_,0xe);
        (**(code **)(*local_5c + 0x78))(uVar4);
        if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_e0);
        }
        local_cc = 0xf;
        local_d0 = 0;
        local_e0 = local_e0 & 0xffffff00;
        if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_38[0]);
        }
        local_8 = 0xffffffff;
        local_24 = 0xf;
        local_28 = 0;
        local_38[0] = local_38[0] & 0xffffff00;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        if (*(int *)(*(int *)(local_60 + 0x18) + local_1c[0x11] * 8) < 0) {
          FUN_00409350("plusminus_icon",0xe);
          local_8 = 0xf;
          piVar6 = (int *)(**(code **)(*piVar2 + 0x44))(local_54);
          uVar4 = 1;
        }
        else {
          FUN_00409350("plusminus_icon",0xe);
          local_8 = 0x10;
          piVar6 = (int *)(**(code **)(*piVar2 + 0x44))(local_54);
          uVar4 = 2;
        }
        (**(code **)(*piVar6 + 0x48))(uVar4);
        local_8 = 0xffffffff;
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
        FUN_00409350("plusminus_icon",0xe);
        local_8 = 0x11;
        local_1c = (int *)(**(code **)(*piVar2 + 0x44))(local_a8);
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        local_8._0_1_ = 0x12;
        pcVar7 = __itoa(param_1,local_13c,10);
        pcVar8 = pcVar7;
        do {
          cVar1 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar7,(int)pcVar8 - (int)(pcVar7 + 1));
        local_8._0_1_ = 0x13;
        uVar4 = FUN_00988fa0(local_c4);
        local_8 = CONCAT31(local_8._1_3_,0x14);
        (**(code **)(*local_1c + 0x78))(uVar4);
        if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_fc);
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc = local_fc & 0xffffff00;
        if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_c4[0]);
        }
        local_8 = 0xffffffff;
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_a8[0]);
        }
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
        iVar9 = local_6c;
      }
      param_1 = param_1 + 1;
      piVar2 = local_58;
    } while (param_1 < iVar9);
  }
  (**(code **)(*piVar2 + 0xe4))();
  (**(code **)(*piVar2 + 0x34))();
  ExceptionList = local_10;
  return;
}

