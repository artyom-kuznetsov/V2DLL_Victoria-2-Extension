// FUN_00619cb0 @ 00619cb0 body=[[00619cb0, 00619d2b] [00619d2f, 00619dc5] [00619dc9, 00619e3f] [00619e43, 00619e76] [00619e7a, 00619e95] [00619e99, 00619f0f] [00619f13, 00619f46] [00619f4a, 00619f65] [00619f69, 00619faf] [00619fb3, 0061a09b] [0061a0a0, 0061a26c] [0061a270, 0061a290]]


undefined4 * FUN_00619cb0(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 in_ECX;
  int *piVar7;
  undefined1 local_158 [8];
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_110 [8];
  undefined4 local_108;
  undefined4 local_104;
  undefined1 *local_ec;
  int local_c8;
  uint local_c4;
  undefined4 local_b4;
  uint local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 *local_7c;
  uint local_78 [4];
  undefined4 local_68;
  uint local_64;
  int *local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint *local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  uint local_20;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00ba65a8;
  local_10 = ExceptionList;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00640680();
  local_8._0_1_ = 2;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_c4);
  }
  param_1[0x1a] = in_ECX;
  *param_1 = CCBCreationDialog::vftable;
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4 = local_c4 & 0xffffff00;
  iVar4 = (**(code **)(*param_2 + 0x30))();
  param_1[0x1b] = iVar4;
  param_1[0x1d] = param_3;
  param_1[0x1c] = param_2;
  local_18 = *(undefined4 *)(iVar4 + 8);
  local_14 = *(undefined4 *)(iVar4 + 0xc);
  FUN_00641630();
  local_18 = *(undefined4 *)(param_1[0x1b] + 0x10);
  local_14 = *(undefined4 *)(param_1[0x1b] + 0x14);
  FUN_006416a0();
  (**(code **)(*param_2 + 0x1c))(local_78);
  local_8._0_1_ = 3;
  FUN_00641710();
  local_8._0_1_ = 2;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("PROCEED",7);
  local_8._0_1_ = 4;
  FUN_009a8ee0(local_2c,local_54);
  local_8._0_1_ = 5;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 6;
  FUN_00641850();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_8._0_1_ = 7;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("DECLINE",7);
  local_8._0_1_ = 8;
  FUN_009a8ee0(local_2c,local_54);
  local_8._0_1_ = 9;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 10;
  FUN_006418f0();
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78[0] = local_78[0] & 0xffffff00;
  local_8._0_1_ = 0xb;
  FUN_009adb70();
  if (local_28 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 2;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  FUN_00409350("cb_list",7);
  local_8._0_1_ = 0xc;
  piVar5 = (int *)(**(code **)(*(int *)param_1[1] + 0x7c))();
  local_8._0_1_ = 2;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34 = local_34 & 0xffffff00;
  (**(code **)(*piVar5 + 0x5c))();
  FUN_008a8650(0);
  FUN_008a8650(0);
  local_150 = *(undefined4 *)(DAT_012588e8 + 0xb5c);
  local_14c = *(undefined4 *)(DAT_012588e8 + 0xb60);
  local_7c = (undefined4 *)(DAT_012588e8 + 0xb5c);
  iVar4 = param_1[0x1b];
  local_ec = local_158;
  local_108 = *(undefined4 *)(iVar4 + 0x10);
  local_104 = *(undefined4 *)(iVar4 + 0x14);
  local_5c = (int *)*local_7c;
  local_80 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) +
                                       *(int *)(DAT_012588e8 + 0xb60) * 4) + 0xbe8) +
                     *(int *)(iVar4 + 0x14) * 4);
  if (DAT_0131acac == 0) {
    local_38 = (uint *)FUN_00aae9af(0x20);
    local_8._0_1_ = 0xd;
    if (local_38 == (uint *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = FUN_0090cca0();
    }
    local_8._0_1_ = 2;
    FUN_0090d9d0(uVar6);
  }
  local_38 = (uint *)(DAT_0131acac + 0xc);
  piVar7 = *(int **)(DAT_0131acac + 0xc);
  do {
    do {
      if ((piVar7 < (int *)*local_38) || ((int *)local_38[1] <= piVar7)) {
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350();
        local_8._0_1_ = 0xf;
        (**(code **)(piVar5[1] + 0x78))(local_54);
        local_8 = CONCAT31(local_8._1_3_,2);
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        (**(code **)(*(int *)param_1[1] + 0x28))();
        ExceptionList = local_10;
        return param_1;
      }
      piVar1 = (int *)*piVar7;
      piVar7 = piVar7 + 1;
      local_5c = piVar7;
      cVar3 = (**(code **)(*piVar1 + 0x1c))();
    } while ((cVar3 == '\0') || (*(char *)((int)piVar1 + 0x1cd) == '\0'));
    piVar2 = *(int **)(local_80 + 0x50);
    do {
      if (piVar2 == (int *)0x0) {
        cVar3 = FUN_0092eff0();
        piVar7 = local_5c;
        if ((cVar3 != '\0') ||
           (cVar3 = (**(code **)(*piVar1 + 0x20))(local_110), piVar7 = local_5c, cVar3 == '\0'))
        break;
        if ((int)(piVar1[0x39] - piVar1[0x38] & 0xfffffffcU) < 1) {
          if (0 < (int)(piVar1[0x2b] - piVar1[0x2a] & 0xfffffffcU)) {
            local_88 = param_2[4];
            local_84 = param_2[5];
            local_a0 = param_2[2];
            local_9c = param_2[3];
            local_18 = 0x2d2d2d;
            local_14 = 0;
            cVar3 = FUN_0090cb00();
            goto LAB_0061a1bb;
          }
        }
        else {
          local_90 = param_2[4];
          local_8c = param_2[5];
          local_98 = param_2[2];
          local_94 = param_2[3];
          cVar3 = FUN_0090c9e0(piVar1,&local_98,&local_90);
LAB_0061a1bb:
          piVar7 = local_5c;
          if (cVar3 == '\0') break;
        }
        local_c8 = FUN_00aae9af(0x90);
        local_8._0_1_ = 0xe;
        if (local_c8 != 0) {
          local_a8 = *(undefined4 *)(param_1[0x1b] + 0x10);
          local_a4 = *(undefined4 *)(param_1[0x1b] + 0x14);
          FUN_00619450(local_c8,param_1[0x1a],piVar1,param_1,local_7c);
        }
        local_8._0_1_ = 2;
        (**(code **)(*piVar5 + 0x10))();
        piVar7 = local_5c;
        break;
      }
      iVar4 = *piVar2;
      piVar2 = (int *)piVar2[2];
    } while (*(int *)(iVar4 + 0x24) != piVar1[2]);
  } while( true );
}

