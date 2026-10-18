// FUN_00616d30 @ 00616d30 body=[[00616d30, 00616d95] [00616d99, 00616e73] [00616e77, 00616ea5] [00616ea9, 00616f21] [00616f25, 00616f56] [00616f5a, 00616f75] [00616f79, 00616fed] [00616ff1, 00617021] [00617025, 00617040] [00617044, 00617095] [00617099, 006170e3] [006170e7, 0061718a] [0061718e, 00617205] [00617209, 006172e1] [006172e5, 00617318]]


undefined4 * FUN_00616d30(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 in_ECX;
  char *pcVar7;
  char local_b4 [32];
  undefined1 local_94 [4];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  int local_38;
  uint local_34;
  uint local_30 [2];
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  uint local_1c;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b9554f;
  local_10 = ExceptionList;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350("GPSelectDiplomacyDialog",0x17);
  local_8 = 0;
  FUN_00640680(param_1,local_30);
  local_8._0_1_ = 2;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_30[0]);
  }
  param_1[0x1a] = in_ECX;
  *param_1 = CSelectGreatPowerDialog::vftable;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  uVar2 = (**(code **)(*param_2 + 0x30))();
  param_1[0x1b] = uVar2;
  param_1[0x1c] = param_2;
  param_1[0x1d] = param_3;
  param_1[0x1f] = CButtonObserverGlue<CSelectGreatPowerDialog>::vftable;
  param_1[0x20] = param_1;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = FUN_00617450;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  local_8._0_1_ = 3;
  local_38 = *(undefined4 *)(param_1[0x1b] + 8);
  local_34 = *(undefined4 *)(param_1[0x1b] + 0xc);
  FUN_00641630();
  local_38 = *(undefined4 *)(param_1[0x1b] + 0x10);
  local_34 = *(undefined4 *)(param_1[0x1b] + 0x14);
  FUN_006416a0();
  (**(code **)(*param_2 + 0x1c))(local_70);
  local_8._0_1_ = 4;
  FUN_00641710();
  local_8._0_1_ = 3;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_70[0]);
  }
  (**(code **)(*param_2 + 0x3c))(local_70);
  local_8._0_1_ = 5;
  FUN_006417b0();
  local_8._0_1_ = 3;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("PROCEED",7);
  local_8._0_1_ = 6;
  FUN_009a8ee0(local_28,local_54);
  local_8._0_1_ = 7;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 8;
  FUN_00641850();
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_8._0_1_ = 9;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("DECLINE",7);
  local_8._0_1_ = 10;
  FUN_009a8ee0(local_28,local_54);
  local_8._0_1_ = 0xb;
  iVar3 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar3 + 0x6c),*(undefined8 *)(iVar3 + 0x74));
  local_8._0_1_ = 0xc;
  FUN_006418f0();
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_8._0_1_ = 0xd;
  FUN_009adb70();
  if (local_24 == 0) {
    local_8._0_1_ = 3;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    (**(code **)(*(int *)param_1[1] + 0x28))();
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xe;
    iVar3 = (**(code **)(*DAT_01258a80 + 0x48))(local_30);
    local_8._0_1_ = 3;
    if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1c = 0xf;
    local_20 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350("GPSelectOptionPos_countperrow_and_yoffset",0x29);
    local_8._0_1_ = 0xf;
    iVar4 = (**(code **)(*DAT_01258a80 + 0x48))();
    local_8._0_1_ = 3;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_80 = *(int *)(iVar4 + 100);
    local_7c = *(uint *)(iVar4 + 0x68);
    local_78 = *(int *)(DAT_012588e8 + 0xbe4) - *(int *)(DAT_012588e8 + 0xbe0) >> 2;
    param_2 = (int *)0x0;
    local_38 = local_80;
    local_34 = local_7c;
    if (0 < local_78) {
      do {
        local_8._0_1_ = 3;
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        FUN_00409350("GPSelectOption",0xe);
        local_8._0_1_ = 0x10;
        iVar4 = *DAT_01258a80;
        local_14 = DAT_01258a80;
        uVar2 = (**(code **)(**(int **)(DAT_012588e8 + 0xb24) + 0x3c))();
        piVar5 = (int *)(**(code **)(iVar4 + 0x2c))(local_54,uVar2);
        if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_54[0]);
        }
        local_40 = 0xf;
        local_44 = 0;
        local_54[0] = local_54[0] & 0xffffff00;
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        local_8._0_1_ = 0x11;
        pcVar6 = __itoa((int)param_2,local_b4,10);
        local_14 = (int *)(pcVar6 + 1);
        pcVar7 = pcVar6;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        FUN_00409350(pcVar6,(int)pcVar7 - (int)local_14);
        local_8._0_1_ = 0x12;
        (**(code **)(*(int *)param_1[1] + 0xbc))(local_70,piVar5);
        local_8._0_1_ = 3;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
        local_90 = *(undefined4 *)(iVar3 + 100);
        local_74 = ((int)param_2 < local_38) - 1 & local_7c;
        local_8c = *(undefined4 *)(iVar3 + 0x68);
        local_88 = local_90;
        local_84 = local_8c;
        local_14 = (int *)(**(code **)(*piVar5 + 0x60))(local_94);
        param_3 = CONCAT22((short)local_8c + (short)local_74,
                           (short)((int)param_2 % local_38) * *(short *)local_14 + (short)local_88);
        (**(code **)(*piVar5 + 0x18))(param_3);
        (**(code **)(*(int *)piVar5[0x125] + 0xb0))();
        local_5c = 0xf;
        local_60 = 0;
        local_70[0] = local_70[0] & 0xffffff00;
        FUN_00409350("country_flag",0xc);
        local_8._0_1_ = 0x13;
        iVar4 = (**(code **)(*piVar5 + 0x34))(local_70);
        (**(code **)(*(int *)(iVar4 + 0x54) + 4))(param_1 + 0x1f);
        local_8._0_1_ = 3;
        if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b(local_70[0]);
        }
        param_2 = (int *)((int)param_2 + 1);
      } while ((int)param_2 < local_78);
    }
    local_8._0_1_ = 3;
    FUN_00617910(param_1);
    FUN_006176e0(0);
    ExceptionList = local_10;
    return param_1;
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

