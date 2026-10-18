// FUN_004f1ba0 @ 004f1ba0 body=[[004f1ba0, 004f1d17] [004f1d1b, 004f1e64] [004f1e68, 004f1e86] [004f1e8a, 004f1f3a] [004f1f3e, 004f1f77] [004f1f7b, 004f1f96] [004f1f9a, 004f1fbd] [004f1fc1, 004f1fdd] [004f1fe1, 004f2006] [004f200a, 004f2019] [004f201d, 004f2032]]


undefined4
FUN_004f1ba0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 local_168 [64];
  int local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined **local_118;
  undefined4 local_114;
  undefined1 local_110 [64];
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  uint local_c0;
  undefined4 local_b0;
  uint local_ac;
  uint local_a4;
  undefined4 local_94;
  uint local_90;
  uint local_88;
  undefined4 local_78;
  uint local_74;
  undefined4 local_6c;
  undefined1 local_68 [4];
  undefined1 *local_64;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_4c;
  undefined4 local_3c;
  uint local_38;
  int local_30;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b81fbd;
  local_10 = ExceptionList;
  local_6c = 0;
  local_128 = 0;
  local_124 = 0;
  local_120 = 0;
  local_8 = 1;
  ExceptionList = &local_10;
  _memset(local_168,0,0x40);
  FUN_00423920();
  local_114 = 0x18d;
  local_118 = CGoodsPool::vftable;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_8._0_1_ = 3;
  local_8._1_3_ = 0;
  _memset(local_110,0,0x40);
  FUN_00423920();
  local_8._0_1_ = 4;
  local_64 = &stack0xfffffe78;
  FUN_004dd470(param_3,&local_118);
  FUN_004ef710();
  local_8._0_1_ = 5;
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 6;
  FUN_009a8ee0();
  local_8._0_1_ = 8;
  uVar1 = (undefined1)local_8;
  local_8._0_1_ = 8;
  if (0xf < local_74) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_74 = 0xf;
  local_78 = 0;
  local_88 = local_88 & 0xffffff00;
  if (*(int *)(param_3 + 0x138) == 1) {
    local_1c = 0xf;
    local_20 = 0;
    local_30 = (uint)local_30._1_3_ << 8;
    FUN_00409350();
    local_8._0_1_ = 9;
    local_64 = param_5;
    FUN_004dde00(param_3,&stack0xfffffe78,&local_118,param_1 + 0x20,local_68,param_4,param_5);
    FUN_00988bb0();
    local_8._0_1_ = 10;
    iVar2 = FUN_00aae9af();
    local_8._0_1_ = 0xb;
    if (iVar2 != 0) {
      FUN_009a9ce0();
    }
    local_8 = CONCAT31(local_8._1_3_,10);
    FUN_009e6810();
  }
  else {
    if (*(int *)(param_3 + 0x138) != 0) goto LAB_004f1e8a;
    local_1c = 0xf;
    local_20 = 0;
    local_30 = (uint)local_30._1_3_ << 8;
    local_8._0_1_ = uVar1;
    FUN_00409350();
    local_8._0_1_ = 0xc;
    FUN_004de350();
    FUN_00988bb0();
    local_8 = CONCAT31(local_8._1_3_,0xd);
    FUN_009a9980();
  }
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8._0_1_ = 8;
  local_4c = local_4c & 0xffffff00;
  local_3c = 0;
  local_38 = 0xf;
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
LAB_004f1e8a:
  local_8._0_1_ = 8;
  FUN_00475500();
  FUN_009a9880();
  local_6c = 1;
  local_38 = 0xf;
  local_3c = 0;
  local_4c = local_4c & 0xffffff00;
  FUN_00409350();
  local_8._0_1_ = 0xe;
  FUN_009a8ee0();
  local_8._0_1_ = 0xf;
  FUN_00475500();
  FUN_009a9880();
  local_8._0_1_ = 0x10;
  FUN_00448aa0();
  if (0xf < local_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_ac = 0xf;
  local_b0 = 0;
  local_c0 = local_c0 & 0xffffff00;
  local_8._0_1_ = 0x11;
  FUN_009adb70();
  if (local_24 != 0) {
    FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = CONCAT31(local_8._1_3_,0x12);
  FUN_009adb70();
  if (local_5c == 0) {
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    if (0xf < local_90) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
    local_90 = 0xf;
    local_94 = 0;
    local_a4 = local_a4 & 0xffffff00;
    if (local_d0 == 0) {
      if (local_128 == 0) {
        ExceptionList = local_10;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_009e6a80();
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

