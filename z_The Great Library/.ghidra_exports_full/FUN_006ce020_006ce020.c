// FUN_006ce020 @ 006ce020 body=[[006ce020, 006ce0a6] [006ce0aa, 006ce15e] [006ce162, 006ce201] [006ce205, 006ce236] [006ce23a, 006ce259] [006ce25d, 006ce2ab] [006ce2af, 006ce347] [006ce34b, 006ce3ad] [006ce3b1, 006ce442] [006ce446, 006ce4ea] [006ce4f0, 006ce5a2] [006ce5a6, 006ce5d6] [006ce5da, 006ce5f5] [006ce5f9, 006ce653] [006ce657, 006ce76d] [006ce771, 006ce7a2] [006ce7a6, 006ce7c7] [006ce7cb, 006ce83e] [006ce842, 006ce89f] [006ce8a3, 006cea0a] [006cea0e, 006cea3d] [006cea41, 006cea83] [006cea87, 006ceaaf] [006ceab3, 006cead3] [006cead7, 006ceb1b] [006ceb1f, 006ceb6c] [006ceb70, 006ceb8a] [006ceb8e, 006cebd1] [006cebd5, 006ced33] [006ced37, 006ced5d] [006ced61, 006cedb0] [006cedb4, 006cede9] [006ceded, 006cee36] [006cee3a, 006cee87] [006cee8b, 006ceea5] [006ceea9, 006ceef3] [006ceef7, 006cef0f] [006cef13, 006cef3d] [006cef41, 006cef78]]


/* WARNING: Removing unreachable block (ram,0x006cef32) */
/* WARNING: Removing unreachable block (ram,0x006cef04) */

