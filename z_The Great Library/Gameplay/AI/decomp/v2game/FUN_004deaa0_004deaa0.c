// FUN_004deaa0 @ 004deaa0 body=[[004deaa0, 004deb58] [004deb5c, 004debb3] [004debb7, 004dece1] [004dece5, 004ded09] [004ded0d, 004ded37]]


void FUN_004deaa0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 local_cc [12];
  undefined4 uStack_c0;
  undefined4 local_bc;
  uint *local_b8;
  undefined4 uStack_b4;
  char *pcStack_b0;
  uint *puStack_ac;
  undefined4 local_98 [5];
  uint local_84;
  int local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  uint local_5c [4];
  undefined4 local_4c;
  uint local_48;
  uint local_40 [4];
  undefined4 local_30;
  uint local_2c;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b5aec9;
  local_10 = ExceptionList;
  local_20 = (param_1[1] - *param_1) / 0x160;
  if (0 < local_20) {
    local_18 = 0;
    ExceptionList = &local_10;
    do {
      local_8 = 0xffffffff;
      if ((*(int *)(*param_1 + 0x138 + local_18) == 0) &&
         (*(int *)(*param_1 + 0x80 + local_18) != 0)) {
        puStack_ac = (uint *)0x9;
        pcStack_b0 = "_rgo_size";
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        uStack_b4 = 0x4deb28;
        FUN_00409350();
        local_8 = 0;
        puStack_ac = local_40;
        pcStack_b0 = (char *)0x4deb46;
        FUN_00988f20();
        local_8._0_1_ = 2;
        if (0xf < local_2c) {
          puStack_ac = (uint *)local_40[0];
                    /* WARNING: Subroutine does not return */
          pcStack_b0 = &UNK_004deb59;
          FUN_00aae91b();
        }
        puStack_ac = (uint *)0x8;
        pcStack_b0 = "_rgo_eff";
        local_2c = 0xf;
        local_30 = 0;
        local_40[0] = local_40[0] & 0xffffff00;
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        uStack_b4 = 0x4deb82;
        FUN_00409350();
        local_8._0_1_ = 3;
        puStack_ac = local_5c;
        pcStack_b0 = (char *)0x4deba1;
        FUN_00988f20();
        local_8._0_1_ = 5;
        if (0xf < local_48) {
          puStack_ac = (uint *)local_5c[0];
                    /* WARNING: Subroutine does not return */
          pcStack_b0 = &UNK_004debb4;
          FUN_00aae91b();
        }
        pcStack_b0 = (char *)local_98;
        puStack_ac = (uint *)0x0;
        local_48 = 0xf;
        local_4c = 0;
        local_5c[0] = local_5c[0] & 0xffffff00;
        uStack_b4 = 0x4debd1;
        local_14 = FUN_009902d0();
        local_b8 = local_78;
        uStack_b4 = 0;
        local_bc = 0x4debde;
        local_1c = FUN_009902d0();
        iVar2 = DAT_0125a5b8 - DAT_0125a5b4;
        local_bc = 0x2c;
        uStack_c0 = 0x4debf7;
        iVar1 = FUN_00aae9af();
        local_8._0_1_ = 6;
        local_7c = iVar1;
        if (iVar1 == 0) {
          local_14 = 0;
        }
        else {
          puStack_ac = (uint *)0x1;
          pcStack_b0 = (char *)0x1;
          local_24 = local_cc;
          local_b8 = (uint *)0xf;
          local_bc = 0;
          local_cc[0] = 0;
          FUN_00408ed0(local_98,0,0xffffffff);
          local_14 = FUN_00449070(iVar1,local_14);
        }
        local_8._0_1_ = 5;
        puStack_ac = (uint *)0x4dec4d;
        FUN_0044ee00();
        iVar1 = DAT_0125a5b8 - DAT_0125a5b4;
        puStack_ac = (uint *)0x2c;
        pcStack_b0 = (char *)0x4dec63;
        local_14 = FUN_00aae9af();
        local_8._0_1_ = 7;
        if (local_14 == 0) {
          local_1c = 0;
        }
        else {
          puStack_ac = (uint *)0x1;
          pcStack_b0 = (char *)0x1;
          local_24 = local_cc;
          local_b8 = (uint *)0xf;
          local_bc = 0;
          local_cc[0] = 0;
          FUN_00408ed0(local_78,0,0xffffffff);
          local_1c = FUN_00449070(local_14,local_1c);
        }
        local_8 = CONCAT31(local_8._1_3_,5);
        puStack_ac = (uint *)0x4decb7;
        FUN_0044ee00();
        *(int *)(*param_1 + 0x130 + local_18) = iVar2 >> 2;
        *(int *)(*param_1 + 0x134 + local_18) = iVar1 >> 2;
        if (0xf < local_64) {
          puStack_ac = (uint *)local_78[0];
                    /* WARNING: Subroutine does not return */
          pcStack_b0 = &UNK_004dece2;
          FUN_00aae91b();
        }
        local_8 = 0xffffffff;
        local_64 = 0xf;
        local_68 = 0;
        local_78[0] = local_78[0] & 0xffffff00;
        if (0xf < local_84) {
          puStack_ac = (uint *)local_98[0];
                    /* WARNING: Subroutine does not return */
          pcStack_b0 = &UNK_004ded0a;
          FUN_00aae91b();
        }
      }
      local_18 = local_18 + 0x160;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  ExceptionList = local_10;
  return;
}

