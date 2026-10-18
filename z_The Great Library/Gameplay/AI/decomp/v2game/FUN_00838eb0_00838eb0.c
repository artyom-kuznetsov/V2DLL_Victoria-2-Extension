// FUN_00838eb0 @ 00838eb0  (requested 00838EB0, first bytes: 55 8B EC 6A FF 68 58 C2)


void FUN_00838eb0(int param_1,int *param_2,int *param_3,int param_4,undefined8 *param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined1 local_298 [64];
  undefined1 local_258 [24];
  undefined4 local_240;
  int local_23c;
  undefined4 local_238;
  int local_234;
  undefined1 local_218 [24];
  undefined4 local_200;
  int local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined1 *local_1ac;
  undefined1 local_1a8 [28];
  int local_18c;
  int local_188;
  uint local_184 [4];
  undefined4 local_174;
  uint local_170;
  uint local_168 [4];
  undefined4 local_158;
  uint local_154;
  undefined4 *local_14c;
  undefined4 *local_148;
  undefined4 local_144;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 local_134;
  int local_12c;
  int local_128;
  undefined1 local_124 [4];
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 *local_110;
  int local_10c;
  undefined4 local_108;
  int local_104;
  uint local_100 [4];
  undefined4 local_f0;
  uint local_ec;
  int local_e4;
  uint local_e0 [4];
  undefined4 local_d0;
  uint local_cc;
  uint local_c4 [4];
  undefined4 local_b4;
  uint local_b0;
  uint local_a8 [4];
  undefined4 local_98;
  uint local_94;
  uint local_8c [4];
  undefined4 local_7c;
  uint local_78;
  uint local_70 [4];
  undefined4 local_60;
  uint local_5c;
  uint local_54 [4];
  undefined4 local_44;
  uint local_40;
  uint local_38 [4];
  undefined4 local_28;
  uint local_24;
  int local_1c;
  int *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar4 = DAT_012587e4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00bac258;
  local_10 = ExceptionList;
  local_12c = *(int *)(*(int *)(DAT_012587e4 + 4) + param_9 * 4);
  local_2b0 = CONCAT44(0x838ef6,(int)local_2b0);
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00425a40();
  local_110 = (undefined4 *)*puVar3;
  local_188 = *(int *)(*(int *)(iVar4 + 4) + puVar3[1] * 4);
  local_2b0 = CONCAT44(0x838f1a,(int)local_2b0);
  puVar3 = (undefined4 *)FUN_00425ac0();
  local_110 = (undefined4 *)*puVar3;
  local_18c = *(int *)(*(int *)(iVar4 + 4) + puVar3[1] * 4);
  local_14c = (undefined4 *)0x0;
  local_148 = (undefined4 *)0x0;
  local_144 = 0;
  local_13c = (undefined4 *)0x0;
  local_138 = (undefined4 *)0x0;
  local_134 = 0;
  local_8 = 1;
  local_2b0 = CONCAT44(param_1 + 0x2c,0x838f6d);
  FUN_0043a750();
  local_2b0 = CONCAT44(param_1 + 0x3c,0x838f7c);
  FUN_0043a750();
  local_2b0 = CONCAT44(0x838f89,(int)local_2b0);
  iVar4 = FUN_00425a40();
  if (local_13c != local_138) {
    puVar3 = local_13c;
    do {
      if (puVar3[1] == *(int *)(iVar4 + 4)) {
        if (puVar3 != local_138) goto LAB_00838fd0;
        break;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != local_138);
  }
  local_2b0 = CONCAT44(0x838fbf,(int)local_2b0);
  FUN_00425a40();
  local_2b0 = CONCAT44(0x838fca,(int)local_2b0);
  FUN_004d61d0();
LAB_00838fd0:
  puVar3 = local_138;
  local_2b0 = CONCAT44(0x838fdd,(int)local_2b0);
  local_1c = FUN_00425ac0();
  if (local_14c != local_148) {
    puVar5 = local_14c;
    do {
      if (puVar5[1] == *(int *)(local_1c + 4)) {
        if (puVar5 != local_148) goto LAB_00839029;
        break;
      }
      puVar5 = puVar5 + 2;
    } while (puVar5 != local_148);
  }
  local_2b0 = CONCAT44(0x839012,(int)local_2b0);
  FUN_00425ac0();
  local_2b0 = CONCAT44(0x83901d,(int)local_2b0);
  FUN_004d61d0();
  puVar3 = local_138;
LAB_00839029:
  local_1b0 = *(undefined4 *)(param_1 + 0x14);
  if (0 < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x18) * 4) + 0xe4c)) {
    if (local_13c != puVar3) {
      puVar5 = local_13c;
      do {
        if (puVar5[1] == *(int *)(param_1 + 0x18)) {
          if (puVar5 != puVar3) goto LAB_0083907c;
          break;
        }
        puVar5 = puVar5 + 2;
      } while (puVar5 != puVar3);
    }
    local_2b0 = CONCAT44(0x839076,(int)local_2b0);
    FUN_004d61d0();
  }
LAB_0083907c:
  local_1b0 = *(undefined4 *)(param_1 + 0x1c);
  if (0 < *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0x20) * 4) + 0xe4c)) {
    if (local_14c != local_148) {
      puVar3 = local_14c;
      do {
        if (puVar3[1] == *(int *)(param_1 + 0x20)) {
          if (puVar3 != local_148) goto LAB_008390cd;
          break;
        }
        puVar3 = puVar3 + 2;
      } while (puVar3 != local_148);
    }
    local_2b0 = CONCAT44(0x8390cd,(int)local_2b0);
    FUN_004d61d0();
  }
