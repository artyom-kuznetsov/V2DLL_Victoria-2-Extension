// FUN_0052e9f0 @ 0052e9f0 body=[[0052e9f0, 0052eaa3] [0052eaa7, 0052eb6f] [0052eb73, 0052eb94] [0052eb98, 0052ebde] [0052ebe2, 0052ec0c] [0052ec10, 0052ec35] [0052ec39, 0052ec95] [0052ec99, 0052edcc] [0052edd0, 0052ee6c] [0052ee70, 0052ee95] [0052ee99, 0052eebe] [0052eec2, 0052eee1] [0052eee5, 0052ef01] [0052ef05, 0052ef2a] [0052ef2e, 0052ef4d] [0052ef51, 0052ef8e] [0052ef92, 0052efbc] [0052efc0, 0052efe2] [0052efe6, 0052f002] [0052f006, 0052f078] [0052f07c, 0052f092] [0052f096, 0052f137] [0052f13b, 0052f1f1] [0052f1f5, 0052f210] [0052f214, 0052f251] [0052f255, 0052f27c] [0052f280, 0052f29c] [0052f2a0, 0052f2fc] [0052f300, 0052f457] [0052f45b, 0052f476] [0052f47a, 0052f496] [0052f49a, 0052f4bf] [0052f4c3, 0052f4e8] [0052f4ec, 0052f511] [0052f515, 0052f53a] [0052f53e, 0052f570] [0052f574, 0052f593] [0052f597, 0052f5b9] [0052f5bd, 0052f68d] [0052f691, 0052f6ac] [0052f6b0, 0052f6cc] [0052f6d0, 0052f702] [0052f706, 0052f81a] [0052f81e, 0052f839] [0052f83d, 0052f859] [0052f85d, 0052f882] [0052f886, 0052f8b8] [0052f8bc, 0052f8d8] [0052f8dc, 0052f945] [0052f949, 0052f964] [0052f968, 0052f981] [0052f985, 0052f9e5] [0052f9e9, 0052fa04] [0052fa08, 0052fa27] [0052fa2b, 0052fa82] [0052fa86, 0052faf5] [0052faf9, 0052fb24] [0052fb28, 0052fb3d]]


