// FUN_0095c710 @ 0095c710 body=[[0095c710, 0095c7d5] [0095c7d9, 0095c7f7] [0095c7fb, 0095c8a9] [0095c8ad, 0095c8f6] [0095c8fa, 0095c91c]]


undefined4 FUN_0095c710(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined1 local_b4 [20];
  uint local_a0;
  undefined4 local_6c [5];
  uint local_58;
  uint local_50 [4];
  undefined4 local_40;
  uint local_3c;
  undefined8 local_34;
  undefined1 local_28 [4];
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  uVar1 = param_2;
  puStack_c = &LAB_00ba2ba3;
  local_10 = ExceptionList;
  local_8 = 0;
  local_14 = 0;
  local_cc = 0x95c748;
  ExceptionList = &local_10;
  FUN_008a8650();
  local_cc = 0x1400e35f00;
  local_a0 = (uint)param_1;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_d4 = CONCAT44(0x95c76d,(undefined4)local_d4);
  FUN_00409350();
  local_cc = CONCAT44(local_50,local_28);
  local_8 = 1;
  local_d4 = CONCAT44(0x95c781,(undefined4)local_d4);
  FUN_009a8ee0();
  local_8._0_1_ = 2;
  local_cc = CONCAT44(0x95c78c,(undefined4)local_cc);
  iVar2 = FUN_00475500();
  local_d4 = *(undefined8 *)(iVar2 + 0x6c);
  local_cc = *(undefined8 *)(iVar2 + 0x74);
  uStack_dc._4_4_ = 0x95c7ab;
  FUN_009a9880();
  local_14 = 1;
  local_8._0_1_ = 3;
  local_cc = CONCAT44(0x95c7be,(undefined4)local_cc);
  FUN_009adb70();
  if (local_24 != 0) {
    local_cc = CONCAT44(0x95c7cd,(undefined4)local_cc);
    FUN_009e6a80();
    local_cc = CONCAT44(local_24,&UNK_0095c7d6);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_8 = (uint)local_8._1_3_ << 8;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (0xf < local_3c) {
    local_cc = CONCAT44(local_50[0],&UNK_0095c7f8);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_cc = 0x100ded950;
  local_3c = 0xf;
  local_40 = 0;
  local_50[0] = local_50[0] & 0xffffff00;
  local_d4 = CONCAT44(0x95c816,(undefined4)local_d4);
  FUN_00448740();
  local_cc = CONCAT44(local_b4,&param_1);
  local_d4 = CONCAT44(0x95c832,(undefined4)local_d4);
  (**(code **)(*(int *)(DAT_00f20c04 + 0x7c) + 0x18))();
  uStack_dc._4_4_ =
       (((int)param_1 >> 0x1f) << 0xf | (uint)param_1 >> 0x11) << 0xf |
       ((uint)param_1 & 0x1ffff) >> 2;
  local_d4 = 0x1f40000;
  uStack_dc._0_4_ = (int)param_1 << 0x1e;
  uStack_dc = __alldiv();
  if (((int)((ulonglong)uStack_dc >> 0x20) < 1) && (uStack_dc < 0)) {
    local_34 = 0;
    uStack_dc = 0;
  }
  local_d4 = 0x100000002;
  param_1 = &uStack_dc;
  uVar3 = FUN_009c80d0(local_6c);
  local_d4 = 0xffffffff00000000;
  local_8 = 4;
  uStack_dc._0_4_ = 0x95c899;
  uStack_dc._4_4_ = uVar3;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_58) {
    local_d4 = CONCAT44(local_6c[0],&UNK_0095c8aa);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d4 = 0x100dee2cc;
  uStack_dc._4_4_ = 0x95c8bb;
  FUN_00448740();
  uStack_dc._4_4_ = DAT_00f20c04 + 0x7c;
  local_d4 = CONCAT44(local_b4,local_6c);
  uStack_dc._0_4_ = 0x95c8d4;
  uStack_dc._4_4_ = FUN_008aed50();
  local_d4 = 0xffffffff00000000;
  local_8 = 5;
  uStack_dc._0_4_ = 0x95c8e6;
  FUN_00448aa0();
  local_8 = local_8 & 0xffffff00;
  if (0xf < local_58) {
    local_d4 = CONCAT44(local_6c[0],&UNK_0095c8f7);
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  local_d4 = 0x100dee2cc;
  uStack_dc._4_4_ = 0x95c908;
  FUN_00448740();
  ExceptionList = local_10;
  return uVar1;
}

