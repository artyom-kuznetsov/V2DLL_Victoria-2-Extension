// FUN_00834150 @ 00834150 body=[[00834150, 00834418] [0083441c, 0083444b] [0083444f, 00834474] [00834478, 0083449d] [008344a1, 008344e2] [008344e6, 00834510] [00834514, 00834536] [0083453a, 00834553] [00834557, 00834574] [00834578, 008346ae] [008346b2, 008346dd] [008346e1, 00834707] [0083470b, 00834731] [00834735, 0083476b] [0083476f, 0083478f] [00834793, 008347aa] [008347ae, 008347cf] [008347d3, 0083496c] [00834970, 0083499f] [008349a3, 008349c8] [008349cc, 008349f1] [008349f5, 00834a36] [00834a3a, 00834a64] [00834a68, 00834a8d] [00834a91, 00834ab6] [00834aba, 00834ae6] [00834aea, 008353d3] [008353d7, 00835402] [00835406, 0083542c] [00835430, 00835456] [0083545a, 00835490] [00835494, 008354ba] [008354be, 008354e4] [008354e8, 00835b53] [00835b57, 00835b82] [00835b86, 00835bac] [00835bb0, 00835bd6] [00835bda, 00835c10] [00835c14, 00835c3a] [00835c3e, 00835c5e] [00835c62, 00835c80] [00835c84, 00836076]]


int FUN_00834150(int *param_1,int *param_2,int param_3,int param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_4a8 [20];
  undefined1 local_494 [420];
  undefined1 local_2f0 [20];
  undefined1 local_2dc [28];
  undefined1 local_2c0 [28];
  undefined1 local_2a4 [28];
  undefined1 local_288 [20];
  undefined1 local_274 [28];
  undefined1 local_258 [28];
  undefined1 local_23c [28];
  uint local_220;
  undefined4 local_210;
  uint local_20c;
  uint local_204;
  undefined4 local_1f4;
  uint local_1f0;
  uint local_1e8 [4];
  undefined4 local_1d8;
  uint local_1d4;
  uint local_1cc;
  undefined4 local_1bc;
  uint local_1b8;
  undefined1 local_1b0 [4];
  int local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  uint local_19c [4];
  undefined4 local_18c;
  uint local_188;
  uint local_180;
  undefined4 local_170;
  uint local_16c;
  uint local_164;
  undefined4 local_154;
  uint local_150;
  uint local_148;
  undefined4 local_138;
  uint local_134;
  uint local_12c;
  undefined4 local_11c;
  uint local_118;
  uint local_110;
  undefined4 local_100;
  uint local_fc;
  uint local_f4;
  undefined4 local_e4;
  uint local_e0;
  uint local_d8 [4];
  undefined4 local_c8;
  uint local_c4;
  undefined1 local_bc [4];
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_a8;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c [4];
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_24;
  int local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b6a87f;
  local_10 = ExceptionList;
  local_20 = *param_1;
  iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_1[1] * 4);
  ExceptionList = &local_10;
  local_24 = iVar5;
  local_1c = FUN_0085b910(*param_2,param_2[1]);
  for (piVar1 = *(int **)(*(int *)(iVar5 + 0x3bc) +
                         ((uint)param_2[1] % *(uint *)(iVar5 + 0x3b8)) * 4); piVar1 != (int *)0x0;
      piVar1 = (int *)piVar1[1]) {
    iVar5 = *piVar1;
    if (*(uint *)(iVar5 + 0xc) == param_2[1]) {
      if (iVar5 != 0) {
        local_a8 = *(int *)(iVar5 + 0x10);
        goto LAB_008341d7;
      }
      break;
    }
  }
  local_a8 = 0;
LAB_008341d7:
  local_30 = *param_2;
  for (piVar1 = *(int **)(*(int *)(local_24 + 0x3d8) +
                         ((uint)param_2[1] % *(uint *)(local_24 + 0x3d4)) * 4); piVar1 != (int *)0x0
      ; piVar1 = (int *)piVar1[1]) {
    iVar5 = *piVar1;
    if (*(int *)(iVar5 + 0xc) == param_2[1]) {
      if (iVar5 != 0) {
        local_34 = *(int *)(iVar5 + 0x10);
        goto LAB_0083420b;
      }
      break;
    }
  }
  local_34 = 0;