undefined1 * FUN_0052e9f0(int param_1,undefined1 *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint *puStack_1a4;
  uint local_1a0;
  uint local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  uint *local_190;
  char local_174 [32];
  uint local_154;
  undefined4 local_144;
  uint local_140;
  undefined4 local_138;
  uint local_134;
  undefined4 local_124;
  uint local_120;
  uint local_118;
  undefined4 local_108;
  uint local_104;
  uint local_fc;
  undefined4 local_ec;
  uint local_e8;
  uint local_e0;
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  undefined1 local_a8 [4];
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined1 *local_90;
  uint local_8c;
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54;
  undefined4 local_44;
  uint local_40;
  uint local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_00b73d36;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  local_8 = 0;
  local_138 = 1;
  if (*(int *)(param_3 + 0x5c) == *(int *)(param_1 + 0x20)) {
    local_90 = (undefined1 *)&local_19c;
    local_1a0 = 2;
    puStack_1a4 = (uint *)&DAT_00dedc20;
    local_19c = (uint)local_19c._1_3_ << 8;
    FUN_00409350();
    local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)(param_1 + 0x12d0));
    local_1a0 = local_18;
    puStack_1a4 = local_34;
    FUN_009c98f0();
    local_8 = 1;
    local_190 = (uint *)0x52ea92;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    FUN_00409350();
    local_8 = 2;
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = local_fc & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 3;
    local_18 = FUN_009a8ee0();
    local_8._0_1_ = 4;
    iVar3 = FUN_00475500();
    local_190 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
    uStack_194 = 0x52eb3d;
    FUN_009a9880();
    local_8._0_1_ = 5;
    FUN_00988f20();
    local_8._0_1_ = 6;
    local_190 = (uint *)0x52eb61;
    FUN_00448aa0();
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
    local_8._0_1_ = 7;
    FUN_009adb70();
    if (local_a4 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = local_fc & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = (undefined1 *)&local_19c;
    local_1a0 = 2;
    puStack_1a4 = (uint *)&DAT_00dedc20;
    local_19c = local_19c & 0xffffff00;
    FUN_00409350();
    puStack_1a4 = local_34;
    local_1a0 = (uint)(*(int *)(param_3 + 0x68) < 8);
    FUN_009c98f0();
    local_8 = 8;
    local_190 = (uint *)0x52ec85;
    FUN_00448aa0();
    local_8 = local_8 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8 = 9;
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 10;
    local_cc = 0xf;
    local_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0xb;
    local_18 = FUN_009a8ee0();
    local_8._0_1_ = 0xc;
    iVar3 = FUN_00475500();
    local_190 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
    uStack_194 = 0x52ed46;
    local_18 = FUN_009a9880();
    local_120 = 0xf;
    local_124 = 0;
    local_134 = local_134 & 0xffffff00;
    local_8._0_1_ = 0xe;
    local_190 = (uint *)0x52ed6f;
    pcVar4 = __itoa(8,local_174,10);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = local_fc & 0xffffff00;
    local_8._0_1_ = 0x10;
    local_190 = (uint *)0x52edc1;
    pcVar4 = __itoa(*(int *)(param_3 + 0x68),local_174,10);
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0x11;
    FUN_00988f20();
    local_8._0_1_ = 0x12;
    FUN_00988f20();
    local_8._0_1_ = 0x13;
    FUN_00988f20();
    local_8._0_1_ = 0x14;
    FUN_00988f20();
    local_8._0_1_ = 0x15;
    local_190 = (uint *)0x52ee54;
    FUN_00448aa0();
    if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_140 = 0xf;
    local_144 = 0;
    local_154 = local_154 & 0xffffff00;
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118 = local_118 & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = local_fc & 0xffffff00;
    if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0xf;
    local_124 = 0;
    local_134 = local_134 & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    local_8._0_1_ = 0x16;
    FUN_009adb70();
    if (local_a4 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_78 = 0xf;
    local_7c = 0;
    local_8c = local_8c & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54 = local_54 & 0xffffff00;
    FUN_00409350();
    local_8 = 0x17;
    (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
    local_8._0_1_ = 0x18;
    local_190 = (uint *)0x52f056;
    uStack_194 = FUN_00988f20();
    local_190 = (uint *)0x0;
    local_8._0_1_ = 0x19;
    uStack_198 = 0x52f066;
    FUN_00448aa0();
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      local_190 = (uint *)&UNK_0052f079;
      FUN_00aae91b();
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    uVar2 = local_40;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      local_190 = (uint *)&UNK_0052f093;
      FUN_00aae91b();
    }
    goto joined_r0x0052fa1a;
  }
  local_94 = *(undefined4 *)(param_3 + 0x58);
  local_18 = *(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_3 + 0x5c) * 4);
  if (*(char *)(param_1 + 0x12d0) == '\0') {
LAB_0052f0e2:
    local_38 = local_38 & 0xffffff00;
  }
  else {
    local_38 = CONCAT31(local_38._1_3_,1);
    if (*(char *)(local_18 + 0x12d0) == '\0') goto LAB_0052f0e2;
  }
  local_90 = (undefined1 *)&local_19c;
  local_1a0 = 2;
  puStack_1a4 = (uint *)&DAT_00dedc20;
  local_19c = (uint)local_19c._1_3_ << 8;
  FUN_00409350();
  local_1a0 = local_38;
  puStack_1a4 = local_34;
  FUN_009c98f0();
  local_8 = 0x1a;
  local_190 = (uint *)0x52f126;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x1b;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x1c;
  local_38 = FUN_009a8ee0();
  local_8._0_1_ = 0x1d;
  iVar3 = FUN_00475500();
  local_190 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
  uStack_194 = 0x52f1c2;
  FUN_009a9880();
  local_8._0_1_ = 0x1e;
  FUN_00988f20();
  local_8._0_1_ = 0x1f;
  local_190 = (uint *)0x52f1e3;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  local_8._0_1_ = 0x20;
  FUN_009adb70();
  if (local_a4 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0;
  local_a0 = 0;
  local_9c = 0;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_90 = (undefined1 *)&local_19c;
  local_1a0 = 2;
  puStack_1a4 = (uint *)&DAT_00dedc20;
  local_19c = local_19c & 0xffffff00;
  FUN_00409350();
  puStack_1a4 = local_34;
  local_1a0 = (uint)(*(int *)(param_3 + 0x68) < 8);
  FUN_009c98f0();
  local_8 = 0x21;
  local_190 = (uint *)0x52f2ec;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x22;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x23;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x24;
  local_38 = FUN_009a8ee0();
  local_8._0_1_ = 0x25;
  iVar3 = FUN_00475500();
  local_190 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
  uStack_194 = 0x52f3b0;
  local_90 = (undefined1 *)FUN_009a9880();
  local_8._0_1_ = 0x26;
  local_38 = FUN_009888f0();
  local_8._0_1_ = 0x27;
  FUN_009888f0();
  local_8._0_1_ = 0x28;
  FUN_00988f20();
  local_8._0_1_ = 0x29;
  FUN_00988f20();
  local_8._0_1_ = 0x2a;
  FUN_00988f20();
  local_8._0_1_ = 0x2b;
  FUN_00988f20();
  local_8._0_1_ = 0x2c;
  local_190 = (uint *)0x52f449;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118 = local_118 & 0xffffff00;
  if (0xf < local_140) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_140 = 0xf;
  local_144 = 0;
  local_154 = local_154 & 0xffffff00;
  if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_120 = 0xf;
  local_124 = 0;
  local_134 = local_134 & 0xffffff00;
  if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_e8 = 0xf;
  local_ec = 0;
  local_fc = local_fc & 0xffffff00;
  local_8._0_1_ = 0x24;
  FUN_009a9740();
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_cc = 0xf;
  local_d0 = 0;
  local_e0 = local_e0 & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x2d;
  local_90 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 0x2e;
  iVar3 = FUN_00475500();
  local_190 = (uint *)*(undefined8 *)(iVar3 + 0x6c);
  uStack_194 = 0x52f624;
  FUN_009a9880();
  local_90 = (undefined1 *)&local_1a0;
  local_8._0_1_ = 0x2f;
  puStack_1a4 = (uint *)0x2;
  local_190 = (uint *)0x0;
  local_1a0 = local_1a0 & 0xffffff00;
  FUN_00409350(&DAT_00dedc20);
  puStack_1a4 = (uint *)(uint)(*(char *)(local_18 + 0x31) == '\0');
  FUN_009c98f0(local_70);
  local_8._0_1_ = 0x30;
  FUN_00988f20();
  local_8._0_1_ = 0x31;
  local_190 = (uint *)0x52f67f;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  local_8._0_1_ = 0x2d;
  FUN_009a9740();
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x32;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0x33;
  local_190 = (uint *)0x52f75e;
  local_90 = (undefined1 *)FUN_009a8ee0();
  local_8._0_1_ = 0x34;
  iVar3 = FUN_00475500();
  uStack_194 = (undefined4)*(undefined8 *)(iVar3 + 0x6c);
  local_190 = (uint *)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
  uStack_198 = 0x52f796;
  FUN_009a9880();
  local_90 = (undefined1 *)&puStack_1a4;
  local_8._0_1_ = 0x35;
  FUN_009885d0();
  FUN_009c98f0(local_c4,*(int *)(*(int *)(*(int *)(param_1 + 0xbe8) + *(int *)(param_3 + 0x5c) * 4)
                                + 0x34) == 0);
  local_8._0_1_ = 0x36;
  FUN_00988f20();
  local_8._0_1_ = 0x37;
  FUN_00988f20();
  local_8._0_1_ = 0x38;
  local_190 = (uint *)0x52f80c;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_b0 = 0xf;
  local_b4 = 0;
  local_c4[0] = local_c4[0] & 0xffffff00;
  if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_104 = 0xf;
  local_108 = 0;
  local_118 = local_118 & 0xffffff00;
  local_8._0_1_ = 0x33;
  FUN_009a9740();
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_78 = 0xf;
  local_7c = 0;
  local_8c = local_8c & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54 = local_54 & 0xffffff00;
  FUN_00409350();
  local_8 = 0x39;
  (**(code **)(*(int *)(param_1 + 0xaa8) + 0x20))();
  local_8._0_1_ = 0x3a;
  local_190 = (uint *)0x52f927;
  uStack_194 = FUN_00988f20();
  local_190 = (uint *)0x0;
  local_8._0_1_ = 0x3b;
  uStack_198 = 0x52f937;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052f946;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052f965;
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_5c = 0xf;
  local_60 = 0;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052f982;
    FUN_00aae91b();
  }
  FUN_009885d0();
  local_8 = 0x3c;
  local_190 = local_70;
  uStack_194 = 0x52f9b6;
  (**(code **)(*(int *)(local_18 + 0xaa8) + 0x20))();
  local_8._0_1_ = 0x3d;
  local_190 = (uint *)0x52f9c7;
  uStack_194 = FUN_00988f20();
  local_190 = (uint *)0x0;
  local_8._0_1_ = 0x3e;
  uStack_198 = 0x52f9d7;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052f9e6;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  uVar2 = local_b0;
  if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052fa05;
    FUN_00aae91b();
  }
