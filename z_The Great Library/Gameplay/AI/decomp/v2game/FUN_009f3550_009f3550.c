// FUN_009f3550 @ 009f3550 body=[[009f3550, 009f35d1] [009f35d5, 009f36d4] [009f36d8, 009f36fd] [009f3701, 009f3726] [009f372a, 009f374f] [009f3753, 009f3778] [009f377c, 009f379b] [009f379f, 009f37b5] [009f37b9, 009f37d5] [009f37d9, 009f3833] [009f3837, 009f393f] [009f3943, 009f3968] [009f396c, 009f3991] [009f3995, 009f39ba] [009f39be, 009f39dd] [009f39e1, 009f39fa] [009f39fe, 009f3a1d] [009f3a21, 009f3a4a] [009f3a64, 009f3a81]]


undefined4 FUN_009f3550(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 local_1dc [5];
  uint local_1c8;
  undefined4 local_1c0 [5];
  uint local_1ac;
  uint local_1a4;
  undefined4 local_194;
  uint local_190;
  uint local_188;
  undefined4 local_178;
  uint local_174;
  uint local_16c;
  undefined4 local_15c;
  uint local_158;
  uint local_150;
  undefined4 local_140;
  uint local_13c;
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
  undefined4 local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ec58;
  local_10 = ExceptionList;
  local_18 = 0;
  local_24 = 0xf;
  local_28 = 0;
  local_38[0] = local_38[0] & 0xffffff00;
  ExceptionList = &local_10;
  FUN_00409350(&DAT_00ded94d,0);
  local_1c = in_ECX + 0x58;
  local_8 = 0;
  local_18 = 1;
  cVar1 = FUN_00416db0();
  if ((cVar1 != '\0') || (local_11 = '\x01', *(char *)(in_ECX + 0x24) != '\0')) {
    local_11 = '\0';
  }
  local_8 = 0xffffffff;
  if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_38[0]);
  }
  if (local_11 == '\0') {
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(&DAT_00ded94d,0);
    local_8 = 9;
    cVar1 = FUN_00416db0();
    local_11 = cVar1 == '\0';
    local_8 = 0xffffffff;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    if (!(bool)local_11) {
      FUN_009f2ff0(param_1);
      ExceptionList = local_10;
      return param_1;
    }
    local_18 = FUN_009f2390(local_1dc);
    local_8 = 10;
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    FUN_00409350(&DAT_00df9638,2);
    local_8._0_1_ = 0xb;
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    FUN_00409350(&DAT_00defdfc,1);
    local_8._0_1_ = 0xc;
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfbfa4,2);
    local_8._0_1_ = 0xd;
    FUN_00988f20(local_70);
    local_8._0_1_ = 0xe;
    FUN_00988f20(local_1c);
    local_8._0_1_ = 0xf;
    FUN_00988f20(local_8c);
    local_8._0_1_ = 0x10;
    FUN_00988f20(local_c4);
    local_8 = CONCAT31(local_8._1_3_,0x11);
    FUN_00988f20(local_18);
    if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1a4);
    }
    local_190 = 0xf;
    local_194 = 0;
    local_1a4 = local_1a4 & 0xffffff00;
    if (0xf < local_e8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_fc);
    }
    local_e8 = 0xf;
    local_ec = 0;
    local_fc = local_fc & 0xffffff00;
    if (0xf < local_120) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_134);
    }
    local_120 = 0xf;
    local_124 = 0;
    local_134 = local_134 & 0xffffff00;
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_16c);
    }
    local_158 = 0xf;
    local_15c = 0;
    local_16c = local_16c & 0xffffff00;
    if (0xf < local_5c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_70[0]);
    }
    local_5c = 0xf;
    local_60 = 0;
    local_70[0] = local_70[0] & 0xffffff00;
    if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_8c[0]);
    }
    local_78 = 0xf;
    local_7c = 0;
    local_8c[0] = local_8c[0] & 0xffffff00;
    if (0xf < local_b0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c4[0]);
    }
    local_b0 = 0xf;
    local_b4 = 0;
    local_c4[0] = local_c4[0] & 0xffffff00;
    if (0xf < local_1c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1dc[0]);
    }
  }
  else {
    local_18 = FUN_009f2390(local_1c0);
    local_8 = 1;
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    FUN_00409350(&DAT_00e3cff8,3);
    local_8._0_1_ = 2;
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    FUN_00409350(&DAT_00defdfc,1);
    local_8._0_1_ = 3;
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    FUN_00409350(&DAT_00dfbfa4,2);
    local_8._0_1_ = 4;
    FUN_00988f20(local_a8);
    local_8._0_1_ = 5;
    FUN_00988f20(local_1c);
    local_8._0_1_ = 6;
    FUN_00988f20(local_54);
    local_8._0_1_ = 7;
    FUN_00988f20(local_38);
    local_8 = CONCAT31(local_8._1_3_,8);
    FUN_00988f20(local_18);
    if (0xf < local_cc) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_e0);
    }
    local_cc = 0xf;
    local_d0 = 0;
    local_e0 = local_e0 & 0xffffff00;
    if (0xf < local_104) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_118);
    }
    local_104 = 0xf;
    local_108 = 0;
    local_118 = local_118 & 0xffffff00;
    if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_188);
    }
    local_174 = 0xf;
    local_178 = 0;
    local_188 = local_188 & 0xffffff00;
    if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_150);
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150 = local_150 & 0xffffff00;
    if (0xf < local_94) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a8[0]);
    }
    local_94 = 0xf;
    local_98 = 0;
    local_a8[0] = local_a8[0] & 0xffffff00;
    if (0xf < local_40) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_54[0]);
    }
    local_40 = 0xf;
    local_44 = 0;
    local_54[0] = local_54[0] & 0xffffff00;
    if (0xf < local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_38[0]);
    }
    local_24 = 0xf;
    local_28 = 0;
    local_38[0] = local_38[0] & 0xffffff00;
    if (0xf < local_1ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_1c0[0]);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