LAB_008390cd:
  local_2b0 = 0xded94d;
  local_154 = 0xf;
  local_158 = 0;
  local_168[0] = local_168[0] & 0xffffff00;
  local_2b8 = CONCAT44(0x8390f5,(undefined4)local_2b8);
  FUN_00409350();
  local_8._0_1_ = 2;
  local_2b0 = 0xded94d;
  local_170 = 0xf;
  local_174 = 0;
  local_184[0] = local_184[0] & 0xffffff00;
  local_2b8 = CONCAT44(0x83911c,(undefined4)local_2b8);
  FUN_00409350();
  local_8._0_1_ = 3;
  if ((char)param_5 != '\0') {
    local_2b0 = CONCAT44(param_7,1);
    local_2b8 = 0x83913a;
    cVar2 = FUN_00952850();
    if (cVar2 == '\0') {
      if (param_4 != 0) {
        local_2b0 = 0x100dee2cc;
        local_94 = 0xf;
        local_98 = 0;
        local_a8[0] = local_a8[0] & 0xffffff00;
        local_2b8 = CONCAT44(0x839d1d,(undefined4)local_2b8);
        FUN_00409350();
        local_8._0_1_ = 0x34;
        local_2b0 = 0x1900e269b8;
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        local_2b8 = CONCAT44(0x839d3f,(undefined4)local_2b8);
        FUN_00409350();
        local_2b0 = CONCAT44(local_8c,local_124);
        local_8._0_1_ = 0x35;
        local_2b8 = CONCAT44(0x839d56,(undefined4)local_2b8);
        FUN_009a8ee0();
        local_8._0_1_ = 0x36;
        local_2b0 = CONCAT44(0x839d61,(int)local_2b0);
        iVar4 = FUN_00475500();
        local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
        local_2b0 = *(undefined8 *)(iVar4 + 0x74);
        FUN_009a9880();
        local_8._0_1_ = 0x37;
        local_2b0 = CONCAT44(local_a8,0x839d9e);
        uVar8 = FUN_00988f20();
        local_2b0 = 0xffffffff00000000;
        local_8._0_1_ = 0x38;
        local_2b8 = CONCAT44(uVar8,0x839dae);
        FUN_00448aa0();
        if (0xf < local_b0) {
          local_2b0 = CONCAT44(local_c4[0],&UNK_00839dc7);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_b0 = 0xf;
        local_b4 = 0;
        local_c4[0] = local_c4[0] & 0xffffff00;
        if (0xf < local_cc) {
          local_2b0 = CONCAT44(local_e0[0],&UNK_00839df5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_cc = 0xf;
        local_d0 = 0;
        local_e0[0] = local_e0[0] & 0xffffff00;
        local_8._0_1_ = 0x35;
        local_2b0 = CONCAT44(local_124,0x839e1a);
        FUN_009a9740();
        if (0xf < local_78) {
          local_2b0 = CONCAT44(local_8c[0],&UNK_00839e2b);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_78 = 0xf;
        local_7c = 0;
        local_8c[0] = local_8c[0] & 0xffffff00;
        if (0xf < local_94) {
          local_2b0 = CONCAT44(local_a8[0],&UNK_00839e4e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (0xf < local_170) {
          local_2b0 = CONCAT44(local_184[0],&UNK_00839e65);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        local_170 = 0xf;
        local_174 = 0;
        local_184[0] = local_184[0] & 0xffffff00;
        if (0xf < local_154) {
          local_2b0 = CONCAT44(local_168[0],&UNK_00839e8e);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
LAB_0083b389:
        local_154 = 0xf;
        local_170 = 0xf;
        local_174 = 0;
        local_168[0] = local_168[0] & 0xffffff00;
        local_158 = 0;
        if (local_13c != (undefined4 *)0x0) {
          local_2b0 = CONCAT44(local_13c,&UNK_0083b3a5);
                    /* WARNING: Subroutine does not return */
          FUN_00aae91b();
        }
        if (local_14c == (undefined4 *)0x0) {
          ExceptionList = local_10;
          return;
        }
        local_2b0 = CONCAT44(local_14c,&UNK_0083b3b8);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
    }
    else {
      local_2b0 = CONCAT44(0x83914f,(int)local_2b0);
      FUN_0094be20();
      if ((char)param_7 == '\0') {
        local_2b0 = CONCAT44(0x83916e,(int)local_2b0);
        puVar3 = (undefined4 *)FUN_00425a40();
      }
      else {
        local_2b0 = CONCAT44(0x839161,(int)local_2b0);
        puVar3 = (undefined4 *)FUN_00425ac0();
      }
      uVar8 = *puVar3;
      local_104 = puVar3[1];
      local_2b0 = CONCAT44(0x839184,(int)local_2b0);
      FUN_0094bd40();
      local_1f4 = local_104;
      local_200 = param_8;
      local_1fc = param_9;
      local_2b0 = CONCAT44(0x8391b3,(int)local_2b0);
      local_1f8 = uVar8;
      FUN_0094bd40();
      local_2b0 = 0;
      local_240 = param_8;
      local_234 = local_104;
      param_5 = &local_2b8;
      local_23c = param_9;
      local_2b8 = CONCAT44(1,*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) + -2000);
      local_238 = uVar8;
      piVar6 = (int *)FUN_00845ad0(&param_5,local_12c,local_218,0);
      iVar4 = *piVar6 + DAT_01317cb8;
      local_2b0 = ZEXT48(local_298) << 0x20;
      param_5 = &local_2b8;
      local_2b8 = CONCAT44(1,*(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24) + -2000);
      piVar6 = (int *)FUN_00845ad0(&param_5,local_12c,local_258,0);
      param_5 = (undefined8 *)(*piVar6 + DAT_01317cb8);
      local_2b0 = 0x43fa400100839271;
      FUN_00401000();
      local_2b0 = CONCAT44(0x839279,(int)local_2b0);
      local_1c = FUN_00b31c00();
      if (iVar4 == 0) {
        iVar4 = -1;
      }
      else if (((int)param_5 < -0x189373) || (0x20c49a < (int)param_5)) {
        local_10c = (int)param_5 >> 0x1f;
        local_104 = iVar4 >> 0x1f;
        local_2b0 = 1000;
        local_2b8 = (ulonglong)(int)param_5;
        local_2b8 = __allmul();
        local_2b0 = CONCAT44(local_104,iVar4);
        iVar4 = __alldiv();
        local_10c = iVar4 >> 0x1f;
      }
      else {
        iVar4 = ((int)param_5 * 1000) / iVar4;
      }
      local_2b0 = 2000;
      local_2b8 = (ulonglong)(iVar4 - local_1c);
      local_2b8 = __allmul();
      local_2b0 = 1000;
      iVar4 = __alldiv();
      local_2b0 = 0xc43b600000839314;
      FUN_00401000();
      local_2b0 = CONCAT44(0x83931c,(int)local_2b0);
      iVar7 = FUN_00b31c00();
      if (iVar4 < iVar7) {
        iVar4 = -2000;
      }
      local_2b0 = 50000;
      local_2b8 = (ulonglong)iVar4;
      local_2b8 = __allmul();
      local_2b0 = 1000;
      iVar4 = __alldiv();
      iVar4 = (local_1c + iVar4) / 1000;
      if ((char)param_7 == '\0') {
        *param_3 = *param_3 + iVar4;
        if (param_4 == 0) goto LAB_00839686;
        if (iVar4 < 1) {
          if (iVar4 < 0) {
            local_2b0 = CONCAT44(0x839bb8,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0x24;
            local_2b0 = CONCAT44(0x839bc9,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0x25;
            local_2b0 = CONCAT44(local_8c,0x839bdb);
            uVar8 = FUN_009888f0();
            local_8._0_1_ = 0x26;
            local_2b0 = CONCAT44(0x839bef,(int)local_2b0);
            uVar9 = FUN_0094c240();
            local_2b0 = CONCAT44(uVar9,local_c4);
            local_8._0_1_ = 0x27;
            local_2b8 = CONCAT44(0x839c0a,(undefined4)local_2b8);
            FUN_0042c180();
            local_8._0_1_ = 0x28;
            local_2b0 = CONCAT44(local_38,0x839c22);
            FUN_00988f20();
            local_8._0_1_ = 0x29;
            local_2b0 = CONCAT44(uVar8,0x839c34);
            FUN_00988f20();
            local_8._0_1_ = 0x2a;
            local_2b0 = CONCAT44(local_54,0x839c46);
            uVar8 = FUN_00988f20();
            local_8._0_1_ = 0x2b;
          }
          else {
            local_2b0 = CONCAT44(0x839c54,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0x2c;
            local_2b0 = CONCAT44(0x839c65,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0x2d;
            local_2b0 = CONCAT44(local_8c,0x839c77);
            uVar8 = FUN_009888f0();
            local_8._0_1_ = 0x2e;
            local_2b0 = CONCAT44(0x839c8b,(int)local_2b0);
            uVar9 = FUN_0094c240();
            local_2b0 = CONCAT44(uVar9,local_c4);
            local_8._0_1_ = 0x2f;
            local_2b8 = CONCAT44(0x839ca6,(undefined4)local_2b8);
            FUN_0042c180();
            local_8._0_1_ = 0x30;
            local_2b0 = CONCAT44(local_38,0x839cbe);
            FUN_00988f20();
            local_8._0_1_ = 0x31;
            local_2b0 = CONCAT44(uVar8,0x839cd0);
            FUN_00988f20();
            local_8._0_1_ = 0x32;
            local_2b0 = CONCAT44(local_54,0x839ce2);
            uVar8 = FUN_00988f20();
            local_8._0_1_ = 0x33;
          }
        }
        else {
          local_2b0 = CONCAT44(0x83958f,(int)local_2b0);
          FUN_009885d0();
          local_8._0_1_ = 0x1c;
          local_2b0 = CONCAT44(0x8395a0,(int)local_2b0);
          FUN_009885d0();
          local_8._0_1_ = 0x1d;
          local_2b0 = CONCAT44(local_8c,0x8395b2);
          uVar8 = FUN_009888f0();
          local_8._0_1_ = 0x1e;
          local_2b0 = CONCAT44(0x8395c6,(int)local_2b0);
          uVar9 = FUN_0094c240();
          local_2b0 = CONCAT44(uVar9,local_c4);
          local_8._0_1_ = 0x1f;
          local_2b8 = CONCAT44(0x8395e1,(undefined4)local_2b8);
          FUN_0042c180();
          local_8._0_1_ = 0x20;
          local_2b0 = CONCAT44(local_38,0x8395f9);
          FUN_00988f20();
          local_8._0_1_ = 0x21;
          local_2b0 = CONCAT44(uVar8,0x83960b);
          FUN_00988f20();
          local_8._0_1_ = 0x22;
          local_2b0 = CONCAT44(local_54,0x83961d);
          uVar8 = FUN_00988f20();
          local_8._0_1_ = 0x23;
        }
      }
      else {
        *param_2 = *param_2 + iVar4;
        if (param_4 == 0) goto LAB_00839686;
        if (iVar4 < 1) {
          if (iVar4 < 0) {
            local_2b0 = CONCAT44(0x83942d,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0xc;
            local_2b0 = CONCAT44(0x83943e,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0xd;
            local_2b0 = CONCAT44(local_8c,0x839450);
            uVar8 = FUN_009888f0();
            local_8._0_1_ = 0xe;
            local_2b0 = CONCAT44(0x839464,(int)local_2b0);
            uVar9 = FUN_0094c240();
            local_2b0 = CONCAT44(uVar9,local_c4);
            local_8._0_1_ = 0xf;
            local_2b8 = CONCAT44(0x83947f,(undefined4)local_2b8);
            FUN_0042c180();
            local_8._0_1_ = 0x10;
            local_2b0 = CONCAT44(local_38,0x839497);
            FUN_00988f20();
            local_8._0_1_ = 0x11;
            local_2b0 = CONCAT44(uVar8,0x8394a9);
            FUN_00988f20();
            local_8._0_1_ = 0x12;
            local_2b0 = CONCAT44(local_54,0x8394bb);
            uVar8 = FUN_00988f20();
            local_8._0_1_ = 0x13;
          }
          else {
            local_2b0 = CONCAT44(0x8394cf,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0x14;
            local_2b0 = CONCAT44(0x8394e0,(int)local_2b0);
            FUN_009885d0();
            local_8._0_1_ = 0x15;
            local_2b0 = CONCAT44(local_8c,0x8394f2);
            uVar8 = FUN_009888f0();
            local_8._0_1_ = 0x16;
            local_2b0 = CONCAT44(0x839506,(int)local_2b0);
            uVar9 = FUN_0094c240();
            local_2b0 = CONCAT44(uVar9,local_c4);
            local_8._0_1_ = 0x17;
            local_2b8 = CONCAT44(0x839521,(undefined4)local_2b8);
            FUN_0042c180();
            local_8._0_1_ = 0x18;
            local_2b0 = CONCAT44(local_38,0x839539);
            FUN_00988f20();
            local_8._0_1_ = 0x19;
            local_2b0 = CONCAT44(uVar8,0x83954b);
            FUN_00988f20();
            local_8._0_1_ = 0x1a;
            local_2b0 = CONCAT44(local_54,0x83955d);
            uVar8 = FUN_00988f20();
            local_8._0_1_ = 0x1b;
          }
        }
        else {
          local_2b0 = CONCAT44(0x839385,(int)local_2b0);
          FUN_009885d0();
          local_8._0_1_ = 4;
          local_2b0 = CONCAT44(0x839396,(int)local_2b0);
          FUN_009885d0();
          local_8._0_1_ = 5;
          local_2b0 = CONCAT44(local_8c,0x8393a8);
          uVar8 = FUN_009888f0();
          local_8._0_1_ = 6;
          local_2b0 = CONCAT44(0x8393bc,(int)local_2b0);
          uVar9 = FUN_0094c240();
          local_2b0 = CONCAT44(uVar9,local_c4);
          local_8._0_1_ = 7;
          local_2b8 = CONCAT44(0x8393d7,(undefined4)local_2b8);
          FUN_0042c180();
          local_8._0_1_ = 8;
          local_2b0 = CONCAT44(local_38,0x8393ef);
          FUN_00988f20();
          local_8._0_1_ = 9;
          local_2b0 = CONCAT44(uVar8,0x839401);
          FUN_00988f20();
          local_8._0_1_ = 10;
          local_2b0 = CONCAT44(local_54,0x839413);
          uVar8 = FUN_00988f20();
          local_8._0_1_ = 0xb;
        }
      }
      local_2b0 = 0xffffffff00000000;
      local_2b8 = CONCAT44(uVar8,0x839630);
      FUN_00448aa0();
      local_2b0 = CONCAT44(0x839638,(int)local_2b0);
      FUN_00408ad0();
      local_2b0 = CONCAT44(0x839643,(int)local_2b0);
      FUN_00408ad0();
      local_2b0 = CONCAT44(0x83964e,(int)local_2b0);
      FUN_00408ad0();
      local_2b0 = CONCAT44(0x839659,(int)local_2b0);
      FUN_00408ad0();
      local_2b0 = CONCAT44(0x839664,(int)local_2b0);
      FUN_00408ad0();
      local_2b0 = CONCAT44(0x83966f,(int)local_2b0);
      FUN_00408ad0();
      local_2b0 = CONCAT44(0x839677,(int)local_2b0);
      FUN_00408ad0();
      local_8._0_1_ = 3;
      local_2b0 = CONCAT44(0x839683,(int)local_2b0);
      FUN_00408ad0();
    }
  }
LAB_00839686:
  iVar4 = *(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 6;
  param_5 = (undefined8 *)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 6);
  if ((0 < iVar4) && (*(int *)(*(int *)(param_1 + 0x88) + 0x1c) == *(int *)(param_1 + 0x18))) {
    iVar4 = iVar4 + -1;
  }
  if ((0 < (int)param_5) && (*(int *)(*(int *)(param_1 + 0x98) + 0x1c) == *(int *)(param_1 + 0x20)))
  {
    param_5 = (undefined8 *)((int)param_5 + -1);
  }
  if ((0 < iVar4) && (*param_2 = *param_2 + iVar4 * -0x1e, param_4 != 0)) {
    local_2b0 = 0x300dfc7b4;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    local_2b8 = CONCAT44(0x83970e,(undefined4)local_2b8);
    FUN_00409350();
    local_8._0_1_ = 0x39;
    local_2b0 = 0x400dfc938;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    local_2b8 = CONCAT44(0x83972a,(undefined4)local_2b8);
    FUN_00409350();
    local_8._0_1_ = 0x3a;
    local_2b0 = 0x2100e269d4;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_2b8 = CONCAT44(0x83974c,(undefined4)local_2b8);
    FUN_00409350();
    local_8._0_1_ = 0x3b;
    local_2b0 = CONCAT44(local_70,0x83975b);
    uVar8 = FUN_009888f0();
    local_2b0 = CONCAT44(local_8c,local_124);
    local_8._0_1_ = 0x3c;
    local_2b8 = CONCAT44(0x839774,(undefined4)local_2b8);
    local_1c = FUN_009a8ee0();
    local_8._0_1_ = 0x3d;
    local_2b0 = CONCAT44(0x839780,(int)local_2b0);
    iVar4 = FUN_00475500();
    local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
    local_2b0 = *(undefined8 *)(iVar4 + 0x74);
    FUN_009a9880();
    local_8._0_1_ = 0x3e;
    local_2b0 = CONCAT44(local_54,0x8397bb);
    FUN_00988f20();
    local_8._0_1_ = 0x3f;
    local_2b0 = CONCAT44(uVar8,0x8397cd);
    FUN_00988f20();
    local_8._0_1_ = 0x40;
    local_2b0 = CONCAT44(local_38,0x8397e2);
    uVar8 = FUN_00988f20();
    local_2b0 = 0xffffffff00000000;
    local_8._0_1_ = 0x41;
    local_2b8 = CONCAT44(uVar8,0x8397f5);
    FUN_00448aa0();
    if (0xf < local_cc) {
      local_2b0 = CONCAT44(local_e0[0],&UNK_0083980e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0[0] = local_e0[0] & 0xffffff00;
    if (0xf < local_b0) {
      local_2b0 = CONCAT44(local_c4[0],&UNK_0083983c);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_94) {
      local_2b0 = CONCAT44(local_a8[0],&UNK_00839865);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    if (0xf < local_ec) {
      local_2b0 = CONCAT44(local_100[0],&UNK_0083988e);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_ec = 0xf;
    local_f0 = 0;
    local_100[0] = local_100[0] & 0xffffff00;
    local_8._0_1_ = 0x42;
    local_2b0 = CONCAT44(0x8398b4,(int)local_2b0);
    FUN_009adb70();
    if (local_120 != 0) {
      local_2b0 = CONCAT44(0x8398c9,(int)local_2b0);
      FUN_009e6a80();
      local_2b0 = CONCAT44(local_120,&UNK_008398d5);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_120 = 0;
    local_11c = 0;
    local_118 = 0;
    if (0xf < local_5c) {
      local_2b0 = CONCAT44(local_70[0],&UNK_008398fd);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
      local_2b0 = CONCAT44(local_8c[0],&UNK_0083991a);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    local_2b0 = CONCAT44(0x839931,(int)local_2b0);
    FUN_00408ad0();
    local_8._0_1_ = 3;
    local_2b0 = CONCAT44(0x83993d,(int)local_2b0);
    FUN_00408ad0();
  }
  if ((0 < (int)param_5) && (*param_3 = *param_3 + (int)param_5 * -0x1e, param_4 != 0)) {
    local_2b0 = CONCAT44(0x83996e,(int)local_2b0);
    FUN_009885d0();
    local_8._0_1_ = 0x43;
    local_2b0 = CONCAT44(0x83997f,(int)local_2b0);
    FUN_009885d0();
    local_8._0_1_ = 0x44;
    local_2b0 = CONCAT44(0x839990,(int)local_2b0);
    FUN_009885d0();
    local_8._0_1_ = 0x45;
    local_2b0 = CONCAT44(local_8c,0x8399a2);
    uVar8 = FUN_009888f0();
    local_2b0 = CONCAT44(local_38,local_124);
    local_8._0_1_ = 0x46;
    local_2b8 = CONCAT44(0x8399b7,(undefined4)local_2b8);
    param_5 = (undefined8 *)FUN_009a8ee0();
    local_8._0_1_ = 0x47;
    local_2b0 = CONCAT44(0x8399c3,(int)local_2b0);
    iVar4 = FUN_00475500();
    local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
    local_2b0 = *(undefined8 *)(iVar4 + 0x74);
    FUN_009a9880();
    local_8._0_1_ = 0x48;
    local_2b0 = CONCAT44(local_54,0x8399fe);
    FUN_00988f20();
    local_8._0_1_ = 0x49;
    local_2b0 = CONCAT44(uVar8,0x839a10);
    FUN_00988f20();
    local_8._0_1_ = 0x4a;
    local_2b0 = CONCAT44(local_70,0x839a25);
    uVar8 = FUN_00988f20();
    local_2b0 = 0xffffffff00000000;
    local_8._0_1_ = 0x4b;
    local_2b8 = CONCAT44(uVar8,0x839a38);
    FUN_00448aa0();
    local_2b0 = CONCAT44(0x839a3f,(int)local_2b0);
    FUN_00408ad0();
    local_2b0 = CONCAT44(0x839a4a,(int)local_2b0);
    FUN_00408ad0();
    local_2b0 = CONCAT44(0x839a55,(int)local_2b0);
    FUN_00408ad0();
    local_2b0 = CONCAT44(0x839a60,(int)local_2b0);
    FUN_00408ad0();
    local_8._0_1_ = 0x46;
    local_2b0 = CONCAT44(local_124,0x839a70);
    FUN_009a9740();
    local_2b0 = CONCAT44(0x839a7b,(int)local_2b0);
    FUN_00408ad0();
    local_2b0 = CONCAT44(0x839a83,(int)local_2b0);
    FUN_00408ad0();
    local_2b0 = CONCAT44(0x839a8b,(int)local_2b0);
    FUN_00408ad0();
    local_8._0_1_ = 3;
    local_2b0 = CONCAT44(0x839a97,(int)local_2b0);
    FUN_00408ad0();
  }
  local_128 = 0;
  param_5 = (undefined8 *)0x0;
  local_e4 = 0;
  local_1c = 0;
  local_110 = local_13c;
LAB_00839ac3:
  do {
    do {
      do {
        if ((local_110 < local_13c) || (local_138 <= local_110)) {
          iVar4 = local_128 / local_e4;
          if (iVar4 < 0xc9) {
            if (iVar4 < -200) {
              iVar4 = -200;
            }
          }
          else {
            iVar4 = 200;
          }
          if (param_4 != 0) {
            if (iVar4 < 1) {
              if (-1 < iVar4) goto LAB_0083a62b;
              local_2b0 = CONCAT44(0x83a4f8,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x67;
              local_2b0 = CONCAT44(0x83a509,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x68;
              local_2b0 = CONCAT44(0x83a51a,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x69;
              local_2b0 = CONCAT44(local_8c,0x83a52c);
              local_e4 = FUN_009888f0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0x6a;
              local_2b8 = CONCAT44(0x83a545,(undefined4)local_2b8);
              local_18 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0x6b;
              local_2b0 = CONCAT44(0x83a551,(int)local_2b0);
              iVar7 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar7 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar7 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0x6c;
              local_2b0 = CONCAT44(local_54,0x83a58c);
              FUN_00988f20();
              local_8._0_1_ = 0x6d;
              local_2b0 = CONCAT44(local_e4,0x83a5a4);
              FUN_00988f20();
              local_8._0_1_ = 0x6e;
              local_2b0 = CONCAT44(local_70,0x83a5b9);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0x6f;
              local_2b8 = CONCAT44(uVar8,0x83a5cc);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83a5d3,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83a5de,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83a5e9,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83a5f4,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0x6a;
            }
            else {
              local_2b0 = CONCAT44(0x83a3e0,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x5e;
              local_2b0 = CONCAT44(0x83a3f1,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x5f;
              local_2b0 = CONCAT44(0x83a402,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x60;
              local_2b0 = CONCAT44(local_8c,0x83a414);
              local_e4 = FUN_009888f0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0x61;
              local_2b8 = CONCAT44(0x83a42d,(undefined4)local_2b8);
              local_18 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0x62;
              local_2b0 = CONCAT44(0x83a439,(int)local_2b0);
              iVar7 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar7 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar7 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 99;
              local_2b0 = CONCAT44(local_54,0x83a474);
              FUN_00988f20();
              local_8._0_1_ = 100;
              local_2b0 = CONCAT44(local_e4,0x83a48c);
              FUN_00988f20();
              local_8._0_1_ = 0x65;
              local_2b0 = CONCAT44(local_70,0x83a4a1);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0x66;
              local_2b8 = CONCAT44(uVar8,0x83a4b4);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83a4bb,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83a4c6,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83a4d1,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83a4dc,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0x61;
            }
            local_2b0 = CONCAT44(local_124,0x83a604);
            FUN_009a9740();
            local_2b0 = CONCAT44(0x83a60f,(int)local_2b0);
            FUN_00408ad0();
            local_2b0 = CONCAT44(0x83a617,(int)local_2b0);
            FUN_00408ad0();
            local_2b0 = CONCAT44(0x83a61f,(int)local_2b0);
            FUN_00408ad0();
            local_8._0_1_ = 3;
            local_2b0 = CONCAT44(0x83a62b,(int)local_2b0);
            FUN_00408ad0();
          }
LAB_0083a62b:
          *param_2 = *param_2 + iVar4;
          local_110 = local_14c;
          uVar1 = (undefined1)local_8;
          while ((local_8._0_1_ = uVar1, local_14c <= local_110 && (local_110 < local_148))) {
            iVar4 = local_110[1];
            local_108 = *local_110;
            local_1ac = (undefined1 *)&local_2b0;
            local_2b0 = 0x1000003e8;
            local_2b8 = ZEXT48(&local_108);
            local_110 = local_110 + 2;
            local_104 = iVar4;
            iVar7 = FUN_00834150(&param_8);
            param_5 = (undefined8 *)((int)param_5 + iVar7);
            iVar7 = *(int *)(local_12c + 0xd5c);
            iVar10 = *(int *)(local_12c + 0xd58);
            local_1c = local_1c + 1;
            uVar1 = (undefined1)local_8;
            if (iVar10 != iVar7) {
              do {
                if (*(int *)(iVar10 + 4) == iVar4) break;
                iVar10 = iVar10 + 8;
              } while (iVar10 != iVar7);
              if (((iVar10 != iVar7) && (iVar4 == *(int *)(local_18c + 0x20))) &&
                 (*param_3 = *param_3 + 100, param_4 != 0)) {
                local_2b0 = 0x300dfc7b4;
                local_78 = 0xf;
                local_7c = 0;
                local_8c[0] = local_8c[0] & 0xffffff00;
                local_2b8 = CONCAT44(0x83a714,(undefined4)local_2b8);
                FUN_00409350();
                local_8._0_1_ = 0x70;
                local_2b0 = 0xe006580083a728;
                FUN_004471e0();
                local_8._0_1_ = 0x71;
                local_2b0 = 0xe269f80083a73c;
                FUN_004471e0();
                local_8._0_1_ = 0x72;
                local_2b0 = CONCAT44(local_e0,0x83a751);
                uVar8 = FUN_009888f0();
                local_2b0 = CONCAT44(local_c4,local_124);
                local_8._0_1_ = 0x73;
                local_2b8 = CONCAT44(0x83a76a,(undefined4)local_2b8);
                local_18 = (int *)FUN_009a8ee0();
                local_8._0_1_ = 0x74;
                local_2b0 = CONCAT44(0x83a776,(int)local_2b0);
                iVar4 = FUN_00475500();
                local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
                local_2b0 = *(undefined8 *)(iVar4 + 0x74);
                FUN_009a9880();
                local_8._0_1_ = 0x75;
                local_2b0 = CONCAT44(local_a8,0x83a7b1);
                FUN_00988f20();
                local_8._0_1_ = 0x76;
                local_2b0 = CONCAT44(uVar8,0x83a7c0);
                FUN_00988f20();
                local_8._0_1_ = 0x77;
                local_2b0 = CONCAT44(local_8c,0x83a7d5);
                uVar8 = FUN_00988f20();
                local_2b0 = 0xffffffff00000000;
                local_8._0_1_ = 0x78;
                local_2b8 = CONCAT44(uVar8,0x83a7e8);
                FUN_00448aa0();
                if (0xf < local_24) {
                  local_2b0 = CONCAT44(local_38[0],&UNK_0083a7f7);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_24 = 0xf;
                local_28 = 0;
                local_38[0] = local_38[0] & 0xffffff00;
                if (0xf < local_40) {
                  local_2b0 = CONCAT44(local_54[0],&UNK_0083a81b);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_40 = 0xf;
                local_44 = 0;
                local_54[0] = local_54[0] & 0xffffff00;
                if (0xf < local_5c) {
                  local_2b0 = CONCAT44(local_70[0],&UNK_0083a835);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_5c = 0xf;
                local_60 = 0;
                local_70[0] = local_70[0] & 0xffffff00;
                if (0xf < local_ec) {
                  local_2b0 = CONCAT44(local_100[0],&UNK_0083a855);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_ec = 0xf;
                local_f0 = 0;
                local_100[0] = local_100[0] & 0xffffff00;
                local_8._0_1_ = 0x73;
                local_2b0 = CONCAT44(local_124,0x83a87a);
                FUN_009a9740();
                if (0xf < local_cc) {
                  local_2b0 = CONCAT44(local_e0[0],&UNK_0083a88e);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_cc = 0xf;
                local_d0 = 0;
                local_e0[0] = local_e0[0] & 0xffffff00;
                if (0xf < local_b0) {
                  local_2b0 = CONCAT44(local_c4[0],&UNK_0083a8b7);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_b0 = 0xf;
                local_b4 = 0;
                local_c4[0] = local_c4[0] & 0xffffff00;
                if (0xf < local_94) {
                  local_2b0 = CONCAT44(local_a8[0],&UNK_0083a8e0);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
                local_8._0_1_ = 3;
                uVar1 = (undefined1)local_8;
                local_8._0_1_ = 3;
                local_94 = 0xf;
                local_98 = 0;
                local_a8[0] = local_a8[0] & 0xffffff00;
                if (0xf < local_78) {
                  local_2b0 = CONCAT44(local_8c[0],&UNK_0083a90e);
                    /* WARNING: Subroutine does not return */
                  FUN_00aae91b();
                }
              }
            }
          }
          param_5 = (undefined8 *)((int)param_5 / local_1c);
          if ((int)param_5 < 0xc9) {
            if ((int)param_5 < -200) {
              param_5 = (undefined8 *)0xffffff38;
            }
          }
          else {
            param_5 = (undefined8 *)0xc8;
          }
          if (param_4 != 0) {
            if ((int)param_5 < 1) {
              if (-1 < (int)param_5) goto LAB_0083aba8;
              local_2b0 = CONCAT44(0x83aa77,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x82;
              local_2b0 = CONCAT44(0x83aa88,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x83;
              local_2b0 = CONCAT44(0x83aa99,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x84;
              local_2b0 = CONCAT44(local_8c,0x83aaac);
              local_1c = FUN_009888f0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0x85;
              local_2b8 = CONCAT44(0x83aac2,(undefined4)local_2b8);
              local_18 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0x86;
              local_2b0 = CONCAT44(0x83aace,(int)local_2b0);
              iVar4 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar4 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0x87;
              local_2b0 = CONCAT44(local_54,0x83ab09);
              FUN_00988f20();
              local_8._0_1_ = 0x88;
              local_2b0 = CONCAT44(local_1c,0x83ab1e);
              FUN_00988f20();
              local_8._0_1_ = 0x89;
              local_2b0 = CONCAT44(local_70,0x83ab33);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0x8a;
              local_2b8 = CONCAT44(uVar8,0x83ab46);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83ab4d,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ab58,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ab63,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ab6e,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0x85;
            }
            else {
              local_2b0 = CONCAT44(0x83a95d,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x79;
              local_2b0 = CONCAT44(0x83a96e,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x7a;
              local_2b0 = CONCAT44(0x83a97f,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x7b;
              local_2b0 = CONCAT44(local_8c,0x83a992);
              local_1c = FUN_009888f0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0x7c;
              local_2b8 = CONCAT44(0x83a9a8,(undefined4)local_2b8);
              local_18 = (int *)FUN_009a8ee0();
              local_8._0_1_ = 0x7d;
              local_2b0 = CONCAT44(0x83a9b4,(int)local_2b0);
              iVar4 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar4 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0x7e;
              local_2b0 = CONCAT44(local_54,0x83a9ef);
              FUN_00988f20();
              local_8._0_1_ = 0x7f;
              local_2b0 = CONCAT44(local_1c,0x83aa04);
              FUN_00988f20();
              local_8._0_1_ = 0x80;
              local_2b0 = CONCAT44(local_70,0x83aa19);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0x81;
              local_2b8 = CONCAT44(uVar8,0x83aa2c);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83aa33,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83aa3e,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83aa49,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83aa54,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0x7c;
            }
            local_2b0 = CONCAT44(local_124,0x83ab7e);
            FUN_009a9740();
            local_2b0 = CONCAT44(0x83ab89,(int)local_2b0);
            FUN_00408ad0();
            local_2b0 = CONCAT44(0x83ab91,(int)local_2b0);
            FUN_00408ad0();
            local_2b0 = CONCAT44(0x83ab99,(int)local_2b0);
            FUN_00408ad0();
            local_8._0_1_ = 3;
            local_2b0 = CONCAT44(0x83aba5,(int)local_2b0);
            FUN_00408ad0();
          }
LAB_0083aba8:
          *param_3 = *param_3 + (int)param_5;
          param_5 = (undefined8 *)((*(int *)(param_1 + 0x10) / 1000) * 2 + -0x32);
          if ((int)param_5 < 0) {
            *param_2 = *param_2 + (int)param_5;
            *param_3 = *param_3 + (int)param_5;
            if (param_4 != 0) {
              local_2b0 = CONCAT44(0x83abef,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x8b;
              local_2b0 = CONCAT44(0x83ac00,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x8c;
              local_2b0 = CONCAT44(0x83ac11,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x8d;
              local_2b0 = CONCAT44(local_1a8,0x83ac24);
              local_18 = (int *)FUN_009888f0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0x8e;
              local_2b8 = CONCAT44(0x83ac3a,(undefined4)local_2b8);
              FUN_009a8ee0();
              local_8._0_1_ = 0x8f;
              local_2b0 = CONCAT44(0x83ac46,(int)local_2b0);
              iVar4 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar4 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0x90;
              local_2b0 = CONCAT44(local_54,0x83ac81);
              FUN_00988f20();
              local_8._0_1_ = 0x91;
              local_2b0 = CONCAT44(local_18,0x83ac96);
              FUN_00988f20();
              local_8._0_1_ = 0x92;
              local_2b0 = CONCAT44(local_70,0x83acab);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0x93;
              local_2b8 = CONCAT44(uVar8,0x83acbe);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83acc5,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83acd0,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83acdb,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ace6,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0x8e;
              local_2b0 = CONCAT44(local_124,0x83acf6);
              FUN_009a9740();
              local_2b0 = CONCAT44(0x83ad01,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ad09,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ad11,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 3;
              local_2b0 = CONCAT44(0x83ad1d,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ad2d,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x94;
              local_2b0 = CONCAT44(0x83ad3e,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x95;
              local_2b0 = CONCAT44(0x83ad4f,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x96;
              local_2b0 = CONCAT44(local_a8,0x83ad62);
              uVar8 = FUN_009888f0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0x97;
              local_2b8 = CONCAT44(0x83ad78,(undefined4)local_2b8);
              param_5 = (undefined8 *)FUN_009a8ee0();
              local_8._0_1_ = 0x98;
              local_2b0 = CONCAT44(0x83ad84,(int)local_2b0);
              iVar4 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar4 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0x99;
              local_2b0 = CONCAT44(local_54,0x83adbf);
              FUN_00988f20();
              local_8._0_1_ = 0x9a;
              local_2b0 = CONCAT44(uVar8,0x83add1);
              FUN_00988f20();
              local_8._0_1_ = 0x9b;
              local_2b0 = CONCAT44(local_100,0x83ade9);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0x9c;
              local_2b8 = CONCAT44(uVar8,0x83adfc);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83ae03,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ae0b,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ae16,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ae21,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0x97;
              local_2b0 = CONCAT44(local_124,0x83ae31);
              FUN_009a9740();
              local_2b0 = CONCAT44(0x83ae3c,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ae44,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83ae4c,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 3;
              local_2b0 = CONCAT44(0x83ae5b,(int)local_2b0);
              FUN_00408ad0();
              goto LAB_0083ae5b;
            }
          }
          else {
LAB_0083ae5b:
            if (param_4 != 0) {
              local_2b0 = CONCAT44(0x83ae70,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x9d;
              local_2b0 = CONCAT44(0x83ae81,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x9e;
              local_2b0 = CONCAT44(0x83ae92,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0x9f;
              local_2b0 = CONCAT44(0x83aea7,(int)local_2b0);
              uVar8 = FUN_004f97a0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0xa0;
              local_2b8 = CONCAT44(0x83aebd,(undefined4)local_2b8);
              param_5 = (undefined8 *)FUN_009a8ee0();
              local_8._0_1_ = 0xa1;
              local_2b0 = CONCAT44(0x83aec9,(int)local_2b0);
              iVar4 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar4 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0xa2;
              local_2b0 = CONCAT44(local_54,0x83af04);
              FUN_00988f20();
              local_8._0_1_ = 0xa3;
              local_2b0 = CONCAT44(uVar8,0x83af19);
              FUN_00988f20();
              local_8._0_1_ = 0xa4;
              local_2b0 = CONCAT44(local_70,0x83af2e);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0xa5;
              local_2b8 = CONCAT44(uVar8,0x83af3d);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83af44,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83af4f,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83af5a,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83af65,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0xa0;
              local_2b0 = CONCAT44(local_124,0x83af75);
              FUN_009a9740();
              local_2b0 = CONCAT44(0x83af80,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83af88,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83af90,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 3;
              local_2b0 = CONCAT44(0x83af9c,(int)local_2b0);
              FUN_00408ad0();
              if (*param_2 < 1) {
                if (*param_2 < 0) {
                  local_2b0 = CONCAT44(0x83affd,(int)local_2b0);
                  FUN_009885d0();
                  local_8._0_1_ = 0xaa;
                  local_2b0 = CONCAT44(local_70,0x83b00f);
                  uVar8 = FUN_009888f0();
                  local_8._0_1_ = 0xab;
                  local_2b0 = CONCAT44(uVar8,0x83b021);
                  FUN_00988fa0();
                  local_8._0_1_ = 0xac;
                  local_2b0 = CONCAT44(local_38,0x83b039);
                  uVar8 = FUN_00988f20();
                  local_8._0_1_ = 0xad;
                }
                else {
                  local_2b0 = CONCAT44(0x83b044,(int)local_2b0);
                  FUN_009885d0();
                  local_8._0_1_ = 0xae;
                  local_2b0 = CONCAT44(local_70,0x83b056);
                  uVar8 = FUN_009888f0();
                  local_8._0_1_ = 0xaf;
                  local_2b0 = CONCAT44(uVar8,0x83b068);
                  FUN_00988fa0();
                  local_8._0_1_ = 0xb0;
                  local_2b0 = CONCAT44(local_38,0x83b080);
                  uVar8 = FUN_00988f20();
                  local_8._0_1_ = 0xb1;
                }
              }
              else {
                local_2b0 = CONCAT44(0x83afb2,(int)local_2b0);
                FUN_009885d0();
                local_8._0_1_ = 0xa6;
                local_2b0 = CONCAT44(local_70,0x83afc4);
                uVar8 = FUN_009888f0();
                local_8._0_1_ = 0xa7;
                local_2b0 = CONCAT44(uVar8,0x83afd6);
                FUN_00988fa0();
                local_8._0_1_ = 0xa8;
                local_2b0 = CONCAT44(local_38,0x83afed);
                uVar8 = FUN_00988f20();
                local_8._0_1_ = 0xa9;
              }
              local_2b0 = 0xffffffff00000000;
              local_2b8 = CONCAT44(uVar8,0x83b08f);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83b09a,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b0a2,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b0aa,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 3;
              local_2b0 = CONCAT44(0x83b0b6,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = 0xffffffff00000000;
              local_2b8 = CONCAT44(local_168,0x83b0c7);
              FUN_00448aa0();
              local_2b0 = 0x100dee2cc;
              local_2b8 = CONCAT44(0x83b0d5,(undefined4)local_2b8);
              FUN_00448740();
              local_2b0 = CONCAT44(0x83b0e2,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0xb2;
              local_2b0 = CONCAT44(0x83b0f3,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0xb3;
              local_2b0 = CONCAT44(0x83b104,(int)local_2b0);
              FUN_009885d0();
              local_8._0_1_ = 0xb4;
              local_2b0 = CONCAT44(0x83b119,(int)local_2b0);
              uVar8 = FUN_004f97a0();
              local_2b0 = CONCAT44(local_38,local_124);
              local_8._0_1_ = 0xb5;
              local_2b8 = CONCAT44(0x83b12f,(undefined4)local_2b8);
              param_5 = (undefined8 *)FUN_009a8ee0();
              local_8._0_1_ = 0xb6;
              local_2b0 = CONCAT44(0x83b13b,(int)local_2b0);
              iVar4 = FUN_00475500();
              local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
              local_2b0 = *(undefined8 *)(iVar4 + 0x74);
              FUN_009a9880();
              local_8._0_1_ = 0xb7;
              local_2b0 = CONCAT44(local_54,0x83b176);
              FUN_00988f20();
              local_8._0_1_ = 0xb8;
              local_2b0 = CONCAT44(uVar8,0x83b18b);
              FUN_00988f20();
              local_8._0_1_ = 0xb9;
              local_2b0 = CONCAT44(local_70,0x83b1a0);
              uVar8 = FUN_00988f20();
              local_2b0 = 0xffffffff00000000;
              local_8._0_1_ = 0xba;
              local_2b8 = CONCAT44(uVar8,0x83b1af);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83b1b6,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b1c1,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b1cc,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b1d7,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 0xb5;
              local_2b0 = CONCAT44(local_124,0x83b1e7);
              FUN_009a9740();
              local_2b0 = CONCAT44(0x83b1f2,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b1fa,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b202,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 3;
              local_2b0 = CONCAT44(0x83b20e,(int)local_2b0);
              FUN_00408ad0();
              if (*param_3 < 1) {
                if (*param_3 < 0) {
                  local_2b0 = CONCAT44(0x83b26f,(int)local_2b0);
                  FUN_009885d0();
                  local_8._0_1_ = 0xbf;
                  local_2b0 = CONCAT44(local_70,0x83b281);
                  uVar8 = FUN_009888f0();
                  local_8._0_1_ = 0xc0;
                  local_2b0 = CONCAT44(uVar8,0x83b293);
                  FUN_00988fa0();
                  local_8._0_1_ = 0xc1;
                  local_2b0 = CONCAT44(local_38,0x83b2ab);
                  uVar8 = FUN_00988f20();
                  local_8._0_1_ = 0xc2;
                }
                else {
                  local_2b0 = CONCAT44(0x83b2b6,(int)local_2b0);
                  FUN_009885d0();
                  local_8._0_1_ = 0xc3;
                  local_2b0 = CONCAT44(local_70,0x83b2c8);
                  uVar8 = FUN_009888f0();
                  local_8._0_1_ = 0xc4;
                  local_2b0 = CONCAT44(uVar8,0x83b2da);
                  FUN_00988fa0();
                  local_8._0_1_ = 0xc5;
                  local_2b0 = CONCAT44(local_38,0x83b2f2);
                  uVar8 = FUN_00988f20();
                  local_8._0_1_ = 0xc6;
                }
              }
              else {
                local_2b0 = CONCAT44(0x83b224,(int)local_2b0);
                FUN_009885d0();
                local_8._0_1_ = 0xbb;
                local_2b0 = CONCAT44(local_70,0x83b236);
                uVar8 = FUN_009888f0();
                local_8._0_1_ = 0xbc;
                local_2b0 = CONCAT44(uVar8,0x83b248);
                FUN_00988fa0();
                local_8._0_1_ = 0xbd;
                local_2b0 = CONCAT44(local_38,0x83b25f);
                uVar8 = FUN_00988f20();
                local_8._0_1_ = 0xbe;
              }
              local_2b0 = 0xffffffff00000000;
              local_2b8 = CONCAT44(uVar8,0x83b301);
              FUN_00448aa0();
              local_2b0 = CONCAT44(0x83b30c,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b314,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = CONCAT44(0x83b31c,(int)local_2b0);
              FUN_00408ad0();
              local_8._0_1_ = 3;
              local_2b0 = CONCAT44(0x83b328,(int)local_2b0);
              FUN_00408ad0();
              local_2b0 = 0xffffffff00000000;
              local_2b8 = CONCAT44(local_184,0x83b339);
              FUN_00448aa0();
            }
          }
          if (0xf < local_170) {
            local_2b0 = CONCAT44(local_184[0],&UNK_0083b352);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          local_170 = 0xf;
          local_174 = 0;
          local_184[0] = local_184[0] & 0xffffff00;
          if (0xf < local_154) {
            local_2b0 = CONCAT44(local_168[0],&UNK_0083b380);
                    /* WARNING: Subroutine does not return */
            FUN_00aae91b();
          }
          goto LAB_0083b389;
        }
        iVar4 = *(int *)(param_1 + 0x18);
        local_e4 = local_e4 + 1;
        local_108 = *local_110;
        local_104 = local_110[1];
        local_110 = local_110 + 2;
        if (local_104 == iVar4) {
          local_2b0 = CONCAT44(0x839b1b,(int)local_2b0);
          iVar7 = FUN_00425a40();
          if (iVar4 != *(int *)(iVar7 + 4)) {
            local_2b0 = CONCAT44(&local_1ac,0x839b36);
            local_18 = (int *)FUN_00425f80();
            local_1b8 = *(undefined4 *)(param_1 + 0x14);
            iVar4 = *(int *)(param_1 + 0x18);
            iVar7 = *(int *)(*(int *)(DAT_012587e4 + 4) + iVar4 * 4);
            if (0 < (int)(*(int *)(iVar7 + 0x9dc) - *(int *)(iVar7 + 0x9d8) & 0xfffffffcU)) {
              local_2b0 = CONCAT44(0x839b79,(int)local_2b0);
              iVar7 = FUN_00425a40();
              if (iVar4 != *(int *)(iVar7 + 4)) {
                local_128 = local_128 + -0x32 + *local_18 / 1000;
              }
            }
            goto LAB_00839ac3;
          }
        }
        local_18 = (int *)&local_2b0;
        local_2b8 = ZEXT48(&local_108);
        local_2b0 = 0x1000003e8;
        iVar4 = FUN_00834150(&param_8);
        local_128 = local_128 + iVar4;
        iVar4 = *(int *)(local_12c + 0xd5c);
        iVar7 = *(int *)(local_12c + 0xd58);
      } while (iVar7 == iVar4);
      do {
        if (*(int *)(iVar7 + 4) == local_104) break;
        iVar7 = iVar7 + 8;
      } while (iVar7 != iVar4);
    } while (iVar7 == iVar4);
    if (local_104 == *(int *)(local_188 + 0x20)) {
      *param_2 = *param_2 + 100;
      if (param_4 == 0) goto LAB_00839ac3;
      local_2b0 = 0x300dfc7b4;
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = (uint)local_c4[0]._1_3_ << 8;
      local_2b8 = CONCAT44(0x839f3f,(undefined4)local_2b8);
      FUN_00409350();
      local_8._0_1_ = 0x4c;
      local_2b0 = 0x500e00658;
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = local_a8[0] & 0xffffff00;
      local_2b8 = CONCAT44(0x839f67,(undefined4)local_2b8);
      FUN_00409350();
      local_8._0_1_ = 0x4d;
      local_2b0 = 0xd00e269f8;
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      local_2b8 = CONCAT44(0x839f89,(undefined4)local_2b8);
      FUN_00409350();
      local_8._0_1_ = 0x4e;
      local_2b0 = CONCAT44(local_e0,0x839f9c);
      uVar8 = FUN_009888f0();
      local_2b0 = CONCAT44(local_8c,local_124);
      local_8._0_1_ = 0x4f;
      local_2b8 = CONCAT44(0x839fb5,(undefined4)local_2b8);
      local_18 = (int *)FUN_009a8ee0();
      local_8._0_1_ = 0x50;
      local_2b0 = CONCAT44(0x839fc1,(int)local_2b0);
      iVar4 = FUN_00475500();
      local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
      local_2b0 = *(undefined8 *)(iVar4 + 0x74);
      FUN_009a9880();
      local_8._0_1_ = 0x51;
      local_2b0 = CONCAT44(local_a8,0x839ffc);
      FUN_00988f20();
      local_8._0_1_ = 0x52;
      local_2b0 = CONCAT44(uVar8,0x83a00b);
      FUN_00988f20();
      local_8._0_1_ = 0x53;
      local_2b0 = CONCAT44(local_c4,0x83a020);
      uVar8 = FUN_00988f20();
      local_2b0 = 0xffffffff00000000;
      local_8._0_1_ = 0x54;
      local_2b8 = CONCAT44(uVar8,0x83a033);
      FUN_00448aa0();
      if (0xf < local_24) {
        local_2b0 = CONCAT44(local_38[0],&UNK_0083a042);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_40) {
        local_2b0 = CONCAT44(local_54[0],&UNK_0083a066);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (0xf < local_5c) {
        local_2b0 = CONCAT44(local_70[0],&UNK_0083a080);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      if (0xf < local_ec) {
        local_2b0 = CONCAT44(local_100[0],&UNK_0083a0a0);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ec = 0xf;
      local_f0 = 0;
      local_100[0] = local_100[0] & 0xffffff00;
      local_8._0_1_ = 0x4f;
      local_2b0 = CONCAT44(local_124,0x83a0c5);
      FUN_009a9740();
      if (0xf < local_cc) {
        local_2b0 = CONCAT44(local_e0[0],&UNK_0083a0d9);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_cc = 0xf;
      local_d0 = 0;
      local_e0[0] = local_e0[0] & 0xffffff00;
      if (0xf < local_78) {
        local_2b0 = CONCAT44(local_8c[0],&UNK_0083a0ff);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      if (0xf < local_94) {
        local_2b0 = CONCAT44(local_a8[0],&UNK_0083a122);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_a8[0] = local_a8[0] & 0xffffff00;
    }
    else {
      *param_2 = *param_2 + 0x19;
      if (param_4 == 0) goto LAB_00839ac3;
      local_2b0 = 0x300dfc7b4;
      local_b0 = 0xf;
      local_b4 = 0;
      local_c4[0] = (uint)local_c4[0]._1_3_ << 8;
      local_2b8 = CONCAT44(0x83a17b,(undefined4)local_2b8);
      FUN_00409350();
      local_8._0_1_ = 0x55;
      local_2b0 = 0x500e00658;
      local_78 = 0xf;
      local_7c = 0;
      local_8c[0] = local_8c[0] & 0xffffff00;
      local_2b8 = CONCAT44(0x83a19d,(undefined4)local_2b8);
      FUN_00409350();
      local_8._0_1_ = 0x56;
      local_2b0 = 0x1700e26a08;
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = local_a8[0] & 0xffffff00;
      local_2b8 = CONCAT44(0x83a1c5,(undefined4)local_2b8);
      FUN_00409350();
      local_8._0_1_ = 0x57;
      local_2b0 = CONCAT44(local_e0,0x83a1d8);
      uVar8 = FUN_009888f0();
      local_2b0 = CONCAT44(local_a8,local_124);
      local_8._0_1_ = 0x58;
      local_2b8 = CONCAT44(0x83a1f1,(undefined4)local_2b8);
      local_18 = (int *)FUN_009a8ee0();
      local_8._0_1_ = 0x59;
      local_2b0 = CONCAT44(0x83a1fd,(int)local_2b0);
      iVar4 = FUN_00475500();
      local_2b8 = *(undefined8 *)(iVar4 + 0x6c);
      local_2b0 = *(undefined8 *)(iVar4 + 0x74);
      FUN_009a9880();
      local_8._0_1_ = 0x5a;
      local_2b0 = CONCAT44(local_8c,0x83a238);
      FUN_00988f20();
      local_8._0_1_ = 0x5b;
      local_2b0 = CONCAT44(uVar8,0x83a247);
      FUN_00988f20();
      local_8._0_1_ = 0x5c;
      local_2b0 = CONCAT44(local_c4,0x83a25c);
      uVar8 = FUN_00988f20();
      local_2b0 = 0xffffffff00000000;
      local_8._0_1_ = 0x5d;
      local_2b8 = CONCAT44(uVar8,0x83a26f);
      FUN_00448aa0();
      if (0xf < local_24) {
        local_2b0 = CONCAT44(local_38[0],&UNK_0083a27e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_24 = 0xf;
      local_28 = 0;
      local_38[0] = local_38[0] & 0xffffff00;
      if (0xf < local_40) {
        local_2b0 = CONCAT44(local_54[0],&UNK_0083a2a2);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_40 = 0xf;
      local_44 = 0;
      local_54[0] = local_54[0] & 0xffffff00;
      if (0xf < local_5c) {
        local_2b0 = CONCAT44(local_70[0],&UNK_0083a2bc);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_5c = 0xf;
      local_60 = 0;
      local_70[0] = local_70[0] & 0xffffff00;
      if (0xf < local_ec) {
        local_2b0 = CONCAT44(local_100[0],&UNK_0083a2dc);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_ec = 0xf;
      local_f0 = 0;
      local_100[0] = local_100[0] & 0xffffff00;
      local_8._0_1_ = 0x58;
      local_2b0 = CONCAT44(local_124,0x83a301);
      FUN_009a9740();
      if (0xf < local_cc) {
        local_2b0 = CONCAT44(local_e0[0],&UNK_0083a315);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_cc = 0xf;
      local_d0 = 0;
      local_e0[0] = local_e0[0] & 0xffffff00;
      if (0xf < local_94) {
        local_2b0 = CONCAT44(local_a8[0],&UNK_0083a33e);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_94 = 0xf;
      local_98 = 0;
      local_a8[0] = local_a8[0] & 0xffffff00;
      if (0xf < local_78) {
        local_2b0 = CONCAT44(local_8c[0],&UNK_0083a364);
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8c[0] = local_8c[0] & 0xffffff00;
    }
    local_8._0_1_ = 3;
    local_78 = 0xf;
    local_7c = 0;
    local_94 = 0xf;
    local_98 = 0;
    local_cc = 0xf;
    local_d0 = 0;
    if (0xf < local_b0) {
      local_2b0 = CONCAT44(local_c4[0],&UNK_0083a38f);
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  } while( true );
}