joined_r0x0052fa1a:
  local_8 = (uint)local_8._1_3_ << 8;
  local_70[0] = local_70[0] & 0xffffff00;
  if (0xf < uVar2) {
    local_20 = 0xf;
    local_24 = 0;
    local_5c = 0xf;
    local_60 = 0;
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052fa28;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_5c = 0xf;
  local_60 = 0;
  FUN_004471e0(&DAT_00dedc20);
  uStack_194 = FUN_009c98f0(local_34,*(int *)(param_3 + 0x84) < 1);
  local_190 = (uint *)0x0;
  local_8 = 0x3f;
  uStack_198 = 0x52fa71;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052fa83;
    FUN_00aae91b();
  }
  local_190 = (uint *)0x52fa93;
  FUN_004471e0();
  local_190 = (uint *)local_a8;
  local_8 = 0x40;
  uStack_194 = 0x52faaa;
  FUN_009a8ee0();
  local_8._0_1_ = 0x41;
  iVar3 = FUN_00475500();
  uStack_198 = (undefined4)*(undefined8 *)(iVar3 + 0x6c);
  uStack_194 = (undefined4)((ulonglong)*(undefined8 *)(iVar3 + 0x6c) >> 0x20);
  local_190 = (uint *)*(undefined8 *)(iVar3 + 0x74);
  local_19c = 0x52fad7;
  uStack_194 = FUN_009a9880();
  local_190 = (uint *)0x0;
  local_8._0_1_ = 0x42;
  uStack_198 = 0x52fae7;
  FUN_00448aa0();
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    local_190 = (uint *)&UNK_0052faf6;
    FUN_00aae91b();
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = local_34[0] & 0xffffff00;
  local_8 = CONCAT31(local_8._1_3_,0x40);
  local_190 = (uint *)0x52fb16;
  FUN_009a9740();
  if (local_5c < 0x10) {
    ExceptionList = local_10;
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  local_190 = (uint *)&UNK_0052fb25;
  FUN_00aae91b();
}

