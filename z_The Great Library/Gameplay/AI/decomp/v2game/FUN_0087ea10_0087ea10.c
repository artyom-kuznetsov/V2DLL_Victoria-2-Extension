// FUN_0087ea10 @ 0087ea10 body=[[0087ea10, 0087eaa2] [0087eaa6, 0087eb5a] [0087eb5e, 0087ec38] [0087ec3c, 0087ec52] [0087ec56, 0087ec6c] [0087ec70, 0087ec86] [0087ec8a, 0087ecaa] [0087ecae, 0087ed70] [0087ed74, 0087ed8a] [0087ed8e, 0087eda4] [0087eda8, 0087edbe] [0087edc2, 0087ede2] [0087ede6, 0087ee35] [0087ee39, 0087eec7] [0087eecb, 0087ef85] [0087ef89, 0087efa4] [0087efa8, 0087efbe] [0087efc2, 0087efd8] [0087efdc, 0087effc] [0087f000, 0087f09e] [0087f0a2, 0087f0bd] [0087f0c1, 0087f0d7] [0087f0db, 0087f0f1] [0087f0f5, 0087f115] [0087f119, 0087f167] [0087f16b, 0087f1d5] [0087f1d9, 0087f340] [0087f344, 0087f368] [0087f36c, 0087f387] [0087f38b, 0087f3a1] [0087f3a5, 0087f3c1] [0087f3c5, 0087f3ee] [0087f3f2, 0087f454] [0087f458, 0087f478] [0087f47c, 0087f490]]


