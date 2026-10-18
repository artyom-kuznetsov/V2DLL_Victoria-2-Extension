// FUN_005bee20 @ 005bee20 body=[[005bee20, 005bf046] [005bf04a, 005bf074] [005bf078, 005bf09d] [005bf0a1, 005bf0c6] [005bf0ca, 005bf0ef] [005bf0f3, 005bf118] [005bf11c, 005bf153] [005bf157, 005bf178] [005bf17c, 005bf1a1] [005bf1a5, 005bf1c4] [005bf1c8, 005bf1e4] [005bf1e8, 005bf207] [005bf20b, 005bf438] [005bf43c, 005bf462] [005bf466, 005bf48b] [005bf48f, 005bf4b4] [005bf4b8, 005bf4dd] [005bf4e1, 005bf506] [005bf50a, 005bf53f] [005bf543, 005bf55e] [005bf562, 005bf57e] [005bf582, 005bf5a7] [005bf5ab, 005bf5d0] [005bf5d4, 005bf5f3] [005bf5f7, 005bf616] [005bf61a, 005bf7cf] [005bf7d3, 005bf7f4] [005bf7f8, 005bf81d] [005bf821, 005bf846] [005bf84a, 005bf86f] [005bf873, 005bf898] [005bf89c, 005bf8d3] [005bf8d7, 005bf8f2] [005bf8f6, 005bf912] [005bf916, 005bf93b] [005bf93f, 005bf95e] [005bf962, 005bf97e] [005bf982, 005bf9aa] [005bf9ae, 005bfad5] [005bfad9, 005bfafa] [005bfafe, 005bfb23] [005bfb27, 005bfb4c] [005bfb50, 005bfb83] [005bfb87, 005bfbad] [005bfbb1, 005bfbd0] [005bfbd4, 005bfbf3] [005bfbf7, 005bfc97] [005bfc9b, 005bfcc0] [005bfcc4, 005bfced] [005bfcf1, 005bfd1d] [005bfd21, 005bfd8c] [005bfd90, 005bfdb3] [005bfdb7, 005bfefe] [005bff02, 005bff28] [005bff2c, 005bff51] [005bff55, 005bff64] [005bff68, 005bff7d]]


