// FUN_00971180 @ 00971180 body=[[00971180, 00971289] [0097128d, 009712b1] [009712b5, 009712e8] [009712ee, 00971304] [00971308, 00971327] [0097132b, 00971733] [00971737, 00971758] [0097175c, 00971798] [0097179e, 009717b4] [009717b8, 009717d3] [009717d7, 009717eb]]


undefined1 * FUN_00971180(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 *puVar4;
  undefined1 local_d8 [28];
  undefined1 local_bc [28];
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_8c;
  uint local_88;
  uint local_80 [4];
  undefined4 local_70;
  uint local_6c;
  uint local_64 [2];
  undefined1 local_5c [8];
  undefined4 local_54;
  uint local_50;
  uint local_48 [4];
  undefined4 local_38;
  uint local_34;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00b64227;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_8 = 0;
  local_a0 = 1;
  if (*(char *)(in_ECX + 0xc) != '\0') {
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    local_18 = in_ECX;
    FUN_00409350("CAN_APPOINT_RULING_PARTY",0x18);
    local_8 = 1;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 2;
    local_14 = FUN_009a8ee0(local_2c,local_48);
    local_8._0_1_ = 3;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 4;
    FUN_00988f20();
    local_8._0_1_ = 5;
    FUN_00448aa0();
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    local_8._0_1_ = 6;
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_8 = (uint)local_8._1_3_ << 8;
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_38 = 0;
    local_34 = 0xf;
    local_48[0] = local_48[0] & 0xffffff00;
    in_ECX = local_18;
  }
  if ((*(int *)(in_ECX + 8) == 0) || (*(char *)(in_ECX + 0x5c) == '\0')) {
    local_50 = 0xf;
    local_54 = 0;
    local_64[0] = local_64[0] & 0xffffff00;
    FUN_00409350("TERM_FOR_LIFE",0xd);
    local_8 = 7;
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    FUN_00409350(&DAT_00dee2cc,1);
    local_8._0_1_ = 8;
    local_18 = FUN_009a8ee0(local_2c,local_64);
    local_8._0_1_ = 9;
    iVar2 = FUN_00475500();
    FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
    local_8._0_1_ = 10;
    FUN_00988f20();
    local_8._0_1_ = 0xb;
    FUN_00448aa0();
    if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_6c = 0xf;
    local_70 = 0;
    local_80[0] = local_80[0] & 0xffffff00;
    if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_88 = 0xf;
    local_8c = 0;
    local_9c = local_9c & 0xffffff00;
    local_8 = CONCAT31(local_8._1_3_,0xc);
    FUN_009adb70();
    if (local_28 != 0) {
      FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48[0] = local_48[0] & 0xffffff00;
    if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  else {
    piVar1 = (int *)(*(int *)(DAT_012587e4 + 4) + param_3 * 4);
    if ((int)((double)((*(int *)(*piVar1 + 0x664) + -43800000) / 0x18) / 365.0) < 6) {
      local_14 = *(int *)(*piVar1 + 0x660);
      FUN_00424810();
      local_18 = (int)((double)((local_14 + -43800000) / 0x18) / 365.0);
      FUN_009c5310();
      local_8 = 0xf;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0x11;
      FUN_009a9740();
      FUN_00424930();
      FUN_009885d0();
      local_8._0_1_ = 0x12;
      FUN_009885d0();
      local_8._0_1_ = 0x13;
      FUN_009885d0();
      local_8._0_1_ = 0x14;
      FUN_009885d0();
      local_8._0_1_ = 0x15;
      local_14 = FUN_009888f0();
      local_8._0_1_ = 0x16;
      FUN_009888f0();
      local_8._0_1_ = 0x17;
      local_18 = FUN_009a8ee0(local_5c,local_80);
      local_8._0_1_ = 0x18;
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      local_8._0_1_ = 0x19;
      FUN_00988f20();
      local_8._0_1_ = 0x1a;
      FUN_00988f20();
      local_8._0_1_ = 0x1b;
      FUN_00988f20();
      local_8._0_1_ = 0x1c;
      FUN_00988f20();
      local_8._0_1_ = 0x1d;
      FUN_00988f20();
      local_8._0_1_ = 0x1e;
      FUN_00988f20();
      local_8._0_1_ = 0x1f;
      FUN_00448aa0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      local_8 = CONCAT31(local_8._1_3_,0x17);
      FUN_009a9740();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
    else {
      puVar4 = local_d8;
      uVar3 = FUN_0051e390();
      uVar3 = FUN_0043acd0(uVar3,puVar4);
      local_8 = 0xd;
      FUN_0042c180(local_bc,uVar3);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      FUN_00448aa0();
      FUN_00408ad0();
      FUN_00408ad0();
    }
  }
  ExceptionList = local_10;
  return param_1;
}

