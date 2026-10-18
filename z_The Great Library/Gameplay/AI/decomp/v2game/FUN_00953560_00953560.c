// FUN_00953560 @ 00953560 body=[[00953560, 00953632] [00953636, 00953665] [00953669, 0095369b] [0095369f, 00953785] [00953789, 009537a9] [009537ad, 009537ce] [009537d2, 009538bd] [009538c1, 009538ea] [009538ee, 00953909] [0095390d, 0095392e] [00953932, 0095395e] [00953962, 00953cc9] [00953ccd, 00953cfc] [00953d00, 00953d24] [00953d28, 00953d43] [00953d47, 00953d6e] [00953d77, 00953e41] [00953e45, 00953e74] [00953e78, 00953e9c] [00953ea0, 00953ebb] [00953ebf, 00953ee6] [00953eef, 009540c2] [009540c6, 009540fa] [009540fe, 00954122] [00954126, 00954141] [00954145, 00954166] [0095416a, 00954194] [00954198, 009541c2] [009541c6, 009541ea] [009541ee, 0095424f] [00954253, 0095427e] [00954284, 009542b8]]


undefined1 * FUN_00953560(undefined1 *param_1,undefined4 param_2,char param_3,char param_4)

{
  char **ppcVar1;
  char cVar2;
  char ***pppcVar3;
  undefined4 uVar4;
  int iVar5;
  char ***local_1a0;
  char ***local_19c;
  char local_189;
  char **local_188;
  undefined1 *local_184;
  int local_180;
  char local_179;
  char **local_178;
  char **local_174 [4];
  undefined4 local_164;
  uint local_160;
  char **local_158;
  char *local_154;
  char **local_150 [4];
  undefined4 local_140;
  uint local_13c;
  char **local_134 [4];
  undefined4 local_124;
  uint local_120;
  char **local_118 [4];
  undefined4 local_108;
  uint local_104;
  char **local_fc [4];
  undefined4 local_ec;
  uint local_e8;
  char *local_e0;
  char **local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  char **local_c0;
  undefined4 local_b0;
  uint local_ac;
  char **local_a4;
  undefined4 local_94;
  uint local_90;
  char **local_88 [4];
  undefined4 local_78;
  uint local_74;
  char **local_6c;
  uint local_58;
  undefined1 local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  char **local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bb4623;
  local_14 = ExceptionList;
  local_184 = (undefined1 *)0x0;
  local_19c = (char ***)0x953595;
  ExceptionList = &local_14;
  cVar2 = FUN_00952f10();
  if (cVar2 == '\0') {
    local_19c = (char ***)0x0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    local_1a0 = (char ***)&DAT_00ded94d;
    *param_1 = 0;
    FUN_00409350();
  }
  else {
    local_19c = (char ***)0x3;
    local_1a0 = (char ***)&DAT_00e35c4c;
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = (char **)((uint)local_dc[0] & 0xffffff00);
    FUN_00409350();
    local_19c = local_88;
    local_c = 0;
    local_19c = (char ***)FUN_0094dbd0();
    local_c._0_1_ = 1;
    local_1a0 = (char ***)0x9535fb;
    FUN_00988fa0();
    local_19c = local_dc;
    local_c._0_1_ = 2;
    local_1a0 = (char ***)0x95361c;
    FUN_00988f20();
    if (0xf < local_90) {
      local_19c = (char ***)local_a4;
                    /* WARNING: Subroutine does not return */
      local_1a0 = (char ***)&UNK_00953633;
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = (char **)((uint)local_a4 & 0xffffff00);
    if (0xf < local_74) {
      local_19c = (char ***)local_88[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (char ***)&UNK_00953666;
      FUN_00aae91b();
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
    local_c._0_1_ = 6;
    if (0xf < local_c8) {
      local_19c = (char ***)local_dc[0];
                    /* WARNING: Subroutine does not return */
      local_1a0 = (char ***)&UNK_0095369c;
      FUN_00aae91b();
    }
    local_19c = (char ***)&local_189;
    local_1a0 = &local_178;
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = (char **)((uint)local_dc[0] & 0xffffff00);
    local_189 = '\x01';
    FUN_00952fc0();
    local_154 = *(char **)(*(int *)(DAT_012586dc + 0x30) + 0x558);
    local_179 = (int)local_178 < 1;
    local_19c = (char ***)0x1;
    local_160 = 0xf;
    local_164 = 0;
    local_174[0] = (char **)((uint)local_174[0] & 0xffffff00);
    local_1a0 = (char ***)&DAT_00ded950;
    if ((int)local_178 < 1) {
      FUN_00409350();
      local_19c = local_118;
      local_c._0_1_ = 7;
      local_1a0 = (char ***)0x953728;
      local_19c = (char ***)FUN_00475d50();
      local_c._0_1_ = 8;
      local_1a0 = (char ***)0x953742;
      FUN_00988fa0();
      local_19c = local_174;
      local_c._0_1_ = 9;
      local_1a0 = (char ***)0x95375d;
      FUN_00988f20();
      local_19c = (char ***)0xffffffff;
      local_1a0 = (char ***)0x0;
      local_c._0_1_ = 10;
      FUN_00448aa0();
      if (0xf < local_120) {
        local_19c = (char ***)local_134[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_00953786;
        FUN_00aae91b();
      }
      local_120 = 0xf;
      local_124 = 0;
      local_134[0] = (char **)((uint)local_134[0] & 0xffffff00);
      if (0xf < local_13c) {
        local_19c = (char ***)local_150[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_009537aa;
        FUN_00aae91b();
      }
      local_13c = 0xf;
      local_140 = 0;
      local_150[0] = (char **)((uint)local_150[0] & 0xffffff00);
      if (0xf < local_104) {
        local_19c = (char ***)local_118[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_009537cf;
        FUN_00aae91b();
      }
      local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
      local_19c = (char ***)local_174[0];
    }
    else {
      FUN_00409350();
      local_c._0_1_ = 0xb;
      local_19c = (char ***)(uint)((int)local_154 <= (int)local_178);
      local_184 = (undefined1 *)&local_1a0;
      local_1a0 = (char ***)local_178;
      local_19c = (char ***)FUN_009c8ea0();
      local_1a0 = local_134;
      local_c._0_1_ = 0xc;
      FUN_0042c180();
      local_c._0_1_ = 0xd;
      FUN_00988fa0();
      local_19c = local_174;
      local_c._0_1_ = 0xe;
      local_1a0 = (char ***)0x95388f;
      FUN_00988f20();
      local_19c = (char ***)0xffffffff;
      local_1a0 = (char ***)0x0;
      local_c._0_1_ = 0xf;
      FUN_00448aa0();
      if (0xf < local_104) {
        local_19c = (char ***)local_118[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_009538be;
        FUN_00aae91b();
      }
      local_104 = 0xf;
      local_108 = 0;
      local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
      if (0xf < local_13c) {
        local_19c = (char ***)local_150[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_009538eb;
        FUN_00aae91b();
      }
      local_13c = 0xf;
      local_140 = 0;
      local_150[0] = (char **)((uint)local_150[0] & 0xffffff00);
      if (0xf < local_120) {
        local_19c = (char ***)local_134[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_0095390a;
        FUN_00aae91b();
      }
      local_120 = 0xf;
      local_124 = 0;
      local_134[0] = (char **)((uint)local_134[0] & 0xffffff00);
      if (0xf < local_e8) {
        local_19c = (char ***)local_fc[0];
                    /* WARNING: Subroutine does not return */
        local_1a0 = (char ***)&UNK_0095392f;
        FUN_00aae91b();
      }
      local_e8 = 0xf;
      local_ec = 0;
      local_fc[0] = (char **)((uint)local_fc[0] & 0xffffff00);
      local_19c = (char ***)local_174[0];
    }
    local_c._0_1_ = 6;
    if (0xf < local_160) {
      local_104 = 0xf;
      local_108 = 0;
      local_120 = 0xf;
      local_124 = 0;
      local_13c = 0xf;
      local_140 = 0;
                    /* WARNING: Subroutine does not return */
      local_1a0 = (char ***)&UNK_0095395f;
      local_174[0] = (char **)local_19c;
      FUN_00aae91b();
    }
    local_104 = 0xf;
    local_108 = 0;
    local_120 = 0xf;
    local_124 = 0;
    local_13c = 0xf;
    local_140 = 0;
    local_174[0] = (char **)((uint)local_19c & 0xffffff00);
    local_164 = 0;
    local_160 = 0xf;
    if (param_4 == '\0') {
      local_19c = (char ***)0x5;
      local_1a0 = (char ***)0xe35c74;
      FUN_00448740();
    }
    local_184 = *(undefined1 **)(*(int *)(DAT_012586dc + 0x30) + 0x554);
    iVar5 = *(int *)(local_180 + 0x30);
    local_19c = (char ***)&local_e0;
    local_1a0 = &local_188;
    local_188 = (char **)0x0;
    FUN_00953480();
    local_19c = (char ***)0x0;
    local_1a0 = (char ***)0x3e8;
    local_188 = (char **)__alldiv((longlong)(int)local_188 * (longlong)iVar5);
    if (param_3 != '\0') {
      local_158 = (char **)-(int)local_158;
      local_188 = (char **)-(int)local_188;
    }
    ppcVar1 = local_158;
    local_1a0 = (char ***)&DAT_00dfd24c;
    if ((int)local_158 < 1) {
      local_1a0 = (char ***)&DAT_00df8510;
    }
    local_e0 = (char *)((int)local_1a0 + 1);
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = (char **)((uint)local_c0 & 0xffffff00);
    local_19c = local_1a0;
    do {
      cVar2 = *(char *)local_19c;
      local_19c = (char ***)((int)local_19c + 1);
    } while (cVar2 != '\0');
    local_19c = (char ***)((int)local_19c - (int)local_e0);
    FUN_00409350();
    local_c._0_1_ = 0x10;
    if ((((local_179 == '\0') || (local_189 == '\0')) || ((char ***)ppcVar1 != (char ***)0x0)) ||
       (*(int *)(local_180 + 0x30) != 0)) {
      local_19c = DAT_00f141c8;
      local_1a0 = (char ***)0x953bc6;
      FUN_00401000();
      local_19c = (char ***)0x953bce;
      iVar5 = FUN_00b31c00();
      pppcVar3 = (char ***)local_188;
      if ((int)local_188 < 0) {
        pppcVar3 = (char ***)-(int)local_188;
      }
      if (((int)pppcVar3 < iVar5) &&
         (((int)local_184 <= *(int *)(local_180 + 0x2c) ||
          (*(int *)(local_180 + 0x2c) <= -(int)local_184)))) {
        local_19c = (char ***)0x3;
        local_1a0 = (char ***)&DAT_00e35c7c;
        local_160 = 0xf;
        local_164 = 0;
        local_174[0] = (char **)((uint)local_174[0]._1_3_ << 8);
        FUN_00409350();
        local_c._0_1_ = 0x17;
        local_178 = (char **)0xe35c9c;
        if (param_4 == '\0') {
          local_178 = (char **)0xe35cc4;
        }
        local_184 = (undefined1 *)&local_19c;
        local_1a0 = local_134;
        local_19c = (char ***)ppcVar1;
        local_19c = (char ***)FUN_00988970();
        local_c._0_1_ = 0x18;
        local_1a0 = (char ***)0x953c5e;
        FUN_00988f20();
        local_19c = local_174;
        local_c._0_1_ = 0x19;
        local_1a0 = (char ***)0x953c79;
        local_19c = (char ***)FUN_00988f20();
        local_1a0 = local_fc;
        local_c._0_1_ = 0x1a;
        FUN_0042c180();
        local_19c = (char ***)0xffffffff;
        local_1a0 = (char ***)0x0;
        local_c._0_1_ = 0x1b;
        FUN_00448aa0();
        if (0xf < local_e8) {
          local_19c = (char ***)local_fc[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953cca;
          FUN_00aae91b();
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc[0] = (char **)((uint)local_fc[0] & 0xffffff00);
        if (0xf < local_104) {
          local_19c = (char ***)local_118[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953cfd;
          FUN_00aae91b();
        }
        local_104 = 0xf;
        local_108 = 0;
        local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
        if (0xf < local_13c) {
          local_19c = (char ***)local_150[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953d25;
          FUN_00aae91b();
        }
        local_13c = 0xf;
        local_140 = 0;
        local_150[0] = (char **)((uint)local_150[0] & 0xffffff00);
        if (0xf < local_120) {
          local_19c = (char ***)local_134[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953d44;
          FUN_00aae91b();
        }
        local_c = CONCAT31(local_c._1_3_,0x10);
        local_120 = 0xf;
        local_124 = 0;
        local_134[0] = (char **)((uint)local_134[0] & 0xffffff00);
        if (0xf < local_160) {
          local_19c = (char ***)local_174[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953d6f;
          FUN_00aae91b();
        }
      }
      else if ((int)local_178 < (int)local_154) {
        local_19c = (char ***)0x3;
        local_1a0 = (char ***)&DAT_00e35c7c;
        local_160 = 0xf;
        local_164 = 0;
        local_174[0] = (char **)((uint)local_174[0]._1_3_ << 8);
        FUN_00409350();
        local_184 = (undefined1 *)&local_19c;
        local_1a0 = local_134;
        local_c._0_1_ = 0x1c;
        local_19c = (char ***)ppcVar1;
        local_19c = (char ***)FUN_00988970();
        local_c._0_1_ = 0x1d;
        local_1a0 = (char ***)0x953dd5;
        FUN_00988f20();
        local_19c = local_174;
        local_c._0_1_ = 0x1e;
        local_1a0 = (char ***)0x953df0;
        local_19c = (char ***)FUN_00988f20();
        local_1a0 = local_fc;
        local_c._0_1_ = 0x1f;
        FUN_0042c180();
        local_19c = (char ***)0xffffffff;
        local_1a0 = (char ***)0x0;
        local_c._0_1_ = 0x20;
        FUN_00448aa0();
        if (0xf < local_e8) {
          local_19c = (char ***)local_fc[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953e42;
          FUN_00aae91b();
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc[0] = (char **)((uint)local_fc[0] & 0xffffff00);
        if (0xf < local_104) {
          local_19c = (char ***)local_118[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953e75;
          FUN_00aae91b();
        }
        local_104 = 0xf;
        local_108 = 0;
        local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
        if (0xf < local_13c) {
          local_19c = (char ***)local_150[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953e9d;
          FUN_00aae91b();
        }
        local_13c = 0xf;
        local_140 = 0;
        local_150[0] = (char **)((uint)local_150[0] & 0xffffff00);
        if (0xf < local_120) {
          local_19c = (char ***)local_134[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953ebc;
          FUN_00aae91b();
        }
        local_c = CONCAT31(local_c._1_3_,0x10);
        local_120 = 0xf;
        local_124 = 0;
        local_134[0] = (char **)((uint)local_134[0] & 0xffffff00);
        if (0xf < local_160) {
          local_19c = (char ***)local_174[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00953ee7;
          FUN_00aae91b();
        }
      }
      else {
        local_1a0 = (char ***)&DAT_00df8518;
        if (*(char *)(local_180 + 0x38) == '\0') {
          local_1a0 = (char ***)&DAT_00df8510;
        }
        local_c8 = 0xf;
        local_cc = 0;
        local_dc[0] = (char **)((uint)local_dc[0] & 0xffffff00);
        local_19c = local_1a0;
        do {
          cVar2 = *(char *)local_19c;
          local_19c = (char ***)((int)local_19c + 1);
        } while (cVar2 != '\0');
        local_19c = (char ***)((int)local_19c - (int)((int)local_1a0 + 1));
        FUN_00409350();
        local_c._0_1_ = 0x21;
        if (0 < (int)local_188) {
          local_19c = (char ***)0x1;
          local_1a0 = (char ***)&DAT_00df9640;
          FUN_00448740();
        }
        local_19c = (char ***)0x3;
        local_1a0 = (char ***)&DAT_00e35c7c;
        local_3c = 0xf;
        local_40 = 0;
        local_50[0] = 0;
        FUN_00409350();
        local_c._0_1_ = 0x22;
        local_19c = (char ***)0x3;
        local_1a0 = (char ***)&DAT_00e35c7c;
        local_160 = 0xf;
        local_164 = 0;
        local_174[0] = (char **)((uint)local_174[0] & 0xffffff00);
        FUN_00409350();
        local_c._0_1_ = 0x23;
        local_154 = "TICKING_WARSCORE_DESC_SCORE_SHORT";
        if (param_4 == '\0') {
          local_154 = "TICKING_WARSCORE_DESC_SCORE";
        }
        local_19c = (char ***)0x3;
        local_184 = (undefined1 *)&local_1a0;
        local_1a0 = (char ***)local_188;
        local_19c = (char ***)FUN_00988a50();
        local_c._0_1_ = 0x24;
        local_1a0 = (char ***)0x953ff9;
        FUN_00988f20();
        local_19c = (char ***)local_50;
        local_c._0_1_ = 0x25;
        local_1a0 = (char ***)0x954017;
        pppcVar3 = (char ***)FUN_00988f20();
        local_184 = (undefined1 *)&local_19c;
        local_c._0_1_ = 0x26;
        local_19c = (char ***)local_158;
        local_1a0 = local_134;
        local_19c = (char ***)FUN_00988970();
        local_c._0_1_ = 0x27;
        local_1a0 = (char ***)0x954051;
        FUN_00988f20();
        local_19c = local_174;
        local_c._0_1_ = 0x28;
        local_1a0 = (char ***)0x95406c;
        uVar4 = FUN_00988f20();
        local_1a0 = (char ***)0xe10d24;
        local_c._0_1_ = 0x29;
        local_19c = pppcVar3;
        FUN_0043ec10(local_fc,&DAT_00df7e90,uVar4);
        local_19c = (char ***)0xffffffff;
        local_1a0 = (char ***)0x0;
        local_c._0_1_ = 0x2a;
        FUN_00448aa0();
        if (0xf < local_e8) {
          local_19c = (char ***)local_fc[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_009540c3;
          FUN_00aae91b();
        }
        local_e8 = 0xf;
        local_ec = 0;
        local_fc[0] = (char **)((uint)local_fc[0] & 0xffffff00);
        if (0xf < local_104) {
          local_19c = (char ***)local_118[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_009540fb;
          FUN_00aae91b();
        }
        local_104 = 0xf;
        local_108 = 0;
        local_118[0] = (char **)((uint)local_118[0] & 0xffffff00);
        if (0xf < local_13c) {
          local_19c = (char ***)local_150[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00954123;
          FUN_00aae91b();
        }
        local_13c = 0xf;
        local_140 = 0;
        local_150[0] = (char **)((uint)local_150[0] & 0xffffff00);
        if (0xf < local_120) {
          local_19c = (char ***)local_134[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00954142;
          FUN_00aae91b();
        }
        local_120 = 0xf;
        local_124 = 0;
        local_134[0] = (char **)((uint)local_134[0] & 0xffffff00);
        if (0xf < local_74) {
          local_19c = (char ***)local_88[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00954167;
          FUN_00aae91b();
        }
        local_74 = 0xf;
        local_78 = 0;
        local_88[0] = (char **)((uint)local_88[0] & 0xffffff00);
        if (0xf < local_90) {
          local_19c = (char ***)local_a4;
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_00954195;
          FUN_00aae91b();
        }
        local_90 = 0xf;
        local_94 = 0;
        local_a4 = (char **)((uint)local_a4 & 0xffffff00);
        if (0xf < local_20) {
          local_19c = (char ***)local_34[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_009541c3;
          FUN_00aae91b();
        }
        local_20 = 0xf;
        local_24 = 0;
        local_34[0] = (char **)((uint)local_34[0] & 0xffffff00);
        if (0xf < local_160) {
          local_19c = (char ***)local_174[0];
                    /* WARNING: Subroutine does not return */
          local_1a0 = (char ***)&UNK_009541eb;
          FUN_00aae91b();
        }
        local_160 = 0xf;
        local_164 = 0;
        local_174[0] = (char **)((uint)local_174[0] & 0xffffff00);
        local_19c = (char ***)0x954206;
        FUN_00408ad0();
        local_c = CONCAT31(local_c._1_3_,0x10);
        local_19c = (char ***)0x95421a;
        FUN_00408ad0();
      }
    }
    else {
      local_19c = (char ***)0x953a80;
      FUN_00457630();
      local_19c = (char ***)0x953aa1;
      FUN_00457630();
      local_19c = (char ***)0x953ab4;
      FUN_009885d0();
      local_19c = local_134;
      local_c._0_1_ = 0x11;
      local_1a0 = (char ***)0x953ac8;
      pppcVar3 = (char ***)FUN_009888f0();
      local_184 = (undefined1 *)&local_19c;
      local_c._0_1_ = 0x12;
      local_19c = (char ***)local_158;
      local_1a0 = local_150;
      local_19c = (char ***)FUN_00988970();
      local_c._0_1_ = 0x13;
      local_1a0 = (char ***)0x953b05;
      FUN_00988f20();
      local_19c = (char ***)local_50;
      local_c._0_1_ = 0x14;
      local_1a0 = (char ***)0x953b23;
      uVar4 = FUN_00988f20();
      local_1a0 = (char ***)&DAT_00dfaa18;
      local_c._0_1_ = 0x15;
      local_19c = pppcVar3;
      FUN_0043ec10(local_34,&DAT_00df7e90,uVar4);
      local_19c = (char ***)0xffffffff;
      local_1a0 = (char ***)0x0;
      local_c._0_1_ = 0x16;
      FUN_00448aa0();
      local_19c = (char ***)0x953b70;
      FUN_00408ad0();
      local_19c = (char ***)0x953b77;
      FUN_00408ad0();
      local_19c = (char ***)0x953b83;
      FUN_00408ad0();
      local_19c = (char ***)0x953b8c;
      FUN_00408ad0();
      local_19c = (char ***)0x953b95;
      FUN_00408ad0();
      local_c = CONCAT31(local_c._1_3_,0x10);
      local_19c = (char ***)0x953ba9;
      FUN_00408ad0();
    }
    local_19c = (char ***)0xffffffff;
    local_1a0 = (char ***)0x0;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_00408ed0();
    if (0xf < local_ac) {
      local_19c = (char ***)local_c0;
                    /* WARNING: Subroutine does not return */
      local_1a0 = (char ***)&UNK_00954250;
      FUN_00aae91b();
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0 = (char **)((uint)local_c0 & 0xffffff00);
    if (0xf < local_58) {
      local_19c = (char ***)local_6c;
                    /* WARNING: Subroutine does not return */
      local_1a0 = (char ***)&UNK_0095427f;
      FUN_00aae91b();
    }
  }
  ExceptionList = local_14;
  return param_1;
}