undefined4 * FUN_006ce020(undefined4 *param_1,uint param_2,int param_3,int *param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  uint local_fc;
  undefined1 local_d8 [20];
  int *local_c4;
  char *local_c0;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0 [2];
  undefined1 local_98 [8];
  undefined4 local_90;
  uint local_8c;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  undefined1 local_68 [4];
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  char local_16;
  char local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b98bb1;
  local_10 = ExceptionList;
  local_14 = 0;
  pcVar6 = "DefaultConfirm";
  if (*(char *)(in_ECX + 0x5c) == '\0') {
    pcVar6 = "ReleaseConfirm";
  }
  local_c0 = pcVar6 + 1;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &local_10;
  FUN_00409350();
  local_8 = 0;
  FUN_00640680();
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_54[0]);
  }
  param_1[0x1a] = in_ECX;
  *param_1 = _anon_47068A4C::CConfirmCreateVassal::vftable;
  param_1[0x1b] = param_2;
  param_1[0x1c] = CButtonObserverGlue<_anon_47068A4C::CConfirmCreateVassal>::vftable;
  param_1[0x1d] = param_1;
  param_1[0x1e] = FUN_006cefd0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_8._0_1_ = 3;
  param_1[0x27] = *param_4;
  iVar4 = param_4[1];
  param_1[0x29] = param_5;
  param_1[0x28] = iVar4;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 4;
  iVar4 = (**(code **)(*(int *)param_1[1] + 0x34))(local_a0);
  local_8._0_1_ = 3;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x54) + 4))();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("CONFIRM_CREATE_VASSAL",0x15);
  local_8._0_1_ = 5;
  FUN_009a8ee0(local_68,local_54);
  local_8._0_1_ = 6;
  iVar4 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
  local_8._0_1_ = 7;
  FUN_00641710();
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  local_8._0_1_ = 8;
  FUN_009adb70();
  if (local_64 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 3;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350("CONFIRM_CREATE_VASSAL_DESC",0x1a);
  local_8._0_1_ = 9;
  FUN_009a8ee0(local_d8,local_a0);
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  if (param_5 == (int *)0x0) {
    local_c0 = (char *)0x0;
  }
  else {
    local_c0 = *(char **)(*(int *)(*(int *)(DAT_012588e8 + 0xacc) + (int)param_5 * 4) + 0xe8);
  }
  local_8._0_1_ = 0xc;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0xc;
  if (local_c0 == (char *)0x0) {
    local_8._0_1_ = uVar3;
    FUN_0055c910();
    local_8._0_1_ = 0xf;
    FUN_00408ed0();
  }
  else {
    FUN_0048fe90();
    local_8._0_1_ = 0xd;
    FUN_0055cbd0(*param_4,param_4[1]);
    local_8._0_1_ = 0xe;
    FUN_00408ed0();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
  }
  if (0xf < local_70) {
    local_8._0_1_ = 0xc;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0xc;
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  FUN_00409350("COUNTRY",7);
  local_8._0_1_ = 0x10;
  param_2 = FUN_00aae9af();
  local_8._0_1_ = 0x11;
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = FUN_009a9ce0();
  }
  local_8._0_1_ = 0x10;
  FUN_009e6810(local_a0,&param_2);
  uVar2 = param_2;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0[0] = local_a0[0] & 0xffffff00;
  local_16 = '\x01';
  param_2 = param_2 & 0xffffff;
  local_1c = 0;
  local_15 = '\x01';
  if ((int)param_5 < 1) {
    piVar7 = *(int **)(param_3 + 0x9d8);
    while ((local_8._0_1_ = 0x12, *(int **)(param_3 + 0x9d8) <= piVar7 &&
           (piVar7 < *(int **)(param_3 + 0x9dc)))) {
      piVar8 = *(int **)(*(int *)(DAT_012588e8 + 0xacc) + *piVar7 * 4);
      iVar4 = piVar8[0x53];
      iVar5 = piVar8[0x52];
      piVar7 = piVar7 + 1;
      param_5 = piVar8;
      local_c4 = piVar7;
      if (iVar5 != iVar4) {
        do {
          if (*(int *)(iVar5 + 4) == param_4[1]) break;
          iVar5 = iVar5 + 8;
        } while (iVar5 != iVar4);
        if (iVar5 != iVar4) {
          if (local_1c < 8) {
            if (local_15 != '\0') {
              if (local_16 == '\0') {
                FUN_00448740(&DAT_00df8148,2);
              }
              else {
                local_16 = '\0';
              }
              (**(code **)(*piVar8 + 0x1c))();
              local_8._0_1_ = 0x1c;
              FUN_00448aa0();
              local_8._0_1_ = 0x12;
              if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
                FUN_00aae91b();
              }
              local_40 = 0xf;
              local_44 = 0;
              local_54[0] = local_54[0] & 0xffffff00;
            }
          }
          else if (local_15 != '\0') {
            local_a8 = 0xf;
            local_ac = 0;
            local_bc[0] = local_bc[0] & 0xffffff00;
            FUN_00409350("POLITICS_RELEASE_VASSAL_DESC_LIMIT",0x22);
            local_8._0_1_ = 0x18;
            FUN_009a8ee0(local_68,local_bc);
            local_8._0_1_ = 0x19;
            iVar4 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
            local_8._0_1_ = 0x1a;
            FUN_00448aa0();
            if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_24 = 0xf;
            local_28 = 0;
            local_38[0] = local_38[0] & 0xffffff00;
            local_8._0_1_ = 0x1b;
            FUN_009adb70();
            if (local_64 != 0) {
              FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_8._0_1_ = 0x12;
            local_64 = 0;
            local_60 = 0;
            local_5c = 0;
            if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
            local_a8 = 0xf;
            local_ac = 0;
            local_bc[0] = local_bc[0] & 0xffffff00;
            local_15 = '\0';
            piVar7 = local_c4;
            piVar8 = param_5;
          }
          if ((param_2._3_1_ != '\0') ||
             (param_2 = param_2 & 0xffffff, 0 < *(int *)(piVar8[0x62] + 0x84))) {
            param_2 = CONCAT13(1,(undefined3)param_2);
          }
          local_1c = local_1c + 1;
        }
      }
    }
  }
  else {
    piVar7 = *(int **)((int)local_c0 + 4);
    param_2._0_3_ = (undefined3)uVar2;
    param_2 = CONCAT13(1,(undefined3)param_2);
    while (piVar7 != (int *)0x0) {
      local_8._0_1_ = 0x12;
      piVar8 = (int *)*piVar7;
      piVar7 = (int *)piVar7[2];
      param_4 = piVar7;
      if ((piVar8 != (int *)0x0) && (0 < *(int *)(piVar8[0x62] + 0x84))) {
        if (local_1c < 8) {
          if (local_15 != '\0') {
            if (local_16 == '\0') {
              FUN_00448740(&DAT_00df8148,2);
            }
            else {
              local_16 = '\0';
            }
            (**(code **)(*piVar8 + 0x1c))();
            local_8._0_1_ = 0x17;
            FUN_00448aa0();
            local_8._0_1_ = 0x12;
            if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
              FUN_00aae91b();
            }
          }
        }
        else if (local_15 != '\0') {
          local_40 = 0xf;
          local_44 = 0;
          local_54[0] = local_54[0] & 0xffffff00;
          FUN_00409350("POLITICS_RELEASE_VASSAL_DESC_LIMIT",0x22);
          local_8._0_1_ = 0x13;
          FUN_009a8ee0(local_68,local_54);
          local_8._0_1_ = 0x14;
          iVar4 = FUN_00475500();
          FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
          local_8._0_1_ = 0x15;
          FUN_00448aa0();
          if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_24 = 0xf;
          local_28 = 0;
          local_38[0] = local_38[0] & 0xffffff00;
          local_8._0_1_ = 0x16;
          FUN_009adb70();
          if (local_64 != 0) {
            FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_8._0_1_ = 0x12;
          local_64 = 0;
          local_60 = 0;
          local_5c = 0;
          if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_15 = '\0';
          piVar7 = param_4;
        }
        local_1c = local_1c + 1;
      }
    }
  }
  local_8._0_1_ = 0x12;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350("PROVINCES",9);
  local_8._0_1_ = 0x1d;
  param_4 = (int *)FUN_00aae9af();
  local_8._0_1_ = 0x1e;
  if (param_4 == (int *)0x0) {
    param_4 = (int *)0x0;
  }
  else {
    param_4 = (int *)FUN_009a9ce0();
  }
  local_8._0_1_ = 0x1d;
  FUN_009e6810(local_54,&param_4);
  local_8._0_1_ = 0x12;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0x12;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_2._3_1_ == '\0') {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350("POLITICS_SATELLITE",0x12);
    local_8 = 0x22;
    local_14 = 8;
    FUN_009a8ee0(local_68,local_54);
    local_8 = 0x23;
    local_14 = 0x18;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x24;
    local_14 = 0x38;
  }
  else {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("POLITICS_DOMINION",0x11);
    local_8 = CONCAT31(local_8._1_3_,0x1f);
    local_14 = 1;
    FUN_009a8ee0(local_98,local_38);
    local_8 = 0x20;
    local_14 = 3;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x21;
    local_14 = 7;
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e80,4);
  local_8 = 0x25;
  FUN_009a9980();
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  if ((local_14 & 0x20) != 0) {
    local_14 = local_14 & 0xffffffdf;
    if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_fc = 0xf;
  }
  if ((local_14 & 0x10) != 0) {
    local_14 = local_14 & 0xffffffef;
    local_8 = 0x26;
    FUN_009adb70();
    if (local_64 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
  }
  if ((local_14 & 8) != 0) {
    local_14 = local_14 & 0xfffffff7;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
  }
  if ((local_14 & 4) != 0) {
    local_14 = local_14 & 0xfffffffb;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
  }
  local_8 = 0x1f;
  if ((local_14 & 2) != 0) {
    local_14 = local_14 & 0xfffffffd;
    FUN_009a9740();
  }
  local_8 = 0x12;
  if (((local_14 & 1) != 0) && (local_14 = local_14 & 0xfffffffe, 0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e7c,3);
  local_8._0_1_ = 0x27;
  FUN_009888f0();
  local_8._0_1_ = 0x28;
  FUN_009a9980();
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 0x12;
  local_70 = 0xf;
  local_74 = 0;
  local_84 = local_84 & 0xffffff00;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  FUN_00409350("PROVINCES",9);
  local_8._0_1_ = 0x29;
  FUN_009a9980();
  local_8._0_1_ = 0x12;
  uVar3 = (undefined1)local_8;
  local_8._0_1_ = 0x12;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_2._3_1_ == '\0') {
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    local_8._0_1_ = uVar3;
    FUN_00409350("POLITICS_SATELLITE",0x12);
    local_8 = 0x2d;
    local_14 = local_14 | 0x200;
    FUN_009a8ee0(local_98,local_bc);
    local_8 = 0x2e;
    local_14 = local_14 | 0x400;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x2f;
    local_14 = local_14 | 0x800;
  }
  else {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350("POLITICS_DOMINION",0x11);
    local_8 = CONCAT31(local_8._1_3_,0x2a);
    local_14 = local_14 | 0x40;
    FUN_009a8ee0(local_68,local_38);
    local_8 = 0x2b;
    local_14 = local_14 | 0x80;
    iVar4 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
    local_8 = 0x2c;
    local_14 = local_14 | 0x100;
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350(&DAT_00df7e80,4);
  local_8 = 0x30;
  FUN_009a9980();
  if (local_40 < 0x10) {
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if ((local_14 & 0x800) != 0) {
      local_14 = local_14 & 0xfffff7ff;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
    }
    local_8 = 0x2d;
    if ((local_14 & 0x400) != 0) {
      local_14 = local_14 & 0xfffffbff;
      FUN_009a9740();
    }
    if ((local_14 & 0x200) != 0) {
      local_14 = local_14 & 0xfffffdff;
      if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8 = 0xf;
      local_ac = 0;
      local_bc[0] = local_bc[0] & 0xffffff00;
    }
    if (((local_14 & 0x100) != 0) && (local_14 = local_14 & 0xfffffeff, 0xf < local_fc)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = 0x2a;
    if ((local_14 & 0x80) != 0) {
      local_14 = local_14 & 0xffffff7f;
      FUN_009a9740();
    }
    local_8 = 0x12;
    if (((local_14 & 0x40) != 0) && (0xf < local_24)) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(&DAT_00df7e7c,3);
    local_8._0_1_ = 0x31;
    FUN_009888f0();
    local_8._0_1_ = 0x32;
    FUN_009a9980();
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8._0_1_ = 0x12;
    local_70 = 0xf;
    local_74 = 0;
    local_84 = local_84 & 0xffffff00;
    if (local_24 < 0x10) {
      iVar4 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar4 + 0x6c),*(undefined8 *)(iVar4 + 0x74));
      local_8._0_1_ = 0x33;
      FUN_006417b0();
      if (local_70 < 0x10) {
        local_8 = CONCAT31(local_8._1_3_,3);
        FUN_009a9740();
        ExceptionList = local_10;
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