undefined1 * FUN_005bee20(int *param_1,undefined1 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined8 uVar6;
  undefined8 uStack_228;
  undefined4 uStack_210;
  undefined1 local_200 [72];
  int local_1b8;
  char local_1a8 [32];
  undefined4 local_188;
  uint local_184;
  undefined4 local_174;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  uint local_14c;
  undefined4 local_13c;
  uint local_138;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  undefined4 local_f8;
  uint local_f4 [4];
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  uint local_bc [4];
  undefined4 local_ac;
  uint local_a8;
  uint local_a0;
  undefined4 local_90;
  uint local_8c;
  uint local_84 [4];
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
  undefined4 local_1c;
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b71b57;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_2 + 0x14) = 0xf;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xf;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  param_2[0x1c] = 0;
  *(undefined4 *)(param_2 + 0x4c) = 0xf;
  *(undefined4 *)(param_2 + 0x48) = 0;
  param_2[0x38] = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  param_2[0x58] = 1;
  local_8 = 0;
  local_188 = 1;
  uStack_210 = 0x5bee8d;
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 == '\0') {
    uStack_210 = 2;
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 0xf;
    uStack_210 = 3;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x10;
    uStack_210 = 0xe;
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 0x11;
    uStack_210 = 0;
    (**(code **)(*param_1 + 0x30))();
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    local_8._0_1_ = 0x12;
    pcVar4 = local_1a8;
    iVar2 = (int)local_18._4_4_;
    if ((int)local_18._4_4_ < 0) {
      iVar2 = -(int)local_18._4_4_;
      local_1a8[0] = '-';
      pcVar4 = local_1a8 + 1;
    }
    uStack_228 = CONCAT44(0x5bf302,(undefined4)uStack_228);
    __itoa(iVar2 / 1000,pcVar4,10);
    pcVar4 = local_1a8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00409350();
    local_8._0_1_ = 0x13;
    local_f8 = (**(code **)(*param_1 + 0x38))();
    local_8._0_1_ = 0x14;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    uStack_228 = CONCAT44(0x5bf366,(undefined4)uStack_228);
    FUN_00409350();
    local_8._0_1_ = 0x15;
    uStack_228 = CONCAT44(0x5bf37a,(undefined4)uStack_228);
    local_1c = FUN_009a8ee0();
    local_8._0_1_ = 0x16;
    iVar2 = FUN_00475500();
    uStack_228 = *(undefined8 *)(iVar2 + 0x6c);
    FUN_009a9880();
    local_8._0_1_ = 0x17;
    FUN_00988f20();
    local_8._0_1_ = 0x18;
    FUN_00988f20();
    local_8._0_1_ = 0x19;
    FUN_00988f20();
    local_8._0_1_ = 0x1a;
    FUN_00988f20();
    local_8._0_1_ = 0x1b;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 0x1c;
    uStack_228 = CONCAT44(uVar3,0x5bf42a);
    FUN_00448aa0();
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    local_8._0_1_ = 0x1d;
    FUN_009adb70();
    if (local_64 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    uVar5 = local_a8;
  }
  else {
    uStack_210 = 1;
    local_70 = 0xf;
    local_74 = 0;
    local_84[0] = local_84[0] & 0xffffff00;
    FUN_00409350();
    local_8 = 1;
    uStack_210 = 3;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350();
    local_8._0_1_ = 2;
    uStack_210 = 0xe;
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    FUN_00409350();
    local_18._4_4_ = (undefined8 *)&uStack_210;
    local_8._0_1_ = 3;
    uStack_210 = extraout_ECX;
    (**(code **)(*param_1 + 0x30))();
    local_18._4_4_ = (undefined8 *)FUN_005c0800();
    local_8._0_1_ = 4;
    local_1c = (**(code **)(*param_1 + 0x38))();
    local_8._0_1_ = 5;
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    uStack_228 = CONCAT44(0x5bef67,(undefined4)uStack_228);
    FUN_00409350();
    local_8._0_1_ = 6;
    uStack_228 = CONCAT44(0x5bef7b,(undefined4)uStack_228);
    local_f8 = FUN_009a8ee0();
    local_8._0_1_ = 7;
    iVar2 = FUN_00475500();
    uStack_228 = *(undefined8 *)(iVar2 + 0x6c);
    FUN_009a9880();
    local_8._0_1_ = 8;
    FUN_00988f20();
    local_8._0_1_ = 9;
    FUN_00988f20();
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00988f20();
    local_8._0_1_ = 0xc;
    uVar3 = FUN_00988f20();
    local_8._0_1_ = 0xd;
    uStack_228 = CONCAT44(uVar3,0x5bf02e);
    FUN_00448aa0();
    if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_a8 = 0xf;
    local_ac = 0;
    local_bc[0] = local_bc[0] & 0xffffff00;
    if (0xf < local_154) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_154 = 0xf;
    local_158 = 0;
    local_168[0] = local_168[0] & 0xffffff00;
    if (0xf < local_170) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_170 = 0xf;
    local_174 = 0;
    local_184 = local_184 & 0xffffff00;
    if (0xf < local_138) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_138 = 0xf;
    local_13c = 0;
    local_14c = local_14c & 0xffffff00;
    if (0xf < local_100) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    local_8._0_1_ = 0xe;
    FUN_009adb70();
    if (local_64 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    if (0xf < local_11c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_e0 = 0xf;
    local_e4 = 0;
    local_f4[0] = local_f4[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_54[0] = local_54[0] & 0xffffff00;
    uVar5 = local_70;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (0xf < uVar5) {
    local_40 = 0xf;
    local_44 = 0;
    local_5c = 0;
    local_60 = 0;
    local_64 = 0;
    local_e0 = 0xf;
    local_e4 = 0;
    local_11c = 0xf;
    local_120 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_5c = 0;
  local_60 = 0;
  local_64 = 0;
  local_e0 = 0xf;
  local_e4 = 0;
  local_11c = 0xf;
  local_120 = 0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  uStack_228 = CONCAT44(0x5bf643,(undefined4)uStack_228);
  FUN_00409350();
  local_8 = 0x1e;
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  uStack_228 = CONCAT44(0x5bf66e,(undefined4)uStack_228);
  FUN_00409350();
  local_8._0_1_ = 0x1f;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  uStack_228 = CONCAT44(0x5bf68a,(undefined4)uStack_228);
  FUN_00409350();
  local_18._4_4_ = (undefined8 *)&stack0xfffffde4;
  uStack_228._4_4_ = &stack0xfffffde4;
  local_8._0_1_ = 0x20;
  uStack_228._0_4_ = 0x5bf6a2;
  (**(code **)(*param_1 + 0x34))();
  uStack_228 = CONCAT44(uStack_228._4_4_,local_130);
  local_1c = FUN_00988970();
  local_8._0_1_ = 0x21;
  if ((param_1[0x1d] == 0) || (*(char *)(param_1[0x1d] + 0x164) == '\0')) {
    iVar2 = param_1[0x10];
  }
  else {
    iVar2 = 0;
  }
  uStack_228 = CONCAT44(iVar2,local_168);
  local_18._4_4_ = (undefined8 *)((int)&uStack_228 + 4);
  uVar3 = FUN_00988970();
  local_8._0_1_ = 0x22;
  uStack_228 = 0x400dfc940;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350();
  uStack_228 = CONCAT44(local_54,local_68);
  local_8._0_1_ = 0x23;
  local_18._4_4_ = (undefined8 *)FUN_009a8ee0();
  local_8._0_1_ = 0x24;
  uStack_228 = CONCAT44(0x5bf71e,(undefined4)uStack_228);
  iVar2 = FUN_00475500();
  uStack_228 = *(undefined8 *)(iVar2 + 0x74);
  FUN_009a9880();
  local_8._0_1_ = 0x25;
  uStack_228 = CONCAT44(local_84,0x5bf759);
  FUN_00988f20();
  local_8._0_1_ = 0x26;
  uStack_228 = CONCAT44(uVar3,0x5bf76b);
  FUN_00988f20();
  local_8._0_1_ = 0x27;
  uStack_228 = CONCAT44(local_f4,0x5bf783);
  FUN_00988f20();
  local_8._0_1_ = 0x28;
  uStack_228 = CONCAT44(local_1c,0x5bf798);
  FUN_00988f20();
  local_8._0_1_ = 0x29;
  uStack_228 = CONCAT44(local_bc,0x5bf7ad);
  FUN_00988f20();
  uStack_228 = 0xffffffff00000000;
  local_8._0_1_ = 0x2a;
  FUN_00448aa0();
  if (0xf < local_24) {
    uStack_228 = CONCAT44(local_38[0],&UNK_005bf7d0);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_8c) {
    uStack_228 = CONCAT44(local_a0,&UNK_005bf7f5);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_c4) {
    uStack_228 = CONCAT44(local_d8[0],&UNK_005bf81e);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  if (0xf < local_100) {
    uStack_228 = CONCAT44(local_114[0],&UNK_005bf847);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  if (0xf < local_138) {
    uStack_228 = CONCAT44(local_14c,&UNK_005bf870);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c = local_14c & 0xffffff00;
  if (0xf < local_170) {
    uStack_228 = CONCAT44(local_184,&UNK_005bf899);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_170 = 0xf;
  local_174 = 0;
  local_184 = local_184 & 0xffffff00;
  local_8._0_1_ = 0x2b;
  uStack_228 = CONCAT44(0x5bf8bc,(undefined4)uStack_228);
  FUN_009adb70();
  if (local_64 != 0) {
    uStack_228 = CONCAT44(0x5bf8cb,(undefined4)uStack_228);
    FUN_009e6a80();
    uStack_228 = CONCAT44(local_64,&UNK_005bf8d4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  if (0xf < local_70) {
    uStack_228 = CONCAT44(local_84[0],&UNK_005bf8f3);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_154) {
    uStack_228 = CONCAT44(local_168[0],&UNK_005bf913);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_154 = 0xf;
  local_158 = 0;
  local_168[0] = local_168[0] & 0xffffff00;
  if (0xf < local_11c) {
    uStack_228 = CONCAT44(local_130[0],&UNK_005bf93c);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_11c = 0xf;
  local_120 = 0;
  local_130[0] = local_130[0] & 0xffffff00;
  if (0xf < local_40) {
    uStack_228 = CONCAT44(local_54[0],&UNK_005bf95f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_e0) {
    uStack_228 = CONCAT44(local_f4[0],&UNK_005bf97f);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_e0 = 0xf;
  local_e4 = 0;
  local_f4[0] = local_f4[0] & 0xffffff00;
  if (0xf < local_a8) {
    uStack_228 = CONCAT44(local_bc[0],&UNK_005bf9ab);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  uStack_228 = 0x400dfe9b4;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x2c;
  uStack_228 = 0x900e02960;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  FUN_00409350();
  local_18._4_4_ = &uStack_228;
  local_8._0_1_ = 0x2d;
  uStack_228 = CONCAT44(3,param_1[0xd]);
  uVar3 = FUN_00988a50();
  local_8._0_1_ = 0x2e;
  uStack_228 = 0x400dfc940;
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  FUN_00409350();
  uStack_228 = CONCAT44(local_54,local_68);
  local_8._0_1_ = 0x2f;
  local_18._4_4_ = (undefined8 *)FUN_009a8ee0();
  local_8._0_1_ = 0x30;
  uStack_228 = CONCAT44(0x5bfa51,(undefined4)uStack_228);
  iVar2 = FUN_00475500();
  uStack_228 = *(undefined8 *)(iVar2 + 0x74);
  FUN_009a9880();
  local_8._0_1_ = 0x31;
  uStack_228 = CONCAT44(local_84,0x5bfa8c);
  FUN_00988f20();
  local_8._0_1_ = 0x32;
  uStack_228 = CONCAT44(uVar3,0x5bfa9e);
  FUN_00988f20();
  local_8._0_1_ = 0x33;
  uStack_228 = CONCAT44(local_bc,0x5bfab3);
  FUN_00988f20();
  local_8._0_1_ = 0x34;
  uStack_228 = 0xffffffff00000000;
  FUN_00448aa0();
  if (0xf < local_24) {
    uStack_228 = CONCAT44(local_38[0],&UNK_005bfad6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_8c) {
    uStack_228 = CONCAT44(local_a0,&UNK_005bfafb);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_c4) {
    uStack_228 = CONCAT44(local_d8[0],&UNK_005bfb24);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_c4 = 0xf;
  local_c8 = 0;
  local_d8[0] = local_d8[0] & 0xffffff00;
  if (0xf < local_100) {
    uStack_228 = CONCAT44(local_114[0],&UNK_005bfb4d);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_100 = 0xf;
  local_104 = 0;
  local_114[0] = local_114[0] & 0xffffff00;
  local_8._0_1_ = 0x35;
  uStack_228 = CONCAT44(0x5bfb6e,(undefined4)uStack_228);
  FUN_009adb70();
  uStack_228 = CONCAT44(0x5bfb75,(undefined4)uStack_228);
  FUN_004d8540();
  if (0xf < local_70) {
    uStack_228 = CONCAT44(local_84[0],&UNK_005bfb84);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_70 = 0xf;
  local_74 = 0;
  local_84[0] = local_84[0] & 0xffffff00;
  if (0xf < local_138) {
    uStack_228 = CONCAT44(local_14c,&UNK_005bfbae);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_138 = 0xf;
  local_13c = 0;
  local_14c = local_14c & 0xffffff00;
  if (0xf < local_40) {
    uStack_228 = CONCAT44(local_54[0],&UNK_005bfbd1);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = local_54[0] & 0xffffff00;
  if (0xf < local_a8) {
    uStack_228 = CONCAT44(local_bc[0],&UNK_005bfbf4);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (param_1[0xc] != 0) {
    uStack_228 = CONCAT44(local_114,0x5bfc16);
    uVar3 = (**(code **)(**(int **)(param_1[0xc] + 100) + 0x1c))();
    local_8 = 0x36;
    uStack_228 = CONCAT44(local_d8,*(undefined4 *)(param_1[0xc] + 0x68));
    local_18._4_4_ = (undefined8 *)FUN_0096d650();
    local_8._0_1_ = 0x37;
    uStack_228 = CONCAT44(*(undefined4 *)(param_1[0xc] + 0x6c),0x5bfc4c);
    FUN_00974c50();
    uStack_228 = CONCAT44(uVar3,"LOCATION");
    local_8._0_1_ = 0x38;
    FUN_0043e9a0(local_38);
    uStack_228 = 0xffffffff00000000;
    local_8._0_1_ = 0x39;
    FUN_00448aa0();
    if (0xf < local_24) {
      uStack_228 = CONCAT44(local_38[0],&UNK_005bfc98);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_8c) {
      uStack_228 = CONCAT44(local_a0,&UNK_005bfcc1);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8c = 0xf;
    local_90 = 0;
    local_a0 = local_a0 & 0xffffff00;
    if (0xf < local_c4) {
      uStack_228 = CONCAT44(local_d8[0],&UNK_005bfcee);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_100) {
      uStack_228 = CONCAT44(local_114[0],&UNK_005bfd1e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  uStack_228 = 0xded94d;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc[0] = local_bc[0] & 0xffffff00;
  FUN_00409350();
  local_8 = 0x3a;
  uStack_228 = 0x100000000;
  uVar3 = (**(code **)(*(int *)param_1[0xe] + 0x20))();
  local_8._0_1_ = 0x3b;
  FUN_00448aa0(uVar3);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_a8) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0047db00();
  local_8 = 0x3c;
  local_18._0_4_ = param_1[0x18];
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_1[0x19] * 4) + 0xa60) + 0x48
                  );
  uVar5 = iVar2 + 1000;
  local_18 = __alldiv(iVar2 * 0x40000000,
                      (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf | (uVar5 & 0x1ffff) >> 2)
  ;
  uVar5 = *(uint *)(param_1[0xe] + 0xc4);
  uVar6 = __alldiv(uVar5 << 0x1e,
                   (((int)uVar5 >> 0x1f) << 0xf | uVar5 >> 0x11) << 0xf | (uVar5 & 0x1ffff) >> 2);
  __allmul(uVar6,local_18);
  FUN_0047de60(local_200);
  FUN_0047e3e0();
  FUN_00988bb0(local_d8,3);
  local_8._0_1_ = 0x3d;
  uVar3 = FUN_0042c180();
  local_8._0_1_ = 0x3e;
  uVar3 = FUN_00988fa0(uVar3);
  local_8 = CONCAT31(local_8._1_3_,0x3f);
  FUN_00448aa0(uVar3);
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  if (0xf < local_8c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8c = 0xf;
  local_90 = 0;
  local_a0 = local_a0 & 0xffffff00;
  if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  if (local_1b8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  ExceptionList = local_10;
  return param_2;
}

