// FUN_00940090 @ 00940090 body=[[00940090, 00940103] [00940107, 00940153] [00940157, 0094019c] [009401a0, 009401ee] [009401f2, 009402b6] [009402c0, 00940543] [00940547, 00940702] [00940706, 009407af] [009407b3, 009407cf] [009407d3, 009407f1] [009407f5, 00940899] [0094089d, 009408b9] [009408bd, 009408db] [009408df, 00940983] [00940987, 009409a3] [009409a7, 009409c5] [009409c9, 00940a6d] [00940a71, 00940a8d] [00940a91, 00940aaf] [00940ab3, 00940b57] [00940b5b, 00940b77] [00940b7b, 00940b99] [00940b9d, 00940c41] [00940c45, 00940c61] [00940c65, 00940c83] [00940c87, 00940d2b] [00940d2f, 00940d4b] [00940d4f, 00940d6d] [00940d71, 00940e15] [00940e19, 00940e35] [00940e39, 00940e57] [00940e5b, 00940f37] [00940f3b, 00940f6a] [00940f6e, 00940f93] [00940f97, 00940fa7]]


void FUN_00940090(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int in_ECX;
  uint *puVar6;
  undefined1 local_1bc [8];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined1 local_174 [8];
  undefined4 local_16c;
  undefined4 local_168;
  undefined1 *local_150;
  uint local_128 [4];
  undefined4 local_118;
  uint local_114;
  uint local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  uint local_f0 [4];
  undefined4 local_e0;
  uint local_dc;
  undefined **local_d4;
  undefined4 local_d0;
  int *local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  uint *local_94;
  undefined4 local_90;
  int *local_88;
  uint *local_80;
  undefined4 local_7c;
  int local_78;
  int *local_74;
  int *local_70;
  int local_6c;
  uint *local_68;
  uint local_64 [4];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  uint local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba2f58;
  local_10 = ExceptionList;
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("wargoal_state_select",0x14);
  local_8 = 0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_64);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = local_64[0] & 0xffffff00;
  FUN_00409350("wargoal_country_select",0x16);
  local_8 = 1;
  iVar3 = (**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_64);
  (**(code **)(*(int *)(iVar3 + 0x18) + 0x38))();
  local_8 = 0xffffffff;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_64[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  FUN_00409350("wargoal_setup",0xd);
  local_8 = 2;
  local_68 = (uint *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_48);
  local_8 = 0xffffffff;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_48[0]);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48[0] = local_48[0] & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  FUN_00409350("wargoal_list",0xc);
  local_8 = 3;
  local_74 = (int *)(**(code **)(*local_68 + 0x7c))(local_2c);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = local_2c[0] & 0xffffff00;
  (**(code **)(*local_74 + 0x5c))();
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_1b4 = *(undefined4 *)(in_ECX + 0x9c);
  local_1b0 = *(undefined4 *)(in_ECX + 0xa0);
  local_16c = *(undefined4 *)(in_ECX + 0xa4);
  local_168 = *(undefined4 *)(in_ECX + 0xa8);
  local_150 = local_1bc;
  iVar3 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
  if (iVar3 == 0x9fa) {
    if (DAT_0131acac == (uint *)0x0) {
      local_6c = FUN_00aae9af(0x20);
      local_8 = 4;
      if (local_6c == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0090cca0();
      }
      local_8 = 0xffffffff;
      FUN_0090d9d0(uVar4);
    }
    local_68 = DAT_0131acac + 3;
    piVar5 = (int *)DAT_0131acac[3];
    puVar6 = local_68;
    while (((int *)*puVar6 <= piVar5 && (piVar5 < (int *)puVar6[1]))) {
      piVar1 = (int *)*piVar5;
      local_88 = piVar5 + 1;
      piVar5 = local_88;
      if ((*(char *)((int)piVar1 + 0x133) != '\0') &&
         (cVar2 = (**(code **)(*piVar1 + 0x20))(local_174), piVar5 = local_88, puVar6 = local_68,
         cVar2 != '\0')) {
        local_bc = *(undefined4 *)(in_ECX + 0x9c);
        local_b8 = *(undefined4 *)(in_ECX + 0xa0);
        local_b0 = *(undefined4 *)(in_ECX + 0xa8);
        local_7c = 0x2d2d2d;
        local_c4 = 0x2d2d2d;
        local_b4 = *(undefined4 *)(in_ECX + 0xa4);
        local_a0 = DAT_0131b788;
        local_d0 = 0x18d;
        local_d4 = CWarGoal::vftable;
        local_c0 = 0;
        local_ac = 0;
        local_a8 = 0;
        local_a4 = 0;
        local_9c = 0;
        local_98 = 0;
        local_c8 = piVar1;
        iVar3 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
        cVar2 = FUN_00952230(&local_d4,iVar3 == 0x9fa);
        piVar5 = local_88;
        puVar6 = local_68;
        if (cVar2 != '\0') {
          local_6c = FUN_00aae9af(0x88);
          local_8 = 5;
          if (local_6c == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0093ecb0(local_6c,*(undefined4 *)(in_ECX + 0x68),piVar1,in_ECX);
          }
          local_8 = 0xffffffff;
          (**(code **)(*local_74 + 0x10))(uVar4,1);
          piVar5 = local_88;
          puVar6 = local_68;
        }
      }
    }
LAB_009406b8:
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("message_dialog",0xe);
    local_8 = 10;
    (**(code **)(local_74[1] + 0x78))(local_64);
    local_8 = 0xffffffff;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0xb;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("prestige",8);
    local_8._0_1_ = 0xc;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_add_effect",0x12);
    local_8 = CONCAT31(local_8._1_3_,0xd);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0xe;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("infamy",6);
    local_8._0_1_ = 0xf;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_add_effect",0x12);
    local_8 = CONCAT31(local_8._1_3_,0x10);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x11;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("militancy",9);
    local_8._0_1_ = 0x12;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_add_effect",0x12);
    local_8 = CONCAT31(local_8._1_3_,0x13);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x14;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("prestige",8);
    local_8._0_1_ = 0x15;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_success_effect",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x17;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("infamy",6);
    local_8._0_1_ = 0x18;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_success_effect",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x19);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x1a;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("militancy",9);
    local_8._0_1_ = 0x1b;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_success_effect",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x1c);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x1d;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("prestige",8);
    local_8._0_1_ = 0x1e;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_failure_effect",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x20;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("infamy",6);
    local_8._0_1_ = 0x21;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    FUN_00409350("wargoal_failure_effect",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x22);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_2c);
    (**(code **)(*piVar5 + 0x3c))(local_48);
    FUN_00408ed0(local_64,0,0xffffffff);
    FUN_00a5ecc0(local_64,0);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_2c[0]);
    }
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = local_2c[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    local_8 = 0xffffffff;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_114 = 0xf;
    local_118 = 0;
    local_128[0] = local_128[0] & 0xffffff00;
    FUN_00409350(&DAT_00e35304,7);
    local_8 = 0x23;
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    FUN_00409350("militancy",9);
    local_8._0_1_ = 0x24;
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    FUN_00409350("wargoal_failure_effect",0x16);
    local_8 = CONCAT31(local_8._1_3_,0x25);
    piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 4) + 0x6c))(local_10c);
    (**(code **)(*piVar5 + 0x3c))(local_f0);
    FUN_00408ed0(local_128,0,0xffffffff);
    FUN_00a5ecc0(local_128,0);
    if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_10c[0]);
    }
    local_f8 = 0xf;
    local_fc = 0;
    local_10c[0] = local_10c[0] & 0xffffff00;
    if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f0[0]);
    }
    local_dc = 0xf;
    local_e0 = 0;
    local_f0[0] = local_f0[0] & 0xffffff00;
    if (0xf < local_114) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_128[0]);
    }
    ExceptionList = local_10;
    return;
  }
  if (DAT_0131acac == (uint *)0x0) {
    local_6c = FUN_00aae9af(0x20);
    local_8 = 6;
    if (local_6c == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0090cca0();
    }
    local_8 = 0xffffffff;
    FUN_0090d9d0(uVar4);
  }
  local_88 = (int *)DAT_0131acac[3];
  local_94 = DAT_0131acac + 3;