undefined1 * FUN_0087ea10(undefined1 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  uint in_stack_00000020;
  undefined1 local_134 [28];
  int *local_118;
  int local_114;
  int local_110;
  uint local_10c [4];
  undefined4 local_fc;
  uint local_f8;
  uint local_f0 [2];
  undefined1 local_e8 [8];
  undefined4 local_e0;
  uint local_dc;
  uint local_d4 [4];
  undefined4 local_c4;
  uint local_c0;
  undefined1 local_b8 [4];
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a4 [4];
  undefined4 local_94;
  uint local_90;
  int *local_88;
  uint local_84;
  undefined4 local_74;
  uint local_70;
  uint local_68;
  undefined4 local_58;
  uint local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  uint local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b88957;
  local_10 = ExceptionList;
  local_88 = (int *)0x0;
  local_8 = 0;
  ExceptionList = &local_10;
  local_118 = in_ECX;
  (**(code **)(*in_ECX + 0x28))(local_d4,param_2);
  local_8._0_1_ = 1;
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = local_30[0] & 0xffffff00;
  FUN_00409350(&DAT_00ded94d,0);
  local_8._0_1_ = 2;
  cVar2 = FUN_00416db0();
  local_11 = cVar2 == '\0';
  local_8._0_1_ = 1;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 1;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if ((bool)local_11) {
    local_114 = in_ECX[8];
    local_88 = in_ECX + 8;
    local_110 = in_ECX[9];
    if ((char)in_ECX[7] != '\0') {
      piVar3 = (int *)FUN_008a8dc0();
      local_114 = *piVar3;
      local_110 = piVar3[1];
    }
    puVar6 = param_2;
    if ((param_2[4] == 0) && (local_110 != 0)) {
      local_f8 = 0xf;
      local_fc = 0;
      local_10c[0] = local_10c[0] & 0xffffff00;
      FUN_00409350("NEW_CORE_EFFECT_TAG",0x13);
      local_8._0_1_ = 3;
      FUN_009a8ee0(local_b8,local_10c);
      local_8._0_1_ = 5;
      if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_f8 = 0xf;
      local_fc = 0;
      local_10c[0] = local_10c[0] & 0xffffff00;
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      local_8._0_1_ = 6;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350(&DAT_00e03350,3);
      local_8._0_1_ = 7;
      FUN_00988fa0();
      local_8._0_1_ = 8;
      FUN_00988f20();
      local_8._0_1_ = 9;
      uVar4 = FUN_00988f20();
      local_8._0_1_ = 10;
      FUN_009a8ee0(local_e8,uVar4);
      local_8._0_1_ = 0xb;
      FUN_009a9a90();
      local_8._0_1_ = 10;
      FUN_009a9740();
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 5;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4[0] = local_a4[0] & 0xffffff00;
      FUN_00409350(&DAT_00df8514,2);
      local_8._0_1_ = 0xc;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfa9cc,3);
      local_8._0_1_ = 0xd;
      FUN_0055dd40();
      local_8._0_1_ = 0xe;
      FUN_00988fa0();
      local_8._0_1_ = 0xf;
      uVar4 = FUN_00988f20();
      local_8._0_1_ = 0x10;
      FUN_009a8ee0(local_e8,uVar4);
      local_8._0_1_ = 0x11;
      FUN_009a9a90();
      local_8._0_1_ = 0x10;
      FUN_009a9740();
      if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_38 = 0xf;
      local_3c = 0;
      local_4c = local_4c & 0xffffff00;
      if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_54 = 0xf;
      local_58 = 0;
      local_68 = local_68 & 0xffffff00;
      if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_70 = 0xf;
      local_74 = 0;
      local_84 = local_84 & 0xffffff00;
      if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8._0_1_ = 5;
      local_1c = 0xf;
      local_20 = 0;
      local_30[0] = local_30[0] & 0xffffff00;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 1;
      FUN_009a9740();
      if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      iVar5 = FUN_008a8dc0();
      if ((*(int *)(iVar5 + 4) == local_118[9]) || (puVar6[4] == 0)) {
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        FUN_00409350("NEW_CORE_EFFECT",0xf);
        local_8._0_1_ = 0x21;
        FUN_009a8ee0(local_134,local_30);
        local_8._0_1_ = 0x23;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        FUN_00409350(&DAT_00df8514,2);
        local_8._0_1_ = 0x24;
        local_dc = 0xf;
        local_e0 = 0;
        local_f0[0] = local_f0[0] & 0xffffff00;
        FUN_00409350(&DAT_00e03350,3);
        local_8._0_1_ = 0x25;
        FUN_00988fa0();
        local_8._0_1_ = 0x26;
        FUN_00988f20();
        local_8._0_1_ = 0x27;
        uVar4 = FUN_00988f20();
        local_8._0_1_ = 0x28;
        piVar3 = (int *)FUN_009a8ee0(local_b8,uVar4);
        local_8._0_1_ = 0x29;
        puVar6 = (undefined4 *)FUN_00aae9af();
        local_8._0_1_ = 0x2a;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6[1] = local_134;
          *puVar6 = &PTR_FUN_00e38ecc;
          puVar6[7] = 0xf;
          puVar6[6] = 0;
          *(undefined1 *)(puVar6 + 2) = 0;
          param_2 = puVar6;
          FUN_00408ed0();
          *puVar6 = &PTR_FUN_00e38f08;
          local_88 = puVar6 + 9;
          *local_88 = *piVar3;
          puVar6[10] = 0;
          puVar6[0xb] = 0;
          puVar6[0xc] = 0;
          local_8._0_1_ = 0x2c;
          FUN_009a97b0();
        }
        local_8._0_1_ = 0x29;
        param_2 = puVar6;
        FUN_009e6810(local_f0,&param_2);
        local_8._0_1_ = 0x2d;
        FUN_009adb70();
        if (local_b4 != 0) {
          FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b4 = 0;
        local_b0 = 0;
        local_ac = 0;
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68 = local_68 & 0xffffff00;
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        if (0xf < local_dc) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x23);
        local_dc = 0xf;
        local_e0 = 0;
        local_f0[0] = local_f0[0] & 0xffffff00;
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      }
      else {
        FUN_009885d0();
        local_8._0_1_ = 0x12;
        FUN_009a8ee0(local_b8,local_a4);
        local_8._0_1_ = 0x14;
        if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4[0] = local_a4[0] & 0xffffff00;
        FUN_009885d0();
        local_8._0_1_ = 0x15;
        FUN_009885d0();
        local_8._0_1_ = 0x16;
        FUN_00988fa0();
        local_8._0_1_ = 0x17;
        FUN_00988f20();
        local_8._0_1_ = 0x18;
        uVar4 = FUN_00988f20();
        local_8._0_1_ = 0x19;
        FUN_009a8ee0(local_e8,uVar4);
        local_8._0_1_ = 0x1a;
        FUN_009a9a90();
        local_8._0_1_ = 0x19;
        FUN_009a9740();
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68 = local_68 & 0xffffff00;
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8._0_1_ = 0x14;
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        FUN_009885d0();
        local_8._0_1_ = 0x1b;
        FUN_009885d0();
        local_8._0_1_ = 0x1c;
        FUN_0055dd40();
        local_8._0_1_ = 0x1d;
        FUN_00988fa0();
        local_8._0_1_ = 0x1e;
        uVar4 = FUN_00988f20();
        local_8._0_1_ = 0x1f;
        FUN_009a8ee0(local_e8,uVar4);
        local_8._0_1_ = 0x20;
        FUN_009a9a90();
        local_8._0_1_ = 0x1f;
        FUN_009a9740();
        if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_38 = 0xf;
        local_3c = 0;
        local_4c = local_4c & 0xffffff00;
        if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_54 = 0xf;
        local_58 = 0;
        local_68 = local_68 & 0xffffff00;
        if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_70 = 0xf;
        local_74 = 0;
        local_84 = local_84 & 0xffffff00;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_8 = CONCAT31(local_8._1_3_,0x14);
        local_1c = 0xf;
        local_20 = 0;
        local_30[0] = local_30[0] & 0xffffff00;
        if (0xf < local_f8) {
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      }
      local_8._0_1_ = 1;
      FUN_009a9740();
      if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    local_8._0_1_ = uVar1;
    FUN_00409350(&DAT_00ded94d,0);
    if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  if (in_stack_00000020 < 0x10) {
    ExceptionList = local_10;
    return param_1;
  }
  local_d4[0] = local_d4[0] & 0xffffff00;
  local_c0 = 0xf;
  local_c4 = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

