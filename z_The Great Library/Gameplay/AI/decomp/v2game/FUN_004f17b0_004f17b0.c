// FUN_004f17b0 @ 004f17b0 body=[[004f17b0, 004f1919] [004f191d, 004f19c9] [004f19cd, 004f19e7] [004f19eb, 004f1a9f] [004f1aa3, 004f1adc] [004f1ae0, 004f1af6] [004f1afa, 004f1b1d] [004f1b21, 004f1b3d] [004f1b41, 004f1b66] [004f1b6a, 004f1b79] [004f1b7d, 004f1b92]]


undefined4 FUN_004f17b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 in_ECX;
  undefined **local_16c;
  undefined4 local_168;
  undefined1 local_164 [64];
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined **local_114;
  undefined4 local_110;
  undefined1 local_10c [64];
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_b8;
  undefined4 local_a8;
  uint local_a4;
  uint local_9c [4];
  undefined4 local_8c;
  uint local_88;
  undefined1 *local_80;
  uint local_7c;
  undefined4 local_6c;
  uint local_68;
  uint local_60 [4];
  undefined4 local_50;
  uint local_4c;
  undefined4 local_44;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_2c;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b8207a;
  local_10 = ExceptionList;
  local_44 = 0;
  local_168 = 0x18d;
  local_16c = CGoodsPool::vftable;
  local_124 = 0;
  local_120 = 0;
  local_11c = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  _memset(local_164,0,0x40);
  FUN_00423920();
  local_110 = 0x18d;
  local_114 = CGoodsPool::vftable;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  _memset(local_10c,0,0x40);
  FUN_00423920();
  local_80 = &stack0xfffffe7c;
  local_8._0_1_ = 4;
  FUN_004dd470(param_3,&local_114,&local_16c,in_ECX);
  FUN_004ef710(param_1,local_9c);
  local_8._0_1_ = 5;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  FUN_009a8ee0();
  local_8._0_1_ = 8;
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = local_7c & 0xffffff00;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = local_2c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 9;
  FUN_00988bb0(local_60,2);
  local_8._0_1_ = 10;
  iVar1 = FUN_00aae9af();
  local_8._0_1_ = 0xb;
  if (iVar1 != 0) {
    FUN_009a9ce0();
  }
  local_8._0_1_ = 10;
  FUN_009e6810();
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
  local_44 = 1;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = local_60[0] & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xc;
  FUN_009a8ee0();
  local_8._0_1_ = 0xd;
  iVar1 = FUN_00475500();
  FUN_009a9880(*(undefined8 *)(iVar1 + 0x6c));
  local_8._0_1_ = 0xe;
  FUN_00448aa0();
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = local_b8 & 0xffffff00;
  local_8._0_1_ = 0xf;
  FUN_009adb70();
  if (local_20 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_009adb70();
  if (local_3c != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (local_88 < 0x10) {
    local_88 = 0xf;
    local_8c = 0;
    local_9c[0] = local_9c[0] & 0xffffff00;
    if (local_cc != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    if (local_124 == 0) {
      ExceptionList = local_10;
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