LAB_00940451:
  do {
    if ((local_88 < (int *)*local_94) || ((int *)local_94[1] <= local_88)) goto LAB_009406b8;
    local_70 = (int *)*local_88;
    local_88 = local_88 + 1;
    local_6c = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                  *(int *)(in_ECX + 0xa0) * 4) + 0xbe8) +
                                *(int *)(in_ECX + 0xa8) * 4) + 0x34);
    local_7c = *(undefined4 *)(in_ECX + 0x9c);
    piVar5 = *(int **)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                                 *(int *)(in_ECX + 0xa0) * 4) + 0xbe8) +
                               *(int *)(in_ECX + 0xa8) * 4) + 0x50);
    puVar6 = (uint *)local_70[2];
    do {
      local_80 = puVar6;
      if (piVar5 == (int *)0x0) {
        if (DAT_0131acac == (uint *)0x0) {
          local_68 = (uint *)FUN_00aae9af(0x20);
          local_8 = 7;
          if (local_68 == (uint *)0x0) {
            local_68 = (uint *)0x0;
          }
          else {
            local_68 = (uint *)FUN_0090cca0();
            puVar6 = local_80;
          }
          local_8 = 8;
          local_78 = 0;
          if ((local_68 != DAT_0131acac) && (local_80 = DAT_0131acac, DAT_0131acac != (uint *)0x0))
          {
            FUN_0090cd00(DAT_0131acac);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_80);
          }
          DAT_0131acac = local_68;
          local_8 = 0xffffffff;
        }
        if ((int)puVar6 < (int)(DAT_0131acac[4] - DAT_0131acac[3]) >> 2) {
          iVar3 = *(int *)(DAT_0131acac[3] + (int)puVar6 * 4);
        }
        else {
          iVar3 = *(int *)DAT_0131acac[3];
        }
        if ((*(char *)(iVar3 + 0x132) == '\0') &&
           ((local_6c == 0 || (*(char *)((int)local_70 + 0x1cd) == '\0')))) goto LAB_00940451;
        break;
      }
      iVar3 = *piVar5;
      piVar5 = (int *)piVar5[2];
    } while (*(uint **)(iVar3 + 0x24) != puVar6);
    cVar2 = (**(code **)(*local_70 + 0x20))(local_174);
    if (cVar2 != '\0') {
      local_bc = *(undefined4 *)(in_ECX + 0x9c);
      local_90 = 0x2d2d2d;
      local_c8 = local_70;
      local_b8 = *(undefined4 *)(in_ECX + 0xa0);
      local_c4 = 0x2d2d2d;
      local_b4 = *(undefined4 *)(in_ECX + 0xa4);
      local_b0 = *(undefined4 *)(in_ECX + 0xa8);
      local_a0 = DAT_0131b788;
      local_d0 = 0x18d;
      local_d4 = CWarGoal::vftable;
      local_c0 = 0;
      local_ac = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_9c = 0;
      local_98 = 0;
      iVar3 = (**(code **)(**(int **)(in_ECX + 0x6c) + 0x20))();
      cVar2 = FUN_00952230(&local_d4,iVar3 == 0x9fa);
      if (cVar2 != '\0') {
        local_78 = FUN_00aae9af(0x88);
        local_8 = 9;
        if (local_78 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_0093ecb0(local_78,*(undefined4 *)(in_ECX + 0x68),local_70,in_ECX);
        }
        local_8 = 0xffffffff;
        (**(code **)(*local_74 + 0x10))(uVar4,1);
      }
    }
  } while( true );
}