LAB_0083420b:
  local_2c = FUN_0085b8c0(*param_2,param_2[1]);
  iVar4 = FUN_0085b960(*param_2,param_2[1]);
  iVar5 = local_a8;
  if (param_5 != '\0') {
    iVar5 = 0;
  }
  iVar5 = ((iVar4 - local_2c) - local_34) + iVar5 + local_1c;
  _param_5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
  if (_param_5 < 0x65) {
    if (_param_5 < -100) {
      _param_5 = -100;
    }
  }
  else {
    _param_5 = 100;
  }
  FUN_00401000();
  iVar5 = FUN_00b31c00();
  iVar5 = __alldiv((longlong)iVar5 * (longlong)param_4,1000,0);
  _param_5 = ((iVar5 / 1000) * _param_5) / 100;
  if (param_3 != 0) {
    if (_param_5 < 1) {
      if (-1 < _param_5) goto LAB_008347e5;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfc7b4,3);
      local_8 = 10;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00dfc938,4);
      local_8._0_1_ = 0xb;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350("AIREASON_DIPLOMATIC_GOALS",0x19);
      local_8._0_1_ = 0xc;
      local_2c = FUN_009888f0();
      local_8._0_1_ = 0xd;
      local_1c = FUN_009a8ee0(local_1b0,local_6c);
      local_8._0_1_ = 0xe;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0xf;
      FUN_00988f20();
      local_8._0_1_ = 0x10;
      FUN_00988f20();
      local_8._0_1_ = 0x11;
      FUN_00988f20();
      local_8._0_1_ = 0x12;
      FUN_00448aa0();
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4 = local_a4 & 0xffffff00;
      if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c = local_12c & 0xffffff00;
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4 = local_f4 & 0xffffff00;
      if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_134 = 0xf;
      local_138 = 0;
      local_148 = local_148 & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0xd);
      FUN_009a9740();
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_88[0] = local_88[0] & 0xffffff00;
    }
    else {
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfc7b4,3);
      local_8 = 0;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      FUN_00409350(&DAT_00e00658,5);
      local_8._0_1_ = 1;
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      FUN_00409350("AIREASON_DIPLOMATIC_GOALS",0x19);
      local_8._0_1_ = 2;
      local_2c = FUN_009888f0();
      local_8._0_1_ = 3;
      local_1c = FUN_009a8ee0(local_1b0,local_88);
      local_8._0_1_ = 4;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 5;
      FUN_00988f20();
      local_8._0_1_ = 6;
      FUN_00988f20();
      local_8._0_1_ = 7;
      FUN_00988f20();
      local_8._0_1_ = 8;
      FUN_00448aa0();
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_134 = 0xf;
      local_138 = 0;
      local_148 = local_148 & 0xffffff00;
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4 = local_f4 & 0xffffff00;
      if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c = local_12c & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,9);
      FUN_009adb70();
      if (local_1ac != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1ac = 0;
      local_1a8 = 0;
      local_1a4 = 0;
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4 = local_a4 & 0xffffff00;
      if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_74 = 0xf;
      local_78 = 0;
      local_88[0] = local_88[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_6c[0] = local_6c[0] & 0xffffff00;
    }
    local_8 = 0xffffffff;
    local_3c = 0xf;
    local_40 = 0;
    local_58 = 0xf;
    local_5c = 0;
    local_74 = 0xf;
    local_78 = 0;
  }
