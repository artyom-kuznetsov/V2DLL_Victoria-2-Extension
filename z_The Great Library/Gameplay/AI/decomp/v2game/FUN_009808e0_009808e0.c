// FUN_009808e0 @ 009808e0 body=[[009808e0, 00980976] [0098097a, 009809c4] [009809c8, 00980a3a] [00980a40, 00980a99] [00980a9d, 00980bfc] [00980c00, 00980c7c] [00980c80, 00980cf0] [00980cf4, 00980d5f] [00980d63, 00980dce] [00980dd2, 00980ebf] [00980ec3, 00980ede] [00980ee2, 00980f40] [00980f44, 00980f8f] [00980f93, 0098102a] [0098102e, 009811bf] [009811c3, 009811d6] [009811ed, 00981210]]


void FUN_009808e0(int param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  uint *puVar10;
  undefined4 local_130 [5];
  uint local_11c;
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
  undefined4 local_88;
  int local_84;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [2];
  undefined1 local_5c [4];
  int local_58;
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  char local_14;
  char local_13;
  char local_12;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00baa218;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(int *)(param_1 + 0x28) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = DAT_01268fec;
    *(undefined4 *)(param_1 + 0x30) = DAT_01268ff0;
  }
  else {
    uVar4 = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("pop_type_icon",0xd);
    local_8 = 0;
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x44))(local_80);
    (**(code **)(*piVar3 + 0x48))(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28) + 0x68) + 0x38))
    ;
    local_8 = 0xffffffff;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_80[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("pop_types_list",0xe);
    local_8 = 1;
    local_2c = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x9c))(local_64);
    local_8 = 0xffffffff;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_64[0]);
    }
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    (**(code **)(*local_2c + 0xc0))();
    local_18 = (int *)0x0;
    if (DAT_0131bb34 == 0) {
      local_1c = (int *)FUN_00aae9af(0x188);
      local_8 = 2;
      if (local_1c == (int *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0041a160();
      }
      local_8 = 0xffffffff;
      FUN_00423700(uVar4);
    }
    local_28 = (int *)(*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2);
    if (0 < (int)local_28) {
      do {
        if (DAT_0131bb34 == 0) {
          local_1c = (int *)FUN_00aae9af(0x188);
          local_8 = 3;
          if (local_1c == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_0041a160();
          }
          local_8 = 4;
          local_1c = (int *)0x0;
          if ((iVar5 != DAT_0131bb34) && (local_24 = (int *)DAT_0131bb34, DAT_0131bb34 != 0)) {
            FUN_0096dd80(DAT_0131bb34);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b(local_24);
          }
          local_8 = 0xffffffff;
          DAT_0131bb34 = iVar5;
        }
        if (*(int *)(DAT_0131bb34 + 0x10) - *(int *)(DAT_0131bb34 + 0xc) >> 2 < (int)local_18) {
          piVar3 = (int *)FUN_0096bb70();
        }
        else {
          piVar3 = *(int **)(*(int *)(DAT_0131bb34 + 0xc) + (int)local_18 * 4);
        }
        local_20 = piVar3;
        cVar2 = (**(code **)(*piVar3 + 0x18))();
        if (cVar2 != '\0') {
          iVar5 = *(int *)(*(int *)(param_2 + 0x68) + 200);
          iVar8 = piVar3[10] * 0x30;
          if (((*(int *)(iVar5 + 0x24 + iVar8) - *(int *)(iVar5 + 0x20 + iVar8) & 0xfffffffcU) == 0)
             && ((*(int *)(iVar5 + iVar8 + 0xc) - *(int *)(iVar5 + iVar8 + 8) & 0xfffffff0U) == 0))
          {
            iVar5 = *(int *)(*(int *)(param_2 + 0x68) + 0xd8);
            if (((*(int *)(iVar5 + 0x24 + iVar8) - *(int *)(iVar5 + 0x20 + iVar8) & 0xfffffffcU) ==
                 0) && ((*(int *)(iVar5 + iVar8 + 0xc) - *(int *)(iVar5 + iVar8 + 8) & 0xfffffff0U)
                        == 0)) goto LAB_00980b80;
          }
          local_1c = (int *)FUN_00aae9af(0x30);
          local_8 = 5;
          if (local_1c == (int *)0x0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_0097e700(local_1c,*(undefined4 *)(param_1 + 0x28),local_20);
          }
          local_8 = 0xffffffff;
          (**(code **)(*local_2c + 0xb4))(uVar4,1);
        }
LAB_00980b80:
        local_18 = (int *)((int)local_18 + 1);
      } while ((int)local_18 < (int)local_28);
    }
    FUN_0097fe20(param_1);
    FUN_00983cb0(param_1);
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    FUN_00409350("rebel_win",9);
    local_8 = 6;
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x6c))(local_a4);
    local_8 = 0xffffffff;
    local_1c = piVar3;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4[0]);
    }
    local_20 = *(int **)(*(int *)(param_1 + 0x28) + 0x274);
    local_90 = 0xf;
    local_94 = 0;
    local_a4[0] = local_a4[0] & 0xffffff00;
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    FUN_00409350("pop_movement_social_icon",0x18);
    local_8 = 7;
    local_2c = (int *)(**(code **)(*piVar3 + 0x44))(local_c0);
    local_8 = 0xffffffff;
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0[0]);
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    FUN_00409350("pop_movement_political_icon",0x1b);
    local_8 = 8;
    local_28 = (int *)(**(code **)(*piVar3 + 0x44))(local_f8);
    local_8 = 0xffffffff;
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8[0]);
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8[0] = local_f8[0] & 0xffffff00;
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    FUN_00409350("rebel_faction_icon",0x12);
    local_8 = 9;
    local_18 = (int *)(**(code **)(*piVar3 + 0x44))(local_dc);
    local_8 = 0xffffffff;
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_dc[0]);
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 10;
    local_24 = (int *)(**(code **)(*piVar3 + 0x44))(local_114);
    local_8 = 0xffffffff;
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    local_12 = '\0';
    local_14 = '\0';
    local_11 = '\0';
    local_13 = '\0';
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    FUN_00409350("POPDETAIL_NO_REBEL",0x12);
    local_8 = 0xb;
    FUN_009a8ee0(local_5c,local_80);
    local_8._0_1_ = 0xc;
    puVar6 = DAT_0125b5e0;
    if (DAT_0125b5e0 == (undefined4 *)0x0) {
      local_84 = FUN_00aae9af();
      local_8._0_1_ = 0xd;
      if (local_84 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00475150();
      }
      local_8._0_1_ = 0xe;
      local_84 = 0;
      if ((puVar6 != DAT_0125b5e0) && (DAT_0125b5e0 != (undefined4 *)0x0)) {
        (**(code **)*DAT_0125b5e0)();
      }
    }
    DAT_0125b5e0 = puVar6;
    local_8._0_1_ = 0xc;
    FUN_009a9880(*(undefined8 *)(DAT_0125b5e0 + 0x1b),*(undefined8 *)(DAT_0125b5e0 + 0x1d));
    local_8._0_1_ = 0x11;
    FUN_009adb70();
    if (local_58 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_8._0_1_ = 0x12;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    iVar5 = FUN_00967f50();
    piVar3 = local_20;
    if (iVar5 == 0) {
      if (local_20 != (int *)0x0) {
        FUN_00471d20(local_48,DAT_012588e8 + 0xb5c);
        local_8._0_1_ = 0x14;
        FUN_00408ed0();
        local_8._0_1_ = 0x12;
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        piVar7 = *(int **)((int)piVar3 + 0xc);
        if ((piVar7 == (int *)0x0) || (cVar2 = (**(code **)(*piVar7 + 0x34))(), cVar2 == '\0')) {
          local_13 = '\x01';
        }
        else if (*(int *)(piVar7[0x15] + 0x5c) == 3) {
          local_11 = '\x01';
        }
        else {
          local_14 = '\x01';
        }
      }
    }
    else {
      FUN_00967f50();
      FUN_0041a080();
      local_8._0_1_ = 0x13;
      FUN_00408ed0();
      local_8._0_1_ = 0x12;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_12 = '\x01';
      piVar3 = local_20;
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("rebel_faction",0xd);
    local_8._0_1_ = 0x15;
    puVar10 = local_48;
    (**(code **)(*local_1c + 0x3c))();
    FUN_00408ed0(local_130,0,0xffffffff);
    FUN_00a5ecc0();
    piVar7 = local_18;
    local_8 = CONCAT31(local_8._1_3_,0x12);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    if (local_12 == '\0') {
      uVar9 = CONCAT44(puVar10,0x98107c);
      (**(code **)(*local_18 + 0x104))();
    }
    else {
      (**(code **)(*local_18 + 0x108))();
      (**(code **)(*piVar7 + 0x34))();
      iVar5 = FUN_00967f50();
      uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x30) + 0x128);
      uVar9 = CONCAT44(puVar10,uVar4);
      (**(code **)(*local_18 + 0x48))(uVar4);
    }
    piVar7 = local_28;
    if (local_14 == '\0') {
      uVar4 = 0x9810bb;
      (**(code **)(*local_28 + 0x104))(uVar9);
    }
    else {
      (**(code **)(*local_28 + 0x108))();
      (**(code **)(*piVar7 + 0x34))();
      uVar4 = *(undefined4 *)(*(int *)(*(int *)((int)piVar3 + 0xc) + 0x54) + 0x50);
      (**(code **)(*piVar7 + 0x48))();
    }
    piVar7 = local_2c;
    if (local_11 == '\0') {
      uVar9 = CONCAT44(uVar4,0x9810fa);
      (**(code **)(*local_2c + 0x104))();
    }
    else {
      (**(code **)(*local_2c + 0x108))();
      (**(code **)(*piVar7 + 0x34))();
      uVar1 = *(undefined4 *)(*(int *)(*(int *)((int)piVar3 + 0xc) + 0x54) + 0x50);
      uVar9 = CONCAT44(uVar4,uVar1);
      (**(code **)(*piVar7 + 0x48))(uVar1);
    }
    piVar7 = local_24;
    if (local_13 == '\0') {
      (**(code **)(*local_24 + 0x104))(uVar9);
    }
    else {
      (**(code **)(*local_24 + 0x108))();
      (**(code **)(*piVar7 + 0x34))();
      (**(code **)(*piVar7 + 0xd4))(*(undefined4 *)((int)piVar3 + 0x14));
      piVar7 = (int *)(**(code **)(*piVar7 + 0xec))();
      local_88 = *(undefined4 *)((int)piVar3 + 0x10);
      iVar5 = *piVar7;
      uVar4 = FUN_0052fc10();
      (**(code **)(iVar5 + 0x150))(uVar4);
    }
    FUN_00981220(param_1);
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350("popview",7);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 0x18) + 0x78))(local_48);
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_48[0]);
    }
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_130[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

