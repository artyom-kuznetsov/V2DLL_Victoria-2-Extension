// FUN_008ec0b0 @ 008ec0b0 body=[[008ec0b0, 008ec1cc] [008ec1d0, 008ec1fa] [008ec1fe, 008ec228] [008ec22c, 008ec256] [008ec25a, 008ec27e] [008ec282, 008ec385] [008ec389, 008ec3b3] [008ec3b7, 008ec3e1] [008ec3e5, 008ec40f] [008ec413, 008ec437] [008ec43b, 008ec456] [008ec45a, 008ec473]]


undefined4 FUN_008ec0b0(undefined4 param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  uint local_16c [4];
  undefined4 local_15c;
  uint local_158;
  uint local_150 [4];
  undefined4 local_140;
  uint local_13c;
  undefined4 local_134;
  uint local_130 [4];
  undefined4 local_120;
  uint local_11c;
  uint local_114 [4];
  undefined4 local_104;
  uint local_100;
  uint local_f8;
  undefined4 local_e8;
  uint local_e4;
  uint local_dc [4];
  undefined4 local_cc;
  uint local_c8;
  uint local_c0 [4];
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88 [4];
  undefined4 local_78;
  uint local_74;
  uint local_6c;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_40;
  uint local_3c;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b79198;
  local_14 = ExceptionList;
  local_134 = 0;
  if (param_3 == '\0') {
    local_100 = 0xf;
    local_104 = 0;
    local_114[0] = local_114[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00dee2cc,1);
    local_c = 6;
    local_158 = 0xf;
    local_15c = 0;
    local_16c[0] = local_16c[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc20,2);
    local_c._0_1_ = 7;
    uVar3 = FUN_005659c0(*(undefined4 *)(in_ECX + 0x1c),local_34);
    local_c._0_1_ = 8;
    FUN_00988fa0(uVar3);
    local_c._0_1_ = 9;
    uVar3 = FUN_00988f20(local_16c);
    local_c._0_1_ = 10;
    FUN_0042c180(local_dc,uVar3);
    local_c = CONCAT31(local_c._1_3_,0xb);
    FUN_00988f20(local_114);
    if (0xf < local_c8) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_dc[0]);
    }
    local_c8 = 0xf;
    local_cc = 0;
    local_dc[0] = local_dc[0] & 0xffffff00;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_a4);
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_6c);
    }
    local_58 = 0xf;
    local_5c = 0;
    local_6c = local_6c & 0xffffff00;
    if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_34[0]);
    }
    local_20 = 0xf;
    local_24 = 0;
    local_34[0] = local_34[0] & 0xffffff00;
    if (0xf < local_158) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_16c[0]);
    }
    local_158 = 0xf;
    local_15c = 0;
    local_16c[0] = local_16c[0] & 0xffffff00;
    uVar1 = local_114[0];
    uVar2 = local_100;
  }
  else {
    local_11c = 0xf;
    local_120 = 0;
    local_130[0] = local_130[0] & 0xffffff00;
    ExceptionList = &local_14;
    FUN_00409350(&DAT_00dee2cc,1);
    local_c = 0;
    local_13c = 0xf;
    local_140 = 0;
    local_150[0] = local_150[0] & 0xffffff00;
    FUN_00409350(&DAT_00dedc20,2);
    local_c._0_1_ = 1;
    uVar3 = FUN_005659c0(*(undefined4 *)(in_ECX + 0x1c),local_88);
    local_c._0_1_ = 2;
    FUN_00988fa0(uVar3);
    local_c._0_1_ = 3;
    uVar3 = FUN_00988f20(local_150);
    local_c._0_1_ = 4;
    FUN_0042c180(local_c0,uVar3);
    local_c = CONCAT31(local_c._1_3_,5);
    FUN_00988f20(local_130);
    if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_c0[0]);
    }
    local_ac = 0xf;
    local_b0 = 0;
    local_c0[0] = local_c0[0] & 0xffffff00;
    if (0xf < local_e4) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_f8);
    }
    local_e4 = 0xf;
    local_e8 = 0;
    local_f8 = local_f8 & 0xffffff00;
    if (0xf < local_3c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_50);
    }
    local_3c = 0xf;
    local_40 = 0;
    local_50 = local_50 & 0xffffff00;
    if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_88[0]);
    }
    local_74 = 0xf;
    local_78 = 0;
    local_88[0] = local_88[0] & 0xffffff00;
    if (0xf < local_13c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_150[0]);
    }
    local_13c = 0xf;
    local_140 = 0;
    local_150[0] = local_150[0] & 0xffffff00;
    uVar1 = local_130[0];
    uVar2 = local_11c;
  }
  if (0xf < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(uVar1);
  }
  ExceptionList = local_14;
  return param_1;
}