LAB_008347e5:
  iVar5 = *(int *)(*(int *)(*(int *)(local_24 + 0xbe8) + param_2[1] * 4) + 0x3c) / 1000;
  local_34 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
  _param_5 = _param_5 + local_34;
  if (param_3 != 0) {
    if (local_34 < 1) {
      if (local_34 < 0) {
        local_150 = 0xf;
        local_154 = 0;
        local_164 = local_164 & 0xffffff00;
        FUN_00409350(&DAT_00dfc7b4,3);
        local_8 = 0x1d;
        FUN_009885d0();
        local_8._0_1_ = 0x1e;
        FUN_009885d0();
        local_8._0_1_ = 0x1f;
        local_1c = FUN_009888f0();
        local_8._0_1_ = 0x20;
        FUN_009a8ee0(local_bc,local_1e8);
        local_8._0_1_ = 0x21;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x22;
        FUN_00988f20();
        local_8._0_1_ = 0x23;
        FUN_00988f20();
        local_8._0_1_ = 0x24;
        FUN_00988f20();
        local_8._0_1_ = 0x25;
        FUN_00448aa0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x20);
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = 0xffffffff;
        FUN_00408ad0();
      }
    }
    else {
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
      FUN_00409350(&DAT_00dfc7b4,3);
      local_8 = 0x13;
      local_16c = 0xf;
      local_170 = 0;
      local_180 = local_180 & 0xffffff00;
      FUN_00409350(&DAT_00e00658,5);
      local_8._0_1_ = 0x14;
      local_188 = 0xf;
      local_18c = 0;
      local_19c[0] = local_19c[0] & 0xffffff00;
      FUN_00409350("AIREASON_RELATIONS",0x12);
      local_8._0_1_ = 0x15;
      local_2c = FUN_009888f0();
      local_8._0_1_ = 0x16;
      local_1c = FUN_009a8ee0(local_bc,local_19c);
      local_8._0_1_ = 0x17;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x18;
      FUN_00988f20();
      local_8._0_1_ = 0x19;
      FUN_00988f20();
      local_8._0_1_ = 0x1a;
      FUN_00988f20();
      local_8._0_1_ = 0x1b;
      FUN_00448aa0();
      if (0xf < local_20c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_20c = 0xf;
      local_210 = 0;
      local_220 = local_220 & 0xffffff00;
      if (0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1f0 = 0xf;
      local_1f4 = 0;
      local_204 = local_204 & 0xffffff00;
      if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1b8 = 0xf;
      local_1bc = 0;
      local_1cc = local_1cc & 0xffffff00;
      if (0xf < local_1d4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_1d4 = 0xf;
      local_1d8 = 0;
      local_1e8[0] = local_1e8[0] & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x1c);
      FUN_009adb70();
      if (local_b8 != 0) {
        FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_150 = 0xf;
      local_154 = 0;
      local_164 = local_164 & 0xffffff00;
      if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_188 = 0xf;
      local_18c = 0;
      local_19c[0] = local_19c[0] & 0xffffff00;
      if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_16c = 0xf;
      local_170 = 0;
      local_180 = local_180 & 0xffffff00;
      if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_c4 = 0xf;
      local_c8 = 0;
      local_d8[0] = local_d8[0] & 0xffffff00;
    }
  }
  if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x31) != '\0') &&
     (*(char *)(local_24 + 0x31) == '\0')) {
    local_20 = *param_2;
    iVar5 = FUN_009311f0();
    iVar5 = (iVar5 * 5 + -10) * 2;
    _param_5 = _param_5 + iVar5;
    if (param_3 != 0) {
      if (iVar5 < 1) {
        if (-1 < iVar5) goto LAB_00834f8c;
        FUN_009885d0();
        local_8 = 0x2f;
        FUN_009885d0();
        local_8._0_1_ = 0x30;
        FUN_009885d0();
        local_8._0_1_ = 0x31;
        local_1c = FUN_009888f0();
        local_8._0_1_ = 0x32;
        FUN_009a8ee0(local_288,local_23c);
        local_8._0_1_ = 0x33;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x34;
        FUN_00988f20();
        local_8._0_1_ = 0x35;
        FUN_00988f20();
        local_8._0_1_ = 0x36;
        FUN_00988f20();
        local_8._0_1_ = 0x37;
        FUN_00989020();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x32);
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
      else {
        FUN_009885d0();
        local_8 = 0x26;
        FUN_009885d0();
        local_8._0_1_ = 0x27;
        FUN_009885d0();
        local_8._0_1_ = 0x28;
        local_1c = FUN_009888f0();
        local_8._0_1_ = 0x29;
        FUN_009a8ee0(local_288,local_2dc);
        local_8._0_1_ = 0x2a;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x2b;
        FUN_00988f20();
        local_8._0_1_ = 0x2c;
        FUN_00988f20();
        local_8._0_1_ = 0x2d;
        FUN_00988f20();
        local_8._0_1_ = 0x2e;
        FUN_00448aa0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x29);
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
  }
LAB_00834f8c:
  if ((*(char *)(local_24 + 0x31) != '\0') &&
     (local_20 = *param_2,
     *(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x31) == '\0')) {
    iVar5 = FUN_009311f0();
    iVar5 = (iVar5 * 5 + -10) * 2;
    _param_5 = _param_5 + iVar5;
    if (param_3 != 0) {
      if (iVar5 < 1) {
        if (-1 < iVar5) goto LAB_00835291;
        FUN_009885d0();
        local_8 = 0x41;
        FUN_009885d0();
        local_8._0_1_ = 0x42;
        FUN_009885d0();
        local_8._0_1_ = 0x43;
        local_1c = FUN_009888f0();
        local_8._0_1_ = 0x44;
        FUN_009a8ee0(local_2f0,local_2a4);
        local_8._0_1_ = 0x45;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x46;
        FUN_00988f20();
        local_8._0_1_ = 0x47;
        FUN_00988f20();
        local_8._0_1_ = 0x48;
        FUN_00988f20();
        local_8._0_1_ = 0x49;
        FUN_00989020();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x44);
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
      else {
        FUN_009885d0();
        local_8 = 0x38;
        FUN_009885d0();
        local_8._0_1_ = 0x39;
        FUN_009885d0();
        local_8._0_1_ = 0x3a;
        local_1c = FUN_009888f0();
        local_8._0_1_ = 0x3b;
        FUN_009a8ee0(local_2f0,local_258);
        local_8._0_1_ = 0x3c;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x3d;
        FUN_00988f20();
        local_8._0_1_ = 0x3e;
        FUN_00988f20();
        local_8._0_1_ = 0x3f;
        FUN_00988f20();
        local_8._0_1_ = 0x40;
        FUN_00448aa0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x3b);
        FUN_009a9740();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
      }
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
  }
LAB_00835291:
  local_20 = *param_2;
  cVar3 = FUN_00416db0();
  if ((cVar3 == '\0') && (_param_5 = _param_5 + -0x14, param_3 != 0)) {
    FUN_009885d0();
    local_8 = 0x4a;
    FUN_009885d0();
    local_8._0_1_ = 0x4b;
    FUN_009885d0();
    local_8._0_1_ = 0x4c;
    local_1c = FUN_009888f0();
    local_8._0_1_ = 0x4d;
    FUN_009a8ee0(local_2f0,local_d8);
    local_8._0_1_ = 0x4e;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x4f;
    FUN_00988f20();
    local_8._0_1_ = 0x50;
    FUN_00988f20();
    local_8._0_1_ = 0x51;
    FUN_00988f20();
    local_8._0_1_ = 0x52;
    FUN_00448aa0();
    if (0xf < local_150) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_150 = 0xf;
    local_154 = 0;
    local_164 = local_164 & 0xffffff00;
    if (0xf < local_1d4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1d4 = 0xf;
    local_1d8 = 0;
    local_1e8[0] = local_1e8[0] & 0xffffff00;
    if (0xf < local_1b8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1b8 = 0xf;
    local_1bc = 0;
    local_1cc = local_1cc & 0xffffff00;
    if (0xf < local_1f0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_1f0 = 0xf;
    local_1f4 = 0;
    local_204 = local_204 & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0x4d);
    FUN_009a9740();
    if (0xf < local_20c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_20c = 0xf;
    local_210 = 0;
    local_220 = local_220 & 0xffffff00;
    if (0xf < local_c4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_c4 = 0xf;
    local_c8 = 0;
    local_d8[0] = local_d8[0] & 0xffffff00;
    if (0xf < local_16c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_16c = 0xf;
    local_170 = 0;
    local_180 = local_180 & 0xffffff00;
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  if (*(char *)(local_24 + 0x12d0) == '\0') {
LAB_00835673:
    local_20 = *param_2;
    if ((*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x12d0) != '\0') &&
       (_param_5 = _param_5 + -0x32, param_3 != 0)) {
      FUN_009885d0();
      local_8 = 0x5c;
      FUN_009885d0();
      local_8._0_1_ = 0x5d;
      FUN_009885d0();
      local_8._0_1_ = 0x5e;
      local_1c = FUN_009888f0();
      local_8._0_1_ = 0x5f;
      FUN_009a8ee0(local_288,local_274);
      local_8._0_1_ = 0x60;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x61;
      FUN_00988f20();
      local_8._0_1_ = 0x62;
      FUN_00988f20();
      local_8._0_1_ = 99;
      FUN_00988f20();
      local_8._0_1_ = 100;
      FUN_00448aa0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x5f);
LAB_008357b7:
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = 0xffffffff;
      FUN_00408ad0();
    }
  }
  else {
    local_20 = *param_2;
    if (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x12d0) == '\0') {
      _param_5 = _param_5 + -0x50;
      if (param_3 != 0) {
        FUN_009885d0();
        local_8 = 0x53;
        FUN_009885d0();
        local_8._0_1_ = 0x54;
        FUN_009885d0();
        local_8._0_1_ = 0x55;
        local_1c = FUN_009888f0();
        local_8._0_1_ = 0x56;
        FUN_009a8ee0(local_288,local_274);
        local_8._0_1_ = 0x57;
        iVar5 = FUN_00475500();
        FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
        local_8._0_1_ = 0x58;
        FUN_00988f20();
        local_8._0_1_ = 0x59;
        FUN_00988f20();
        local_8._0_1_ = 0x5a;
        FUN_00988f20();
        local_8._0_1_ = 0x5b;
        FUN_00448aa0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        FUN_00408ad0();
        local_8 = CONCAT31(local_8._1_3_,0x56);
        goto LAB_008357b7;
      }
    }
    else if (*(char *)(local_24 + 0x12d0) == '\0') goto LAB_00835673;
  }
  local_20 = *(int *)(local_24 + 0x1428);
  if ((*(int *)(local_24 + 0x142c) != 0) ||
     (0 < (int)(*(int *)(local_24 + 0x141c) - *(int *)(local_24 + 0x1418) & 0xfffffff8U))) {
    if (*(int *)(local_24 + 0x142c) != 0) {
      local_1c = *(int *)(local_24 + 0x142c);
      param_1 = &local_20;
    }
    local_30 = *param_1;
    if (param_2[1] != param_1[1]) {
      local_30 = *param_1;
      cVar3 = FUN_0042bb00();
      if (cVar3 == '\0') {
        if ((*(char *)(local_24 + 0x31) == '\0') ||
           (*(char *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x31) == '\0')) {
          iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4);
          local_20 = *(int *)(iVar5 + 0x1428);
          if (((*(int *)(iVar5 + 0x142c) != 0) ||
              (local_20 = *param_2, iVar5 = *(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4),
              0 < (int)(*(int *)(iVar5 + 0x141c) - *(int *)(iVar5 + 0x1418) & 0xfffffff8U))) &&
             (_param_5 = _param_5 + -0x19, param_3 != 0)) {
            FUN_009885d0();
            local_8 = 0x6e;
            FUN_009885d0();
            local_8._0_1_ = 0x6f;
            FUN_009885d0();
            local_8._0_1_ = 0x70;
            FUN_009888f0();
            local_8._0_1_ = 0x71;
            FUN_009a8ee0(local_bc,local_2c0);
            local_8._0_1_ = 0x72;
            iVar5 = FUN_00475500();
            FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
            local_8._0_1_ = 0x73;
            FUN_00988f20();
            local_8._0_1_ = 0x74;
            FUN_00988f20();
            local_8._0_1_ = 0x75;
            FUN_00988f20();
            local_8._0_1_ = 0x76;
            FUN_00448aa0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = CONCAT31(local_8._1_3_,0x71);
            FUN_009a9740();
            FUN_00408ad0();
            FUN_00408ad0();
            FUN_00408ad0();
            local_8 = 0xffffffff;
            FUN_00408ad0();
          }
        }
        goto LAB_00835c90;
      }
    }
    _param_5 = _param_5 + 0x19;
    if (param_3 != 0) {
      FUN_009885d0();
      local_8 = 0x65;
      FUN_009885d0();
      local_8._0_1_ = 0x66;
      FUN_009885d0();
      local_8._0_1_ = 0x67;
      FUN_009888f0();
      local_8._0_1_ = 0x68;
      FUN_009a8ee0(local_bc,local_19c);
      local_8._0_1_ = 0x69;
      iVar5 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
      local_8._0_1_ = 0x6a;
      FUN_00988f20();
      local_8._0_1_ = 0x6b;
      FUN_00988f20();
      local_8._0_1_ = 0x6c;
      FUN_00988f20();
      local_8._0_1_ = 0x6d;
      FUN_00448aa0();
      if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_90 = 0xf;
      local_94 = 0;
      local_a4 = local_a4 & 0xffffff00;
      if (0xf < local_118) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_118 = 0xf;
      local_11c = 0;
      local_12c = local_12c & 0xffffff00;
      if (0xf < local_e0) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_e0 = 0xf;
      local_e4 = 0;
      local_f4 = local_f4 & 0xffffff00;
      if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_134 = 0xf;
      local_138 = 0;
      local_148 = local_148 & 0xffffff00;
      local_8 = CONCAT31(local_8._1_3_,0x68);
      FUN_009a9740();
      if (0xf < local_fc) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_fc = 0xf;
      local_100 = 0;
      local_110 = local_110 & 0xffffff00;
      if (0xf < local_188) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_188 = 0xf;
      local_18c = 0;
      local_19c[0] = local_19c[0] & 0xffffff00;
      if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_8 = 0xffffffff;
      local_58 = 0xf;
      local_5c = 0;
      local_6c[0] = local_6c[0] & 0xffffff00;
      if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b();
      }
      local_3c = 0xf;
      local_40 = 0;
      local_50 = local_50 & 0xffffff00;
    }
  }
LAB_00835c90:
  local_20 = *(int *)(local_24 + 0xcf8);
  if ((param_2[1] == *(int *)(local_24 + 0xcfc)) && (_param_5 = _param_5 + 1000, param_3 != 0)) {
    FUN_009885d0();
    local_8 = 0x77;
    FUN_009885d0();
    local_8._0_1_ = 0x78;
    FUN_009885d0();
    local_8._0_1_ = 0x79;
    FUN_009888f0();
    local_8._0_1_ = 0x7a;
    FUN_009a8ee0(local_1b0,local_88);
    local_8._0_1_ = 0x7b;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x7c;
    FUN_00988f20();
    local_8._0_1_ = 0x7d;
    FUN_00988f20();
    local_8._0_1_ = 0x7e;
    FUN_00988f20();
    local_8._0_1_ = 0x7f;
    FUN_00448aa0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x7a);
    FUN_009a9740();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8 = 0xffffffff;
    FUN_00408ad0();
  }
  iVar5 = *param_2;
  iVar4 = *(int *)(*(int *)(DAT_012586dc + 0x40) + 0x24);
  local_20 = *(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + param_2[1] * 4) + 0x1430);
  if (iVar4 == 0) {
    param_2 = (int *)0xffffffff;
    local_20 = iVar5;
  }
  else if (local_20 + 0x189373U < 0x39580e) {
    param_2 = (int *)((local_20 * 1000) / iVar4);
    local_20 = iVar5;
  }
  else {
    local_1c = local_20 >> 0x1f;
    local_2c = iVar4 >> 0x1f;
    local_30 = iVar4;
    uVar6 = __allmul(local_20,local_1c,1000,0);
    param_2 = (int *)__alldiv(uVar6,local_30,local_2c);
    local_1c = (int)param_2 >> 0x1f;
  }
  FUN_00401000();
  iVar5 = FUN_00b31c00();
  iVar5 = __alldiv((longlong)iVar5 * (longlong)(int)param_2,1000,0);
  iVar5 = (int)((ulonglong)((longlong)iVar5 * -0x10624dd3) >> 0x20);
  param_2 = (int *)((iVar5 >> 6) - (iVar5 >> 0x1f));
  local_20 = *piVar2;
  cVar3 = FUN_00534a50();
  if (cVar3 != '\0') {
    param_2 = (int *)0xfffffc18;
  }
  if ((param_3 != 0) && ((int)param_2 < 0)) {
    FUN_009885d0();
    local_8 = 0x80;
    FUN_009885d0();
    local_8._0_1_ = 0x81;
    FUN_009885d0();
    local_8._0_1_ = 0x82;
    FUN_009888f0();
    local_8._0_1_ = 0x83;
    FUN_009a8ee0(local_4a8,local_494);
    local_8._0_1_ = 0x84;
    iVar5 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar5 + 0x6c),*(undefined8 *)(iVar5 + 0x74));
    local_8._0_1_ = 0x85;
    FUN_00988f20();
    local_8._0_1_ = 0x86;
    FUN_00988f20();
    local_8._0_1_ = 0x87;
    FUN_00988f20();
    local_8._0_1_ = 0x88;
    FUN_00448aa0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    local_8 = CONCAT31(local_8._1_3_,0x83);
    FUN_009a9740();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
    FUN_00408ad0();
  }
  ExceptionList = local_10;
  return (int)param_2 + _param_5;
}

